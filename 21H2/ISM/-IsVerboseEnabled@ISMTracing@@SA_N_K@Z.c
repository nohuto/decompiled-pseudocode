/*
 * XREFs of ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800838A0
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800840A0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x18008AB64 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x18008E82C (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x1800BAF44 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 */

char __fastcall ISMTracing::IsVerboseEnabled(__int64 a1)
{
  _DWORD *v1; // rcx
  char v2; // dl

  v1 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<ISMTracing>::get(
                               a1,
                               _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v1 <= 5u || !tlgKeywordOn((__int64)v1, 1LL) )
    return 0;
  return v2;
}
