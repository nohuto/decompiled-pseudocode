/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180009568
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800093E0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800256D0 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x180001544 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001544.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rcx
  int v5; // [rsp+B8h] [rbp-80h] BYREF
  int v6; // [rsp+BCh] [rbp-7Ch] BYREF
  int v7; // [rsp+C0h] [rbp-78h] BYREF
  int v8; // [rsp+C4h] [rbp-74h] BYREF
  int v9; // [rsp+C8h] [rbp-70h] BYREF
  const unsigned __int16 *v10; // [rsp+D0h] [rbp-68h] BYREF
  const WCHAR *v11; // [rsp+D8h] [rbp-60h] BYREF
  const unsigned __int16 *v12; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v14; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+100h] [rbp-38h] BYREF
  __int64 v17; // [rsp+108h] [rbp-30h] BYREF
  __int64 v18; // [rsp+110h] [rbp-28h] BYREF
  __int64 v19; // [rsp+118h] [rbp-20h] BYREF
  int v20; // [rsp+138h] [rbp+0h] BYREF
  int v21; // [rsp+148h] [rbp+10h] BYREF
  int v22; // [rsp+150h] [rbp+18h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 1);
  if ( *v4 > 2u )
  {
    v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v20 = *((_DWORD *)a2 + 15);
    v21 = *((_DWORD *)a2 + 2);
    v11 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v22 = *((_DWORD *)a2 + 24);
    v13 = *((_QWORD *)a2 + 11);
    v14 = *((_QWORD *)a2 + 10);
    v5 = *((_DWORD *)a2 + 18);
    v15 = *((_QWORD *)a2 + 8);
    v6 = *((_DWORD *)a2 + 6);
    v16 = *((_QWORD *)a2 + 2);
    v7 = *(_DWORD *)a2;
    v17 = *((_QWORD *)a2 + 15);
    v8 = *((_DWORD *)a2 + 14);
    v18 = *((_QWORD *)a2 + 6);
    v9 = *((_DWORD *)a2 + 1);
    v19 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)v4,
      (unsigned __int8 *)dword_180174986,
      0LL,
      a4,
      (__int64)&v19,
      (__int64)&v9,
      (const unsigned __int16 **)&v18,
      (__int64)&v8,
      (const unsigned __int16 **)&v17,
      (__int64)&v7,
      (const WCHAR **)&v16,
      (__int64)&v6,
      (const unsigned __int16 **)&v15,
      (__int64)&v5,
      (const unsigned __int16 **)&v14,
      (const WCHAR **)&v13,
      (__int64)&v22,
      &v12,
      &v11,
      (__int64)&v21,
      (__int64)&v20,
      &v10);
  }
}
