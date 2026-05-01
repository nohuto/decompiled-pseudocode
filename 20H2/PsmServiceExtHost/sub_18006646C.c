/*
 * XREFs of sub_18006646C @ 0x18006646C
 * Callers:
 *     sub_180064258 @ 0x180064258 (sub_180064258.c)
 * Callees:
 *     sub_1800663CC @ 0x1800663CC (sub_1800663CC.c)
 */

void __fastcall sub_18006646C(__int64 a1)
{
  if ( a1 )
  {
    if ( *(&xmmword_1800B4020 + 1) )
      sub_1800663CC((LPCRITICAL_SECTION)*(&xmmword_1800B4020 + 1) + 5, (PSRWLOCK)*(&xmmword_1800B4020 + 1), a1);
  }
}
