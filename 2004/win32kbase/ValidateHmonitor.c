/*
 * XREFs of ValidateHmonitor @ 0x1C0078CD0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0078CE8 (HMValidateSharedHandle.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1)
{
  return HMValidateSharedHandle(a1);
}
