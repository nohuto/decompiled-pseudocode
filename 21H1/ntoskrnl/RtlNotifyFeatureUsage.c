/*
 * XREFs of RtlNotifyFeatureUsage @ 0x140588690
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E8098 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1)
{
  return CmFcManagerNotifyFeatureUsage(a1, a1);
}
