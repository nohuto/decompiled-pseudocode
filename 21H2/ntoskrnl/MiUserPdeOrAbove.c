/*
 * XREFs of MiUserPdeOrAbove @ 0x14023261C
 * Callers:
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiMapPagesToZero @ 0x1402C5D00 (MiMapPagesToZero.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 *     MiMapArbitraryPage @ 0x1403128B0 (MiMapArbitraryPage.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUserPdeOrAbove(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  int v3; // r9d

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  v3 = 1;
  while ( a1 > v2 || a1 < v1 )
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (unsigned int)++v3 >= 4 )
      return 0LL;
  }
  return 1LL;
}
