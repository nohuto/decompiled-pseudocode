/*
 * XREFs of MxGetPhase0Mapping @ 0x140A58438
 * Callers:
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MxCopyPage @ 0x140A578CC (MxCopyPage.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MxGetPhase0Mapping()
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx

  if ( MiHalScratchPte )
    return MiHalScratchPte << 25 >> 16;
  v1 = (((unsigned __int64)MiLowHalVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( (*(_BYTE *)v1 & 1) == 0 )
  {
LABEL_9:
    v1 += 8LL;
    if ( (v1 & 0xFFF) == 0 )
      return 0LL;
  }
  v2 = (__int64)(v1 << 25) >> 16;
  while ( MI_READ_PTE_LOCK_FREE(v2) )
  {
    v2 += 8LL;
    if ( (v2 & 0xFFF) == 0 )
      goto LABEL_9;
  }
  MiHalScratchPte = v2;
  return (__int64)(v2 << 25) >> 16;
}
