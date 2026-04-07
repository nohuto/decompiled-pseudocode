/*
 * XREFs of ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x180080CBC
 * Callers:
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x1800809B0 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180080CEC (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800813A8 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

bool __fastcall UDwmTrace::IsEnabled(__int64 a1)
{
  _DWORD *v1; // rcx
  bool result; // al

  v1 = *(_DWORD **)(wil::details::static_lazy<UDwmTrace>::get(
                      a1,
                      _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                  + 8);
  result = 0;
  if ( v1 )
    return *v1 != 0;
  return result;
}
