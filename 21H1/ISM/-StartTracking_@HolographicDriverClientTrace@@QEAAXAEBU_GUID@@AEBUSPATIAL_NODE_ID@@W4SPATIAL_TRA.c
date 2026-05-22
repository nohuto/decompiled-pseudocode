/*
 * XREFs of ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180165164
 * Callers:
 *     ?OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x180161600 (-OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180150838 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTem.c)
 *     ?SpatialTrackingStateToString@@YAPEBDW4SPATIAL_TRACKING_STATE@@@Z @ 0x1801646AC (-SpatialTrackingStateToString@@YAPEBDW4SPATIAL_TRACKING_STATE@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::StartTracking_(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = a1;
  v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         a1,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v7 + 8) > 4u )
  {
    LOBYTE(v7) = tlgKeywordOn(*(_QWORD *)(v7 + 8), 2LL);
    if ( (_BYTE)v7 )
    {
      v15 = qword_180209328;
      v12 = (__int64)SpatialTrackingStateToString(a4);
      v13 = a3;
      v14 = a2;
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
                     v10,
                     byte_1801D05E2,
                     v8,
                     v9,
                     &v14,
                     &v13,
                     (const unsigned __int16 **)&v12,
                     (__int64)&v15);
    }
  }
  return v7;
}
