/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YG_N_NABUtagUIPI_INFO_INT@@@Z @ 0x146B56
 * Callers:
 *     _EditionLLMouseButtonHook@28 @ 0x1479C6 (_EditionLLMouseButtonHook@28.c)
 *     _EditionLLMouseWheelHook@24 @ 0x147BBA (_EditionLLMouseWheelHook@24.c)
 *     _EditionReportMouseBreakToAccessibility@24 @ 0x147CA6 (_EditionReportMouseBreakToAccessibility@24.c)
 * Callees:
 *     <none>
 */

char __fastcall IsGpqForegroundAccessibleOnInputThread(char a1, int a2)
{
  if ( a1 && _gpqForeground && !*(_DWORD *)(a2 + 8) )
    return CheckAccess(a2, _gpqForeground + 316);
  else
    return 1;
}
