/*
 * XREFs of ?Provider@ISMTracing@@SAQEBU_tlgProvider_t@@XZ @ 0x180069AE0
 * Callers:
 *     ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KII@Z @ 0x18003F500 (-MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KII@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall ISMTracing::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)*((_QWORD *)wil::details::static_lazy<ISMTracing>::get(
                                                      a1,
                                                      _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                                        + 1);
}
