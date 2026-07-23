/*
 * XREFs of _RtlDeleteElementGenericTable@8 @ 0x4B2A7E60
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x4B2A7F4E (FindNodeOrParent.c)
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // edi
  _RTL_SPLAY_LINKS *Parent; // edx
  _RTL_SPLAY_LINKS *LeftChild; // ecx
  PRTL_SPLAY_LINKS Links; // [esp+4h] [ebp-4h] BYREF

  if ( FindNodeOrParent(&Links) != 1 )
    return 0;
  v3 = Links;
  Table->TableRoot = RtlDelete(Links);
  Parent = v3[1].Parent;
  if ( Parent->LeftChild != &v3[1] || (LeftChild = v3[1].LeftChild, LeftChild->Parent != &v3[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = &Table->InsertOrderList;
  ((void (__thiscall *)(PRTL_GENERIC_FREE_ROUTINE, PRTL_GENERIC_TABLE, PRTL_SPLAY_LINKS))Table->FreeRoutine)(
    Table->FreeRoutine,
    Table,
    v3);
  return 1;
}
