/*
 * XREFs of EtwpFreeEventNameFilter @ 0x14093D5A8
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140635F90 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140636614 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x14093CB20 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
