/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x1C003C33C
 * Callers:
 *     UsbhFdoSxIoComplete_Action @ 0x1C000DFA0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C000E620 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00101B0 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoPower_QueryPower @ 0x1C00136E0 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C0016028 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoPower_SetPower @ 0x1C001AA90 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C001C210 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Fdo(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // rax
  __int64 CurrentStackLocation; // rsi
  _DWORD *v8; // r11
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r11

  v6 = FdoExt(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  v9 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v9 <= 1 )
  {
    Log(a1, 16, 1347374641, *(_QWORD *)&v8[2 * v9 + 210], (__int64)a2);
    Log(a1, 16, 1347374642, *(_QWORD *)(v11 + 8 * v10 + 856), CurrentStackLocation);
    *(_QWORD *)(v13 + 8 * v12 + 840) = 0LL;
    *(_QWORD *)(v13 + 8 * v12 + 856) = 0LL;
    *(_DWORD *)(v13 + 4 * v12 + 872) = a3;
    PoStartNextPowerIrp(a2);
  }
}
