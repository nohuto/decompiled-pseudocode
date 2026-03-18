/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x14075F454
 * Callers:
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140A4CDA0 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x14075F494 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140C4E650[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
