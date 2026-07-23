/*
 * XREFs of MiSplitMirrorBitMap @ 0x140777890
 * Callers:
 *     MiActOnMirrorBitmap @ 0x1407777F4 (MiActOnMirrorBitmap.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1402322A0 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitMirrorBitMap(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rdi

  v3 = a1[1];
  if ( !v3 )
    return 1LL;
  v5 = a2 + a3;
  if ( (unsigned int)MiSplitBitmapPages(9, v3 + (a2 >> 3), 8 * (((a2 + a3 + 7) >> 3) - (a2 >> 3))) )
  {
    if ( v5 > *a1 )
      *a1 = v5;
    return 1LL;
  }
  return 0LL;
}
