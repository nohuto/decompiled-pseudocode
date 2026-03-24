/*
 * XREFs of PnpWatchdogWorkItem @ 0x1408ABA90
 * Callers:
 *     <none>
 * Callees:
 *     PnpRecordBlackbox @ 0x1406775B0 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408AB894 (PnpWatchdogEtwWrite.c)
 */

int __fastcall PnpWatchdogWorkItem(__int64 a1)
{
  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  return PnpWatchdogEtwWrite(a1, 1);
}
