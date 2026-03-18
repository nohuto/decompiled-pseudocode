/*
 * XREFs of MiIsAddressGlobal @ 0x1402A2260
 * Callers:
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C4DE88);
  if ( byte_140C4F848[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 < qword_140C4F9B8 || a1 > qword_140C4E1E8 )
      return (unsigned __int8)word_140C4DE88;
    return HIBYTE(word_140C4DE88);
  }
  return 0LL;
}
