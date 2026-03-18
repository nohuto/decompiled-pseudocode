/*
 * XREFs of ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180188B50
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E619C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7A44 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180188CCC (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801909C0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180191960 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18006A044 (-GetCurrentFrameId@@YA_KXZ.c)
 */

char __fastcall CComposeTop::HasNewContent(CComposeTop *this)
{
  char v1; // bl
  unsigned __int64 CurrentFrameId; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rax

  v1 = 0;
  CurrentFrameId = GetCurrentFrameId();
  if ( *v3 == CurrentFrameId )
    return 1;
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64))v3[2];
  v3[2] = 0LL;
  if ( v5 )
    std::default_delete<CShape>::operator()(v4, v5);
  return v1;
}
