/*
 * XREFs of ZwSerializeBoot @ 0x1403FB250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwSerializeBoot(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
