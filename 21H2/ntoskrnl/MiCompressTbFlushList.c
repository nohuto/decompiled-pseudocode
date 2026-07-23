/*
 * XREFs of MiCompressTbFlushList @ 0x140220720
 * Callers:
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiCompressTbFlushList(__int64 a1)
{
  int v1; // ebp
  __int64 *result; // rax
  unsigned int v3; // r9d
  __int64 v5; // rbx
  unsigned __int64 v6; // r11
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // ecx

  v1 = 0;
  result = (__int64 *)(a1 + 24);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 12) > 1u )
  {
    do
    {
      v5 = *result;
      v6 = *(_QWORD *)(a1 + 8LL * v3 + 24);
      v7 = a1 + 8LL * v3;
      v8 = 4096LL << (9 * ((unsigned __int8)(v6 >> 10) & 3u));
      if ( ((v6 >> 10) & 3) == (((unsigned __int64)*result >> 10) & 3)
        && (v9 = *result & 0x3FF, (v6 & 0xFFFFFFFFFFFFF000uLL) - v8 * (v9 + 1) == (v5 & 0xFFFFFFFFFFFFF000uLL))
        && v9 != 1023 )
      {
        if ( v9 + (v6 & 0x3FF) + 1 > 0x3FF )
        {
          *(_QWORD *)(v7 + 24) = (1023 - v9) * v8
                               + (v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 - (1023 - v9))) & 0x3FF);
          *result++ |= 0x3FFuLL;
          *result = *(_QWORD *)(v7 + 24);
        }
        else
        {
          *result = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v6 + v5 + 1)) & 0x3FF;
          ++v1;
        }
      }
      else
      {
        *++result = v6;
      }
      v10 = *(_DWORD *)(a1 + 12);
      ++v3;
    }
    while ( v3 < v10 );
    if ( v1 )
      *(_DWORD *)(a1 + 12) = v10 - v1;
  }
  return result;
}
