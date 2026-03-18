/*
 * XREFs of MiFreePageChain @ 0x14023C1C4
 * Callers:
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140537EA0 (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405504A4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreePageChain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v2 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
      result = MiReleaseFreshPage(a1, a2);
      if ( v2 == 0xFFFFFFFFFLL )
        break;
      result = 0xFFFFFA8000000000uLL;
      a1 = 48 * v2 - 0x58000000000LL;
    }
    while ( 48 * v2 != 0x58000000000LL );
  }
  return result;
}
