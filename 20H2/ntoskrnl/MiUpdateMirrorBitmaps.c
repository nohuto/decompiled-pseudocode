/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140772C24
 * Callers:
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140A53120 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x140772C64 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140C4E590[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
