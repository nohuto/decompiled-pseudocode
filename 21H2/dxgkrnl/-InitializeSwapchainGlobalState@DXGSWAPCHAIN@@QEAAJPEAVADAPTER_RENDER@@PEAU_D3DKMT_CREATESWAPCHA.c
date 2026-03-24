/*
 * XREFs of ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C02AB040
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C02ADA60 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C004BED8 (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeSwapchainGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  UINT v3; // r9d
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  UINT SurfaceCount; // ecx
  __int64 v13; // rax
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx

  v3 = a3->Flags.Value & 2;
  *((_DWORD *)this + 56) = v3 != 0;
  if ( !v3 )
  {
    v7 = operator new[](8uLL, 0x4B677844u, PagedPool);
    if ( v7 )
    {
      SurfaceCount = a3->SurfaceCount;
      *v7 = 0;
      v9 = SurfaceCount - 1;
      v7[1] = v9;
    }
    *((_QWORD *)this + 27) = v7;
    if ( !v7 )
    {
      v13 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v13 + 24) = 1667LL;
LABEL_6:
      WdLogEvent5_WdLowResource(v13);
      return 3221225495LL;
    }
  }
  v15 = operator new[](0x18uLL, 0x4B677844u, PagedPool);
  if ( v15 )
  {
    v17 = *((unsigned int *)this + 50);
    v15[2] = 0;
    v15[3] = 0;
    *((_QWORD *)v15 + 2) = 0LL;
    *v15 = 20;
    v15[1] = v17;
  }
  *((_QWORD *)this + 26) = v15;
  if ( !v15 )
  {
    v13 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v13 + 24) = 1676LL;
    goto LABEL_6;
  }
  v20 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v15);
  v23 = v20;
  if ( v20 >= 0 )
  {
    *((_QWORD *)this + 24) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 316LL);
    v25 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 348LL);
    if ( (v25 & 0x10) != 0 )
      *((_DWORD *)this + 47) = 1;
    v26 = WdLogNewEntry5_WdEvent(v25, v21);
    *(_QWORD *)(v26 + 24) = this;
    *(_QWORD *)(v26 + 32) = DXGPROCESS::GetCurrent(v28, v27);
    WdLogEvent5_WdEvent(v26);
    return 0LL;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
}
