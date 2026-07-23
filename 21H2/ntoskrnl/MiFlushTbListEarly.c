/*
 * XREFs of MiFlushTbListEarly @ 0x1402063F8
 * Callers:
 *     MiReplenishBitMap @ 0x140205D50 (MiReplenishBitMap.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiDeleteEmptyPageTable @ 0x1403F49E0 (MiDeleteEmptyPageTable.c)
 *     MiResetAccessBitPteWorker @ 0x14053BCC0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9

  v2 = qword_140C4DFD0;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0
    && *(_DWORD *)a1 == 1
    && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
  {
    v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (a2 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1);
  }
  return 1LL;
}
