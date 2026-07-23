/*
 * XREFs of PnpWatchdogWorkItem @ 0x1408ABBF0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRecordBlackbox @ 0x14066ACF0 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x1408AB9F4 (PnpWatchdogEtwWrite.c)
 */

int __fastcall PnpWatchdogWorkItem(__int64 a1)
{
  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  return PnpWatchdogEtwWrite(a1, 1);
}
