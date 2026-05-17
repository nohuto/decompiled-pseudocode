/*
 * XREFs of RtlDebugWalkHeap @ 0x1800FA438
 * Callers:
 *     RtlpWalkHeap @ 0x1800F4F2C (RtlpWalkHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005FAC0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800FA614 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E0A4 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugWalkHeap(_DWORD *a1)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlWalkHeap") )
    return RtlpValidateHeap(a1, 0LL);
  return v2;
}
