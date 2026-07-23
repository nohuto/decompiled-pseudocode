/*
 * XREFs of HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x1404B83A0
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C6100 (HalCancelAdapterChannel.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404CAF20 (HalCancelAdapterChannelThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaRemoveFromEmergencyLogicalAddressQueue(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  char v4; // si
  _QWORD **v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD **v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  _QWORD *v15; // rdx

  v2 = (KSPIN_LOCK *)(a1 + 560);
  v4 = 0;
  v5 = (_QWORD **)(a1 + 568);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 560));
  v7 = *v5;
  if ( *v5 != v5 )
  {
    while ( 1 )
    {
      v8 = (_QWORD **)*v7;
      if ( v7 == a2 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v8 == v5 )
        goto LABEL_4;
    }
    v4 = 1;
    v15 = (_QWORD *)v7[1];
    if ( v8[1] != v7 || (_QWORD *)*v15 != v7 )
      __fastfail(3u);
    *v15 = v8;
    v8[1] = v15;
  }
LABEL_4:
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v4;
}
