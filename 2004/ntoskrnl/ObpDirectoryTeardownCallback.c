/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x14097D470
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObMakeTemporaryObject @ 0x14070AFD0 (ObMakeTemporaryObject.c)
 */

LONG_PTR __fastcall ObpDirectoryTeardownCallback(PVOID *a1)
{
  ObMakeTemporaryObject(*a1);
  return ObfDereferenceObjectWithTag(*a1, 0x7254624Fu);
}
