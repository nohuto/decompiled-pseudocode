/*
 * XREFs of ?MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z @ 0x1800843FC
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180084740 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCEyeGazeProcessor_DeviceDetached_(ISMTracing *this, int a2)
{
  _DWORD *v3; // rcx
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v3 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<ISMTracing>::get(
                               (__int64)this,
                               _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v3 > 4u )
  {
    v8 = 0;
    v6 = &v4;
    v4 = a2;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1801C9645, 0LL, 0LL, 3u, &v5);
  }
}
