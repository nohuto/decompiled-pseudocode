/*
 * XREFs of ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1803951B4
 * Callers:
 *     ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x180394D50 (-CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbn.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x180395910 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x1800674C0 (-IsHighContrast@@YAHXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18037FED0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18038907C (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x18038E4E8 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

float *__fastcall SwitchItemThumbnailElement::GetOuterBorderInfo(__int64 a1, float *a2)
{
  int v2; // eax
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 412);
  a2[1] = 0.0;
  a2[2] = 0.0;
  *(_DWORD *)a2 = v2;
  a2[2] = HighContrastAwareOpacity<float>::operator float((float *)(a1 + 424));
  LOBYTE(v5) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a1);
  if ( v5 )
  {
    *((_DWORD *)a2 + 1) = CImmersiveColor::GetColor(0xB4u);
  }
  else if ( (unsigned int)IsHighContrast() )
  {
    a2[2] = 0.0;
  }
  return a2;
}
