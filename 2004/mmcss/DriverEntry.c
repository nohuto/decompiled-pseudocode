/*
 * XREFs of DriverEntry @ 0x1C000D010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000D044 @ 0x1C000D044 (sub_1C000D044.c)
 *     sub_1C000D120 @ 0x1C000D120 (sub_1C000D120.c)
 */

NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_1C000D044();
  return sub_1C000D120(DriverObject, RegistryPath);
}
