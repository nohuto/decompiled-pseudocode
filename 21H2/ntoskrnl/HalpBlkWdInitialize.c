/*
 * XREFs of HalpBlkWdInitialize @ 0x140A8E3E8
 * Callers:
 *     HalpBlkInitSystem @ 0x140A39550 (HalpBlkInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402E927C (KiInitializeTimer2.c)
 */

char HalpBlkWdInitialize()
{
  char result; // al

  word_140C48AE2 = 0;
  result = KiInitializeTimer2((__int64)&HalpBlkWdTimer, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
  HalpBlkWdWorkItem.Parameter = 0LL;
  HalpBlkWdWorkItem.List.Flink = 0LL;
  HalpBlkWdWorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpBlkWdWorkerRoutine;
  return result;
}
