/*
 * XREFs of IoIsFileOriginRemote @ 0x14032B5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsFileOriginRemote(PFILE_OBJECT FileObject)
{
  return HIBYTE(FileObject->Flags) & 1;
}
