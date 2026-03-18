/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x1403323B8
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x1403347E4 (KiScheduleNextForegroundBoost.c)
 */

char __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  LOBYTE(v1) = KiForegrounBoostVelocityFlag;
  if ( !KiForegrounBoostVelocityFlag )
  {
    LOBYTE(v1) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL);
    if ( (_BYTE)v1 == 2 )
    {
      v2 = *(_BYTE *)(a1 + 195);
      if ( v2 < 16 )
      {
        v1 = *(_DWORD *)(a1 + 120);
        if ( (v1 & 8) == 0 && v2 > 0 )
          LOBYTE(v1) = KiScheduleNextForegroundBoost(a1);
      }
    }
  }
  return v1;
}
