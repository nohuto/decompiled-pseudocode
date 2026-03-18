/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x14086CF18
 * Callers:
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14061CCF4 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  return CmpGetSecurityCacheEntryForKcbStack(a1, a2) + 32;
}
