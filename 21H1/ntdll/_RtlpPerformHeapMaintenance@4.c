/*
 * XREFs of _RtlpPerformHeapMaintenance@4 @ 0x4B2AED81
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 *     _RtlpInitializeUCRIndex@4 @ 0x4B37079C (_RtlpInitializeUCRIndex@4.c)
 */

int __thiscall RtlpPerformHeapMaintenance(_DWORD *this)
{
  int result; // eax

  result = this[18];
  if ( (result & 0x20000000) != 0 )
  {
    result &= ~0x20000000u;
    this[18] = result;
    if ( (RtlpDisableHeapLookaside & 1) == 0 )
    {
      RtlpActivateLowFragmentationHeap();
      result = this[18];
    }
  }
  if ( (result & 0x10000000) != 0 )
  {
    this[18] = result & 0xEFFFFFFF;
    result = RtlpInitializeUCRIndex((int)this);
    this[18] &= ~0x10000000u;
  }
  return result;
}
