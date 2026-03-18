/*
 * XREFs of ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C005AFC4
 * Callers:
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C034B038 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Init(DXGFIXEDQUEUE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  v5 = 4LL * *((unsigned int *)this + 1);
  if ( !is_mul_ok(*((unsigned int *)this + 1), 4uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x4B677844u, 256LL, a4);
  *((_QWORD *)this + 2) = v6;
  if ( v6 )
    return 0LL;
  WdLogSingleEntry1(6LL, *((unsigned int *)this + 1));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v8,
        v7,
        v9,
        0LL,
        1,
        -1,
        L"Out of memory allocating memory for queue, size 0x%I64x",
        *((unsigned int *)this + 1),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 3221225495LL;
}
