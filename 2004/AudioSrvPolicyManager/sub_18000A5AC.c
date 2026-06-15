/*
 * XREFs of sub_18000A5AC @ 0x18000A5AC
 * Callers:
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_18000A4EC @ 0x18000A4EC (sub_18000A4EC.c)
 * Callees:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 */

__int64 __fastcall sub_18000A5AC(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8)
{
  unsigned int v8; // ebx

  v8 = (unsigned __int16)a8 | 0x80070000;
  if ( a8 <= 0 )
    v8 = a8;
  sub_180003780(a1, a2, a3, 0LL, 0LL, a6, a7, v8, 0LL, 0);
  return v8;
}
