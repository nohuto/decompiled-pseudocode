/*
 * XREFs of PfSnCleanupPrefetchSectionInfo @ 0x140677D14
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x1406771A0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x140677260 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchHeader @ 0x140677C08 (PfSnCleanupPrefetchHeader.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PfpOpenHandleClose @ 0x140677F80 (PfpOpenHandleClose.c)
 */

void __fastcall PfSnCleanupPrefetchSectionInfo(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  struct _DMA_ADAPTER *v6; // rcx
  struct _DMA_ADAPTER *v7; // rcx

  if ( a3 )
  {
    v5 = *(_DWORD *)(a1 + 48);
    if ( (v5 & 1) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 32));
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~1u;
      v5 = *(_DWORD *)(a1 + 48);
    }
    if ( (v5 & 2) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_DWORD *)(a1 + 48) &= ~2u;
      v5 = *(_DWORD *)(a1 + 48);
    }
    if ( (v5 & 4) != 0 )
    {
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0x200000000LL;
      *(_DWORD *)(a1 + 48) &= ~4u;
    }
  }
  else
  {
    v6 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v6 )
      HalPutDmaAdapter(v6);
    v7 = *(struct _DMA_ADAPTER **)(a1 + 40);
    if ( v7 )
      HalPutDmaAdapter(v7);
    if ( (*(_QWORD *)(a1 + 24) & 0x400000000LL) != 0 )
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8));
  }
}
