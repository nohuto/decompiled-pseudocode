/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800BAAF4
 * Callers:
 *     ?OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800B9D40 (-OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180018160 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800B7B08 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x1800B8FDC (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, _WORD *a2, int a3, int a4, int a5)
{
  __int64 v7; // rsi
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  void *v13; // rax
  void (__fastcall ***v14)(_QWORD, _QWORD); // rcx
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  ATL::CAtlException *v17; // rbx
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp-30h] BYREF
  void *v20; // [rsp+50h] [rbp-28h] BYREF
  ATL::CAtlException *v21; // [rsp+58h] [rbp-20h] BYREF
  int v23; // [rsp+90h] [rbp+18h] BYREF

  v23 = a3;
  v7 = a1;
  v8 = 0;
  v9 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               a1,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  v12 = a5;
  if ( *v9 > 4u )
  {
    v23 = a5;
    LODWORD(v18) = a4;
    LODWORD(v19) = 5;
    v20 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      byte_180167069,
      v10,
      v11,
      &v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v23);
  }
  v13 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v13;
  if ( v13 )
    v14 = (void (__fastcall ***)(_QWORD, _QWORD))COnDeviceWorkItem::COnDeviceWorkItem((__int64)v13, a2, 5);
  else
    v14 = 0LL;
  v20 = v14;
  if ( !v14 )
    goto LABEL_15;
  if ( !*((_DWORD *)v14[1] - 4) )
  {
    (**v14)(v14, 1LL);
LABEL_15:
    v8 = -2147024882;
    goto LABEL_16;
  }
  *((_DWORD *)v14 + 5) = v12;
  *((_DWORD *)v14 + 6) = a4;
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (**v14)(v14, 1LL);
    return (unsigned int)v8;
  }
  v15 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  v19 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 112));
  v18 = v7 + 112;
  v8 = 0;
  try
  {
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
      (__int64 *)(v7 + 152),
      (__int64)&v20);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v17 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v17;
    v7 = a1;
    v8 = v23;
    v15 = v19;
  }
  if ( v15 )
    LeaveCriticalSection(v15);
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *(_QWORD *)(v7 + 200));
LABEL_16:
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1796, v8);
  return (unsigned int)v8;
}
