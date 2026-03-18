/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C004E210
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C004E1B0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0066480 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0096410 (UserRemoteConnectedSessionUsingXddm.c)
 */

__int64 AcquireCriticalSectionAndCheckState()
{
  __int64 result; // rax
  int v1; // ebx

  result = UserSessionSwitchEnterCrit();
  v1 = result;
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      v1 = -1071774240;
    if ( v1 < 0 )
    {
      UserSessionSwitchLeaveCrit(3223193056LL);
      return (unsigned int)v1;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
