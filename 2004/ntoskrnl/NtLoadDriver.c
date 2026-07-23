/*
 * XREFs of NtLoadDriver @ 0x14076DFF0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140397588 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
