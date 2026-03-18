/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002F194
 * Callers:
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001970 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002C58C (-UserInitialize@@YAJXZ.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C002DD30 (xxxUpdatePerUserAccessPackSettings.c)
 *     NtUserGetHDevName @ 0x1C002F050 (NtUserGetHDevName.c)
 *     DrvGetHdevName @ 0x1C002F160 (DrvGetHdevName.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C003147C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     FastGetProfileStringW @ 0x1C007A050 (FastGetProfileStringW.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00CEB18 (-GetSpriteFillColor@@YAKXZ.c)
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C01275A0 (EtwTraceAuditApiSetWindowsHookEx.c)
 *     WinSqmAddToStreamEx @ 0x1C013EA50 (WinSqmAddToStreamEx.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C013FF98 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C016625C (rimReadSingleDigitizerToMonitorMappings.c)
 *     InitCreateUserSubsystem @ 0x1C0294B40 (InitCreateUserSubsystem.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00CEDD8 (RtlStringCopyWorkerW.c)
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
