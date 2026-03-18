/*
 * XREFs of UsbhAssertBusLock @ 0x1C00361E8
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C00023E0 (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C004C7A4 (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004CC80 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C004D8C0 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C004DA50 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C004DB30 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004DC20 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C004DDA0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004DFB0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C004E0B0 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C004E120 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004E210 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C004E390 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004E570 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
