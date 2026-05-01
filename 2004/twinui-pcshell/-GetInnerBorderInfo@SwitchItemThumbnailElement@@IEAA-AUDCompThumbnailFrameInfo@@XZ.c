/*
 * XREFs of ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1803B63F0
 * Callers:
 *     ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x1803B5FE0 (-CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbn.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1803B6BA0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x180067BE0 (-IsHighContrast@@YAHXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1803A1120 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1803AF778 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::GetInnerBorderInfo(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ecx

  *(_QWORD *)a2 = *(unsigned int *)(a1 + 408);
  *(_DWORD *)(a2 + 8) = 1065353216;
  LOBYTE(v3) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a1);
  if ( v3 )
  {
    v4 = 179;
LABEL_5:
    *(_DWORD *)(a2 + 4) = CImmersiveColor::GetColor(v4);
    return a2;
  }
  if ( (unsigned int)IsHighContrast() )
  {
    v4 = 181;
    goto LABEL_5;
  }
  return a2;
}
