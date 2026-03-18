/*
 * XREFs of MiUserPdeOrAbove @ 0x14033A900
 * Callers:
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiMapPagesToZero @ 0x14023D1E0 (MiMapPagesToZero.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUserPdeOrAbove(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int i; // r9d

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( i = 1; i < 4; ++i )
  {
    if ( a1 <= v2 && a1 >= v1 )
      return 1LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  return 0LL;
}
