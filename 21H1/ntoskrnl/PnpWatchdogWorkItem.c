/*
 * XREFs of PnpWatchdogWorkItem @ 0x1408A7670
 * Callers:
 *     <none>
 * Callees:
 *     PnpRecordBlackbox @ 0x14070AF90 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408A7474 (PnpWatchdogEtwWrite.c)
 */

int __fastcall PnpWatchdogWorkItem(__int64 a1)
{
  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  return PnpWatchdogEtwWrite(a1, 1);
}
