/*
 * XREFs of UsbhFdoPower_PowerFailureEntry @ 0x1C003BC30
 * Callers:
 *     UsbhFdoSxIoComplete_Action @ 0x1C000DFA0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C000E210 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C000E620 (UsbhFdoD0PoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     UsbhReleasePowerContext @ 0x1C0018750 (UsbhReleasePowerContext.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001B180 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C001B724 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhSetFdoPowerState @ 0x1C001CE0C (UsbhSetFdoPowerState.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C0036380 (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

void __fastcall UsbhFdoPower_PowerFailureEntry(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbx
  bool v8; // al
  int v9; // r8d
  int v10; // [rsp+48h] [rbp-10h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = a2;
  v5 = a3;
  LOBYTE(v10) = 0;
  v7 = FdoExt(a1);
  UsbhException(a1, 0, 85, (int)&v11, 4, v5, 0, usbfile_fdopwr_c, 1027, v10);
  v7[315] = v5;
  v8 = Usb_Disconnected(v5);
  v9 = 213;
  if ( !v8 )
    v9 = 212;
  UsbhSetFdoPowerState(a1, v5, v9, v11);
  Log(a1, 16, 1934645025, v5, 0LL);
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhReleaseFdoPwrLock(a1, *(_QWORD *)(a4 + 72));
  UsbhBusIoInvalidateDeviceRelations(a1, *(_QWORD *)(a4 + 72));
  UsbhReleasePowerContext(a1, a4);
  UsbhDisarmHubForWakeDetect(a1);
}
