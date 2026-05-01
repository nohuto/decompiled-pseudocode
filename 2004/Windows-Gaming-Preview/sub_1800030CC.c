/*
 * XREFs of sub_1800030CC @ 0x1800030CC
 * Callers:
 *     sub_1800032C0 @ 0x1800032C0 (sub_1800032C0.c)
 * Callees:
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 *     sub_18000307C @ 0x18000307C (sub_18000307C.c)
 */

__int64 __fastcall sub_1800030CC(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int LastError; // ebx
  unsigned int v9; // ecx

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_18000307C(
      a1,
      a2,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      0LL,
      0LL,
      a6,
      2,
      -2147024228);
    LastError = 668;
  }
  v9 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v9 = LastError;
  sub_180002F40(
    a1,
    a2,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    0LL,
    0LL,
    a6,
    3,
    v9,
    0LL,
    0);
  return (unsigned int)LastError;
}
