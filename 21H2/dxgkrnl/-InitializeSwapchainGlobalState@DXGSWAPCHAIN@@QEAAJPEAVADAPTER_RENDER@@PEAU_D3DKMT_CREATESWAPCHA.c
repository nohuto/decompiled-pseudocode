/*
 * XREFs of ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C034B038
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C034DD20 (DxgkCreateSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C005AFC4 (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeSwapchainGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  __int64 v3; // r9
  _DWORD *v7; // rax
  UINT v8; // ecx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  struct DXGPROCESS *Current; // rax

  v3 = a3->Flags.Value & 2;
  *((_DWORD *)this + 58) = (a3->Flags.Value & 2) != 0;
  if ( (v3 & 2) == 0 )
  {
    v7 = (_DWORD *)operator new[](8uLL, 0x4B677844u, 256LL, v3);
    if ( v7 )
    {
      v8 = a3->SurfaceCount - 1;
      *v7 = 0;
      v7[1] = v8;
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 28) = v7;
    if ( !v7 )
    {
      v9 = 1732LL;
      WdLogSingleEntry1(6LL, 1732LL);
      v10 = L"Out of memory allocating ROTATING_BUFFER_IDX class";
LABEL_7:
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v12 = operator new[](0x18uLL, 0x4B677844u, 256LL, v3);
  if ( v12 )
  {
    v16 = *((_DWORD *)this + 52);
    *(_DWORD *)v12 = 20;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)(v12 + 4) = v16;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 27) = v12;
  if ( !v12 )
  {
    v9 = 1741LL;
    WdLogSingleEntry1(6LL, 1741LL);
    v10 = L"Failed to allocate surface queue";
    goto LABEL_7;
  }
  v17 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v12, v13, v14, v15);
  v21 = v17;
  if ( v17 >= 0 )
  {
    *((_QWORD *)this + 25) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 404LL);
    v22 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 436LL);
    if ( (v22 & 0x10) != 0 )
      *((_DWORD *)this + 49) = 1;
    Current = DXGPROCESS::GetCurrent(v22, v18, v19, v20);
    WdLogSingleEntry2(4LL, this, Current);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to init queue. Returning 0x%I64x",
      v21,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v21;
  }
}
