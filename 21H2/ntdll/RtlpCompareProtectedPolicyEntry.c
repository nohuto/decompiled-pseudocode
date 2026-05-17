/*
 * XREFs of RtlpCompareProtectedPolicyEntry @ 0x180076CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlpCompareProtectedPolicyEntry(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
