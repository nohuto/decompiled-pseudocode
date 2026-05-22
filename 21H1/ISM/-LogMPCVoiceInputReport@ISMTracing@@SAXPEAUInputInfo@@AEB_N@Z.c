/*
 * XREFs of ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800843C4
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800841D0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x180082D60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@-$_tlgWriteTemplat.c)
 */

void __fastcall ISMTracing::LogMPCVoiceInputReport(struct InputInfo *a1, const bool *a2)
{
  LPVOID v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+60h] [rbp-20h] BYREF
  int v8; // [rsp+64h] [rbp-1Ch] BYREF
  int v9; // [rsp+68h] [rbp-18h] BYREF
  int v10; // [rsp+6Ch] [rbp-14h] BYREF
  _DWORD v11[4]; // [rsp+70h] [rbp-10h] BYREF
  char v12; // [rsp+A0h] [rbp+20h] BYREF
  int v13; // [rsp+B0h] [rbp+30h] BYREF
  int v14; // [rsp+B8h] [rbp+38h] BYREF

  v4 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)a1,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 1LL) )
  {
    v13 = *((_DWORD *)a1 + 176);
    v14 = *((_DWORD *)a1 + 17);
    v7 = *((_DWORD *)a1 + 16);
    v8 = *((_DWORD *)a1 + 18);
    v12 = *a2;
    v9 = *((_DWORD *)a1 + 2);
    v10 = *((_DWORD *)a1 + 1);
    v11[0] = *(_DWORD *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_1801C972E,
      v5,
      v6,
      (__int64)v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v12,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v14,
      (__int64)&v13);
  }
}
