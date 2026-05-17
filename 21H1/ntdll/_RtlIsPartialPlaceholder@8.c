/*
 * XREFs of _RtlIsPartialPlaceholder@8 @ 0x4B2EAAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlIsPartialPlaceholder(int a1, int a2)
{
  return (a1 & 0x440000) != 0;
}
