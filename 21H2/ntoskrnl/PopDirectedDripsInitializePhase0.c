/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140B271D8
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140B0348C (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x140829740 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140858B18 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x140858B54 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B272B0 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C240C8 = 0LL;
  stru_140C24058.Header.SignalState = 0;
  dword_140C24108 = 0;
  qword_140C24260 = -1LL;
  unk_140C240D0 = 0;
  dword_140C240D4 = 0;
  stru_140C24058.Header.WaitListHead.Blink = &stru_140C24058.Header.WaitListHead;
  stru_140C24058.Header.WaitListHead.Flink = &stru_140C24058.Header.WaitListHead;
  LOWORD(stru_140C24058.Header.Lock) = 1;
  stru_140C24058.Header.Size = 6;
  dword_140C24078 = -1946157056;
  byte_140C240D8 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C240E0,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24110, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C241B0, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C24268 = 0LL;
  dword_140C24270 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
