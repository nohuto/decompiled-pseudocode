/*
 * XREFs of ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x180084484
 * Callers:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x180083594 (--1MPCInputProviderBase@@UEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18007D01C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_Destroy_(ISMTracing *this, const struct DeviceInfo *a2)
{
  __int64 v3; // rcx
  LPVOID v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  ISMTracing *v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           v3,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 1LL) )
    {
      LODWORD(v7) = *((_DWORD *)a2 + 1);
      v8 = *(_DWORD *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_1801C9C91,
        v5,
        v6,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
