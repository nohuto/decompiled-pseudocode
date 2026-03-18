/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00BC040
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00BBFE0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0013B40 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00511E0 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  result = UserSessionSwitchEnterCrit(a1);
  v2 = result;
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      v2 = -1071774240;
    if ( v2 < 0 )
    {
      UserSessionSwitchLeaveCrit(3223193056LL, v3, v4, v5);
      return (unsigned int)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
