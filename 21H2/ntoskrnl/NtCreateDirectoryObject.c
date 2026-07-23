/*
 * XREFs of NtCreateDirectoryObject @ 0x140601A70
 * Callers:
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     IopCreateRootDirectories @ 0x140A5C394 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140A5E080 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140A6F368 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A706AC (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140601A90 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
