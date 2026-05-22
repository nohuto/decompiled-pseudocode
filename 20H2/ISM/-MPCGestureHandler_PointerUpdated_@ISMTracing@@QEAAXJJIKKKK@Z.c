/*
 * XREFs of ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x18007B7E0
 * Callers:
 *     ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x180079E5C (--$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800298C0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x180034F60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUpdated_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // rcx
  LPVOID v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v17; // [rsp+68h] [rbp-18h] BYREF
  int v18; // [rsp+6Ch] [rbp-14h] BYREF
  int v19; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v20[3]; // [rsp+74h] [rbp-Ch] BYREF
  ISMTracing *v21; // [rsp+90h] [rbp+10h] BYREF

  v21 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v12 = wil::details::static_lazy<ISMTracing>::get(
            v11,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v12 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v12 + 1), 1LL) )
    {
      LODWORD(v21) = a8;
      v15 = a7;
      v16 = a6;
      v17 = a5;
      v18 = a4;
      v19 = a3;
      v20[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v14,
        (int)&unk_1801C7EF6,
        v13,
        v14,
        (__int64)v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v21);
    }
  }
}
