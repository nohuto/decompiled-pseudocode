/*
 * XREFs of ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x180186694
 * Callers:
 *     ?PreRender@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F5A00 (-PreRender@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801861BC (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x180186F90 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801870C0 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PreRender(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edi
  CRemoteAppRenderTarget *v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v1 = 0;
  if ( *(int *)(*((_QWORD *)this - 40) + 952LL) >= 5 && *((_DWORD *)this - 64) && *((_DWORD *)this - 63) )
  {
    v3 = (CRemoteAppRenderTarget *)((char *)this - 336);
    v4 = CRemoteAppRenderTarget::EnsureSwapChain((CRemoteAppRenderTarget *)((char *)this - 336));
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x82u, 0LL);
    }
    else
    {
      if ( *((_BYTE *)this - 207) )
      {
        CRemoteAppRenderTarget::SetWindowBounds(v3, (const struct tagRECT *)((char *)this - 72));
        if ( *(_DWORD *)(*((_QWORD *)this - 40) + 952LL) == 6 )
          CRemoteAppRenderTarget::SendCompSurfHandle(v3);
      }
      v6 = *((_QWORD *)this - 29);
      if ( v6 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6);
        v1 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x95u, 0LL);
      }
    }
  }
  return v1;
}
