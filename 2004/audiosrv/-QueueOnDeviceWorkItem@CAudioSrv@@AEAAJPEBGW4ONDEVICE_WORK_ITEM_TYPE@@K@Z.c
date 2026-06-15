/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800BA86C
 * Callers:
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x1800B9D70 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x1800B9D90 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x1800B9DB0 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180018160 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800B822C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x1800B8FDC (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, _WORD *a2, int a3, int a4)
{
  __int64 v7; // rsi
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  void *v14; // rax
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  ATL::CAtlException *v17; // rbx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-38h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v20; // [rsp+58h] [rbp-20h] BYREF
  int v22; // [rsp+90h] [rbp+18h] BYREF

  v7 = a1;
  v8 = 0;
  v9 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               a1,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v9 > 4u )
  {
    v22 = a4;
    LODWORD(v18) = a3;
    v19[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      byte_1801670C5,
      v10,
      v11,
      v19,
      (__int64)&v18,
      (__int64)&v22);
  }
  if ( a3 == 1 )
  {
    v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    v19[0] = v12;
    if ( v12 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem((__int64)v12, a2, 1);
      *v13 = &COnDeviceStateChangedWorkItem::`vftable';
      *((_DWORD *)v13 + 8) = a4;
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v14 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19[0] = v14;
    if ( v14 )
      v13 = (_QWORD *)COnDeviceWorkItem::COnDeviceWorkItem((__int64)v14, a2, a3);
    else
      v13 = 0LL;
  }
  v19[0] = v13;
  if ( !v13 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v13[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v13)(v13, 1LL);
LABEL_19:
    v8 = -2147024882;
    goto LABEL_20;
  }
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v13)(v13, 1LL);
    return (unsigned int)v8;
  }
  v15 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  v18 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 112));
  v19[1] = (void *)(v7 + 112);
  v8 = 0;
  try
  {
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
      (__int64 *)(v7 + 152),
      (__int64)v19);
  }
  catch ( ATL::CAtlException *v20 )
  {
    v17 = v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _o__resetstkoflw();
    v22 = *(_DWORD *)v17;
    v7 = a1;
    v8 = v22;
    v15 = v18;
  }
  if ( v15 )
    LeaveCriticalSection(v15);
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *(_QWORD *)(v7 + 200));
LABEL_20:
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1693, v8);
  return (unsigned int)v8;
}
