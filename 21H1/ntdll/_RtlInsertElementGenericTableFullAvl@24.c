/*
 * XREFs of _RtlInsertElementGenericTableFullAvl@24 @ 0x4B2A6F20
 * Callers:
 *     _RtlInsertElementGenericTableAvl@16 @ 0x4B2A6EE0 (_RtlInsertElementGenericTableAvl@16.c)
 * Callees:
 *     _RebalanceNode@4 @ 0x4B2A70E5 (_RebalanceNode@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

PVOID __cdecl RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  _RTL_BALANCED_LINKS *v6; // esi
  _RTL_BALANCED_LINKS *v7; // edx
  _RTL_BALANCED_LINKS *v8; // ecx
  _RTL_BALANCED_LINKS *Parent; // eax
  bool v10; // zf
  char Balance; // dl
  char v12; // al
  PVOID result; // eax
  size_t v14; // [esp-4h] [ebp-Ch]

  if ( SearchResult == TableFoundNode )
  {
    v6 = (_RTL_BALANCED_LINKS *)NodeOrParent;
LABEL_14:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    Table->WhichOrderedElement = 0;
    result = &v6[1];
    Table->OrderedPointer = 0;
    return result;
  }
  if ( BufferSize + 16 >= BufferSize )
  {
    v6 = (_RTL_BALANCED_LINKS *)((int (__thiscall *)(void *(__stdcall *)(_RTL_AVL_TABLE *, unsigned int), PRTL_AVL_TABLE, CLONG))Table->AllocateRoutine)(
                                  Table->AllocateRoutine,
                                  Table,
                                  BufferSize + 16);
    if ( v6 )
    {
      v6->Parent = 0;
      v6->LeftChild = 0;
      v6->RightChild = 0;
      *(_DWORD *)&v6->Balance = 0;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v7 = v6;
        v8 = (_RTL_BALANCED_LINKS *)NodeOrParent;
        if ( SearchResult == TableInsertAsLeft )
          *((_DWORD *)NodeOrParent + 1) = v6;
        else
          *((_DWORD *)NodeOrParent + 2) = v6;
        v6->Parent = (_RTL_BALANCED_LINKS *)NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        Parent = v6->Parent;
        while ( 1 )
        {
          v10 = Parent->LeftChild == v7;
          Balance = v8->Balance;
          v12 = 2 * !v10 - 1;
          if ( Balance )
            break;
          v8->Balance = v12;
          v7 = v8;
          Parent = v8->Parent;
          v8 = v8->Parent;
        }
        if ( Balance == v12 )
        {
          RebalanceNode(v8);
        }
        else
        {
          v8->Balance = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = v6;
        v6->Parent = &Table->BalancedRoot;
        Table->DepthOfTree = 1;
      }
      LODWORD(v14) = BufferSize;
      memcpy(&v6[1], Buffer, v14);
      goto LABEL_14;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0;
}
