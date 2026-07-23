/*
 * XREFs of HalpDmaTranslationEntryToIndex @ 0x1403BC0E8
 * Callers:
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BBE7C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaReturnToContiguousPool @ 0x1404C8254 (HalpDmaReturnToContiguousPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaTranslationEntryToIndex(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 *v3; // r9
  int v4; // r10d
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx

  v3 = *(__int64 **)(a1 + 40);
  v4 = 0;
  while ( 1 )
  {
    if ( !v3 )
      return 0xFFFFFFFFLL;
    v5 = v3[2];
    if ( v5 <= a2 && a2 < v5 + 72LL * *((unsigned int *)v3 + 2) )
      break;
    v4 += *((_DWORD *)v3 + 2);
    v3 = (__int64 *)*v3;
  }
  if ( a3 )
    *a3 = v3;
  v6 = (__int64)((unsigned __int128)((__int64)(a2 - v5) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  return v4 + (unsigned int)v6 + (v6 >> 63);
}
