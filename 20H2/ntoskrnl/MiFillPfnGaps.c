/*
 * XREFs of MiFillPfnGaps @ 0x140A695CC
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x1403BC2CC (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x140A6961C (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140C4EC48) )
    return 0LL;
  MiFillGapAddresses(v0, 0xFFFFFD7FFFFFFFFFuLL, (int)&qword_140C4EC48);
  return 1LL;
}
