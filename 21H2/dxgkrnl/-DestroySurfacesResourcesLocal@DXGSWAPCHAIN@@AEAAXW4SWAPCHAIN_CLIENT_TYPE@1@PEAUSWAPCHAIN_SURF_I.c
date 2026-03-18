/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A404
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0349CC4 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C034A154 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C034A6D8 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C034B318 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C034C654 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  void *v7; // rcx
  unsigned int v8; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rsi
  char *v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // rsi
  int v14; // edx
  struct DXGSYNCOBJECT *v15; // rsi
  PERESOURCE *Global; // rax

  v4 = (int)a2;
  v6 = 32LL * (int)a2;
  v7 = *(void **)(v6 + a3 + 72);
  if ( v7 )
  {
    ObCloseHandle(v7, 1);
    *(_QWORD *)(v6 + a3 + 72) = 0LL;
    *(_QWORD *)(32 * (v4 + 2) + a3) = 0LL;
  }
  v8 = *(_DWORD *)(v6 + a3 + 56);
  if ( v8 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v7, a2, a3, a4);
    v10 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(v6 + a3 + 56) = 0;
      return;
    }
    v11 = (char *)Current + 248;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v12 = (v8 >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)v10 + 74) )
    {
      v13 = *((_QWORD *)v10 + 35);
      v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
      if ( ((v8 >> 25) & 0x60) == (v14 & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      {
        if ( (v14 & 0x1F) == 8 )
        {
          v15 = *(struct DXGSYNCOBJECT **)(v13 + 16LL * v12);
LABEL_12:
          ExReleasePushLockSharedEx(v11, 0LL);
          KeLeaveCriticalRegion();
          if ( v15 )
          {
            Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
            DXGGLOBAL::DestroySyncObject(Global, v15, v8);
          }
          goto LABEL_14;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v15 = 0LL;
    goto LABEL_12;
  }
}
