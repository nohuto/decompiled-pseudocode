/*
 * XREFs of MiFlushTbListEarly @ 0x140269FA8
 * Callers:
 *     MiDeleteEmptyPageTable @ 0x140227360 (MiDeleteEmptyPageTable.c)
 *     MiReplenishBitMap @ 0x1402697F0 (MiReplenishBitMap.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiResetAccessBitPteWorker @ 0x1403C49DC (MiResetAccessBitPteWorker.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 * Callees:
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9

  v2 = qword_140C507D0;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0
    && *(_DWORD *)a1 == 1
    && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
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
