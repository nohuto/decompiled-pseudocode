/*
 * XREFs of _ResetDblClk @ 0x1C012E7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ResetDblClk()
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 160LL) = 0;
  return 1LL;
}
