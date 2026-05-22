/*
 * XREFs of ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x180074E64
 * Callers:
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180078230 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x180076B48 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>(
        unsigned int *a1,
        unsigned int *a2,
        bool *a3,
        struct IMPCTarget **a4)
{
  __int64 v8; // rcx
  ISMTracing *v9; // rcx

  if ( ISMTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<ISMTracing>::get(v8, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_CaptureEvent_(v9, *a1, *a2, *a3, *a4);
  }
}
