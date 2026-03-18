/*
 * XREFs of _UnpackAffectedThreadList@0 @ 0xC843C
 * Callers:
 *     ?DestroyDesktop@@YGHPAUtagDESKTOP@@@Z @ 0x82432 (-DestroyDesktop@@YGHPAUtagDESKTOP@@@Z.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z @ 0xC8478 (-PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall UnpackAffectedThreadList()
{
  struct _LIST_ENTRY *Flink; // esi
  int result; // eax
  struct _LIST_ENTRY *v2; // [esp-4h] [ebp-Ch]

  Flink = gListAffectedThreadsForQueueRecalc.Flink;
  while ( Flink && Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v2 = Flink;
    Flink = Flink[94].Blink;
    result = Win32FreePool(v2);
  }
  gnThreadsAffectedForQueueRecalc = 0;
  InitializeListHead(&gListAffectedThreadsForQueueRecalc);
  return result;
}
