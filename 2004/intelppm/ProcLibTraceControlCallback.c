/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0026590
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001524 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0007F6C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C00081A0 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePepPerfDomain @ 0x1C000833C (ProcLibTracePepPerfDomain.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C0020778 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceSummary2 @ 0x1C0023958 (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C002AAE0 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C002AD28 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C002AFD4 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C002B358 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C002B700 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C002B944 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C002BB68 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002BD80 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C002BE00 (ProcLibTracePccErrata.c)
 *     ProcLibTracePccSummary @ 0x1C002BE2C (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002BF1C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C002C300 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C002C32C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C002C4A8 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C002C71C (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C002C830 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C002CAE0 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C002CD20 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C002CE8C (ProcLibTraceSummary.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002D188 (ProcLibTraceThrottleStatesErrata.c)
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
    v4(WdfDriverGlobals, qword_1C001C418, 0LL, MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C001C460; i != &qword_1C001C460; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (unsigned __int8 *)qword_1C001C440; j != (unsigned __int8 *)&qword_1C001C440; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown((__int64)j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_1C001C8B0 & 0x7F077) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTraceIdleStatesErrata(v5);
    }
    if ( (dword_1C001C8B0 & 0x70000000) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTracePerfStatesErrata(v5);
    }
    if ( (dword_1C001C8B0 & 0x3300000) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTraceThrottleStatesErrata(v5);
    }
    if ( dword_1C001C8B0 < 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTracePccErrata(v5);
    }
    InitializeEnumerationContext((__int64)&qword_1C001C430, 32, (__int64)v20);
    ProcLibTraceGetPlatformIdleStates(1);
    LOBYTE(v8) = 1;
    ProcLibTracePlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTraceCoordinatedIdleStates(v9);
    v10 = (_DWORD *)qword_1C001C9D8;
    if ( qword_1C001C9D8 )
    {
      v11 = 0LL;
      if ( *(_DWORD *)qword_1C001C9D8 )
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
      v18(WdfDriverGlobals, qword_1C001C418);
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
        qword_1C001C418,
        0LL);
    }
    v18(WdfDriverGlobals, qword_1C001C418);
  }
}
