/*
 * XREFs of ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C7264
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x1801C6B08 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C7118 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C661C (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801C7360 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::TryTargetNextBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int RenderTargetForAcquiredBuffer; // eax
  __int64 v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 242);
  if ( v3 && !*((_QWORD *)this + 243) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, 0LL);
    v8 = v4;
    if ( v4 >= 0 )
    {
      RenderTargetForAcquiredBuffer = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(this);
      v2 = RenderTargetForAcquiredBuffer;
      if ( RenderTargetForAcquiredBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, RenderTargetForAcquiredBuffer, 0x167u);
    }
    else
    {
      TranslateDXGIorD3DErrorInContext(v4, 0, &v8);
      v2 = v8;
      if ( v8 == -2005270490 )
      {
        CIndirectSwapchainRenderTarget::Unregister(this);
        return 0;
      }
      if ( v8 == -2147483638 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 120LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          0LL,
          4096LL);
        v2 = 0;
      }
    }
    if ( v2 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
  }
  return v2;
}
