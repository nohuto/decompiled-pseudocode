/*
 * XREFs of _lambda_ae8220f02ed2a4c19b01bc805f2788a4_::__lambda_ae8220f02ed2a4c19b01bc805f2788a4_ @ 0x1800A0E28
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ae8220f02ed2a4c19b01bc805f2788a4___::_scalar_deleting_destructor_ @ 0x1800A2460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ae8220f02ed2a4c19b01bc805f2788a4___--_scala.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18032BF60 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180326450 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_ae8220f02ed2a4c19b01bc805f2788a4_::__lambda_ae8220f02ed2a4c19b01bc805f2788a4_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 32));
  return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(a1 + 16);
}
