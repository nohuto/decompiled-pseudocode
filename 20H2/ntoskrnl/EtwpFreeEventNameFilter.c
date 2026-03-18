/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140943370
 * Callers:
 *     EtwpFreeFilterInfo @ 0x140719134 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x1407197B8 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1409428E8 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
