/*
 * XREFs of _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$1 @ 0x180042209
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDriverListener::HandleShellWarningAccepted_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>((__int64 *)(a2 + 72));
}
