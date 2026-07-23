/*
 * XREFs of MiFillPfnGaps @ 0x140A67AC0
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x1403BCF1C (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x140A67B10 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 v0; // rcx

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140C4EE08) )
    return 0LL;
  MiFillGapAddresses(v0, 0xFFFFFD7FFFFFFFFFuLL, (int)&qword_140C4EE08);
  return 1LL;
}
