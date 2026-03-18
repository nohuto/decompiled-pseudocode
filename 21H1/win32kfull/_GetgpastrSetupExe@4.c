/*
 * XREFs of _GetgpastrSetupExe@4 @ 0xD4DE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG **__stdcall GetgpastrSetupExe(ULONG **a1)
{
  ULONG **result; // eax

  result = a1;
  *a1 = &WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  return result;
}
