/*
 * XREFs of ??$Start@AEAPEAG@SetViewPosition@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x180094434
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18001B400 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180043714 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180043714.c)
 *     ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180094D9C (-StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 */

CImmersiveAppTelemetry::SetViewPosition *__fastcall CImmersiveAppTelemetry::SetViewPosition::Start<unsigned short * &>(
        CImmersiveAppTelemetry::SetViewPosition *this,
        const unsigned __int16 **a2)
{
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"SetViewPosition");
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  CImmersiveAppTelemetry::SetViewPosition::StartActivity(this, *a2);
  return this;
}
