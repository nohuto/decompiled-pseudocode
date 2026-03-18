/*
 * XREFs of MiFreePageChain @ 0x140341758
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140533E80 (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreePageChain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v3 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
      result = MiReleaseFreshPage(a1, a2, a3);
      if ( v3 == 0xFFFFFFFFFLL )
        break;
      result = 0xFFFFFA8000000000uLL;
      a1 = 48 * v3 - 0x58000000000LL;
    }
    while ( 48 * v3 != 0x58000000000LL );
  }
  return result;
}
