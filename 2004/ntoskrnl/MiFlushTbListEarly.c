/*
 * XREFs of MiFlushTbListEarly @ 0x14027C660
 * Callers:
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiReplenishBitMap @ 0x14027CB50 (MiReplenishBitMap.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiDeleteEmptyPageTable @ 0x1403EED30 (MiDeleteEmptyPageTable.c)
 *     MiResetAccessBitPteWorker @ 0x1405365B0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, _KPROCESS *Process)
{
  unsigned __int64 v2; // r9
  char v3; // r10

  v2 = qword_140C4DD90;
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
