/*
 * XREFs of ??$RaiseSizePreferencesChanged@PEBGIAEAMAEAM@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAM2@Z @ 0x18024AA74
 * Callers:
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x1802516A0 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUS.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18024ADB0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802561FC (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

char __fastcall Win32BackedViewHostItemTelemetry::RaiseSizePreferencesChanged<unsigned short const *,unsigned int,float &,float &>(
        __int64 *a1,
        _DWORD *a2,
        float *a3,
        float *a4)
{
  __int64 v8; // rax
  _DWORD *v9; // rcx
  int v10; // ecx
  int v11; // eax
  int v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+54h] [rbp-24h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp-10h] BYREF

  v8 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
         a1,
         _lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(v8 + 8);
  if ( *v9 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v9, 0x200000000000LL);
    if ( (_BYTE)v8 )
    {
      v11 = (int)*a4;
      v16 = 0x2000000LL;
      v13 = v11;
      v14 = (int)*a3;
      LODWORD(v15) = *a2;
      v17 = *a1;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v10,
                     (int)&dword_18050A217,
                     (__int64)&v17,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v16);
    }
  }
  return v8;
}
