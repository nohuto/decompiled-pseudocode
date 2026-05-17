/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x180104640
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070080 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 168LL);
  if ( result )
    *result |= 0x400u;
  return result;
}
