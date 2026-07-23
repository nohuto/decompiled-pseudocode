/*
 * XREFs of NtLoadDriver @ 0x14076B850
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140396978 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
