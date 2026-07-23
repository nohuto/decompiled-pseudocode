/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140A41A88
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A41650 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x140796988 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140796A5C (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x140796A98 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A41B60 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C24D08 = 0LL;
  stru_140C24C98.Header.SignalState = 0;
  dword_140C24D48 = 0;
  qword_140C24EA0 = -1LL;
  unk_140C24D10 = 0;
  dword_140C24D14 = 0;
  stru_140C24C98.Header.WaitListHead.Blink = &stru_140C24C98.Header.WaitListHead;
  stru_140C24C98.Header.WaitListHead.Flink = &stru_140C24C98.Header.WaitListHead;
  LOWORD(stru_140C24C98.Header.Lock) = 1;
  stru_140C24C98.Header.Size = 6;
  dword_140C24CB8 = -1946157056;
  byte_140C24D18 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C24D20,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24D50, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24DF0, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C24EA8 = 0LL;
  dword_140C24EB0 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
