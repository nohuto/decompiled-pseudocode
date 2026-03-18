/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1405D302C
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405D1B14 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1405D2CB0 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiPnpRtlObjectEventRelease @ 0x1405D79D4 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
