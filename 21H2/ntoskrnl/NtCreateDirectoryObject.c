/*
 * XREFs of NtCreateDirectoryObject @ 0x1406C2A50
 * Callers:
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x140B28EB0 (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x140B2931C (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140B2940C (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x140B2B2EC (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406C2A70 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObject(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
