/*
 * XREFs of ??$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x18018A380
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E1E4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800298C0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z @ 0x18018D4A8 (-MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned int const &>(
        unsigned int *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  ISMTracing *v5; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCSixDofProcessor_HomeEventUpdate_(v5, *a1, *a2);
  }
}
