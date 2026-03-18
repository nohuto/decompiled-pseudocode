/*
 * XREFs of ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C034B318
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C034EA60 (DxgkOpenSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A404 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C034B894 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // ebp
  unsigned int v12; // esi
  __int64 v13; // rdi
  _BYTE v15[16]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v4 = *((_DWORD *)this + 15);
  if ( a2->SurfaceCount != v4 )
  {
    WdLogSingleEntry1(1LL, 2298LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pKmOpen->SurfaceCount == m_ActiveSurfaceCo",
      2298LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v4 = *((_DWORD *)this + 15);
  }
  v5 = 0;
  v6 = 0LL;
  if ( v4 )
  {
    while ( (unsigned int)v6 < a2->SurfaceCount )
    {
      v7 = *((_QWORD *)this + 8);
      v8 = 112LL * (unsigned int)v6;
      if ( !*(_DWORD *)(v8 + v7 + 8) )
      {
        WdLogSingleEntry1(1LL, 2306LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pSurfaceTable[Idx].SlotStatus != SLOT_AVAILABLE",
          2306LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v7 = *((_QWORD *)this + 8);
      }
      v5 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
             this,
             (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v8 + v7),
             a2->bProducer,
             &a2->pNtSurfaceHandles[v6]);
      v11 = v5;
      if ( v5 < 0 )
      {
        v12 = 0;
        if ( *((_DWORD *)this + 14) )
        {
          v13 = a2->bProducer ? 0x30 : 0;
          do
            DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
              v9,
              *(unsigned int *)((char *)this + v13 + 124),
              *((_QWORD *)this + 8) + 112LL * v12++,
              v10);
          while ( v12 < *((_DWORD *)this + 14) );
          v5 = v11;
        }
        break;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 15) )
        break;
    }
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v5;
}
