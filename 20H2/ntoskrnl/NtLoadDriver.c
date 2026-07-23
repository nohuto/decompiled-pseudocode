/*
 * XREFs of NtLoadDriver @ 0x14077CA20
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140399A08 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
