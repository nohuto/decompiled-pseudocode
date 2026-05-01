/*
 * XREFs of sub_180065EA8 @ 0x180065EA8
 * Callers:
 *     sub_180065FD4 @ 0x180065FD4 (sub_180065FD4.c)
 * Callees:
 *     sub_180064E68 @ 0x180064E68 (sub_180064E68.c)
 *     sub_180065D0C @ 0x180065D0C (sub_180065D0C.c)
 */

__int64 __fastcall sub_180065EA8(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-38h]

  v8 = sub_180064E68(a1, a2, (int)"wil", a4, v11, a6);
  v9 = v8;
  if ( v8 > 0 )
    v9 = (unsigned __int16)v8 | 0x80070000;
  sub_180065D0C(a1, a2, (__int64)"wil", 0LL, 0LL, a6, 1, v9);
  return v9;
}
