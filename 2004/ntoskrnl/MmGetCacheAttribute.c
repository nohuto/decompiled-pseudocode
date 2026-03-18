/*
 * XREFs of MmGetCacheAttribute @ 0x14052CB30
 * Callers:
 *     <none>
 * Callees:
 *     MmGetCacheAttributeEx @ 0x14052CB50 (MmGetCacheAttributeEx.c)
 */

__int64 __fastcall MmGetCacheAttribute(__int64 a1, __int64 a2)
{
  return MmGetCacheAttributeEx(a1, 0LL, a2);
}
