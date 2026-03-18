/*
 * XREFs of sub_1C001820C @ 0x1C001820C
 * Callers:
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C0018660 @ 0x1C0018660 (sub_1C0018660.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018160 @ 0x1C0018160 (sub_1C0018160.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C001820C(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  _DWORD *v6; // rbp
  _DWORD *v7; // rdi
  POWER_STATE v8; // ebx
  __int64 v9; // r8
  unsigned int v10; // edx
  int v12; // edx

  v6 = sub_1C0011220((__int64)a2);
  v7 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  v8.SystemState = *(SYSTEM_POWER_STATE *)(*(_QWORD *)(a3 + 184) + 24LL);
  sub_1C00176F8(*(_QWORD *)(a1 + 8), a1, 126, 1852401232);
  sub_1C0011220((__int64)a2);
  sub_1C0017660(a1, (__int64)a2, v9, 1, 8);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 16, 1884769123, a1, (__int64)a2);
  v6[596] = v7[1054];
  sub_1C0018364(*(_QWORD *)(a1 + 8), a1);
  if ( (v6[355] & 0x100) != 0 )
  {
    v10 = sub_1C0018160(*(_QWORD *)(a1 + 8), (__int64)a2);
    if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4(v10) )
      sub_1C004A608(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v6 + 714), 49, 0, 0, v12, 0, (__int64)aPdopwrC, 842, 0);
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 12, (__int64)&unk_1C0062DF8, *((_WORD *)v6 + 714));
  sub_1C0010D74(a2, v8);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 13, (__int64)&unk_1C0062DF8, *((_WORD *)v6 + 714));
  return 0LL;
}
