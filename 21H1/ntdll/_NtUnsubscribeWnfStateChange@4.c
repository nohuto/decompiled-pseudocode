/*
 * XREFs of _NtUnsubscribeWnfStateChange@4 @ 0x4B2F4650
 * Callers:
 *     _RtlpDecRefWnfNameSubscription@4 @ 0x4B2DEC15 (_RtlpDecRefWnfNameSubscription@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtUnsubscribeWnfStateChange(int a1)
{
  return Wow64SystemServiceCall();
}
