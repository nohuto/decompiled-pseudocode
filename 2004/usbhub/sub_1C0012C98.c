/*
 * XREFs of sub_1C0012C98 @ 0x1C0012C98
 * Callers:
 *     sub_1C00101B0 @ 0x1C00101B0 (sub_1C00101B0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

NTSTATUS __fastcall sub_1C0012C98(__int64 a1, __int64 a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // rbp
  _DWORD *v7; // rax
  __int64 CurrentStackLocation; // rsi
  _DWORD *v9; // r11
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r11

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 30, (__int64)&unk_1C0062DE8);
  v6 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  sub_1C000FD80(a1, 16, 1885291568, a2, (__int64)a3);
  v7 = sub_1C000F050(a1);
  CurrentStackLocation = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  v10 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v10 <= 1 )
  {
    sub_1C000FD80(a1, 16, 1347374641, *(_QWORD *)&v9[2 * v10 + 210], (__int64)a3);
    sub_1C000FD80(a1, 16, 1347374642, *(_QWORD *)(v12 + 8 * v11 + 856), CurrentStackLocation);
    *(_QWORD *)(v14 + 8 * v13 + 840) = 0LL;
    *(_QWORD *)(v14 + 8 * v13 + 856) = 0LL;
    *(_DWORD *)(v14 + 4 * v13 + 872) = 4559;
    PoStartNextPowerIrp(a3);
  }
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v6[151], a3);
}
