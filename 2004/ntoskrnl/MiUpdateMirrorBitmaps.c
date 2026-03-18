/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140764614
 * Callers:
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140A52AA0 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x140764654 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140C4E510[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
