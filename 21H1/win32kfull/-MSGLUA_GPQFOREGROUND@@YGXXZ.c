/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904
 * Callers:
 *     _EditionForegroundQAccessibleToMouseProducer@16 @ 0xA1E12 (_EditionForegroundQAccessibleToMouseProducer@16.c)
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     _xxxInternalKeyEventDirect@20 @ 0xAFD06 (_xxxInternalKeyEventDirect@20.c)
 *     _EditionIsGpqForegroundAccessibleCurrent@4 @ 0xAFEFA (_EditionIsGpqForegroundAccessibleCurrent@4.c)
 *     _EditionChangeForegroundQueueForMouseInput@8 @ 0x147787 (_EditionChangeForegroundQueueForMouseInput@8.c)
 *     _EditionLLMouseButtonHook@28 @ 0x1479C6 (_EditionLLMouseButtonHook@28.c)
 *     _EditionLLMouseWheelHook@24 @ 0x147BBA (_EditionLLMouseWheelHook@24.c)
 *     _EditionReportMouseBreakToAccessibility@24 @ 0x147CA6 (_EditionReportMouseBreakToAccessibility@24.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

void __stdcall MSGLUA_GPQFOREGROUND()
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  EtwTraceUIPIInputError(
    ThreadWin32Thread,
    0,
    _gpqForeground,
    *(_DWORD *)(_gpqForeground + 316),
    *(_DWORD *)(_gpqForeground + 320),
    1);
}
