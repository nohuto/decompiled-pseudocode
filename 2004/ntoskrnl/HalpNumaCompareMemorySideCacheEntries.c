/*
 * XREFs of HalpNumaCompareMemorySideCacheEntries @ 0x140A8A550
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaCompareMemorySideCacheNodeAndLevel @ 0x1408629C4 (HalpNumaCompareMemorySideCacheNodeAndLevel.c)
 */

__int64 __fastcall HalpNumaCompareMemorySideCacheEntries(const void *a1, const void *a2)
{
  return HalpNumaCompareMemorySideCacheNodeAndLevel(
           *(_DWORD *)a1,
           *((_DWORD *)a1 + 5),
           *(_DWORD *)a2,
           *((_DWORD *)a2 + 5));
}
