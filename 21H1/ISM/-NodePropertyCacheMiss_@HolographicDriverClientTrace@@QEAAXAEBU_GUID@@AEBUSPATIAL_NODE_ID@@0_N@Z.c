/*
 * XREFs of ?NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z @ 0x1801609AC
 * Callers:
 *     ??$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0AEB_N@Z @ 0x18014FA88 (--$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrac.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180150694 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyCacheMiss_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4,
        bool a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = (__int64)this;
  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v8 + 8), 2LL) )
  {
    LODWORD(v15) = a5;
    v12 = (__int64)a3;
    v13 = (__int64)a4;
    v14 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v11,
      byte_1801D189B,
      v9,
      v10,
      &v14,
      &v13,
      &v12,
      (__int64)&v15);
  }
}
