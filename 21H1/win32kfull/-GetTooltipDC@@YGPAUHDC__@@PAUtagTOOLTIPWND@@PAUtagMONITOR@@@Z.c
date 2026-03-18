/*
 * XREFs of ?GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z @ 0xE4980
 * Callers:
 *     ?InitTooltipAnimation@@YGXPAUtagTOOLTIPWND@@@Z @ 0xE4948 (-InitTooltipAnimation@@YGXPAUtagTOOLTIPWND@@@Z.c)
 *     ?CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z @ 0x1A073D (-CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0923 (-TooltipAnimate@@YGHPAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 * Callees:
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 */

HDC __fastcall GetTooltipDC(_DWORD *a1, int a2)
{
  HDC DCEx; // edi
  unsigned __int16 v5; // ax
  int DPIMETRICSForDpi; // eax

  DCEx = (HDC)_GetDCEx(*a1, 0, 65539);
  if ( !DCEx )
    return 0;
  if ( a2 )
    v5 = *(_WORD *)(*(_DWORD *)(a2 + 20) + 52);
  else
    v5 = *(_WORD *)(*(_DWORD *)(*a1 + 20) + 180);
  DPIMETRICSForDpi = GetDPIMETRICSForDpi((void *)v5);
  GreSelectFont(DCEx, *(_DWORD *)(DPIMETRICSForDpi + 44));
  return DCEx;
}
