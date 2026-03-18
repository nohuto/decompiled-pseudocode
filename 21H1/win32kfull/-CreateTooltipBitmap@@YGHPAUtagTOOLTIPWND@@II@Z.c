/*
 * XREFs of ?CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z @ 0x1A073D
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     ?DestroyTooltipBitmap@@YGXPAUtagTOOLTIPWND@@@Z @ 0xD4BE4 (-DestroyTooltipBitmap@@YGXPAUtagTOOLTIPWND@@@Z.c)
 *     ?GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z @ 0xE4980 (-GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z.c)
 */

int __userpurge CreateTooltipBitmap@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagTOOLTIPWND *a3,
        unsigned int a4,
        unsigned int a5)
{
  HDC TooltipDC; // esi
  int v8; // eax

  if ( !a2[3] )
    return 0;
  DestroyTooltipBitmap(a2);
  TooltipDC = GetTooltipDC(a2, 0);
  a2[4] = GreCreateCompatibleBitmapInternal(TooltipDC, a1, (int)a3, 0, 0, 0);
  _ReleaseDC(TooltipDC);
  v8 = a2[4];
  if ( !v8 )
    return 0;
  GreSetBitmapOwner(v8, 0);
  GreSelectBitmap(a2[3], a2[4]);
  return 1;
}
