/*
 * XREFs of sub_18000EB18 @ 0x18000EB18
 * Callers:
 *     sub_18000C330 @ 0x18000C330 (sub_18000C330.c)
 *     sub_18001A4D0 @ 0x18001A4D0 (sub_18001A4D0.c)
 * Callees:
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18000EBA8 @ 0x18000EBA8 (sub_18000EBA8.c)
 */

__int64 __fastcall sub_18000EB18(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  signed int v4; // eax
  signed int v5; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = a2;
  v3 = 0LL;
  v8 = 0LL;
  LOBYTE(a2) = 1;
  v4 = sub_18000EBA8(a1, a2, &v8, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v3 = v8;
    v5 = 0;
  }
  else
  {
    sub_18000DD78(retaddr, 98, (__int64)&unk_18013FEA4, v4);
  }
  if ( v5 >= 0 )
  {
    *v2 = 4 * v3;
    return 0LL;
  }
  else
  {
    sub_18000DD78(retaddr, 107, (__int64)&unk_18013FEA4, v5);
    return (unsigned int)v5;
  }
}
