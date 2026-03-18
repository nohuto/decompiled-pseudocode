/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x1407FD634
 * Callers:
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140B05D00 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x1407FD674 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140C52A10[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
