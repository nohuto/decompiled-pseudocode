/*
 * XREFs of ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1803DE29C
 * Callers:
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803E04F4 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 * Callees:
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1803E1A6C (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@_NUtagRECT@@HHUtagSIZE@@@Z @ 0x1803E7DB0 (-VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIA.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x1803E854C (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView<IApplicationView * &,bool &,tagRECT &,int &,int &,tagSIZE &>(
        struct IApplicationView **a1,
        char *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5,
        struct tagSIZE *a6)
{
  __int64 v10; // rcx
  char v11; // r8
  struct IApplicationView *v12; // rdx
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF

  if ( VoiceAssistantPositionerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(
      v10,
      _lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
    v11 = *a2;
    v12 = *a1;
    v13 = *a3;
    VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView_(
      (VoiceAssistantPositionerTelemetry *)(unsigned int)*a5,
      v12,
      v11,
      &v13,
      *a4,
      *a5,
      *a6);
  }
}
