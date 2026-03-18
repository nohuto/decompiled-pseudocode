/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406C2A30
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406C2A70 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
