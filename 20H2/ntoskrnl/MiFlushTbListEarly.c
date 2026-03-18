/*
 * XREFs of MiFlushTbListEarly @ 0x14023DC3C
 * Callers:
 *     MiReplenishBitMap @ 0x14023E340 (MiReplenishBitMap.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiDeleteEmptyPageTable @ 0x1403F31A0 (MiDeleteEmptyPageTable.c)
 *     MiResetAccessBitPteWorker @ 0x140539F80 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, _KPROCESS *Process)
{
  unsigned __int64 v2; // r9
  char v3; // r10

  v2 = qword_140C4DE10;
  v3 = (char)Process;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 && *(_DWORD *)a1 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.Bitmap[5] )
      v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (v3 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (v3 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1, Process);
  }
  return 1LL;
}
