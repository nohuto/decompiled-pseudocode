/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x140290FCC
 * Callers:
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiIsForegroundThread @ 0x1402F8020 (KiIsForegroundThread.c)
 *     KiScheduleNextForegroundBoost @ 0x14039F200 (KiScheduleNextForegroundBoost.c)
 */

void KiTryScheduleNextForegroundBoost()
{
  __int64 v0; // rcx
  char v1; // dl

  if ( (KiVelocityFlags & 0x8000) == 0 )
  {
    if ( (unsigned __int8)KiIsForegroundThread() )
    {
      v1 = *(_BYTE *)(v0 + 195);
      if ( v1 < 16 && (*(_DWORD *)(v0 + 120) & 8) == 0 && v1 > 0 )
        KiScheduleNextForegroundBoost(v0);
    }
  }
}
