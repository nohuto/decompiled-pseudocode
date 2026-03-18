/*
 * XREFs of _ClearDelegationCapture@4 @ 0xA5428
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall ClearDelegationCapture(int a1)
{
  int result; // eax

  result = HMAssignmentUnlock(a1 + 72);
  *(_BYTE *)(a1 + 76) = 0;
  return result;
}
