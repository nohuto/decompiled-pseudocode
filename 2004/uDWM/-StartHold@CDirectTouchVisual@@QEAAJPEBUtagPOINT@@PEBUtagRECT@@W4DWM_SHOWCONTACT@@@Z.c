/*
 * XREFs of ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180045E80
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180045954 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18002B984 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180045F0C (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800460C0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDirectTouchVisual::StartHold(__int64 a1, const struct tagPOINT *a2, const struct tagRECT *a3)
{
  float v6; // xmm3_4
  double v7; // xmm1_8

  CDirectTouchVisual::StopTimer((CDirectTouchVisual *)a1);
  v6 = *(float *)(a1 + 360);
  *(_DWORD *)(a1 + 368) = -1;
  *(_BYTE *)(a1 + 400) = 0;
  CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, v6);
  CImage::SetBitmapSource(*(CImage **)(a1 + 408), *(struct CBitmapSource **)(a1 + 416));
  if ( (*(_BYTE *)(a1 + 368) & 8) != 0 )
    v7 = DOUBLE_1_0;
  else
    v7 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v7);
  return 0LL;
}
