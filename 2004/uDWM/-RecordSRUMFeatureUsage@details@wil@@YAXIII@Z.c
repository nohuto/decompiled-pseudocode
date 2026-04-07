/*
 * XREFs of ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x18007EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::RecordSRUMFeatureUsage(wil::details *this, __int64 a2, __int64 a3)
{
  LODWORD(a2) = a2 | 0x40000000;
  wil::details::WilApi_RecordFeatureUsage(this, a2, a3);
}
