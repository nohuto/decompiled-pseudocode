/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x140645FA8
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140645C2C (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x1406D806C (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PiDmObjectRelease @ 0x14063F020 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x14064117C (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  unsigned int *v2; // rcx
  char *v3; // rcx

  v2 = (unsigned int *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
