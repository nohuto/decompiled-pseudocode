/*
 * XREFs of DpiTestSetBrightness @ 0x1C02D8FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiTestSetBrightness(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  g_Brightness = a2;
  v2 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v2 + 24) = g_Brightness;
  WdLogEvent5_WdEvent(v2);
  return 0LL;
}
