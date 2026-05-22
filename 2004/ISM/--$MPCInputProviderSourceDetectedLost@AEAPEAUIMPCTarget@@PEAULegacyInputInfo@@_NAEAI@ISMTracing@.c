/*
 * XREFs of ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800825A0
 * Callers:
 *     ?OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x180084660 (-OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z.c)
 *     ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x1800846B0 (-OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z.c)
 *     ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z @ 0x18018D970 (-OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z @ 0x18008427C (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost<IMPCTarget * &,LegacyInputInfo *,bool,unsigned int &>(
        struct IMPCTarget **a1,
        struct InputInfo **a2,
        bool *a3,
        unsigned int *a4)
{
  __int64 v8; // rcx
  ISMTracing *v9; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v8, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputProviderSourceDetectedLost_(v9, *a1, *a2, *a3, *a4);
  }
}
