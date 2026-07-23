/*
 * XREFs of PfxFindPrefix @ 0x1800E5E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800652F0 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x1800E5C08 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1800E5D88 (ComputeNameLength.c)
 */

PPREFIX_TABLE_ENTRY __cdecl PfxFindPrefix(PPREFIX_TABLE PrefixTable, PSTRING FullName)
{
  PPREFIX_TABLE_ENTRY NextPrefixTree; // rdi
  PPREFIX_TABLE v3; // rbp
  CSHORT v5; // ax
  _RTL_SPLAY_LINKS *i; // rsi
  _PREFIX_TABLE_ENTRY *p_LeftChild; // r14
  int v8; // eax
  _PREFIX_TABLE_ENTRY *v10; // rbx

  NextPrefixTree = PrefixTable->NextPrefixTree;
  v3 = PrefixTable;
  v5 = ComputeNameLength(&FullName->Length);
  while ( NextPrefixTree->NameLength > v5 )
  {
    v3 = (PPREFIX_TABLE)NextPrefixTree;
    NextPrefixTree = NextPrefixTree->NextPrefixTree;
  }
LABEL_12:
  if ( NextPrefixTree->NameLength <= 0 )
    return 0LL;
  for ( i = &NextPrefixTree->Links; ; i = i->RightChild )
  {
    while ( 1 )
    {
      if ( !i )
      {
        v3 = (PPREFIX_TABLE)NextPrefixTree;
        NextPrefixTree = NextPrefixTree->NextPrefixTree;
        goto LABEL_12;
      }
      p_LeftChild = (_PREFIX_TABLE_ENTRY *)&i[-1].LeftChild;
      v8 = CompareNamesCaseSensitive((unsigned __int16 *)i[1].Parent, &FullName->Length);
      if ( v8 != 3 )
        break;
      i = i->LeftChild;
    }
    if ( v8 )
      break;
  }
  if ( p_LeftChild->NodeTypeCode == 514 )
  {
    v10 = NextPrefixTree->NextPrefixTree;
    NextPrefixTree->NextPrefixTree = 0LL;
    NextPrefixTree->NodeTypeCode = 514;
    p_LeftChild = (_PREFIX_TABLE_ENTRY *)&RtlSplay(i)[-1].LeftChild;
    p_LeftChild->NodeTypeCode = 513;
    v3->NextPrefixTree = p_LeftChild;
    p_LeftChild->NextPrefixTree = v10;
  }
  return p_LeftChild;
}
