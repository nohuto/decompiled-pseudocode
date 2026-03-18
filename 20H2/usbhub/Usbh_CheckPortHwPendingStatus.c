/*
 * XREFs of Usbh_CheckPortHwPendingStatus @ 0x1C0001C3C
 * Callers:
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C00015A0 (UsbhSignalResumeEvent.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSignalSuspendEvent @ 0x1C0034E5C (UsbhSignalSuspendEvent.c)
 */

void __fastcall Usbh_CheckPortHwPendingStatus(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 4944);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207794, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSuspendEvent(a1, a2);
  }
  else if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207793, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalResumeEvent(a1, a2);
  }
  else
  {
    KeReleaseSpinLock(v4, v5);
  }
}
