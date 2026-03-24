/*
 * XREFs of NtCreateDirectoryObject @ 0x1406A1B40
 * Callers:
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 *     IopCreateRootDirectories @ 0x140A5B394 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140A6E368 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140A6F6AC (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406A1B60 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObject(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
