/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AA8BC
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02AA250 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C02AA624 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02AAB2C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02AB53C (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C02AC5BC (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  void *v6; // rcx
  unsigned int v7; // ebp
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v9; // rbx
  unsigned int v10; // ecx
  struct _KTHREAD *v11; // r8
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  struct DXGSYNCOBJECT *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  PERESOURCE *Global; // rax
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

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
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v6, a2);
    v9 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(v5 + a3 + 56) = 0;
      return;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v19, Current);
    v10 = (v7 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)v9 + 64) )
    {
      v11 = v9[30];
      v12 = *((_DWORD *)v11 + 4 * v10 + 2);
      if ( ((v7 >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
      {
        v13 = v12 & 0x1F;
        if ( (_BYTE)v13 == 8 )
        {
          v15 = (struct DXGSYNCOBJECT *)*((_QWORD *)v11 + 2 * v10);
          if ( v15 )
            *((_DWORD *)v11 + 4 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          goto LABEL_12;
        }
        v14 = WdLogNewEntry5_WdError(0x2000LL, v13);
        *(_QWORD *)(v14 + 24) = 316LL;
        WdLogEvent5_WdError(v14);
      }
    }
    v15 = 0LL;
LABEL_12:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    if ( v15 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17, v16);
      DXGGLOBAL::DestroySyncObject(Global, v15, v7, 0);
    }
    goto LABEL_14;
  }
}
