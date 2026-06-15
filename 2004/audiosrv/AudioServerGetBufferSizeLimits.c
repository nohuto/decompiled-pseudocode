/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x1800DEB40
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18004B3F0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetBufferSizeLimits(
        __int64 a1,
        __int64 a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  struct _TP_TIMER **v10; // rax
  __int64 v11; // r8
  int v12; // edi
  int KSFormatFromWFXFormat; // eax
  void *v14; // rsi
  _QWORD *v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h]
  LPVOID pv; // [rsp+50h] [rbp-11h] BYREF
  struct _TP_TIMER *v20[8]; // [rsp+58h] [rbp-9h] BYREF

  v6 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  v16 = 0LL;
  v10 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               a1,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(v20, v10[1], v11, (struct _TP_TIMER *)L"AudioServerGetBufferSizeLimits");
  v12 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                             + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v16);
  if ( v12 < 0 )
    goto LABEL_11;
  v6 = v16[2];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v6 + 24LL))(
          v6,
          &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
          1LL);
  if ( v12 < 0 )
    goto LABEL_11;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v17);
  if ( v12 < 0 )
    goto LABEL_11;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v14 = pv;
  v12 = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, pv, a5, a6);
    if ( v12 >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v14 )
    CoTaskMemFree(v14);
  if ( v12 < 0 )
LABEL_11:
    AudSrvTraceLoggingErrorHelper("AudioServerGetBufferSizeLimits", 4614, v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v20);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v12;
}
