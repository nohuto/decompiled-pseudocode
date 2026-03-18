/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x1402C7F00
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x1402C78CC (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, unsigned int a2)
{
  if ( a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread(a1, a2);
  return 0LL;
}
