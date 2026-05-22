/*
 * XREFs of ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z @ 0x180020008
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001FD64 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x180074C10 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x180075AD4 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(
        ISMTracing *this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  int v7; // esi
  __int64 v8; // rcx
  LPVOID v9; // rax
  int v10; // r10d
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 ProviderType; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v14 = (__int64)this;
  v7 = a2;
  if ( ISMTracing::IsEnabled((unsigned __int8)this, a2) )
  {
    v9 = wil::details::static_lazy<ISMTracing>::get(
           v8,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v9 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v9 + 1), 1LL) )
    {
      LODWORD(v14) = a5;
      ProviderType = (__int64)ISMTracing::GetProviderType(a4);
      v13 = a3;
      LODWORD(v11) = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v10,
        (int)&dword_1801C7949,
        (__int64)&v11,
        (__int64)&v13,
        (__int64)&ProviderType,
        (__int64)&v14);
    }
  }
}
