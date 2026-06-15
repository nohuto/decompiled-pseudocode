/*
 * XREFs of AudioServerIsRawStreamSupported @ 0x1800E0AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011AE08 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

__int64 __fastcall AudioServerIsRawStreamSupported(
        __int64 a1,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        _DWORD *a4)
{
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  CEndpointCharacteristics *v11; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"AudioServerIsRawStreamSupported");
  if ( (unsigned int)a3 > eKeywordDetectorConnector )
  {
    v9 = -2147024809;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("AudioServerIsRawStreamSupported", 4506, v9);
    goto LABEL_4;
  }
  v9 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                              + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v11);
  if ( v9 < 0 )
    goto LABEL_3;
  *a4 = CEndpointCharacteristics::AllowRawStreamCreation(v11, a3);
LABEL_4:
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v11 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v9;
}
