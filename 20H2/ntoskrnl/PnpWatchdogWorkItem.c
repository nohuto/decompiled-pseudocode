/*
 * XREFs of PnpWatchdogWorkItem @ 0x1408AE4C0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRecordBlackbox @ 0x1406F4C18 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408AE2C4 (PnpWatchdogEtwWrite.c)
 */

int __fastcall PnpWatchdogWorkItem(__int64 a1)
{
  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  return PnpWatchdogEtwWrite(a1, 1);
}
