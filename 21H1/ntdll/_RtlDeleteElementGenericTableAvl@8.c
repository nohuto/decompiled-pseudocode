/*
 * XREFs of _RtlDeleteElementGenericTableAvl@8 @ 0x4B2A6DC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteElementGenericTableAvlEx@8 @ 0x4B2A6E00 (_RtlDeleteElementGenericTableAvlEx@8.c)
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  int v3; // [esp+0h] [ebp-4h] BYREF

  if ( FindNodeOrParent(&v3) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v3);
  return 1;
}
