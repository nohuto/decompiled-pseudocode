/*
 * XREFs of UsbhLogSignalDriverResetEvent @ 0x1C00180B8
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C0002648 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000B0E0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C00131B0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0017FEC (UsbhSignalDriverResetEvent.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00336FC (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 */

__int64 __fastcall UsbhLogSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // bl

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  Log(a1, 16, 1685213779, *(int *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  KeSetEvent((PRKEVENT)(a2 + 824), 0, 0);
  KeReleaseSpinLock(v4, v5);
  return 1LL;
}
