/*
 * XREFs of _RtlEnableEarlyCriticalSectionEventCreation@0 @ 0x4B34A630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PEB *__stdcall RtlEnableEarlyCriticalSectionEventCreation()
{
  struct _PEB *result; // eax

  result = NtCurrentPeb();
  result->NtGlobalFlag |= 0x10000000u;
  return result;
}
