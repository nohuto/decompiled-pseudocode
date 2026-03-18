/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C005BBD0
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C005BB70 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0033CC0 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C00B3D60 (UserRemoteConnectedSessionUsingXddm.c)
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
