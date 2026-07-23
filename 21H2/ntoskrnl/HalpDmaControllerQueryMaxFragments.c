/*
 * XREFs of HalpDmaControllerQueryMaxFragments @ 0x1404CECF4
 * Callers:
 *     HalMapTransferEx @ 0x14039F830 (HalMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpDmaControllerQueryMaxFragments(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v8; // rcx
  _DWORD *SchedulerAssist; // r10
  KSPIN_LOCK *v10; // rsi
  unsigned int v11; // edi
  unsigned __int8 v12; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v10 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v8 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v8 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v8 + 1)) - 1) & 0xFFFFFFFC;
    }
    v10 = (KSPIN_LOCK *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v6 = 1;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 96))(
          *(_QWORD *)(a1 + 64),
          *(unsigned int *)(a2 + 372),
          a3);
  if ( v6 )
  {
    KxReleaseSpinLock(v10);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v11;
}
