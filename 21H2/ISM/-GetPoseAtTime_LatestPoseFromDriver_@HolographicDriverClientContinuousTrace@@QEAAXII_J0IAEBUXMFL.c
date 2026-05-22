/*
 * XREFs of ?GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x18015E118
 * Callers:
 *     ??$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEAIAEAKAEB_J2AEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@Z @ 0x18014EB0C (--$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U_tlgWrapperPtrSize@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4334AEBU_tlgWrapperPtrSize@@@Z @ 0x1801510F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U_tlgWrapperPtrSize@@@-$_.c)
 *     ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x180160630 (-IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167EDC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_LatestPoseFromDriver_(
        HolographicDriverClientContinuousTrace *this,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        const struct DirectX::XMFLOAT4X3 *a7)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+68h] [rbp+Fh] BYREF
  int v15; // [rsp+6Ch] [rbp+13h] BYREF
  __int64 v16; // [rsp+70h] [rbp+17h] BYREF
  __int64 v17; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+27h] BYREF
  __int64 v19; // [rsp+88h] [rbp+2Fh] BYREF
  int v20; // [rsp+90h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+4Fh] BYREF

  v21 = (__int64)this;
  if ( HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled((unsigned __int64)this) )
  {
    v11 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
            v10,
            _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v11 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v11 + 8), 0x800000LL) )
    {
      v19 = (__int64)a7;
      LODWORD(v21) = a6;
      v16 = a5;
      v20 = 48;
      v17 = a4;
      v14 = a3;
      v15 = a2;
      v18 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize>(
        v13,
        byte_1801D171B,
        v12,
        v13,
        (__int64)&v18,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v21,
        &v19);
    }
  }
}
