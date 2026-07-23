/*
 * XREFs of NtCreateDirectoryObject @ 0x1406D1800
 * Callers:
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     IopCreateRootDirectories @ 0x140A53CFC (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140A56114 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140A6A87C (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6BBC0 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406D1820 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
