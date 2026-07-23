/*
 * XREFs of HalpFreePmcCounterSet @ 0x1404B9D70
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpFreePmcCounterSet(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rcx
  _QWORD *v6; // rax
  unsigned int v7; // esi
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  _GROUP_AFFINITY v15; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(unsigned int *)(a1 + 16);
  v15 = 0LL;
  *(_DWORD *)v15.Reserved = 0;
  LODWORD(v2) = KiProcessorIndexToNumberMappingTable[v2];
  *(_DWORD *)&v15.Group = (unsigned __int16)((unsigned int)v2 >> 6);
  v15.Reserved[2] = 0;
  v15.Mask = 1LL << (v2 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v15, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v6 != a1 )
    __fastfail(3u);
  *v6 = v5;
  v7 = 0;
  for ( *(_QWORD *)(v5 + 8) = v6; v7 < *(_DWORD *)(a1 + 20); ++v7 )
    (*((void (__fastcall **)(_QWORD, __int64))HalpProfileInterface[0] + 2))(
      *(unsigned int *)(32LL * v7 + a1 + 24),
      32LL * v7 + a1 + 28);
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
  return HalpMmAllocCtxFree(v13, a1);
}
