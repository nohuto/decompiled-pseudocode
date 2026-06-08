/*
 * XREFs of GetFFHThrottleState @ 0x1C0001540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetFFHThrottleState(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax

  result = __readmsr(0x19Au);
  *a1 = result;
  return result;
}
