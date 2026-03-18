/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140811AB4
 * Callers:
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 *     CcSetValidData @ 0x14023F3E8 (CcSetValidData.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     CcInitializeTelemetry @ 0x140AF2E9C (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140C499D4, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C499E0);
  return v1;
}
