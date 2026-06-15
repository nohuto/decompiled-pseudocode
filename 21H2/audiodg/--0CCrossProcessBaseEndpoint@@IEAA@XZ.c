/*
 * XREFs of ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140016CFC
 * Callers:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140016C0C (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14005B3D4 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x14005B448 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140016E90 (-Clear@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchE.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140016EC8 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(
        CCrossProcessBaseEndpoint *this)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rcx

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  ATL::CCriticalSection::CCriticalSection((CCrossProcessBaseEndpoint *)((char *)this + 16));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 25) = &CCrossProcessEndpointTraceLogger::`vftable';
  *((GUID *)this + 13) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 33) = (char *)this + 208;
  *((_OWORD *)this + 17) = 0LL;
  *((_OWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 28) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  *((_QWORD *)this + 39) = (char *)this + 224;
  *((_WORD *)this + 160) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 38) = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  *((_BYTE *)this + 336) = 0;
  *((_QWORD *)this + 43) = 10000LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 5000LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 30000LL;
  *((_QWORD *)this + 49) = 0LL;
  TickCount64 = GetTickCount64();
  *((_BYTE *)this + 336) = 0;
  *((_QWORD *)this + 46) = TickCount64;
  *((_QWORD *)this + 47) = TickCount64;
  *((_QWORD *)this + 49) = TickCount64;
  CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Clear((char *)this + 304);
  v3 = *((_QWORD *)this + 39);
  if ( v3 )
    (*(void (__fastcall **)(__int64, char *, char *, char *))(*(_QWORD *)v3 + 40LL))(
      v3,
      (char *)this + 336,
      (char *)this + 368,
      (char *)this + 376);
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 1;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return this;
}
