/*
 * XREFs of HalpBlkWdInitialize @ 0x140A8F3E8
 * Callers:
 *     HalpBlkInitSystem @ 0x140A3A550 (HalpBlkInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14029A5CC (KiInitializeTimer2.c)
 */

char HalpBlkWdInitialize()
{
  char result; // al

  word_140C48B22 = 0;
  result = KiInitializeTimer2((__int64)&HalpBlkWdTimer, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
  HalpBlkWdWorkItem.Parameter = 0LL;
  HalpBlkWdWorkItem.List.Flink = 0LL;
  HalpBlkWdWorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpBlkWdWorkerRoutine;
  return result;
}
