/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180067070
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180066070 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180063E2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  int *v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+A0h] [rbp-9h] BYREF
  int v5; // [rsp+A4h] [rbp-5h] BYREF
  __int64 v6; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v7; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v8; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v10; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v12; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v14; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v15; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v16; // [rsp+110h] [rbp+67h] BYREF
  __int64 v17; // [rsp+120h] [rbp+77h] BYREF
  __int64 v18; // [rsp+128h] [rbp+7Fh] BYREF

  if ( **((_DWORD **)this + 1) > 2u && tlgKeywordOn(*((_QWORD *)this + 1), 0x200000000000LL) )
  {
    v7 = *((_QWORD *)v2 + 14);
    v8 = *((_QWORD *)v2 + 13);
    LODWORD(v16) = v2[24];
    v9 = *((_QWORD *)v2 + 11);
    v10 = *((_QWORD *)v2 + 10);
    LODWORD(v17) = v2[18];
    v11 = *((_QWORD *)v2 + 8);
    LODWORD(v18) = v2[6];
    v12 = *((_QWORD *)v2 + 2);
    v4 = *v2;
    v13 = *((_QWORD *)v2 + 15);
    v5 = v2[14];
    v14 = *((_QWORD *)v2 + 6);
    LODWORD(v6) = v2[1];
    v15 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
      v3,
      (unsigned __int8 *)dword_1801C8257,
      0LL,
      v3,
      (__int64)&v15,
      (__int64)&v6,
      (const unsigned __int16 **)&v14,
      (__int64)&v5,
      (const unsigned __int16 **)&v13,
      (__int64)&v4,
      (const wchar_t **)&v12,
      (__int64)&v18,
      (const unsigned __int16 **)&v11,
      (__int64)&v17,
      (const unsigned __int16 **)&v10,
      (const wchar_t **)&v9,
      (__int64)&v16,
      (const unsigned __int16 **)&v8,
      (const wchar_t **)&v7);
  }
}
