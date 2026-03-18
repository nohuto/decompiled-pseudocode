/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140A43024
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A42AE8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x14078C268 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14078C5F8 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x14078C634 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A430FC (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C24B68 = 0LL;
  stru_140C24AF8.Header.SignalState = 0;
  dword_140C24BA8 = 0;
  qword_140C24D00 = -1LL;
  unk_140C24B70 = 0;
  dword_140C24B74 = 0;
  stru_140C24AF8.Header.WaitListHead.Blink = &stru_140C24AF8.Header.WaitListHead;
  stru_140C24AF8.Header.WaitListHead.Flink = &stru_140C24AF8.Header.WaitListHead;
  LOWORD(stru_140C24AF8.Header.Lock) = 1;
  stru_140C24AF8.Header.Size = 6;
  dword_140C24B18 = -1946157056;
  byte_140C24B78 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C24B80,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24BB0, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24C50, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C24D08 = 0LL;
  dword_140C24D10 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
