/*
 * XREFs of ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18017C19C
 * Callers:
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x180031330 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1800E6BB8 (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18017B930 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800CD148 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall COverlayContext::IsFullscreen(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // esi
  _DWORD *v7; // rax
  unsigned int *v8; // r10
  char IsEquivalentTo; // r11
  bool v10; // zf
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)this;
  v3 = *((_DWORD *)a2 + 17);
  v4 = *((_DWORD *)a2 + 18);
  v5 = *((_DWORD *)a2 + 19);
  v6 = *((_DWORD *)a2 + 20);
  v12[0] = v3;
  v12[1] = v4;
  v12[2] = v5;
  v12[3] = v6;
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 152LL))(v2);
  IsEquivalentTo = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(v12, v7);
  if ( IsEquivalentTo )
    return IsEquivalentTo;
  if ( v3 != *v8 || v5 != v8[2] )
    goto LABEL_8;
  v10 = v4 == v8[1];
  if ( v4 > v8[1] )
  {
    if ( v6 < v8[3] && (int)abs32(v4 + v6 - v8[3] - v8[1]) <= 1 )
      return 1;
LABEL_8:
    v10 = v4 == v8[1];
  }
  if ( v10 && v6 == v8[3] && v3 > *v8 && v5 < v8[2] && (int)abs32(v3 - v8[2] - *v8 + v5) <= 1 )
    return 1;
  return IsEquivalentTo;
}
