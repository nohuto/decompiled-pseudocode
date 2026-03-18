/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x140941B28
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x14093E5DC (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140940530 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerCleanup @ 0x140941984 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x140941C14 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
