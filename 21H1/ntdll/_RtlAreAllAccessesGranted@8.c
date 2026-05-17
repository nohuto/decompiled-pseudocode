/*
 * XREFs of _RtlAreAllAccessesGranted@8 @ 0x4B346010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlAreAllAccessesGranted(int a1, int a2)
{
  return (a2 & ~a1) == 0;
}
