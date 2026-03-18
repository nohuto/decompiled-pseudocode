/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1407780BC
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140776E5C (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x140777D40 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     PiPnpRtlObjectEventRelease @ 0x140779B80 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
