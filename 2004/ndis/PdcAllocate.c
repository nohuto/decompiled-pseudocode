/*
 * XREFs of PdcAllocate @ 0x1C01294D4
 * Callers:
 *     PdcPortOpenCommon @ 0x1C0129560 (PdcPortOpenCommon.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall PdcAllocate(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(PagedPool, a2, a3);
}
