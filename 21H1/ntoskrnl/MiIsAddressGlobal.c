/*
 * XREFs of MiIsAddressGlobal @ 0x140286000
 * Callers:
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C4DF48);
  if ( byte_140C4F908[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 < qword_140C4FA78 || a1 > qword_140C4E2A8 )
      return (unsigned __int8)word_140C4DF48;
    return HIBYTE(word_140C4DF48);
  }
  return 0LL;
}
