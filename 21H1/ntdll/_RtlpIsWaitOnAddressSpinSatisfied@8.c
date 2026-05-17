/*
 * XREFs of _RtlpIsWaitOnAddressSpinSatisfied@8 @ 0x4B2DF903
 * Callers:
 *     @RtlpWaitOnAddressWithTimeout@16 @ 0x4B2DF875 (@RtlpWaitOnAddressWithTimeout@16.c)
 * Callees:
 *     <none>
 */

bool __stdcall RtlpIsWaitOnAddressSpinSatisfied(int a1, int a2)
{
  return (*(_DWORD *)(a1 + 20) & 1) == 0;
}
