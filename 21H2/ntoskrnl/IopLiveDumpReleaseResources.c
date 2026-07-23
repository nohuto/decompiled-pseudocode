/*
 * XREFs of IopLiveDumpReleaseResources @ 0x14089884C
 * Callers:
 *     DbgkpWerCleanupContext @ 0x140889200 (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140896B80 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140896D1C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898180 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089825C (IopLiveDumpFreeMappingResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  struct _DMA_ADAPTER *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rbx
  void *v17; // rcx
  void *v18; // rcx

  if ( a1 )
  {
    IopLiveDumpFreeMappingResources(a1);
    v2 = *(void **)(a1 + 560);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x706D644Cu);
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    v3 = *(void **)(a1 + 592);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x706D644Cu);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    v4 = *(void **)(a1 + 648);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    v5 = *(void **)(a1 + 672);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x706D644Cu);
      *(_QWORD *)(a1 + 672) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
    {
      MmFreeIndependentPages(v6, *(unsigned int *)(a1 + 152));
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 944);
    if ( v7 )
    {
      MmFreeIndependentPages(v7, *(unsigned int *)(a1 + 952));
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 896);
    if ( v8 )
    {
      MmFreeIndependentPages(v8, *(unsigned int *)(a1 + 904));
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    IopLiveDumpFreeDumpBuffers(a1 + 680);
    v9 = *(void **)(a1 + 800);
    if ( v9 )
    {
      ZwClose(v9);
      *(_QWORD *)(a1 + 800) = 0LL;
    }
    v10 = *(void **)(a1 + 808);
    if ( v10 )
    {
      ZwClose(v10);
      *(_QWORD *)(a1 + 808) = 0LL;
    }
    v11 = *(void **)(a1 + 816);
    if ( v11 )
    {
      ZwClose(v11);
      *(_QWORD *)(a1 + 816) = 0LL;
    }
    v12 = *(struct _DMA_ADAPTER **)(a1 + 1000);
    if ( v12 )
    {
      HalPutDmaAdapter(v12);
      *(_QWORD *)(a1 + 1000) = 0LL;
    }
    v13 = *(void **)(a1 + 992);
    if ( v13 != (void *)-1LL )
    {
      ObCloseHandle(v13, 0);
      *(_QWORD *)(a1 + 992) = 0LL;
    }
    v14 = *(void **)(a1 + 1016);
    if ( v14 )
    {
      v15 = 0;
      if ( *(_DWORD *)(a1 + 1008) )
      {
        do
        {
          v16 = v15;
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 1016) + 8LL * v15++), 0x706D644Cu);
          *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 8 * v16) = 0LL;
        }
        while ( v15 < *(_DWORD *)(a1 + 1008) );
        v14 = *(void **)(a1 + 1016);
      }
      ExFreePoolWithTag(v14, 0x706D644Cu);
      *(_QWORD *)(a1 + 1016) = 0LL;
      *(_DWORD *)(a1 + 1008) = 0;
    }
    v17 = *(void **)(a1 + 1024);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x706D644Cu);
      *(_QWORD *)(a1 + 1024) = 0LL;
    }
    v18 = *(void **)(a1 + 1032);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0x706D644Cu);
      *(_QWORD *)(a1 + 1032) = 0LL;
    }
  }
}
