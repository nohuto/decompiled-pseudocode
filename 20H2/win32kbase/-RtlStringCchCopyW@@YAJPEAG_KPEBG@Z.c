/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0032934
 * Callers:
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001970 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     NtUserGetHDevName @ 0x1C0031A40 (NtUserGetHDevName.c)
 *     DrvGetHdevName @ 0x1C0032900 (DrvGetHdevName.c)
 *     FastGetProfileStringW @ 0x1C00350D0 (FastGetProfileStringW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C008C770 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0090D1C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00CE2E4 (-GetSpriteFillColor@@YAKXZ.c)
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C0125250 (EtwTraceAuditApiSetWindowsHookEx.c)
 *     WinSqmAddToStreamEx @ 0x1C013C700 (WinSqmAddToStreamEx.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C013DC48 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C0163CFC (rimReadSingleDigitizerToMonitorMappings.c)
 *     InitCreateUserSubsystem @ 0x1C0292A58 (InitCreateUserSubsystem.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00CE5A4 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

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
    return (unsigned int)RtlStringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
