/*
 * XREFs of _RtlInsertElementGenericTableAvl@16 @ 0x4B2A6EE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInsertElementGenericTableFullAvl@24 @ 0x4B2A6F20 (_RtlInsertElementGenericTableFullAvl@24.c)
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 */

PVOID __cdecl RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT v4; // eax
  PVOID NodeOrParent; // [esp+0h] [ebp-4h] BYREF

  v4 = FindNodeOrParent(&NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, v4);
}
