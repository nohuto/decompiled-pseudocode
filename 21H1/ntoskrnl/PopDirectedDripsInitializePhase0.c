/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140A3D12C
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A3CBF0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x14077F4D8 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14077F8C4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x14077F900 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A3D204 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C24CA8 = 0LL;
  stru_140C24C38.Header.SignalState = 0;
  dword_140C24CE8 = 0;
  qword_140C24E40 = -1LL;
  unk_140C24CB0 = 0;
  dword_140C24CB4 = 0;
  stru_140C24C38.Header.WaitListHead.Blink = &stru_140C24C38.Header.WaitListHead;
  stru_140C24C38.Header.WaitListHead.Flink = &stru_140C24C38.Header.WaitListHead;
  LOWORD(stru_140C24C38.Header.Lock) = 1;
  stru_140C24C38.Header.Size = 6;
  dword_140C24C58 = -1946157056;
  byte_140C24CB8 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C24CC0,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24CF0, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24D90, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C24E48 = 0LL;
  dword_140C24E50 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
