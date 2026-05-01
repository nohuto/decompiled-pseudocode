/*
 * XREFs of ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x18046C810
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C73C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18046C574 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapper.c)
 *     ?get@?$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AXXZ@Z @ 0x18046CDE8 (-get@-$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AX.c)
 */

void __fastcall CCriticalFailureTelemetry::ReportFailure_(
        CCriticalFailureTelemetry *this,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        bool a7)
{
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF
  __int64 v22; // [rsp+80h] [rbp+10h] BYREF

  v22 = (__int64)this;
  v10 = wil::details::static_lazy<CCriticalFailureLogging>::get(
          this,
          _lambda_67a4077a10b7c017ab26ed22531248f2_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v10 + 8) > 5u )
  {
    v11 = tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x200000000000LL);
    v15 = 0LL;
    if ( v11 )
    {
      v16 = 0LL;
      if ( a6 )
        v16 = *a6;
      if ( a5 )
        v15 = *a5;
      LOBYTE(v22) = a7;
      v19 = v16;
      v20 = v15;
      v17 = a4;
      v21 = (__int64)a3;
      v18 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v14,
        (unsigned __int8 *)dword_18052752D,
        v12,
        v13,
        (__int64)&v18,
        (const WCHAR **)&v21,
        (__int64)&v17,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v22);
    }
  }
}
