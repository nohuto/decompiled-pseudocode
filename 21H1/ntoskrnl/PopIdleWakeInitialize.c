/*
 * XREFs of PopIdleWakeInitialize @ 0x1407B12D8
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403C4F44 (PpmConvertTimeFrom.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407B13CC (PopIdleWakeConvertIntervalBucketsFrom.c)
 */

__int64 PopIdleWakeInitialize()
{
  __int64 result; // rax

  PopIdleWakeContextLock = 0LL;
  PopIdleWakeSourceSpuriousThresholdQpc = PpmConvertTimeFrom(0x2FAF080uLL, 10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    6LL,
    PopIdleSpuriousWakeBucketLimitsQpc,
    PopIdleSpuriousWakeBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5LL,
    PopIdleWakeSourceActiveBucketLimitsQpc,
    PopIdleWakeSourceActiveBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5LL,
    PopIdleWakeSourceActivatorBucketLimitsQpc,
    PopIdleWakeSourceActivatorBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5LL,
    PopIdleWakeSourceDeviceBucketLimitsQpc,
    PopIdleWakeSourceDeviceBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    3LL,
    &PopIdleWakeSourceExcessBucketLimitsQpc,
    &PopIdleWakeSourceExcessBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    9LL,
    &PopIdleWakeIdleAccountingBucketLimitsMs,
    PopIdleWakeIdleAccountingBucketLimitsQpc,
    1000LL);
  qword_140C206E8 = -1LL;
  result = PopIdleWakeConvertIntervalBucketsFrom(
             11LL,
             &PopIdleWakePeriodAccountingBucketLimitsMs,
             PopIdleWakePeriodAccountingBucketLimitsQpc,
             1000LL);
  qword_140C20698 = -1LL;
  return result;
}
