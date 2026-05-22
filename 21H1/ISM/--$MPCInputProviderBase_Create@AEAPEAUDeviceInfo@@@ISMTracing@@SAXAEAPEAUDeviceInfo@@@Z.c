/*
 * XREFs of ??$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x18001FB54
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F9E0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18007D15C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

char __fastcall ISMTracing::MPCInputProviderBase_Create<DeviceInfo * &>(int **a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v3) = ISMTracing::IsEnabled((unsigned __int8)a1, a2);
  if ( (_BYTE)v3 )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v5 = *a1;
    LOBYTE(v3) = ISMTracing::IsEnabled(v7, v6);
    if ( (_BYTE)v3 )
    {
      v3 = wil::details::static_lazy<ISMTracing>::get(
             v8,
             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v3[1] > 4u )
      {
        LOBYTE(v3) = tlgKeywordOn(v3[1], 1LL);
        if ( (_BYTE)v3 )
        {
          v12 = v5[1];
          v13 = *v5;
          LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         v9,
                         (unsigned int)&unk_1801C9B55,
                         v9,
                         v10,
                         (__int64)&v13,
                         (__int64)&v12);
        }
      }
    }
  }
  return (char)v3;
}
