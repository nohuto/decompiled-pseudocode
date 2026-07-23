/*
 * XREFs of _RtlDebugWalkHeap@8 @ 0x4B360528
 * Callers:
 *     _RtlpWalkHeap@12 @ 0x4B359AF8 (_RtlpWalkHeap@12.c)
 * Callees:
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

char __thiscall RtlDebugWalkHeap(_DWORD *this)
{
  char v3; // [esp+17h] [ebp-19h]

  v3 = 0;
  if ( RtlpCheckHeapSignature(this, "RtlWalkHeap") )
    return RtlpValidateHeap(this);
  return v3;
}
