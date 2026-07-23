/*
 * XREFs of RtlDebugWalkHeap @ 0x1800FA5A8
 * Callers:
 *     RtlpWalkHeap @ 0x1800F509C (RtlpWalkHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005E5D0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800FA784 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
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
