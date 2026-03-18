/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x140896680
 * Callers:
 *     <none>
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  __int64 v1; // r8
  __int64 v2; // r9

  LOBYTE(v1) = 1;
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, v1, v2);
}
