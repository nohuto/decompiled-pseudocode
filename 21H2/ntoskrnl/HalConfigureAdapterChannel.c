/*
 * XREFs of HalConfigureAdapterChannel @ 0x1404CE210
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalConfigureAdapterChannel(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, __int64); // rax
  unsigned __int8 CurrentIrql; // bl
  char v10; // r14
  unsigned __int64 v11; // rcx
  _DWORD *SchedulerAssist; // r10
  KSPIN_LOCK *v13; // rsi
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf

  v3 = *(_QWORD *)(a1 + 360);
  v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v3 + 112);
  if ( !v7 )
    return 3221225474LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0;
  if ( CurrentIrql == 15 )
  {
    v13 = (KSPIN_LOCK *)(v3 + 168);
    v14 = v7(*(_QWORD *)(v3 + 64), *(unsigned int *)(a1 + 372), a2, a3);
  }
  else
  {
    v11 = *(unsigned __int8 *)(v3 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v11);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v11 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v11 + 1)) - 1) & 0xFFFFFFFC;
    }
    v13 = (KSPIN_LOCK *)(v3 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v10 = 1;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v3 + 112))(
            *(_QWORD *)(v3 + 64),
            *(unsigned int *)(a1 + 372),
            a2,
            a3);
  }
  v15 = v14;
  if ( v10 )
  {
    KxReleaseSpinLock(v13);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v15;
}
