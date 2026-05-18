/*
 * XREFs of sub_180067288 @ 0x180067288
 * Callers:
 *     sub_1800668C4 @ 0x1800668C4 (sub_1800668C4.c)
 *     sub_18006698C @ 0x18006698C (sub_18006698C.c)
 *     sub_180066A54 @ 0x180066A54 (sub_180066A54.c)
 *     sub_180066B2C @ 0x180066B2C (sub_180066B2C.c)
 * Callees:
 *     sub_1800672C0 @ 0x1800672C0 (sub_1800672C0.c)
 */

char __fastcall sub_180067288(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_1800672C0(a1, a2) || (unsigned __int8)sub_1800672C0(a1, 0LL) )
    return 1;
  return v3;
}
