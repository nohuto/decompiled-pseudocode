/*
 * XREFs of NLS_DOWNCASE @ 0x140311630
 * Callers:
 *     RtlDowncaseUnicodeString @ 0x1406BC640 (RtlDowncaseUnicodeString.c)
 *     RtlDowncaseUnicodeChar @ 0x140912330 (RtlDowncaseUnicodeChar.c)
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
                  + 2LL
                  * ((a1 & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                       + 2LL
                                                       * (((unsigned __int8)a1 >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                                                            + 2
                                                                                            * ((unsigned __int64)a1 >> 8))))));
}
