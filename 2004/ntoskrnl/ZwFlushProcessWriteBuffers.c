/*
 * XREFs of ZwFlushProcessWriteBuffers @ 0x1403F5300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwFlushProcessWriteBuffers(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
