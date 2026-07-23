/*
 * XREFs of PopDeepSleepInitialize @ 0x140A4182C
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall PopDeepSleepInitialize(int a1))()
{
  __int64 (*result)(); // rax

  if ( a1 )
  {
    if ( a1 == 3 && !byte_140C23434 )
      PopDeepSleepDisengageReasonMask |= 2u;
  }
  else
  {
    result = PopDeepSleepEvaluateCallback;
    PopDeepSleepDisengageReasonMask = 65;
    PopDeepSleepEvaluateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDeepSleepEvaluateCallback;
    PopDeepSleepEvaluateWorkItem.Parameter = 0LL;
    PopDeepSleepEvaluateWorkItem.List.Flink = 0LL;
  }
  return result;
}
