/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140871EDC
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED79C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406DEBC0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
}
