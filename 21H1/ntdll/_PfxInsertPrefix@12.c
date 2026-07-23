/*
 * XREFs of _PfxInsertPrefix@12 @ 0x4B345220
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _CompareNamesCaseSensitive@8 @ 0x4B344F9C (_CompareNamesCaseSensitive@8.c)
 *     _ComputeNameLength@4 @ 0x4B3450EB (_ComputeNameLength@4.c)
 */

BOOLEAN __cdecl PfxInsertPrefix(PPREFIX_TABLE PrefixTable, PSTRING Prefix, PPREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v3; // cx
  PSTRING v4; // edx
  PPREFIX_TABLE v5; // eax
  PPREFIX_TABLE_ENTRY i; // edi
  BOOLEAN result; // al
  PPREFIX_TABLE_ENTRY j; // ebx
  int v9; // eax
  _RTL_SPLAY_LINKS *LeftChild; // eax
  _RTL_SPLAY_LINKS *p_Links; // ebx
  RTL_SPLAY_LINKS *v12; // eax
  _PREFIX_TABLE_ENTRY *NextPrefixTree; // esi
  _PREFIX_TABLE_ENTRY *p_LeftChild; // eax
  PPREFIX_TABLE v15; // [esp+8h] [ebp-4h]

  v3 = ComputeNameLength(&Prefix->Length);
  v4 = Prefix;
  PrefixTableEntry->NameLength = v3;
  PrefixTableEntry->Links.LeftChild = 0;
  PrefixTableEntry->Links.RightChild = 0;
  PrefixTableEntry->Links.Parent = &PrefixTableEntry->Links;
  v5 = PrefixTable;
  PrefixTableEntry->Prefix = Prefix;
  v15 = PrefixTable;
  for ( i = PrefixTable->NextPrefixTree; i->NameLength > v3; i = i->NextPrefixTree )
  {
    v5 = (PPREFIX_TABLE)i;
    v15 = (PPREFIX_TABLE)i;
  }
  if ( i->NameLength == v3 )
  {
    for ( j = i; ; j = (PPREFIX_TABLE_ENTRY)&LeftChild[-1].LeftChild )
    {
      v9 = CompareNamesCaseSensitive(&j->Prefix->Length, &v4->Length);
      if ( v9 == 2 )
        break;
      if ( v9 == 3 )
      {
        LeftChild = j->Links.LeftChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0;
          p_Links = &j->Links;
          PrefixTableEntry->NodeTypeCode = 514;
          v12 = &PrefixTableEntry->Links;
          p_Links->LeftChild = &PrefixTableEntry->Links;
LABEL_14:
          v12->Parent = p_Links;
          NextPrefixTree = i->NextPrefixTree;
          i->NextPrefixTree = 0;
          i->NodeTypeCode = 514;
          p_LeftChild = (_PREFIX_TABLE_ENTRY *)&RtlSplay(p_Links)[-1].LeftChild;
          p_LeftChild->NodeTypeCode = 513;
          v15->NextPrefixTree = p_LeftChild;
          p_LeftChild->NextPrefixTree = NextPrefixTree;
          return 1;
        }
      }
      else
      {
        LeftChild = j->Links.RightChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0;
          v12 = &PrefixTableEntry->Links;
          p_Links = &j->Links;
          PrefixTableEntry->NodeTypeCode = 514;
          p_Links->RightChild = &PrefixTableEntry->Links;
          goto LABEL_14;
        }
      }
      v4 = Prefix;
    }
    return 0;
  }
  else
  {
    v5->NextPrefixTree = PrefixTableEntry;
    result = 1;
    PrefixTableEntry->NodeTypeCode = 513;
    PrefixTableEntry->NextPrefixTree = i;
  }
  return result;
}
