/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406C5B40
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406C5B80 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, ShadowDirectoryHandle, Flags);
}
