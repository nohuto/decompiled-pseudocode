/*
 * XREFs of MiGetVadCacheAttribute @ 0x140200CF0
 * Callers:
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1405C0828 (MiAllocateLargeProcessPagesFromCache.c)
 *     MiRotateToFrameBufferNoCopy @ 0x14065FFA0 (MiRotateToFrameBufferNoCopy.c)
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14097D2A0 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadCacheAttribute(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = 1LL;
  v2 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  if ( v2 >> 3 == 3 )
  {
    if ( (v2 & 7) != 0 )
      return 2LL;
  }
  else if ( v2 >> 3 == 1 )
  {
    return 0LL;
  }
  return result;
}
