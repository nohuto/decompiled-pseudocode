/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C000B584
 * Callers:
 *     SetIconMetrics @ 0x1C000AFC0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C000B1DC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C000B32C (xxxSetWindowNCMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2)
{
  FastGetProfileIntFromID(a1, 23LL, a2);
  return 0LL;
}
