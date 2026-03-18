/*
 * XREFs of PnpWatchdogWorkItem @ 0x1408A8990
 * Callers:
 *     <none>
 * Callees:
 *     PnpRecordBlackbox @ 0x14064999C (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408A8794 (PnpWatchdogEtwWrite.c)
 */

int __fastcall PnpWatchdogWorkItem(__int64 a1)
{
  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  return PnpWatchdogEtwWrite(a1, 1);
}
