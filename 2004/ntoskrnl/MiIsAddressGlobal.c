/*
 * XREFs of MiIsAddressGlobal @ 0x14022CFB0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C4DE08);
  if ( byte_140C4F7C8[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 < qword_140C4F938 || a1 > qword_140C4E168 )
      return (unsigned __int8)word_140C4DE08;
    return HIBYTE(word_140C4DE08);
  }
  return 0LL;
}
