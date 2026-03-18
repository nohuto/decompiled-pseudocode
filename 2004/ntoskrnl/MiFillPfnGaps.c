/*
 * XREFs of MiFillPfnGaps @ 0x140A6220C
 * Callers:
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x1403B9E4C (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x140A6225C (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140C4EBC8) )
    return 0LL;
  MiFillGapAddresses(v0, 0xFFFFFD7FFFFFFFFFuLL, (int)&qword_140C4EBC8);
  return 1LL;
}
