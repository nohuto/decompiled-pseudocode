/*
 * XREFs of ?GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x18015DF10
 * Callers:
 *     ??$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEBJAEA_J1AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@Z @ 0x18014E69C (--$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x180160140 (-IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167A2C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses_(
        HolographicDriverClientContinuousTrace *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        const struct DirectX::XMFLOAT4X3 *a6)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // r10
  unsigned int v13; // [rsp+38h] [rbp-69h] BYREF
  int v14; // [rsp+3Ch] [rbp-65h] BYREF
  __int64 v15; // [rsp+40h] [rbp-61h] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+78h] [rbp-29h]
  int v20; // [rsp+80h] [rbp-21h]
  int v21; // [rsp+84h] [rbp-1Dh]
  int *v22; // [rsp+88h] [rbp-19h]
  int v23; // [rsp+90h] [rbp-11h]
  int v24; // [rsp+94h] [rbp-Dh]
  __int64 *v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+A0h] [rbp-1h]
  int v27; // [rsp+A4h] [rbp+3h]
  __int64 *v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+B0h] [rbp+Fh]
  int v30; // [rsp+B4h] [rbp+13h]
  unsigned int *v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+C0h] [rbp+1Fh]
  int v33; // [rsp+C4h] [rbp+23h]
  const struct DirectX::XMFLOAT4X3 *v34; // [rsp+C8h] [rbp+27h]
  int v35; // [rsp+D0h] [rbp+2Fh]
  int v36; // [rsp+D4h] [rbp+33h]

  if ( HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled((unsigned __int64)this) )
  {
    v10 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
            v9,
            _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v10 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x800000LL) )
    {
      v36 = 0;
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v13 = a5;
      v34 = a6;
      v31 = &v13;
      v28 = &v15;
      v25 = &v16;
      v22 = &v14;
      v19 = &v17;
      v32 = v11;
      v29 = v11 + 4;
      v26 = v11 + 4;
      v23 = v11;
      v20 = v11 + 4;
      v15 = a4;
      v16 = a3;
      v14 = a2;
      v17 = 0x1000000LL;
      v35 = 48;
      tlgWriteTransfer_EventWriteTransfer(v12, (unsigned __int8 *)dword_1801CF5AF, 0LL, 0LL, v11 + 4, &v18);
    }
  }
}
