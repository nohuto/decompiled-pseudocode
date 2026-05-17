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
  int v0; // eax
  int v1; // eax
  _DWORD v3[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v4[2]; // [esp+8h] [ebp-8h] BYREF

  if ( !TrkContext
    || (v3[0] = *(_DWORD *)(TrkContext + 4),
        v0 = *(_DWORD *)(TrkContext + 12),
        v4[1] = -1,
        v3[1] = v0,
        v4[0] = -100000000,
        NtSetEvent(*(_DWORD *)(TrkContext + 8), 0),
        v1 = NtWaitForMultipleObjects(2, (int)v3, 1, 0, (int)v4),
        v1 != 1) )
  {
    byte_4B3A6DA8 = 1;
    LOBYTE(v1) = 0;
  }
  return v1;
}
