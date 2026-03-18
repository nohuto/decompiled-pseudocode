/*
 * XREFs of ValidateHmonitor @ 0x1C0032830
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0032848 (HMValidateSharedHandle.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1)
{
  return HMValidateSharedHandle(a1);
}
