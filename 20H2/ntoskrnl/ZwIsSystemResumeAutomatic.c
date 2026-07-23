/*
 * XREFs of ZwIsSystemResumeAutomatic @ 0x1403FA1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN ZwIsSystemResumeAutomatic(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
