/*
 * XREFs of sub_180003198 @ 0x180003198
 * Callers:
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 * Callees:
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 *     sub_18000307C @ 0x18000307C (sub_18000307C.c)
 */

__int64 __fastcall sub_180003198(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int LastError; // eax
  unsigned int v10; // ebx

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_18000307C(a1, a2, a3, 0LL, 0LL, a6, 2, -2147024228);
    LastError = 668;
  }
  v10 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v10 = LastError;
  sub_180002F40(a1, a2, a3, 0LL, 0LL, a6, 1, v10, 0LL, 0);
  return v10;
}
