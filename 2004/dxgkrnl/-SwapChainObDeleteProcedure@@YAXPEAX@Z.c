/*
 * XREFs of ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C02AC5F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039170 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C004AD98 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 */

void __fastcall SwapChainObDeleteProcedure(DXGSWAPCHAIN **a1)
{
  DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // r8

  v2 = *a1;
  if ( v2 )
  {
    DXGSWAPCHAIN::`scalar deleting destructor'(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventIndirectSwapChainDestroy, v3, *a1);
    *a1 = 0LL;
  }
}
