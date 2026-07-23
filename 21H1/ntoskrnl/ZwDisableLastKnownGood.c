/*
 * XREFs of ZwDisableLastKnownGood @ 0x1403F3E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwDisableLastKnownGood(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
