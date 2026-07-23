/*
 * XREFs of HalpDmaUseEmergencyLogicalAddressResources @ 0x1404B87E8
 * Callers:
 *     HalpDmaAllocateAndPremapLa @ 0x1404B6FB0 (HalpDmaAllocateAndPremapLa.c)
 *     HalpConstructScatterGatherListThin @ 0x1404CBA58 (HalpConstructScatterGatherListThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaUseEmergencyLogicalAddressResources(__int64 a1, _QWORD *a2, char a3)
{
  KSPIN_LOCK *v3; // r14
  unsigned __int64 v7; // rsi
  char v8; // bp
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v3 = (KSPIN_LOCK *)(a1 + 560);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 560));
  if ( *(_BYTE *)(a1 + 584) )
  {
    v8 = 0;
    if ( a3 )
    {
      v9 = *(_QWORD **)(a1 + 576);
      if ( *v9 != a1 + 568 )
        __fastfail(3u);
      *a2 = a1 + 568;
      a2[1] = v9;
      *v9 = a2;
      *(_QWORD *)(a1 + 576) = a2;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 584) = 1;
    v8 = 1;
  }
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v8;
}
