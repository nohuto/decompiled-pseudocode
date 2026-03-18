/*
 * XREFs of Usbh_PIND_SetBlink_Action @ 0x1C002F4AC
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C002EC68 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhLockPindicator @ 0x1C002EF2C (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C002F064 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C002F0A8 (UsbhSetPortIndicator.c)
 *     UsbhUnlockPindicator @ 0x1C002F238 (UsbhUnlockPindicator.c)
 */

LONG __fastcall Usbh_PIND_SetBlink_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  int v8; // r8d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 4);
  Log(a1, 0x8000, 1718383409, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 > 0 )
  {
    if ( v7 <= 2 )
    {
      v8 = v7;
      goto LABEL_8;
    }
    if ( v7 == 3 )
    {
      UsbhEnableTimerObject(
        *(_QWORD *)(a3 + 8),
        a2 + 2744,
        *(_DWORD *)(a2 + 2832),
        *(unsigned __int16 *)(a2 + 4),
        a3,
        0x646E6950u);
      UsbhSetPindicatorState(a3, a2, 1);
      UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 768);
    }
    else if ( v7 == 4 )
    {
      v8 = 4;
LABEL_8:
      UsbhSetPindicatorState(a3, a2, v8);
    }
  }
  return UsbhUnlockPindicator(a3);
}
