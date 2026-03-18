/*
 * XREFs of sub_1C0059910 @ 0x1C0059910
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C00312A0 @ 0x1C00312A0 (sub_1C00312A0.c)
 *     sub_1C004C314 @ 0x1C004C314 (sub_1C004C314.c)
 *     sub_1C0059E9C @ 0x1C0059E9C (sub_1C0059E9C.c)
 */

__int64 __fastcall sub_1C0059910(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  sub_1C000FD80(a1, 0x10000, 1936937844, 0LL, a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x12u, (__int64)&unk_1C0062110);
  v4 = sub_1C000F050(*(_QWORD *)(a2 + 8));
  *((_BYTE *)v4 + 3409) = 1;
  if ( v4[820] == 5 )
    sub_1C0059E9C(a1, 5LL);
  if ( (int)sub_1C004C314(a1, &v7) >= 0 )
  {
    v5 = 6LL;
    if ( v7 )
      v5 = 1LL;
    sub_1C0059E9C(a1, v5);
  }
  sub_1C00312A0(a1, a2);
  *((_BYTE *)v4 + 3408) = 1;
  sub_1C0011C40(*(_QWORD *)(a2 + 8), (__int64)(v4 + 800), 2000, 0, a2, 0x77485353u);
  return 0LL;
}
