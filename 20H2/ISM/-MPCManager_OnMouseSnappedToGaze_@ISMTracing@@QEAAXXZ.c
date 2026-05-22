/*
 * XREFs of ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x18007268C
 * Callers:
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x1800730CC (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_OnMouseSnappedToGaze_(ISMTracing *this)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<ISMTracing>::get(
                               (__int64)this,
                               _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v1 > 4u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1801C75FB, 0LL, 0LL, 2u, &v2);
}
