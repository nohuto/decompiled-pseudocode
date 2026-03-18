/*
 * XREFs of _GreStartTimers@0 @ 0xD61D6
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     _UserSetTimer@8 @ 0x1A5A50 (_UserSetTimer@8.c)
 */

int __stdcall GreStartTimers()
{
  int result; // eax
  char v1; // bl

  result = UserIsUserCritSecIn();
  if ( result )
  {
    v1 = 0;
  }
  else
  {
    v1 = 1;
    result = UserEnterUserCritSec();
  }
  if ( gcSynchronizeTimer != -1 )
  {
    result = UserSetTimer();
    gidSynchronizeTimer = result;
  }
  if ( v1 )
    return UserLeaveUserCritSec();
  return result;
}
