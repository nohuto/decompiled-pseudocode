/*
 * XREFs of RtlpGetChainHead @ 0x180068E80
 * Callers:
 *     RtlpPopulateContext @ 0x180068C9C (RtlpPopulateContext.c)
 *     RtlEnumerateEntryHashTable @ 0x180068D40 (RtlEnumerateEntryHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x180068E10 (RtlStronglyEnumerateEntryHashTable.c)
 *     RtlContractHashTable @ 0x180088410 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x180088CA0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ecx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v3, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v3);
    v2 = *(_QWORD *)(v2 + 8LL * (v3 - 7));
  }
  return v2 + 16LL * a2;
}
