/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C01D0640
 * Callers:
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowSize @ 0x1C0092DD8 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C0092E10 (ConstrainWindowPos.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
