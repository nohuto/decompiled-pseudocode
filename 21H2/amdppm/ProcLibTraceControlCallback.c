/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C001E5F0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001650 (EnumerateNextDevice.c)
 *     InitializeEnumerationContext @ 0x1C0001ABC (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0001AD4 (ResetEnumerationContext.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0003528 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0003644 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0003730 (ProcLibTracePepPerfDomain.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001E008 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1C001E2B8 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001E3CC (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001E808 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001E8A8 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiStates @ 0x1C001EC50 (ProcLibTraceCoordinatedLpiStates.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001EC9C (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTracePccSummary @ 0x1C001EF10 (ProcLibTracePccSummary.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001F000 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001F240 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001F3AC (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001F63C (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001F8E8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001FB0C (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C001FD54 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x1C001FED0 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C00201CC (ProcLibTraceSummary2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00205D0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002145C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C00214DC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0021600 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002162C (ProcLibTraceThrottleStatesErrata.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  __int64 *i; // rbx
  unsigned __int8 *j; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // zf
  void (__fastcall *v16)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    v17 = 0LL;
    memset(v18, 0, 32);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00143F8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C0014440; i != &qword_1C0014440; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (unsigned __int8 *)qword_1C0014420; j != (unsigned __int8 *)&qword_1C0014420; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown((__int64)j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_1C00148A0 & 0x7F077) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceIdleStatesErrata(v4);
    }
    if ( (dword_1C00148A0 & 0x70000000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePerfStatesErrata(v4);
    }
    if ( (dword_1C00148A0 & 0x3300000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceThrottleStatesErrata(v4);
    }
    if ( dword_1C00148A0 < 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePccErrata(v4);
    }
    InitializeEnumerationContext((__int64)&qword_1C0014410, 32, (__int64)v18);
    LOBYTE(v7) = 1;
    ProcLibTraceGetPlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTracePlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTraceCoordinatedIdleStates(v9);
    ProcLibTraceCoordinatedLpiStates();
    ResetEnumerationContext(v18);
    while ( 1 )
    {
      v15 = (unsigned int)EnumerateNextDevice(v18, &v17) == 0;
      v16 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v15 )
        break;
      v16(WdfDriverGlobals, qword_1C00143F8);
      v10 = v17;
      ProcLibTraceProcessorRundown(v17);
      ProcLibTraceSummary(v10);
      LOBYTE(v11) = 1;
      ProcLibTraceSummary2(v10, v11);
      ProcLibTracePerfStatesRundown(v10);
      ProcLibTraceBiosPStatesRundown(v10);
      ProcLibTraceBiosCStatesRundown(v10);
      ProcLibTraceBiosTStatesRundown(v10);
      ProcLibTraceProcessorLpiRundown(v10);
      LOBYTE(v12) = 1;
      ProcLibTraceQueryCapabilities(v10, v12);
      LOBYTE(v13) = 1;
      ProcLibTraceGetProcessorIdleStates(v10, v13);
      ProcLibTraceGetProcessorIdleStatesV2(v10, 1);
      LOBYTE(v14) = 1;
      ProcLibTracePepPerfCapabilities(v10, v14);
      ProcLibTraceProcessorIds(v10);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00143F8,
        0LL);
    }
    v16(WdfDriverGlobals, qword_1C00143F8);
  }
}
