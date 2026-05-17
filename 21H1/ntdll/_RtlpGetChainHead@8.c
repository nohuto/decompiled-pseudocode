/*
 * XREFs of _RtlpGetChainHead@8 @ 0x4B35B57F
 * Callers:
 *     _RtlContractHashTable@4 @ 0x4B35ACD0 (_RtlContractHashTable@4.c)
 *     _RtlEnumerateEntryHashTable@8 @ 0x4B35AF30 (_RtlEnumerateEntryHashTable@8.c)
 *     _RtlExpandHashTable@4 @ 0x4B35AFD0 (_RtlExpandHashTable@4.c)
 *     _RtlStronglyEnumerateEntryHashTable@8 @ 0x4B35B380 (_RtlStronglyEnumerateEntryHashTable@8.c)
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetChainHead(int a1, int a2)
{
  int v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // eax

  v2 = *(_DWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    v3 = a2 + 128;
    _BitScanReverse(&v4, v3);
    a2 = v3 ^ (1 << v4);
    v2 = *(_DWORD *)(v2 + 4 * v4 - 28);
  }
  return v2 + 8 * a2;
}
