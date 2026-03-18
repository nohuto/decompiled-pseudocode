/*
 * XREFs of ?GetDeviceClipBox@CLegacyRenderTarget@@UEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C3E20
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7960 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018423C (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetDeviceClipBox(__int64 a1, __int64 a2)
{
  int v3; // r8d
  int v4; // eax

  if ( *(_BYTE *)(a1 + 11369) )
  {
    v3 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
    v4 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = v3;
    *(_DWORD *)(a2 + 12) = v4;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 64);
  }
  return a2;
}
