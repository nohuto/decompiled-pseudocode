/*
 * XREFs of GreSfmGenerateMoveData @ 0x1C02A0284
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C3890 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSfmGenerateMoveData(int a1)
{
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  g_bUseMoveHints = a1;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return 0LL;
}
