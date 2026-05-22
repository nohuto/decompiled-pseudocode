/*
 * XREFs of ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x18015C848
 * Callers:
 *     ??$GetDynamicNodeForDevice@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAPEB_WAEAUDynamicNodeInfo@234@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAPEB_WAEAUDynamicNodeInfo@234@@Z @ 0x18014E890 (--$GetDynamicNodeForDevice@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@.c)
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x18015CF20 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@_W@@U2@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@_W@@4AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180150EB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@_W@@U2@U-$_tlgWrapper.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F94 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeForDevice_(
        HolographicDriverClientTrace *this,
        __int64 a2,
        const struct _GUID *a3,
        const wchar_t *a4,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+10h] BYREF

  v17 = (__int64)this;
  v8 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v8 + 8), 0x400000000000LL) )
  {
    v13 = (__int64)a5;
    v12 = 0x2000000LL;
    v14 = (__int64)a4;
    LODWORD(v17) = *((_DWORD *)a5 + 4);
    v15 = (__int64)a3;
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<wchar_t>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned __int8 *)dword_1801D0756,
      v9,
      v10,
      (__int64)&v16,
      &v15,
      (const wchar_t **)&v14,
      &v13,
      (__int64)&v17,
      (__int64)&v12);
  }
}
