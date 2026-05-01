/*
 * XREFs of sub_180065E18 @ 0x180065E18
 * Callers:
 *     sub_1800667D4 @ 0x1800667D4 (sub_1800667D4.c)
 * Callees:
 *     sub_180064E68 @ 0x180064E68 (sub_180064E68.c)
 *     sub_180065D0C @ 0x180065D0C (sub_180065D0C.c)
 */

__int64 __fastcall sub_180065E18(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  int v12; // [rsp+20h] [rbp-38h]

  v8 = sub_180064E68(a1, a2, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4, v12, a6);
  v9 = v8;
  if ( v8 > 0 )
    v10 = (unsigned __int16)v8 | 0x80070000;
  else
    v10 = v8;
  sub_180065D0C(a1, a2, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", 0LL, 0LL, a6, 3, v10);
  return v9;
}
