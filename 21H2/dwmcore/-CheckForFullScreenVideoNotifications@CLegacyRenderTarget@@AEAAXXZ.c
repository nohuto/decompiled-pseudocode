/*
 * XREFs of ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800BBBD8
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SignalSEB@CLegacyRenderTarget@@AEAAX_NI@Z @ 0x1800BBC90 (-SignalSEB@CLegacyRenderTarget@@AEAAX_NI@Z.c)
 *     ?EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ @ 0x1800BBD28 (-EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?FindFullScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x1800BBD94 (-FindFullScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z.c)
 *     ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800BBE00 (-IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacyRenderTarget::CheckForFullScreenVideoNotifications(CLegacyRenderTarget *this)
{
  char v2; // bl
  __int64 FullScreenContent; // rsi
  unsigned int v4; // r8d
  bool v5; // dl
  char v6; // al
  int v7; // ebx
  char v8; // al
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h]

  if ( CLegacyRenderTarget::IsPrimaryMonitor((CLegacyRenderTarget *)((char *)this + 144))
    && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 577LL) )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    if ( !*((_BYTE *)this + 18608) )
      return;
  }
  FullScreenContent = COverlayContext::FindFullScreenContent((char *)this + 192);
  if ( *((_BYTE *)this + 18608) )
  {
    v6 = *((_BYTE *)this + 18614);
    if ( FullScreenContent )
    {
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 256LL))(*((_QWORD *)this + 22), 1LL);
        *((_BYTE *)this + 18614) = 1;
      }
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 256LL))(*((_QWORD *)this + 22), 0LL);
      *((_BYTE *)this + 18614) = 0;
    }
  }
  if ( v2 && (int)CLegacyRenderTarget::EnsureWNFHandles(this) >= 0 )
  {
    if ( FullScreenContent )
    {
      v7 = 100;
      v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)FullScreenContent + 384LL))(FullScreenContent, v9);
      v5 = 1;
      if ( v8 )
        v7 = v10;
      v4 = v7;
    }
    else
    {
      v4 = 0;
      v5 = 0;
    }
    CLegacyRenderTarget::SignalSEB(this, v5, v4);
  }
}
