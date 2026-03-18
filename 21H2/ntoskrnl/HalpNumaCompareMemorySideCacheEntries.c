/*
 * XREFs of HalpNumaCompareMemorySideCacheEntries @ 0x140B4C610
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaCompareMemorySideCacheNodeAndLevel @ 0x14090A17C (HalpNumaCompareMemorySideCacheNodeAndLevel.c)
 */

__int64 __fastcall HalpNumaCompareMemorySideCacheEntries(const void *a1, const void *a2)
{
  return HalpNumaCompareMemorySideCacheNodeAndLevel(
           *(_DWORD *)a1,
           *((_DWORD *)a1 + 5),
           *(_DWORD *)a2,
           *((_DWORD *)a2 + 5));
}
