/*
 * XREFs of sub_1C0033A0C @ 0x1C0033A0C
 * Callers:
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00138BC @ 0x1C00138BC (sub_1C00138BC.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0035FC4 @ 0x1C0035FC4 (sub_1C0035FC4.c)
 *     sub_1C0038130 @ 0x1C0038130 (sub_1C0038130.c)
 */

__int64 __fastcall sub_1C0033A0C(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  __int16 v9; // bx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  int v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+8Ch] [rbp+14h]
  int v18; // [rsp+90h] [rbp+18h] BYREF

  v17 = HIDWORD(a2);
  v4 = 0;
  v16 = 0;
  sub_1C000F050(a1);
  sub_1C000FD80(a1, 512, 1885697579, a3, *(unsigned __int16 *)(a3 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v15 = *(unsigned __int16 *)(a3 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x57u, (__int64)&unk_1C0062098, v15, 0LL);
  }
  v8 = *(_DWORD *)(a3 + 400);
  if ( (sub_1C000A080(a1, *(_WORD *)(a3 + 4), (__int64)&v16, &v18) & 0xC0000000) != 0xC0000000 )
  {
    v9 = v16;
    if ( (v16 & 1) != 0 )
    {
      v10 = sub_1C0016B5C(a1, *(_WORD *)(a3 + 4), 0LL, 0x7350444Fu);
      v13 = v10;
      if ( v10 )
        v4 = sub_1C0038130(v12, v11, &v16, v10);
      *(_WORD *)(a3 + 420) = v9;
      sub_1C0035FC4(a1, a3, v13, 0x10000000, 0, v9, v4, 0);
      if ( v13 )
        sub_1C00171A0(a1, v13, 0LL, 0x7350444Fu);
      if ( (sub_1C00138BC(a1, *(_WORD *)(a3 + 4)) & 0xC0000000) != 0xC0000000 )
        return 5;
    }
  }
  return v8;
}
