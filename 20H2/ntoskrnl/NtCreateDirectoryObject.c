/*
 * XREFs of NtCreateDirectoryObject @ 0x1406C5B60
 * Callers:
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 *     IopCreateRootDirectories @ 0x140A5A0F8 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140A5C514 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140A713E8 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A7272C (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406C5B80 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
