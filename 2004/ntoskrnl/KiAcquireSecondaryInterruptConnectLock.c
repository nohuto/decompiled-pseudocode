/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x140513ABC
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x140374C8C (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x140513BE4 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140513D9C (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140514098 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1405143A4 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiInterruptDispatchCommon @ 0x14051BF78 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock(SpinLock);
}
