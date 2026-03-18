/*
 * XREFs of MiFillPfnGaps @ 0x140A5F0A0
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x1403B8ADC (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x140A5F0F0 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140C4ED08) )
    return 0LL;
  MiFillGapAddresses(v0, 0xFFFFFD7FFFFFFFFFuLL, (int)&qword_140C4ED08);
  return 1LL;
}
