/*
 * XREFs of ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800B8EA4
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800B9738 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180075F88 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x180076080 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@345@Z @ 0x1800B76B0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U2@U3@@-$_tlgWrit.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Set3DFocusTarget_(
        ISMTracing *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 TypeOfTarget; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp-8h] BYREF
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF

  v14 = (__int64)this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = wil::details::static_lazy<ISMTracing>::get(
           v5,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v7 = (_DWORD *)v6[1];
    if ( *v7 > 4u && tlgKeywordOn(v6[1], 1LL) )
    {
      TypeOfTarget = (__int64)ISMTracing::GetTypeOfTarget(a3);
      LODWORD(v14) = ISMTracing::GetPIDOfMPCTarget(a3);
      v11 = (__int64)a3;
      v12 = (__int64)ISMTracing::GetTypeOfTarget(a2);
      LODWORD(v15) = ISMTracing::GetPIDOfMPCTarget(a2);
      v13 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)v7,
        (unsigned __int8 *)dword_1801CB868,
        v8,
        v9,
        (__int64)&v13,
        (__int64)&v15,
        (const wchar_t **)&v12,
        (__int64)&v11,
        (__int64)&v14,
        (const wchar_t **)&TypeOfTarget);
    }
  }
}
