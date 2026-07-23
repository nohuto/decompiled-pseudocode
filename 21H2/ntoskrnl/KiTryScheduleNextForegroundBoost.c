/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x14027A338
 * Callers:
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x140235F3C (KiScheduleNextForegroundBoost.c)
 */

void __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  char v1; // dl

  if ( !KiForegrounBoostVelocityFlag && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 )
  {
    v1 = *(_BYTE *)(a1 + 195);
    if ( v1 < 16 && (*(_DWORD *)(a1 + 120) & 8) == 0 && v1 > 0 )
      KiScheduleNextForegroundBoost(a1);
  }
}
