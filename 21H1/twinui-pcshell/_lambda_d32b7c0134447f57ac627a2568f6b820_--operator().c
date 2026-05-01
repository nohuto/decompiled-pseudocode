/*
 * XREFs of _lambda_d32b7c0134447f57ac627a2568f6b820_::operator() @ 0x1800A9B10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::Run @ 0x1800A9C30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___--Run.c)
 * Callees:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18043A0F8 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 */

__int64 lambda_d32b7c0134447f57ac627a2568f6b820_::operator()()
{
  __int64 result; // rax
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    result = Win32AppStateManager::UpdateAppViewWorker();
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x19C,
             (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
             v1);
  }
  return result;
}
