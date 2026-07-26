/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C0126430
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1C00B0C68 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_1C00E6340, 0);
  if ( dword_1C00E6190 )
    ndisCmCleanupSessionState();
}
