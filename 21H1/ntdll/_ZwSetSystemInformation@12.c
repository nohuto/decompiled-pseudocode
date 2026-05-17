/*
 * XREFs of _ZwSetSystemInformation@12 @ 0x4B2F4420
 * Callers:
 *     _RtlSetFeatureConfigurations@16 @ 0x4B369740 (_RtlSetFeatureConfigurations@16.c)
 *     _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF (_RtlpFcUpdateUsageSubscriptions@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetSystemInformation(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
