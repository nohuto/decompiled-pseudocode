/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406C5B40
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406C5B80 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
