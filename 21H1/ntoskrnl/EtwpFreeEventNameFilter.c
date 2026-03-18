/*
 * XREFs of EtwpFreeEventNameFilter @ 0x14093C32C
 * Callers:
 *     EtwpFreeFilterInfo @ 0x14067EA9C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x14067F120 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x14093B8A4 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
