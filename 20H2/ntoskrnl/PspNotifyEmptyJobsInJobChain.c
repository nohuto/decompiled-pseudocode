/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x14062F078
 * Callers:
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x14062F0C4 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  struct _KEVENT *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1120), 0xBu);
  for ( i = *(struct _KEVENT **)(a1 + 1296); i; i = (struct _KEVENT *)i[44].Header.WaitListHead.Blink )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
