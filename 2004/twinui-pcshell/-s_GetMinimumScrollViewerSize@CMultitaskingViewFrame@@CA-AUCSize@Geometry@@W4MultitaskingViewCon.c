/*
 * XREFs of ?s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA?AUCSize@Geometry@@W4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEBU23@@Z @ 0x18039BC6C
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1803996C0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x18039A300 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 */

_DWORD *__fastcall CMultitaskingViewFrame::s_GetMinimumScrollViewerSize(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // r11
  int v7; // ecx
  char v8; // r10

  v5 = ThumbnailHeight::GetForScreenHeight((ThumbnailHeight *)(a3 + 80), *(_DWORD *)(a4 + 4));
  v7 = v5
     + *(_DWORD *)(v6 + 124)
     + *(_DWORD *)(v6 + 160)
     + *(_DWORD *)(v6 + 164)
     + *(_DWORD *)(v6 + 176)
     + *(_DWORD *)(v6 + 180);
  a1[1] = v7;
  *a1 = (int)((double)v5 * *(double *)(v6 + 112));
  if ( (v8 & 8) != 0 )
    a1[1] = v7 + *(_DWORD *)(v6 + 380) + *(_DWORD *)(v6 + 384) + *(_DWORD *)(v6 + 396);
  return a1;
}
