/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0023DA4
 * Callers:
 *     SetIconMetrics @ 0x1C00237E0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00239FC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0023B4C (xxxSetWindowNCMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2)
{
  FastGetProfileIntFromID(a1, 23LL, a2);
  return 0LL;
}
