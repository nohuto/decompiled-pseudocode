/*
 * XREFs of HalpBlkWdInitialize @ 0x140B4D9C8
 * Callers:
 *     HalpBlkInitSystem @ 0x140AF8974 (HalpBlkInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 */

char HalpBlkWdInitialize()
{
  char result; // al

  word_140C49DC2 = 0;
  result = KiInitializeTimer2((__int64)&HalpBlkWdTimer, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
  HalpBlkWdWorkItem.Parameter = 0LL;
  HalpBlkWdWorkItem.List.Flink = 0LL;
  HalpBlkWdWorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpBlkWdWorkerRoutine;
  return result;
}
