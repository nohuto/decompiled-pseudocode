/*
 * XREFs of PipAreDriversLoadedWorker @ 0x14035D674
 * Callers:
 *     PipAreDriversLoaded @ 0x14035D650 (PipAreDriversLoaded.c)
 *     PipSetDevNodeState @ 0x14036B368 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14036D6E8 (PipRestoreDevNodeState.c)
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
