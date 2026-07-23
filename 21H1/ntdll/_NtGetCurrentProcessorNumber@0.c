/*
 * XREFs of _NtGetCurrentProcessorNumber@0 @ 0x4B2F38B0
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlGetCurrentProcessorNumber@0 @ 0x4B2E73F0 (_RtlGetCurrentProcessorNumber@0.c)
 *     _RtlpHpLfhBucketUpdateAffinityMapping@8 @ 0x4B37622D (_RtlpHpLfhBucketUpdateAffinityMapping@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

ULONG NtGetCurrentProcessorNumber(void)
{
  return Wow64SystemServiceCall();
}
