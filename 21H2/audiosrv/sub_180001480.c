/*
 * XREFs of sub_180001480 @ 0x180001480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *sub_180001480())(int, int, int, int, __int64)
{
  __int64 (__fastcall *result)(int, int, int, int, __int64); // rax

  qword_18019F998 = (__int64)sub_180046C10;
  qword_18019F948 = (__int64)RecordFeatureUsage;
  qword_18019FA38 = (__int64)RecordFeatureError;
  qword_18019F990 = (__int64)SubscribeFeatureStateChangeNotification;
  qword_18019FA20 = (__int64)UnsubscribeFeatureStateChangeNotification;
  result = sub_180068CC0;
  qword_18019F988 = (__int64)sub_180068CC0;
  return result;
}
