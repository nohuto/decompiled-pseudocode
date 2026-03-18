/*
 * XREFs of ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C01A84E8
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A83D0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8550 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8790 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8980 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8BF0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8D10 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsClearKeyStateToggle(unsigned __int8 a1)
{
  unsigned __int64 v1; // rdx

  v1 = (unsigned __int64)a1 >> 2;
  if ( gpqForeground )
    *(_BYTE *)(v1 + gpqForeground + 228) &= ~(1 << (2 * (a1 & 3) + 1));
  *((_BYTE *)&gafAsyncKeyState + v1) &= ~(1 << (2 * (a1 & 3) + 1));
}
