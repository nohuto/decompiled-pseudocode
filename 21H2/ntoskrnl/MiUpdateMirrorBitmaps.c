/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x1407777B4
 * Callers:
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140A55728 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x1407777F4 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140C4E750[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
