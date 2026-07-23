/*
 * XREFs of ExCreatePoolTagTable @ 0x1407A07B0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 */

void *__fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *IndependentPages; // rax
  void *v4; // rbx

  v2 = a1;
  if ( (unsigned __int64)PoolTrackTableSize >= 0x492492492492491LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPagesEx(56 * (PoolTrackTableSize + 1), a2, 0LL, 0LL);
  v4 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, 56 * PoolTrackTableSize);
    *(&ExPoolTagTables + v2) = v4;
  }
  return v4;
}
