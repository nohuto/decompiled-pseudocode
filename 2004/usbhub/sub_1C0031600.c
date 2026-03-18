/*
 * XREFs of sub_1C0031600 @ 0x1C0031600
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 * Callees:
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003A78C @ 0x1C003A78C (sub_1C003A78C.c)
 */

__int64 __fastcall sub_1C0031600(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = a3;
  sub_1C000F050((__int64)a1);
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  sub_1C000FD80((__int64)a1, 2048, 1651725140, a2, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C0062C48, v3);
  if ( (int)v3 > 6 )
  {
    if ( (int)v3 <= 8 )
      goto LABEL_17;
    if ( (_DWORD)v3 != 9 )
    {
      if ( (_DWORD)v3 == 12 )
      {
        sub_1C003A78C(*(_QWORD *)(a2 + 8), a2);
        v7 = 2;
        return sub_1C0003300(a1, a2, v7);
      }
      goto LABEL_17;
    }
LABEL_11:
    v7 = 4;
    return sub_1C0003300(a1, a2, v7);
  }
  if ( (_DWORD)v3 == 6 )
    goto LABEL_17;
  v7 = 2;
  v8 = v3 - 2;
  if ( !v8 )
  {
    v7 = 6;
    return sub_1C0003300(a1, a2, v7);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v7 = 3;
        return sub_1C0003300(a1, a2, v7);
      }
LABEL_17:
      v7 = v6;
      return sub_1C0003300(a1, a2, v7);
    }
    goto LABEL_11;
  }
  return sub_1C0003300(a1, a2, v7);
}
