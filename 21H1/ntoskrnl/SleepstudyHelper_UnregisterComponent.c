/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x14057B090
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x14057B0B0 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  return SleepstudyHelperDestroyBlocker(a1);
}
