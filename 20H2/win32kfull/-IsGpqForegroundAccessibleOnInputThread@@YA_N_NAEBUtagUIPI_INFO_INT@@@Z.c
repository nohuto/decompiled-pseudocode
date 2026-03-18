/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01D8190
 * Callers:
 *     EditionLLMouseButtonHook @ 0x1C00780A0 (EditionLLMouseButtonHook.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0121330 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01D92D0 (EditionLLMouseWheelHook.c)
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
