/*
 * XREFs of sub_1C004A020 @ 0x1C004A020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 */

__int64 __fastcall sub_1C004A020(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]

  v6 = a3;
  v8 = -1073741811;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v12 = a2;
    sub_1C002E354((__int64)DeviceObject->DeviceExtension, a2, 1u, 0xEu, (__int64)&unk_1C0063950, v12, a3);
  }
  sub_1C000FD80(a1, 64, 1835365425, a5, v6);
  *a4 = 0;
  if ( (unsigned int)v6 >= 0x18 )
  {
    v9 = sub_1C0016CA0(a1, *(_WORD *)(a5 + 4));
    if ( v9 )
    {
      v8 = 0;
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v9 + 432);
      *a4 = 24;
    }
  }
  else
  {
    v8 = -1073741789;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v11) = v8;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C0063950, v11);
  }
  return v8;
}
