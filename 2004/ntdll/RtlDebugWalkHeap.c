/*
 * XREFs of RtlDebugWalkHeap @ 0x1800FA098
 * Callers:
 *     RtlpWalkHeap @ 0x1800F4B8C (RtlpWalkHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugWalkHeap(_DWORD *a1)
{
  int v1; // edi
  char v2; // bl

  v1 = (int)a1;
  v2 = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlWalkHeap") )
    return RtlpValidateHeap(v1);
  return v2;
}
