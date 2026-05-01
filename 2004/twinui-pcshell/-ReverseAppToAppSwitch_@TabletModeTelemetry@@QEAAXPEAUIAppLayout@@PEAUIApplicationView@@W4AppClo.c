/*
 * XREFs of ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x1803FAFEC
 * Callers:
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1803F3080 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1803F30D4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1803F5250 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeTelemetry::ReverseAppToAppSwitch_(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // r14d
  bool v8; // r15
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rbx
  const WCHAR *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h] BYREF
  LPCWSTR pszPath; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+B0h] [rbp+30h] BYREF
  WINBOOL fPending; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+40h] BYREF

  v22 = a1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v8 = (*(int (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 152LL))(a2, a3, &v17, 0LL) >= 0;
  pszPath = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v20 = -1LL;
  v21 = -1LL;
  (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 136LL))(a3, &pszPath);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1805CD228;
    qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
    qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v9);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
  }
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
  {
    LODWORD(v24) = v7;
    LODWORD(v15) = a4;
    LOBYTE(v22) = v8;
    v11 = &szAgent;
    if ( pszPath )
      v11 = pszPath;
    v18 = (__int64)VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v11);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_180522434,
      v12,
      v13,
      (const WCHAR **)&v18,
      (__int64)&v22,
      (__int64)&v15,
      (__int64)&v24);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
}
