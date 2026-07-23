/*
 * XREFs of MiGetPagesToZero @ 0x14054E27C
 * Callers:
 *     MiZeroPageThread @ 0x1403CA200 (MiZeroPageThread.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiGetHugePageToZero @ 0x140305330 (MiGetHugePageToZero.c)
 *     MiSetIdealProcessorThread @ 0x140333A84 (MiSetIdealProcessorThread.c)
 *     MiGetSinglePageToZero @ 0x1403655D4 (MiGetSinglePageToZero.c)
 *     MiUnlinkNodeLargePages @ 0x1403F594C (MiUnlinkNodeLargePages.c)
 */

__int64 __fastcall MiGetPagesToZero(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  char v7; // cl
  unsigned int v8; // r9d
  unsigned __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rax
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-18h] BYREF

  v3 = a3;
  if ( !(_DWORD)a3 && *(_BYTE *)(a2 + 80) )
    return MiGetHugePageToZero(a1, a2);
  v7 = byte_140C4DD0C;
  v8 = *(_DWORD *)(a2 + 260);
  *(_QWORD *)(a2 + 32) = 0LL;
  v9 = v8 >> v7;
  *(_BYTE *)(a2 + 69) = 0;
  if ( (unsigned int)a3 >= 3 )
    result = MiGetSinglePageToZero(a1, a2, a3, (_DWORD *)v9);
  else
    result = MiUnlinkNodeLargePages(a1, a3, 1LL, v9, 4, 1u, a2 + 248, 64, a2);
  v10 = result;
  if ( result )
  {
    if ( !*(_BYTE *)(a2 + 80) )
    {
      v11 = *((unsigned int *)MiSearchNumaNodeTable((result + 0x58000000000LL) / 48) + 2);
      if ( *(_DWORD *)(a2 + 268) != (_DWORD)v11 )
      {
        *(_DWORD *)(a2 + 268) = v11;
        Affinity = *(_GROUP_AFFINITY *)(4544 * v11 + *(_QWORD *)(a1 + 16) + 4472);
        MiSetIdealProcessorThread(&Affinity);
      }
    }
    return MiMapPagesToZero(a2, v10, v3);
  }
  return result;
}
