/*
 * XREFs of UsbhFreeTimerObject @ 0x1C003B69C
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C0031080 (UsbhBusPnpStop_Action.c)
 *     UsbhBusPnpStart @ 0x1C0036430 (UsbhBusPnpStart.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 */

void __fastcall UsbhFreeTimerObject(__int64 a1, __int64 *a2)
{
  KSPIN_LOCK *v4; // rdi
  void *v5; // r14
  KIRQL v6; // al
  KIRQL v7; // bl

  v4 = (KSPIN_LOCK *)FdoExt(a1);
  Log(a1, 0x2000, 1718773076, (__int64)a2, *a2);
  v5 = (void *)*a2;
  if ( *a2 )
  {
    UsbhDisableTimerObject(a1, *a2);
    v6 = KeAcquireSpinLockRaiseToDpc(v4 + 466);
    *a2 = 0LL;
    v7 = v6;
    Log(a1, 0x2000, 1718768689, (__int64)v5, 0LL);
    ExFreePoolWithTag(v5, 0);
    KeReleaseSpinLock(v4 + 466, v7);
  }
}
