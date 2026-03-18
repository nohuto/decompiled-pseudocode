/*
 * XREFs of HalpFreePmcCounterSet @ 0x14050B600
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpFreePmcCounterSet(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  _QWORD *v5; // rcx
  void **v6; // rax
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  struct _GROUP_AFFINITY v14; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v14 = 0LL;
  PreviousAffinity = 0LL;
  if ( a1 != (_QWORD *)&HalpSampleProfilingCounters )
  {
    v2 = *((unsigned int *)a1 + 4);
    *(_DWORD *)v14.Reserved = 0;
    v14.Reserved[2] = 0;
    LODWORD(v2) = KiProcessorIndexToNumberMappingTable[v2];
    *(_DWORD *)&v14.Group = (unsigned __int16)((unsigned int)v2 >> 6);
    v14.Mask = 1LL << (v2 & 0x3F);
    KeSetSystemGroupAffinityThread(&v14, &PreviousAffinity);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    v5 = (_QWORD *)*a1;
    v6 = (void **)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || *v6 != a1 )
      __fastfail(3u);
    *v6 = v5;
    v7 = 0LL;
    for ( v5[1] = v6; (unsigned int)v7 < *((_DWORD *)a1 + 5); v7 = (unsigned int)(v7 + 1) )
      ((void (__fastcall *)(_QWORD, _QWORD *))HalpProfileInterface[2])(LODWORD(a1[5 * v7 + 5]), &a1[5 * v7 + 6]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    HalpMmAllocCtxFree(v13, (__int64)a1);
  }
}
