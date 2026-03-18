/*
 * XREFs of sub_1C005A1A8 @ 0x1C005A1A8
 * Callers:
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 * Callees:
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0013558 @ 0x1C0013558 (sub_1C0013558.c)
 *     sub_1C001CC84 @ 0x1C001CC84 (sub_1C001CC84.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0059AEC @ 0x1C0059AEC (sub_1C0059AEC.c)
 */

__int64 __fastcall sub_1C005A1A8(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edx
  int v12; // eax

  v6 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)&unk_1C0062110);
  v7 = sub_1C000F050((__int64)a1);
  v8 = a2 - 1;
  if ( !v8 )
  {
    v11 = 3;
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    sub_1C001CC84(a3, 5);
    sub_1C0013558(a1, a3);
    return v6;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 3 )
    {
      sub_1C001CC84(a3, 3);
      return (unsigned int)-1073741823;
    }
    sub_1C001CC84(a3, 3);
    KeWaitForSingleObject(v7 + 846, Executive, 0, 0, 0LL);
    v11 = sub_1C0059AEC(a3, 6);
    v12 = 0;
    if ( v11 == 6 )
      v12 = -1073741823;
    v6 = v12;
LABEL_16:
    sub_1C001CC84(a3, v11);
    return v6;
  }
  sub_1C001CC84(a3, 1);
  if ( !*((_BYTE *)v7 + 3416) )
    sub_1C000C0F0((__int64)a1, a3, 0);
  return v6;
}
