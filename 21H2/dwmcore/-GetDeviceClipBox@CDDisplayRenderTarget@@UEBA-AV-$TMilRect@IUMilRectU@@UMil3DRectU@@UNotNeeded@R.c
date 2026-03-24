/*
 * XREFs of ?GetDeviceClipBox@CDDisplayRenderTarget@@UEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18016E8B0
 * Callers:
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018CAE0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetDeviceClipBox(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // eax

  if ( *(_BYTE *)(a1 + 11073) )
  {
    v2 = *(_DWORD *)(a1 + 18136) - *(_DWORD *)(a1 + 18128);
    v3 = *(_DWORD *)(a1 + 18140) - *(_DWORD *)(a1 + 18132);
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = v2;
    *(_DWORD *)(a2 + 12) = v3;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 18144);
  }
  return a2;
}
