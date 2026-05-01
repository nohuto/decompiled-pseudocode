/*
 * XREFs of ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x180143AE8
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18002831C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x18014CCAC (-HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x18014DC04 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1801598C4 (-get@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z.c)
 */

void __fastcall CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        const unsigned __int16 **a1,
        unsigned __int64 *a2,
        int *a3,
        int *a4)
{
  __int64 v8; // rcx
  CAppManagerTelemetry *v9; // rcx

  if ( CAppManagerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<CAppManagerTelemetry>::get(
      v8,
      _lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::HandleViewCreationFailure_(v9, *a1, *a2, *a3, *a4);
  }
}
