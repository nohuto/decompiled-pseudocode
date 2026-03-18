/*
 * XREFs of UsbhReleaseEnumBusLockEx @ 0x1C00029EC
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C00023E0 (UsbhCancelEnumeration.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00195F0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhPCE_Close @ 0x1C0033FC4 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1C00342BC (UsbhPCE_HW_Stop.c)
 *     UsbhDropDevice @ 0x1C004C7A4 (UsbhDropDevice.c)
 *     UsbhHardErrorInvalidData @ 0x1C004CB90 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004CC80 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004CDC0 (UsbhPortConnect.c)
 *     UsbhPortRecycle @ 0x1C004D520 (UsbhPortRecycle.c)
 *     UsbhReset1Debounce @ 0x1C004D8C0 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x1C004E0B0 (UsbhReset2CycleDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E668 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhReleaseEnumBusLockEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  Log(a1, 4, 1967281491, *(_DWORD *)(v6 + 3072), v3);
  if ( *(_QWORD *)(v6 + 4400) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3064));
    if ( *(_DWORD *)(v6 + 3072) == (_DWORD)v3 && *(_QWORD *)(v6 + 3080) == a2 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v7);
      UsbhDecHubBusy(a1, v8, *(_QWORD *)(v6 + 3088));
      *(_QWORD *)(v6 + 3088) = 0LL;
      *(_DWORD *)(v6 + 3072) = 0;
      *(_QWORD *)(v6 + 3080) = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 3096));
      (*(void (__fastcall **)(_QWORD))(v6 + 4400))(*(_QWORD *)(v6 + 4232));
    }
    else
    {
      Log(a1, 4, 1967281016, *(_DWORD *)(v6 + 3072), *(_QWORD *)(v6 + 3080));
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v9);
    }
  }
}
