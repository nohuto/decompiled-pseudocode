/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x140942DA8
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x14093F85C (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1409417B0 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerCleanup @ 0x140942C04 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x140942E94 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
