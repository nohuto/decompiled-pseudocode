/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1406249E8
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140623798 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x14062466C (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiPnpRtlObjectEventRelease @ 0x1406290D4 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (void *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
