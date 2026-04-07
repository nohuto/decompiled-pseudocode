/*
 * XREFs of ??1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008DB74
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090C80 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18008DEDC (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall WindowFrameLoggingTelemetry::UpdateWindowCapture::~UpdateWindowCapture(
        WindowFrameLoggingTelemetry::UpdateWindowCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::UpdateWindowCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
