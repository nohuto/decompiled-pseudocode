/*
 * XREFs of ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x180024730
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECE84 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SignalSEB@CLegacyRenderTarget@@AEAAX_NI@Z @ 0x18002480C (-SignalSEB@CLegacyRenderTarget@@AEAAX_NI@Z.c)
 *     ?EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ @ 0x1800248A4 (-EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x180024910 (-IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18017C66C (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

void __fastcall CLegacyRenderTarget::CheckForFullScreenVideoNotifications(CLegacyRenderTarget *this)
{
  char v2; // bp
  __int64 v3; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v4; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v5; // r14
  _QWORD *v6; // rsi
  unsigned int v7; // r8d
  bool v8; // dl
  __int64 v9; // rcx
  int v10; // eax
  char v11; // al
  int v12; // ebx
  char v13; // al
  char v14[16]; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+30h] [rbp-38h]

  if ( CLegacyRenderTarget::IsPrimaryMonitor((CLegacyRenderTarget *)((char *)this + 136))
    && *(_BYTE *)(*((_QWORD *)g_pComposition + 11) + 129LL) )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    if ( !*((_BYTE *)this + 18584) )
      return;
  }
  v3 = *((_QWORD *)this + 1471);
  if ( v3
    && ((v9 = *(_QWORD *)(v3 + 16)) == 0
      ? (v10 = 0)
      : (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 88LL))(v9)),
        v10 == 1) )
  {
    v6 = *(_QWORD **)(*((_QWORD *)this + 1471) + 16LL);
  }
  else
  {
    v4 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 973);
    v5 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 974);
    while ( 1 )
    {
      if ( v4 == v5 )
      {
        v6 = 0LL;
        goto LABEL_8;
      }
      if ( COverlayContext::IsFullscreen((CLegacyRenderTarget *)((char *)this + 472), v4)
        && (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v4 + 2) + 88LL))(*((_QWORD **)v4 + 2)) == 1 )
      {
        break;
      }
      v4 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v4 + 224);
    }
    v6 = (_QWORD *)*((_QWORD *)v4 + 2);
  }
LABEL_8:
  if ( *((_BYTE *)this + 18584) )
  {
    v11 = *((_BYTE *)this + 18592);
    if ( v6 )
    {
      if ( !v11 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 200LL))(*((_QWORD *)this + 20), 1LL);
        *((_BYTE *)this + 18592) = 1;
      }
    }
    else if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 200LL))(*((_QWORD *)this + 20), 0LL);
      *((_BYTE *)this + 18592) = 0;
    }
  }
  if ( v2 && (int)CLegacyRenderTarget::EnsureWNFHandles(this) >= 0 )
  {
    if ( v6 )
    {
      v12 = 100;
      v13 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v6 + 288LL))(v6, v14);
      v8 = 1;
      if ( v13 )
        v12 = v15;
      v7 = v12;
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    CLegacyRenderTarget::SignalSEB(this, v8, v7);
  }
}
