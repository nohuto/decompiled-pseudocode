/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00122C0
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C7F0 (EditionCreateWindowStationEntryPoint.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C000E9D8 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C000EDA8 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C000F054 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     xxxResolveDesktop @ 0x1C00103F0 (xxxResolveDesktop.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079CA4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6658 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D6898 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D6998 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01D73B0 (UpdateWinIniInt.c)
 *     ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01D82AC (-ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z.c)
 *     ?ReadTabletButtonIndex@@YAJIPEAK@Z @ 0x1C01D8514 (-ReadTabletButtonIndex@@YAJIPEAK@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C0012318 (RtlStringVPrintfWorkerW_0.c)
 */

__int64 RtlStringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  int v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringVPrintfWorkerW_0(a1, a2, a3, (NTSTRSAFE_PCWSTR)a3, va);
  }
  return (unsigned int)v3;
}
