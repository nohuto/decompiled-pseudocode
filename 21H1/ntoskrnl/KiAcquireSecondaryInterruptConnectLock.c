/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x14051346C
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x140373E7C (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x140513594 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14051374C (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140513A48 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140513D54 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiInterruptDispatchCommon @ 0x14051B928 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
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
