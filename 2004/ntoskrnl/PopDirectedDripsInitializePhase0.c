/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140A3CD84
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A3C848 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x14077ECC8 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14077F0B4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x14077F0F0 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A3CE5C (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C24A48 = 0LL;
  stru_140C249D8.Header.SignalState = 0;
  dword_140C24A88 = 0;
  qword_140C24BE0 = -1LL;
  unk_140C24A50 = 0;
  dword_140C24A54 = 0;
  stru_140C249D8.Header.WaitListHead.Blink = &stru_140C249D8.Header.WaitListHead;
  stru_140C249D8.Header.WaitListHead.Flink = &stru_140C249D8.Header.WaitListHead;
  LOWORD(stru_140C249D8.Header.Lock) = 1;
  stru_140C249D8.Header.Size = 6;
  dword_140C249F8 = -1946157056;
  byte_140C24A58 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C24A60,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24A90, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24B30, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C24BE8 = 0LL;
  dword_140C24BF0 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
