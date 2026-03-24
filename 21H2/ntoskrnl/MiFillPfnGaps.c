/*
 * XREFs of MiFillPfnGaps @ 0x140A66AC0
 * Callers:
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x1403BCDAC (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140C4EDC8) )
    return 0LL;
  MiFillGapAddresses(v0, 0xFFFFFD7FFFFFFFFFuLL, (int)&qword_140C4EDC8);
  return 1LL;
}
