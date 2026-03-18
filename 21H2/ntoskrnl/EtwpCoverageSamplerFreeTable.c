/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x1409F2898
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1409EF4C4 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1409F12F0 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409F26E8 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x1409F2984 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageSamplerFreeTable(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
