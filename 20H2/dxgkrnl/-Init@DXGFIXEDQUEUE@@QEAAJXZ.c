/*
 * XREFs of ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C004AF88
 * Callers:
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C02A9B50 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Init(DXGFIXEDQUEUE *this)
{
  SIZE_T v2; // rax
  PVOID v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  v2 = 4LL * *((unsigned int *)this + 1);
  if ( !is_mul_ok(*((unsigned int *)this + 1), 4uLL) )
    v2 = -1LL;
  v3 = operator new[](v2, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    return 0LL;
  v8 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
  *(_QWORD *)(v8 + 24) = *((unsigned int *)this + 1);
  WdLogEvent5_WdLowResource(v8);
  return 3221225495LL;
}
