/*
 * XREFs of _RtlQueryInformationActiveActivationContext@16 @ 0x4B2B3E80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 */

int __stdcall RtlQueryInformationActiveActivationContext(int a1, int a2, int a3, int a4)
{
  return RtlQueryInformationActivationContext(1, 0, 0, a1, a2, a3, a4);
}
