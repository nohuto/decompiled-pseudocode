/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x14062F968
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x14062E710 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x14062F5EC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiPnpRtlObjectEventRelease @ 0x140634048 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
