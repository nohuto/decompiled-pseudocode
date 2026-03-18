/*
 * XREFs of SharedFree @ 0x1C003DDA0
 * Callers:
 *     HMFreeObject @ 0x1C0017080 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
