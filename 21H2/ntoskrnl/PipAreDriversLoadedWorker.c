/*
 * XREFs of PipAreDriversLoadedWorker @ 0x1402532D8
 * Callers:
 *     PipAreDriversLoaded @ 0x1402532B4 (PipAreDriversLoaded.c)
 *     PipRestoreDevNodeState @ 0x14036D950 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipAreDriversLoadedWorker(int a1, int a2)
{
  int v3; // ecx

  while ( a1 <= 785 )
  {
    if ( a1 >= 783 )
      return 1LL;
    if ( a1 <= 770 )
      return 0LL;
    if ( a1 <= 781 )
      return 1LL;
    a1 = a2;
    a2 = 768;
  }
  v3 = a1 - 786;
  return v3 && v3 == 1;
}
