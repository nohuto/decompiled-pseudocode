/*
 * XREFs of ZwTestAlert @ 0x1403F6DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
