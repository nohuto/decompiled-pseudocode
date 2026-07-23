/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140940D10
 * Callers:
 *     EtwpFreeFilterInfo @ 0x1406B9F2C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x1406BA5B0 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x140940288 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
