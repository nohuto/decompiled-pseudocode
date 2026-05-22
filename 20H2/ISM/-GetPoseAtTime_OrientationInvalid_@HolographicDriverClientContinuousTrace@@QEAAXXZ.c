/*
 * XREFs of ?GetPoseAtTime_OrientationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015DE6C
 * Callers:
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801583B8 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x180160140 (-IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167A2C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_OrientationInvalid_(
        HolographicDriverClientContinuousTrace *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled((unsigned __int64)this) )
  {
    v2 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
           v1,
           _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v2 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v2 + 8), 0x800000LL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = 0x1000000LL;
      v7 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1801CF7B1, 0LL, 0LL, 3u, &v5);
    }
  }
}
