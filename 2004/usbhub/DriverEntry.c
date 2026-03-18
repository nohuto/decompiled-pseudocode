/*
 * XREFs of DriverEntry @ 0x1C0074010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0041468 @ 0x1C0041468 (sub_1C0041468.c)
 *     sub_1C0074044 @ 0x1C0074044 (sub_1C0074044.c)
 */

NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_1C0074044();
  return sub_1C0041468((struct _LIST_ENTRY *)DriverObject, (__int64)RegistryPath);
}
