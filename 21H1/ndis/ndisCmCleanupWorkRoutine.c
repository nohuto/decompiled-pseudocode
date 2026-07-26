/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C0126420
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1C00B07A8 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_1C00E6200, 0);
  if ( dword_1C00E6060 )
    ndisCmCleanupSessionState();
}
