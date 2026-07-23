/*
 * XREFs of NtCreateProcess @ 0x140903B10
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateProcessEx @ 0x140903BA0 (NtCreateProcessEx.c)
 */

NTSTATUS __cdecl NtCreateProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        BOOLEAN InheritObjectTable,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle)
{
  int v9; // r11d
  ULONG Flags; // ecx

  v9 = (unsigned __int8)SectionHandle & 1 | 2;
  if ( ((unsigned __int8)DebugPort & 1) == 0 )
    v9 = (unsigned __int8)SectionHandle & 1;
  Flags = v9 | 4;
  if ( !InheritObjectTable )
    Flags = v9;
  return NtCreateProcessEx(
           ProcessHandle,
           DesiredAccess,
           ObjectAttributes,
           ParentProcess,
           Flags,
           SectionHandle,
           DebugPort,
           TokenHandle,
           0);
}
