/*
 * XREFs of ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800967AC
 * Callers:
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x180094590 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800902C0 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180091A6C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18009239C (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 */

HRESULT __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Added_(
        __int64 a1,
        int a2,
        int a3,
        const unsigned __int16 *a4)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  int v13; // [rsp+48h] [rbp-19h] BYREF
  int v14; // [rsp+4Ch] [rbp-15h] BYREF
  __int64 v15; // [rsp+50h] [rbp-11h] BYREF
  __int64 v16; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v17[8]; // [rsp+68h] [rbp+7h] BYREF
  HSTRING v18; // [rsp+70h] [rbp+Fh]
  HSTRING v19; // [rsp+88h] [rbp+27h]
  HSTRING v20; // [rsp+90h] [rbp+2Fh]
  HSTRING v21; // [rsp+98h] [rbp+37h]
  HSTRING string; // [rsp+A0h] [rbp+3Fh]

  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
    (RawInputProvidersTracing::SpatialInputTelemetryProperties *)v17,
    a4);
  v8 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         v7,
         _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 4u && tlgKeywordOn(v8[1], 0x400000000000LL) )
  {
    v15 = (__int64)a4;
    v13 = a3;
    v14 = a2;
    v16 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      (unsigned __int8 *)dword_1801CA718,
      v9,
      v10,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v13,
      (const wchar_t **)&v15);
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v21);
  v21 = 0LL;
  WindowsDeleteString(v20);
  v20 = 0LL;
  WindowsDeleteString(v19);
  v19 = 0LL;
  return WindowsDeleteString(v18);
}
