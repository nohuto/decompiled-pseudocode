/*
 * XREFs of ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01A6AAC
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6050 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A62F0 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C01A6324 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6370 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6410 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6550 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A65A0 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6600 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6700 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsTestKeyStateToggle(unsigned __int8 a1)
{
  int v1; // edx
  unsigned __int64 v2; // rcx
  unsigned int v3; // eax

  v1 = 1 << (2 * (a1 & 3) + 1);
  v2 = (unsigned __int64)a1 >> 2;
  if ( gpqForeground )
    v3 = *(unsigned __int8 *)(v2 + gpqForeground + 228);
  else
    v3 = *((unsigned __int8 *)&gafAsyncKeyState + v2);
  return v1 & v3;
}
