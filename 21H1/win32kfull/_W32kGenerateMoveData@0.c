/*
 * XREFs of _W32kGenerateMoveData@0 @ 0x1D488A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall W32kGenerateMoveData()
{
  int result; // eax

  result = UserIsRemoteAndNotDisconnectConnection();
  if ( result || g_bUseMoveHints )
    return 1;
  return result;
}
