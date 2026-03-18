/*
 * XREFs of MiUserPdeOrAbove @ 0x1402FD5C0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiMapPagesToZero @ 0x140296210 (MiMapPagesToZero.c)
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
