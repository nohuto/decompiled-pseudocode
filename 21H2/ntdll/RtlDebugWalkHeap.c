/*
 * XREFs of RtlDebugWalkHeap @ 0x1800FA3F8
 * Callers:
 *     RtlpWalkHeap @ 0x1800F4EEC (RtlpWalkHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005FAC0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800FA5D4 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E064 (RtlpHeapExceptionFilter.c)
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
