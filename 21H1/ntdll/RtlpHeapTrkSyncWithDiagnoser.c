/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x4B364D91
 * Callers:
 *     _RtlpHeapTrkLeakCallback@24 @ 0x4B364B50 (_RtlpHeapTrkLeakCallback@24.c)
 *     RtlpHeapTrkReportResult @ 0x4B364CBD (RtlpHeapTrkReportResult.c)
 * Callees:
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtWaitForMultipleObjects@20 @ 0x4B2F2F30 (_NtWaitForMultipleObjects@20.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  NTSTATUS v0; // eax
  HANDLE Handles[2]; // [esp+0h] [ebp-10h] BYREF
  LARGE_INTEGER Timeout; // [esp+8h] [ebp-8h] BYREF

  if ( !TrkContext
    || (Handles[0] = *((HANDLE *)TrkContext + 1),
        Handles[1] = *((HANDLE *)TrkContext + 3),
        Timeout.QuadPart = -100000000LL,
        NtSetEvent(*((HANDLE *)TrkContext + 2), 0),
        v0 = NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, &Timeout),
        v0 != 1) )
  {
    byte_4B3A6DA8 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
