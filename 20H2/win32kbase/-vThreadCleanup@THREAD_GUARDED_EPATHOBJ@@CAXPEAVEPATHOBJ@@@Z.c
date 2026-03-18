/*
 * XREFs of ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C013F180
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C005D520 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall THREAD_GUARDED_EPATHOBJ::vThreadCleanup(struct EPATHOBJ *a1)
{
  EPATHOBJ::vUnlock(a1);
}
