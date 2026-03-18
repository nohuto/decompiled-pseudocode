/*
 * XREFs of PipAreDriversLoadedWorker @ 0x1402DEB00
 * Callers:
 *     PipRestoreDevNodeState @ 0x14025B96C (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PipAreDriversLoaded @ 0x1402DEADC (PipAreDriversLoaded.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipAreDriversLoadedWorker(int a1, int a2)
{
  int v3; // ecx

  while ( a1 <= 787 )
  {
    if ( a1 >= 785 )
      return 1LL;
    if ( a1 <= 772 )
      return 0LL;
    if ( a1 <= 783 )
      return 1LL;
    a1 = a2;
    a2 = 768;
  }
  v3 = a1 - 788;
  return v3 && v3 == 1;
}
