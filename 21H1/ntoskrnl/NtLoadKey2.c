/*
 * XREFs of NtLoadKey2 @ 0x14076CFA0
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKey2(__int64 a1, void *a2, unsigned int a3)
{
  return CmLoadDifferencingKey(a1, a2, a3, 0LL, 0LL, 0, 0LL, 0, 0LL, 0, 0LL, KeGetCurrentThread()->PreviousMode);
}
