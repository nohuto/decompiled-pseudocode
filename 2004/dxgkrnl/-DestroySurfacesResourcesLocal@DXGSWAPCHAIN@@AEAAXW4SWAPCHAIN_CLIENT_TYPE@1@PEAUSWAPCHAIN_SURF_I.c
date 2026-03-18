/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AA3AC
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02A9D70 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C02AA144 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02AA61C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02AB02C (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C02AC0AC (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0113088 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  void *v6; // rcx
  unsigned int v7; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rdi
  char *v10; // r14
  unsigned int v11; // ecx
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  struct DXGSYNCOBJECT *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *Global; // rax

  v3 = (int)a2;
  v5 = 32LL * (int)a2;
  v6 = *(void **)(v5 + a3 + 72);
  if ( v6 )
  {
    ObCloseHandle(v6, 1);
    *(_QWORD *)(v5 + a3 + 72) = 0LL;
    *(_QWORD *)(32 * (v3 + 2) + a3) = 0LL;
  }
  v7 = *(_DWORD *)(v5 + a3 + 56);
  if ( v7 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v6, a2);
    v9 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(v5 + a3 + 56) = 0;
      return;
    }
    v10 = (char *)Current + 208;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v11 = (v7 >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)v9 + 64) )
    {
      v12 = *((_QWORD *)v9 + 30);
      v13 = *(_DWORD *)(v12 + 16LL * v11 + 8);
      if ( ((v7 >> 25) & 0x60) == (v13 & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
      {
        v14 = v13 & 0x1F;
        if ( (_BYTE)v14 == 8 )
        {
          v16 = *(struct DXGSYNCOBJECT **)(v12 + 16LL * v11);
LABEL_12:
          ExReleasePushLockSharedEx(v10, 0LL);
          KeLeaveCriticalRegion();
          if ( v16 )
          {
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18, v17);
            DXGGLOBAL::DestroySyncObject(Global, v16, v7);
          }
          goto LABEL_14;
        }
        v15 = WdLogNewEntry5_WdError((v7 >> 25) & 0x60, v14);
        *(_QWORD *)(v15 + 24) = 267LL;
        WdLogEvent5_WdError(v15);
      }
    }
    v16 = 0LL;
    goto LABEL_12;
  }
}
