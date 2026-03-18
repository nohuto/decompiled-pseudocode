/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C01D1450
 * Callers:
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowSize @ 0x1C00680B8 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C0103F90 (ConstrainWindowPos.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
