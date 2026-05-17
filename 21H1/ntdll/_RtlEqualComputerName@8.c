/*
 * XREFs of _RtlEqualComputerName@8 @ 0x4B34DB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlEqualComputerName(int a1, int a2)
{
  return RtlEqualDomainName(a1, a2);
}
