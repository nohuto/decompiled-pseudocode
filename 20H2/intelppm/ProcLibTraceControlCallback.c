/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0027930
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001524 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0007F5C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0008190 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePepPerfDomain @ 0x1C000832C (ProcLibTracePepPerfDomain.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C0021AC8 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceSummary2 @ 0x1C0024CA8 (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C002BE40 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C002C088 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C002C334 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C002C6B8 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C002CA60 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C002CCA4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C002CEC8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002D0E0 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C002D160 (ProcLibTracePccErrata.c)
 *     ProcLibTracePccSummary @ 0x1C002D18C (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002D27C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C002D660 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C002D68C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C002D808 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C002DA7C (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C002DB90 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C002DE40 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C002E080 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C002E1EC (ProcLibTraceSummary.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002E4E8 (ProcLibTraceThrottleStatesErrata.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG); // rax
  __int64 v5; // rcx
  __int64 *i; // rbx
  unsigned __int8 *j; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // zf
  void (__fastcall *v18)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v20[3]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    v19 = 0LL;
    v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504);
    memset(v20, 0, 32);
    v4(WdfDriverGlobals, qword_1C001C3E8, 0LL, MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C001C430; i != &qword_1C001C430; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (unsigned __int8 *)qword_1C001C410; j != (unsigned __int8 *)&qword_1C001C410; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown((__int64)j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_1C001C890 & 0x7F077) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTraceIdleStatesErrata(v5);
    }
    if ( (dword_1C001C890 & 0x70000000) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTracePerfStatesErrata(v5);
    }
    if ( (dword_1C001C890 & 0x3300000) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTraceThrottleStatesErrata(v5);
    }
    if ( dword_1C001C890 < 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTracePccErrata(v5);
    }
    InitializeEnumerationContext((__int64)&qword_1C001C400, 32, (__int64)v20);
    ProcLibTraceGetPlatformIdleStates(1);
    LOBYTE(v8) = 1;
    ProcLibTracePlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTraceCoordinatedIdleStates(v9);
    v10 = (_DWORD *)qword_1C001C9B8;
    if ( qword_1C001C9B8 )
    {
      v11 = 0LL;
      if ( *(_DWORD *)qword_1C001C9B8 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v10[8 * v11 + 2 + 2 * (unsigned int)v11]);
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *v10 );
      }
    }
    ResetEnumerationContext((__int64 *)v20);
    while ( 1 )
    {
      v17 = (unsigned int)EnumerateNextDevice((__int64 *)v20, &v19) == 0;
      v18 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v17 )
        break;
      v18(WdfDriverGlobals, qword_1C001C3E8);
      v12 = v19;
      ProcLibTraceProcessorRundown(v19);
      ProcLibTraceSummary(v12);
      ProcLibTraceSummary2(v12, 1);
      ProcLibTracePerfStatesRundown(v12);
      ProcLibTraceBiosPStatesRundown(v12);
      ProcLibTraceBiosCStatesRundown(v12);
      ProcLibTraceBiosTStatesRundown(v12);
      ProcLibTraceProcessorLpiRundown(v12);
      LOBYTE(v13) = 1;
      ProcLibTraceQueryCapabilities(v12, v13);
      LOBYTE(v14) = 1;
      ProcLibTraceGetProcessorIdleStates(v12, v14);
      LOBYTE(v15) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v12, v15);
      LOBYTE(v16) = 1;
      ProcLibTracePepPerfCapabilities(v12, v16);
      ProcLibTraceProcessorIds(v12);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001C3E8,
        0LL);
    }
    v18(WdfDriverGlobals, qword_1C001C3E8);
  }
}
