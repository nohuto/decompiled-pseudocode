/*
 * XREFs of ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x18008080C
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18008048C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800056F4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180080B48 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall UDwmTrace::UDwmHolographicDeviceDriverDetected_(UDwmTrace *this)
{
  __int64 v1; // rcx
  _BYTE v2[32]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(wil::details::static_lazy<UDwmTrace>::get(
                     this,
                     _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v1 > 4u
    && (*(_QWORD *)(v1 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x400000000000LL) == *(_QWORD *)(v1 + 24) )
  {
    tlgWriteTransfer_EtwEventWriteTransfer(v1, byte_1800CEEB2, 0LL, 0LL, 2, (__int64)v2);
  }
}
