/*
 * XREFs of _NLS_DOWNCASE@4 @ 0x4B2AABCB
 * Callers:
 *     _RtlDowncaseUnicodeString@12 @ 0x4B2AAB30 (_RtlDowncaseUnicodeString@12.c)
 *     _RtlFindCharInUnicodeString@16 @ 0x4B2CAA20 (_RtlFindCharInUnicodeString@16.c)
 *     _RtlDowncaseUnicodeChar@4 @ 0x4B34DB60 (_RtlDowncaseUnicodeChar@4.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_DOWNCASE(unsigned __int16 a1)
{
  if ( a1 < 0x41u )
    return a1;
  if ( a1 <= 0x5Au )
    return a1 + 32;
  if ( !Nls844UnicodeLowercaseTable || a1 < 0xC0u )
    return a1;
  return a1
       + *(_WORD *)(Nls844UnicodeLowercaseTable
                  + 2
                  * ((a1 & 0xF)
                   + *(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                         + 2
                                         * (((unsigned __int8)a1 >> 4)
                                          + *(unsigned __int16 *)(Nls844UnicodeLowercaseTable + 2 * HIBYTE(a1))))));
}
