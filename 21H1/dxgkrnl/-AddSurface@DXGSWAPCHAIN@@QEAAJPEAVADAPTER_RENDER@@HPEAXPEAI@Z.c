/*
 * XREFs of ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02A5880
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x1C02A8C30 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C02A9010 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01117A8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C015A11C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02A5E28 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02A5EBC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1C02A6198 (-FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02A6C7C (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AddSurface(const void **this, DXGADAPTER **a2, int a3, void *a4, unsigned int *a5)
{
  __int64 v9; // rax
  BOOL v10; // ebp
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rdi
  int v16; // eax
  __int64 v17; // rax
  int v18; // r15d
  unsigned __int64 v19; // rdi
  SIZE_T v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char *v25; // r14
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  AUTOEXPANDALLOCATION *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  AUTOEXPANDALLOCATION *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  DXGSWAPCHAIN *v42; // rcx
  struct _OBJECT_HANDLE_INFORMATION *v43; // [rsp+20h] [rbp-B8h]
  _DWORD v44[24]; // [rsp+50h] [rbp-88h] BYREF
  DXGSYNCOBJECT *v45; // [rsp+E0h] [rbp+8h] BYREF

  if ( this[2] != KeGetCurrentThread() || !DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 2277LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = a3 == 0;
  if ( *((_DWORD *)this + 13) >= 0x32u )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 2285LL;
    WdLogEvent5_WdError(v11);
    return 3221225507LL;
  }
  EmptySlot = DXGSWAPCHAIN::FindEmptySlot((DXGSWAPCHAIN *)this);
  if ( !EmptySlot )
  {
    v16 = *((_DWORD *)this + 12);
    if ( v16 != *((_DWORD *)this + 13) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v17 + 24) = 2293LL;
      WdLogEvent5_WdAssertion(v17);
      v16 = *((_DWORD *)this + 12);
    }
    v18 = v16 + 5;
    v19 = (unsigned int)(v16 + 5);
    v20 = 112 * v19;
    if ( !is_mul_ok(v19, 0x70uLL) )
      v20 = -1LL;
    v25 = (char *)operator new[](v20, 0x4B677844u, PagedPool);
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = v19;
      WdLogEvent5_WdLowResource(v26);
      return 3221225495LL;
    }
    memmove(v25, this[7], 112LL * *((unsigned int *)this + 12));
    memset(&v25[112 * *((unsigned int *)this + 12)], 0, 0x230uLL);
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v25[112 * *((unsigned int *)this + 12)];
    operator delete[]((void *)this[7]);
    this[7] = v25;
    *((_DWORD *)this + 12) = v18;
  }
  memset(v44, 0, sizeof(v44));
  v44[3] |= 1u;
  LODWORD(v43) = 13;
  v44[2] = 3;
  v27 = CreateSynchronizationObjectInternal(0LL, 1, (__int64)a2, (__int64)v44, v43, 0, &v45, 0LL, 0LL);
  v30 = v27;
  if ( v27 < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = v30;
LABEL_16:
    WdLogEvent5_WdError(v31);
    goto LABEL_25;
  }
  *((_DWORD *)EmptySlot + 7) = v44[20];
  v33 = (AUTOEXPANDALLOCATION *)operator new[](0x10uLL, 0x4B677844u, PagedPool);
  v38 = v33;
  if ( v33 )
  {
    *(_QWORD *)v33 = 0LL;
    *((_DWORD *)v33 + 2) = 0;
    *((_DWORD *)v33 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer(v33, 0, 0);
  }
  else
  {
    v38 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v38;
  if ( !v38 )
  {
    v39 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
    *(_QWORD *)(v39 + 24) = 2351LL;
    WdLogEvent5_WdLowResource(v39);
    LODWORD(v30) = -1073741801;
    goto LABEL_26;
  }
  LODWORD(v30) = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
                   (DXGSWAPCHAIN *)this,
                   EmptySlot,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 32 * v10 + 48),
                   a4);
  if ( (int)v30 < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v31 + 24) = 2360LL;
    goto LABEL_16;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  v32 = EmptySlot - (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)this[7];
  *a5 = v32 / 112;
  ++*((_DWORD *)this + 13);
LABEL_25:
  if ( (int)v30 < 0 )
  {
LABEL_26:
    if ( EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(v32, v10, EmptySlot);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v42, EmptySlot);
      memset(EmptySlot, 0, 0x70uLL);
    }
  }
  return (unsigned int)v30;
}
