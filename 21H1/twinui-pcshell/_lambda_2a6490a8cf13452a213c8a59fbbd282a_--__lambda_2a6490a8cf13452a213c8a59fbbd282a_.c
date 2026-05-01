/*
 * XREFs of _lambda_2a6490a8cf13452a213c8a59fbbd282a_::__lambda_2a6490a8cf13452a213c8a59fbbd282a_ @ 0x1800A0D2C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a___::_scalar_deleting_destructor_ @ 0x1800A2230 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a___--_scala.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x18032C9BC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803264A8 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_2a6490a8cf13452a213c8a59fbbd282a_::__lambda_2a6490a8cf13452a213c8a59fbbd282a_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)(a1 + 24));
  return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(a1 + 8);
}
