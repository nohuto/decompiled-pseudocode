/*
 * XREFs of ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x18016084C
 * Callers:
 *     ??$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSPATIAL_NODE_ID@@AEBJ@Z @ 0x18014F9E4 (--$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSP.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D5004 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167EDC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
        HolographicDriverClientContinuousTrace *this,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  HolographicDriverClientContinuousTrace *v8; // [rsp+40h] [rbp+8h] BYREF
  const struct SPATIAL_NODE_ID *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = this;
  v5 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
         this,
         _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v5 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 2LL) )
  {
    LODWORD(v8) = a3;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v7,
      byte_1801D048B,
      v6,
      v7,
      (__int64 *)&v9,
      (__int64)&v8);
  }
}
