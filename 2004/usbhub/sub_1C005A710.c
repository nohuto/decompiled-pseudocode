/*
 * XREFs of sub_1C005A710 @ 0x1C005A710
 * Callers:
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C005A580 @ 0x1C005A580 (sub_1C005A580.c)
 *     sub_1C005A640 @ 0x1C005A640 (sub_1C005A640.c)
 *     sub_1C005A9D0 @ 0x1C005A9D0 (sub_1C005A9D0.c)
 *     sub_1C005B184 @ 0x1C005B184 (sub_1C005B184.c)
 */

__int64 __fastcall sub_1C005A710(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rsi
  PDEVICE_OBJECT v7; // rcx
  _DWORD *v8; // rdi
  int v9; // ebx
  bool v10; // zf
  unsigned int v11; // ebx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v6 = sub_1C0011220(a2);
  v8 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v7 = DeviceObject;
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x1Fu, (__int64)&unk_1C00654F0);
  }
  sub_1C005A9D0(v7, v8 + 1294);
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 0LL;
    if ( !v6[661] )
    {
      v10 = v8[1296] == 0;
      goto LABEL_10;
    }
  }
  else if ( !v6[660] )
  {
    v10 = v8[1295] == 0;
LABEL_10:
    if ( v10 )
      return 0LL;
  }
  v11 = *((unsigned __int16 *)v6 + 714);
  Handle = 0LL;
  if ( (int)sub_1C005B184(a1, &Handle) >= 0 )
  {
    sub_1C005A640(v12, (const WCHAR *)Handle, v11);
    ZwClose(Handle);
  }
  sub_1C005A580(v12, a2);
  return 0LL;
}
