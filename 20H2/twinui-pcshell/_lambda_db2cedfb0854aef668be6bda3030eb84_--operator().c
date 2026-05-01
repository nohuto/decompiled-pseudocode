/*
 * XREFs of _lambda_db2cedfb0854aef668be6bda3030eb84_::operator() @ 0x18045BFCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84___::Run @ 0x18045D0B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_db2cedfb0854aef668be6bda3030eb84___--Run.c)
 * Callees:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18045D7B4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 */

__int64 lambda_db2cedfb0854aef668be6bda3030eb84_::operator()()
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
             (void *)0x190,
             (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
             v1);
  }
  return result;
}
