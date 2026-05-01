/*
 * XREFs of sub_180004C18 @ 0x180004C18
 * Callers:
 *     sub_180004A38 @ 0x180004A38 (sub_180004A38.c)
 *     sub_180013860 @ 0x180013860 (sub_180013860.c)
 *     sub_1800431A0 @ 0x1800431A0 (sub_1800431A0.c)
 *     sub_18006BD10 @ 0x18006BD10 (sub_18006BD10.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180004C18(HANDLE SourceHandle, ACCESS_MASK DesiredAccess, PHANDLE TargetHandle)
{
  ULONG Options; // ebx
  HANDLE CurrentProcess; // rdi
  HANDLE v8; // rax

  Options = DesiredAccess == 0 ? 2 : 0;
  CurrentProcess = GetCurrentProcess();
  v8 = GetCurrentProcess();
  return NtDuplicateObject(v8, SourceHandle, CurrentProcess, TargetHandle, DesiredAccess, 0, Options);
}
