/*
 * XREFs of _SetTSFEventState @ 0x1C012E930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetTSFEventState(int a1)
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL) = a1;
  return 1LL;
}
