/*
 * XREFs of DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___ @ 0x18047DD50
 * Callers:
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x18047E050 (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 */

HRESULT __fastcall DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___(
        HTHEME hTheme,
        HDC hdc,
        __int64 a3,
        int a4,
        LPCWSTR pszText,
        int cchText,
        DWORD dwTextFlags,
        LPRECT pRect,
        DTTOPTS *a9,
        LPARAM a10)
{
  DTTOPTS *pOptions; // r8
  _DWORD v15[20]; // [rsp+50h] [rbp-58h] BYREF

  memset_0(v15, 0, 0x48uLL);
  pOptions = (DTTOPTS *)v15;
  v15[0] = 72;
  if ( a9 )
    pOptions = a9;
  pOptions->dwFlags |= 0x3000u;
  pOptions->pfnDrawTextCallback = (DTT_CALLBACK_PROC)CCLambdaAdapter<int (*)(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,__int64),6>::Adapt<_lambda_2ae8870d6bc816a04ba0e39f1c502364_>;
  pOptions->lParam = a10;
  return DrawThemeTextEx(hTheme, hdc, 14, a4, pszText, cchText, dwTextFlags, pRect, pOptions);
}
