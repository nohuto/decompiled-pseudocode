/*
 * XREFs of _RtlpMuiRegCreateRegistryInfo@0 @ 0x4B2ADC00
 * Callers:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

_DWORD *__stdcall RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // eax

  result = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, 100);
  if ( !result )
    return 0;
  *result |= 0x400u;
  return result;
}
