/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x14088F870
 * Callers:
 *     <none>
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x1402D95E0 (IopSetFileObjectExtensionFlag.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, 1);
}
