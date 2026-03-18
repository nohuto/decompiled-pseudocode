/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01D8E50
 * Callers:
 *     EditionLLMouseButtonHook @ 0x1C0043AC0 (EditionLLMouseButtonHook.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C011FF00 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9F90 (EditionLLMouseWheelHook.c)
 * Callees:
 *     <none>
 */

char __fastcall IsGpqForegroundAccessibleOnInputThread(char a1, const struct tagUIPI_INFO_INT *a2)
{
  if ( a1 && gpqForeground && !*((_DWORD *)a2 + 2) )
    return CheckAccess(a2, gpqForeground + 428LL);
  else
    return 1;
}
