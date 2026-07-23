/*
 * XREFs of _PfxFindPrefix@8 @ 0x4B345160
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _CompareNamesCaseSensitive@8 @ 0x4B344F9C (_CompareNamesCaseSensitive@8.c)
 *     _ComputeNameLength@4 @ 0x4B3450EB (_ComputeNameLength@4.c)
 */

PPREFIX_TABLE_ENTRY __cdecl PfxFindPrefix(PPREFIX_TABLE PrefixTable, PSTRING FullName)
{
  _PREFIX_TABLE *NextPrefixTree; // edi
  CSHORT v3; // ax
  _PREFIX_TABLE *i; // ebx
  int v5; // eax
  PPREFIX_TABLE_ENTRY result; // eax
  _PREFIX_TABLE_ENTRY *v7; // esi

  NextPrefixTree = (_PREFIX_TABLE *)PrefixTable->NextPrefixTree;
  v3 = ComputeNameLength(&FullName->Length);
  while ( NextPrefixTree->NameLength > v3 )
  {
    PrefixTable = NextPrefixTree;
    NextPrefixTree = (_PREFIX_TABLE *)NextPrefixTree->NextPrefixTree;
  }
LABEL_12:
  if ( NextPrefixTree->NameLength <= 0 )
    return 0;
  for ( i = NextPrefixTree + 1; ; i = *(_PREFIX_TABLE **)&i[1].NodeTypeCode )
  {
    while ( 1 )
    {
      if ( !i )
      {
        PrefixTable = NextPrefixTree;
        NextPrefixTree = (_PREFIX_TABLE *)NextPrefixTree->NextPrefixTree;
        goto LABEL_12;
      }
      v5 = CompareNamesCaseSensitive((unsigned __int16 *)i[1].NextPrefixTree, &FullName->Length);
      if ( v5 != 3 )
        break;
      i = (_PREFIX_TABLE *)i->NextPrefixTree;
    }
    if ( v5 )
      break;
  }
  result = (PPREFIX_TABLE_ENTRY)&i[-1];
  if ( i[-1].NodeTypeCode == 514 )
  {
    v7 = NextPrefixTree->NextPrefixTree;
    NextPrefixTree->NextPrefixTree = 0;
    NextPrefixTree->NodeTypeCode = 514;
    result = (PPREFIX_TABLE_ENTRY)&RtlSplay((PRTL_SPLAY_LINKS)i)[-1].LeftChild;
    result->NodeTypeCode = 513;
    PrefixTable->NextPrefixTree = result;
    result->NextPrefixTree = v7;
  }
  return result;
}
