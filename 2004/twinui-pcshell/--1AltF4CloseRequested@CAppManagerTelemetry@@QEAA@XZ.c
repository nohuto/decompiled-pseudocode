/*
 * XREFs of ??1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x18014730C
 * Callers:
 *     _CApplicationManager::_HandleCloseRequested_::_1_::dtor$0 @ 0x180156709 (_CApplicationManager--_HandleCloseRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B014 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CAppManagerTelemetry::AltF4CloseRequested::~AltF4CloseRequested(
        CAppManagerTelemetry::AltF4CloseRequested *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
