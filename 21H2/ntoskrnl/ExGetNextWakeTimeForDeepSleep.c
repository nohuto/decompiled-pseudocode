/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x1405B6304
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1402C9EA0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x140516048 (KeQueryTimerDueTime.c)
 */

unsigned __int64 __fastcall ExGetNextWakeTimeForDeepSleep(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // rcx

  v4 = -1LL;
  result = -1LL;
  if ( PoRtcWakeAllowed )
  {
    v6 = (__int64 *)ExpWakeTimerList;
    while ( v6 != &ExpWakeTimerList )
    {
      v7 = (__int64)(v6 - 33);
      v6 = (__int64 *)*v6;
      if ( *(_QWORD *)(v7 + 256) )
        result = KeQueryTimerDueTime(v7, a2, a3, a4);
      if ( result )
      {
        if ( result < v4 )
          v4 = result;
      }
    }
    return v4;
  }
  return result;
}
