/*
 * XREFs of ?PreRender@CLocalAppRenderTarget@@UEAAJXZ @ 0x18018EC48
 * Callers:
 *     ?PreRender@CLocalAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800ED060 (-PreRender@CLocalAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018E91C (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CLocalAppRenderTarget::PreRender(CLocalAppRenderTarget *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  if ( *((_QWORD *)this - 14) )
  {
    v3 = CLocalAppRenderTarget::EnsureSwapChain((CLocalAppRenderTarget *)((char *)this - 216));
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x5Eu, 0LL);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 14) + 208LL))(*((_QWORD *)this - 14));
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5Fu, 0LL);
    }
  }
  return v1;
}
