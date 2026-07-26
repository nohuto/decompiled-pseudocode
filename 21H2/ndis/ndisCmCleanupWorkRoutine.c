/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C01263F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1C00B0DD8 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_1C00E62F8, 0);
  if ( dword_1C00E6160 )
    ndisCmCleanupSessionState();
}
