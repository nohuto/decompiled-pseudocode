/*
 * XREFs of NtLoadDriver @ 0x1407809C0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140399FC8 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
