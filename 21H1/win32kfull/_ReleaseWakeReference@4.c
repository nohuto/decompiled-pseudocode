/*
 * XREFs of _ReleaseWakeReference@4 @ 0x182DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall ReleaseWakeReference(int a1)
{
  return PsReleaseProcessWakeCounter(a1, 0);
}
