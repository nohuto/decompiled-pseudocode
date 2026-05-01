/*
 * XREFs of _lambda_e1213522565a54bdf40b4b22e649b293_::__lambda_e1213522565a54bdf40b4b22e649b293_ @ 0x1800AEEB4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e1213522565a54bdf40b4b22e649b293___::_scalar_deleting_destructor_ @ 0x1800B05B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e1213522565a54bdf40b4b22e649b293___--_scala.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18034DA60 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180347FA0 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_e1213522565a54bdf40b4b22e649b293_::__lambda_e1213522565a54bdf40b4b22e649b293_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 32));
  return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(a1 + 16);
}
