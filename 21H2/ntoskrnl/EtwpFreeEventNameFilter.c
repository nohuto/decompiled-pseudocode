/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140940B40
 * Callers:
 *     EtwpFreeFilterInfo @ 0x1406E2C4C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x1406E32D0 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1409400B8 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
