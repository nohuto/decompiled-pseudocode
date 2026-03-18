/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1406D17E0
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1406D1820 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}
