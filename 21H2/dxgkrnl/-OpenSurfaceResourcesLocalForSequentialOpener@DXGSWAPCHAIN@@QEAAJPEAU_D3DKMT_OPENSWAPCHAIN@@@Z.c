/*
 * XREFs of ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02AB53C
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C02AE4F0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AA8BC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02AB99C (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  BOOL bProducer; // eax
  unsigned int v14; // esi
  __int64 v15; // rdi
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v6 = *((_DWORD *)this + 13);
  if ( a2->SurfaceCount != v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 2244LL;
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_DWORD *)this + 13);
  }
  v8 = 0;
  v9 = 0LL;
  if ( v6 )
  {
    do
    {
      if ( (unsigned int)v9 >= a2->SurfaceCount )
        break;
      v10 = *((_QWORD *)this + 7);
      v11 = 112LL * (unsigned int)v9;
      if ( !*(_DWORD *)(v11 + v10 + 8) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v10, v4);
        *(_QWORD *)(v12 + 24) = 2252LL;
        WdLogEvent5_WdAssertion(v12);
        v10 = *((_QWORD *)this + 7);
      }
      v8 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
             this,
             (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v11 + v10),
             a2->bProducer,
             &a2->pNtSurfaceHandles[v9]);
      if ( v8 < 0 )
        goto LABEL_10;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *((_DWORD *)this + 13) );
    if ( v8 >= 0 )
      goto LABEL_13;
LABEL_10:
    bProducer = a2->bProducer;
    v14 = 0;
    if ( *((_DWORD *)this + 12) )
    {
      v15 = bProducer ? 0x30 : 0;
      do
        DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
          v5,
          *(unsigned int *)((char *)this + v15 + 116),
          *((_QWORD *)this + 7) + 112LL * v14++);
      while ( v14 < *((_DWORD *)this + 12) );
    }
  }
LABEL_13:
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v4);
  return (unsigned int)v8;
}
