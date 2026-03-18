/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x140890B90
 * Callers:
 *     <none>
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x14027B310 (IopSetFileObjectExtensionFlag.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, 1);
}
