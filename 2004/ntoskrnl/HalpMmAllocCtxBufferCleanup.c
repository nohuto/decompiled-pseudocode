/*
 * XREFs of HalpMmAllocCtxBufferCleanup @ 0x1403A31A0
 * Callers:
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x1403A1ECC (HalpMmAllocCtxAllocBuffer.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall HalpMmAllocCtxBufferCleanup(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx

  v2 = (void *)a2[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a2, 0);
}
