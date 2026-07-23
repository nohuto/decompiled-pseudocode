/*
 * XREFs of PopDripsWatchdogTimerCallback @ 0x1405765C0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 */

char __fastcall PopDripsWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a1 == a2 + 112 )
  {
    v2 = 248LL;
  }
  else
  {
    result = a2 + 120;
    if ( a1 != a2 + 376 )
      return result;
    v2 = 512LL;
  }
  return PopQueueWorkItem(v2 + a2, DelayedWorkQueue);
}
