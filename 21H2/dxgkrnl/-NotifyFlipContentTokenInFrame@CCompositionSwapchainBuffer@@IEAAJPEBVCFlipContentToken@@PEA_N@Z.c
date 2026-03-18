/*
 * XREFs of ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x1C0083154
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0083230 (-NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C00789C8 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C00832C4 (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 *     ?UpdateIndependentFlipState@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C00835B8 (-UpdateIndependentFlipState@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::NotifyFlipContentTokenInFrame(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2,
        bool *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ecx
  __int64 v8; // rax

  v3 = 0;
  *a3 = 0;
  v6 = *((_DWORD *)a2 + 24);
  if ( v6 == -1 || v6 < *((_DWORD *)this + 68) )
  {
    v8 = *((_QWORD *)a2 + 13);
    *((_QWORD *)this + 91) = v8;
    *((_DWORD *)this + 69) = v8;
    if ( *((_DWORD *)this + 95) != v6 )
    {
      *((_DWORD *)this + 95) = v6;
      *a3 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2) )
        *((_BYTE *)this + 626) = 0;
    }
    if ( CCompositionSwapchainBuffer::UpdateAttributes(this, a2) )
      *a3 = 1;
    if ( CCompositionSwapchainBuffer::UpdateIndependentFlipState(this, a2) )
      *a3 = 1;
    CCompositionBuffer::NotifyDirty(
      this,
      *((const struct IRegion **)a2 + 10),
      (const struct CFlipContentToken *)((char *)a2 + 52));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
