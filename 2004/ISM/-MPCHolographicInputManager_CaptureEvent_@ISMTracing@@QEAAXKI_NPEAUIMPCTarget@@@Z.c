/*
 * XREFs of ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x180076638
 * Callers:
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x180074894 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@34@Z @ 0x180074B00 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U2@@-$_tlgWriteTe.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180075A78 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x180075AD4 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x180075B70 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_CaptureEvent_(
        ISMTracing *this,
        int a2,
        unsigned int a3,
        char a4,
        struct IMPCTarget *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int PIDOfMPCTarget; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+54h] [rbp-24h] BYREF
  __int64 TypeOfTarget; // [rsp+58h] [rbp-20h] BYREF
  __int64 ProviderType; // [rsp+60h] [rbp-18h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = (__int64)this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v9 = wil::details::static_lazy<ISMTracing>::get(
           v8,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v10 = (_DWORD *)v9[1];
    if ( *v10 > 4u && tlgKeywordOn(v9[1], 1LL) )
    {
      TypeOfTarget = (__int64)ISMTracing::GetTypeOfTarget(a5);
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a5);
      LOBYTE(v17) = a4;
      ProviderType = (__int64)ISMTracing::GetProviderType(a3);
      v14 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)v10,
        (unsigned __int8 *)dword_1801C7D19,
        v11,
        v12,
        (__int64)&v14,
        (const wchar_t **)&ProviderType,
        (__int64)&v17,
        (__int64)&PIDOfMPCTarget,
        (const wchar_t **)&TypeOfTarget);
    }
  }
}
