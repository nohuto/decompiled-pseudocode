/*
 * XREFs of ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180083520
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x180083D20 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x18008A7A4 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x18008E46C (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x1800BAB84 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
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
