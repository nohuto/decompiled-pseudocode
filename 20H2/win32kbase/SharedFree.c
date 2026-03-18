/*
 * XREFs of SharedFree @ 0x1C00A11C0
 * Callers:
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
