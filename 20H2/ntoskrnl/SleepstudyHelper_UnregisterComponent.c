/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x14057F100
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x14057F120 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  return SleepstudyHelperDestroyBlocker(a1);
}
