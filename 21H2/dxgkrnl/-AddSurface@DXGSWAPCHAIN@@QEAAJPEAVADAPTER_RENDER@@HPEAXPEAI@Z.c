/*
 * XREFs of ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0349CC4
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x1C034D910 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C034DD20 (DxgkCreateSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01996EC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A370 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A404 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1C034A744 (-FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C034B4B4 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AddSurface(
        struct _KTHREAD **this,
        DXGADAPTER **a2,
        int a3,
        void *a4,
        unsigned int *a5)
{
  __int64 v8; // rdi
  BOOL v9; // r15d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rbx
  __int64 v12; // r9
  int v13; // eax
  int v14; // r12d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  char *v17; // rsi
  int v18; // eax
  __int64 v19; // r9
  int v20; // esi
  __int64 v21; // r14
  const wchar_t *v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rsi
  int v26; // edx
  __int64 v27; // rcx
  DXGSWAPCHAIN *v28; // rcx
  _DWORD v29[24]; // [rsp+50h] [rbp-88h] BYREF
  DXGSYNCOBJECT *v30; // [rsp+E0h] [rbp+8h] BYREF

  v8 = (__int64)this;
  if ( this[3] != KeGetCurrentThread() || !DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
  {
    WdLogSingleEntry1(1LL, 2342LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_SwapChainLock.IsOwner() && pRenderCore->IsCoreResourceSharedOwner()",
      2342LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = a3 == 0;
  if ( *(_DWORD *)(v8 + 60) >= 0x32u )
  {
    WdLogSingleEntry1(2LL, 2350LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Swapchain is at max number of surfaces so cannot add anymore",
      2350LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225507LL;
  }
  EmptySlot = DXGSWAPCHAIN::FindEmptySlot((DXGSWAPCHAIN *)v8);
  if ( !EmptySlot )
  {
    v13 = *(_DWORD *)(v8 + 56);
    if ( v13 != *(_DWORD *)(v8 + 60) )
    {
      WdLogSingleEntry1(1LL, 2358LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_SurfaceTableSize == m_ActiveSurfaceCo",
        2358LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v13 = *(_DWORD *)(v8 + 56);
    }
    v14 = v13 + 5;
    v15 = (unsigned int)(v13 + 5);
    v16 = 112 * v15;
    if ( !is_mul_ok(v15, 0x70uLL) )
      v16 = -1LL;
    v17 = (char *)operator new[](v16, 0x4B677844u, 256LL, v12);
    if ( !v17 )
    {
      WdLogSingleEntry1(6LL, (unsigned int)v15);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate new surface table, size %ld",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(v17, *(const void **)(v8 + 64), 112LL * *(unsigned int *)(v8 + 56));
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v17[112 * *(unsigned int *)(v8 + 56)];
    operator delete[](*(void **)(v8 + 64));
    *(_DWORD *)(v8 + 56) = v14;
    *(_QWORD *)(v8 + 64) = v17;
  }
  memset(v29, 0, sizeof(v29));
  v29[3] |= 1u;
  v29[2] = 3;
  v18 = CreateSynchronizationObjectInternal(0LL, 1, (struct ADAPTER_RENDER *)a2, (__int64)v29, 0xDu, 0, &v30, 0LL, 0LL);
  v20 = v18;
  if ( v18 < 0 )
  {
    v21 = v18;
    WdLogSingleEntry2(2LL, v8, v18);
    v22 = L"CreateSynchronizationObjectInternal failed. Returning 0x%I64x";
LABEL_23:
    v26 = 0x40000;
LABEL_24:
    DxgkLogInternalTriageEvent(0LL, v26, -1, (__int64)v22, v8, v21, 0LL, 0LL, 0LL);
    if ( EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(v27, v9, EmptySlot);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v28, EmptySlot);
      memset(EmptySlot, 0, 0x70uLL);
    }
    return (unsigned int)v20;
  }
  *((_DWORD *)EmptySlot + 7) = v29[20];
  v23 = operator new[](0x10uLL, 0x4B677844u, 256LL, v19);
  v25 = v23;
  if ( v23 )
  {
    *(_QWORD *)(v23 + 8) = 0LL;
    *(_QWORD *)v23 = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v23, 0, 0, v24);
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v25;
  if ( !v25 )
  {
    v8 = 2415LL;
    WdLogSingleEntry1(6LL, 2415LL);
    v26 = 262145;
    v22 = L"Out of memory allocating AUTOEXPANDALLOCATION class";
    v20 = -1073741801;
    v21 = 0LL;
    goto LABEL_24;
  }
  v20 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
          (DXGSWAPCHAIN *)v8,
          EmptySlot,
          (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 32 * v9 + 48),
          a4);
  if ( v20 < 0 )
  {
    v8 = 2424LL;
    WdLogSingleEntry1(2LL, 2424LL);
    v22 = L"OpenSurfacesResourcesLocalForCreator failed";
    v21 = 0LL;
    goto LABEL_23;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  *a5 = -1227133513 * (((__int64)EmptySlot - *(_QWORD *)(v8 + 64)) >> 4);
  ++*(_DWORD *)(v8 + 60);
  return (unsigned int)v20;
}
