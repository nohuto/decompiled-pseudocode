/*
 * XREFs of CMFUnmapModules @ 0x140959C14
 * Callers:
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFUnmapModules(__int16 a1)
{
  PADAPTER_OBJECT *v2; // rdi
  PADAPTER_OBJECT *v3; // rbx
  __int64 v4; // rbp
  struct _DMA_ADAPTER *v5; // rcx
  struct _DMA_ADAPTER *v6; // rcx

  if ( (a1 & 0x20) != 0 )
  {
    v2 = (PADAPTER_OBJECT *)CMFSegmentSectionPointer;
    _InterlockedExchange64((volatile __int64 *)&CMFSegmentSectionPointer, 0LL);
    if ( v2 )
    {
      v3 = v2;
      v4 = 30LL;
      do
      {
        if ( *v3 )
        {
          HalPutDmaAdapter(*v3);
          *v3 = 0LL;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      ExFreePoolWithTag(v2, 0);
    }
  }
  if ( (a1 & 0x10) != 0 )
  {
    v5 = CMFDirectorySectionPointer;
    if ( CMFDirectorySectionPointer )
    {
      if ( v5 == (struct _DMA_ADAPTER *)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)&CMFDirectorySectionPointer,
                                          0LL,
                                          (signed __int64)CMFDirectorySectionPointer) )
        HalPutDmaAdapter(v5);
    }
  }
  if ( (a1 & 0x100) != 0 )
  {
    v6 = CMFHitsSectionPointer;
    if ( CMFHitsSectionPointer )
    {
      if ( v6 == (struct _DMA_ADAPTER *)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)&CMFHitsSectionPointer,
                                          0LL,
                                          (signed __int64)CMFHitsSectionPointer) )
        HalPutDmaAdapter(v6);
    }
  }
  return 0LL;
}
