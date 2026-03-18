/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980
 * Callers:
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001820 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0012D90 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileStringW @ 0x1C00140C0 (FastGetProfileStringW.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0014D10 (-UserInitialize@@YAJXZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C001D000 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     NtUserGetHDevName @ 0x1C002DE60 (NtUserGetHDevName.c)
 *     DrvGetHdevName @ 0x1C002DF70 (DrvGetHdevName.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0069480 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?SampleRandomPickEnd@MousePerfSummary@@AEAAXXZ @ 0x1C0069764 (-SampleRandomPickEnd@MousePerfSummary@@AEAAXXZ.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00CE018 (-GetSpriteFillColor@@YAKXZ.c)
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C012D590 (EtwTraceAuditApiSetWindowsHookEx.c)
 *     WinSqmAddToStreamEx @ 0x1C0144DA0 (WinSqmAddToStreamEx.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C01462E8 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C016C5AC (rimReadSingleDigitizerToMonitorMappings.c)
 *     InitCreateUserSubsystem @ 0x1C029A6C4 (InitCreateUserSubsystem.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00CE2D8 (RtlStringCopyWorkerW.c)
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
