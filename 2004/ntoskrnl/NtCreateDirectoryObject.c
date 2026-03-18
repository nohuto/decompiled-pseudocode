/*
 * XREFs of NtCreateDirectoryObject @ 0x1406F27C0
 * Callers:
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     IopCreateUmdfDirectory @ 0x140A4D578 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140A6AADC (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6BE48 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x140A6ED4C (IopCreateRootDirectories.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406F27E0 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObject(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
