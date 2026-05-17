/*
 * XREFs of @RtlInterlockedCompareExchange64@12 @ 0x4B3085A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlInterlockedCompareExchange64(
        volatile signed __int64 *a1,
        signed __int64 *a2,
        signed __int64 *a3)
{
  return _InterlockedCompareExchange64(a1, *a2, *a3);
}
