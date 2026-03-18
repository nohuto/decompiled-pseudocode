/*
 * XREFs of PipUpdateSetupInProgressCallback @ 0x14089E270
 * Callers:
 *     <none>
 * Callees:
 *     PipUpdateSetupInProgressNotify @ 0x14089E288 (PipUpdateSetupInProgressNotify.c)
 */

__int64 __fastcall PipUpdateSetupInProgressCallback(void *a1)
{
  return PipUpdateSetupInProgressNotify(a1);
}
