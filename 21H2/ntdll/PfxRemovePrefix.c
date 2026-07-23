/*
 * XREFs of PfxRemovePrefix @ 0x1800E62D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x180066B00 (RtlDelete.c)
 */

void __cdecl PfxRemovePrefix(PPREFIX_TABLE PrefixTable, PPREFIX_TABLE_ENTRY PrefixTableEntry)
{
  RTL_SPLAY_LINKS *p_Links; // rcx
  _RTL_SPLAY_LINKS *Parent; // rdx
  RTL_SPLAY_LINKS *i; // rbx
  _RTL_SPLAY_LINKS *v5; // rdi
  PRTL_SPLAY_LINKS v6; // rax
  _RTL_SPLAY_LINKS *v7; // rdx
  _RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *k; // rcx
  _RTL_SPLAY_LINKS **p_LeftChild; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rax
  _RTL_SPLAY_LINKS *j; // rcx

  if ( PrefixTableEntry->NodeTypeCode >= 513 && PrefixTableEntry->NodeTypeCode <= 514 )
  {
    p_Links = &PrefixTableEntry->Links;
    Parent = PrefixTableEntry->Links.Parent;
    for ( i = p_Links; Parent != i; Parent = Parent->Parent )
      i = Parent;
    v5 = (RTL_SPLAY_LINKS *)((char *)i - 16);
    v6 = RtlDelete(p_Links);
    if ( v6 )
    {
      if ( i != v6 )
      {
        p_LeftChild = &v6[-1].LeftChild;
        RightChild = i[-1].RightChild;
        for ( j = RightChild->LeftChild; j != v5; j = j->LeftChild )
          RightChild = j;
        *(_WORD *)p_LeftChild = 513;
        RightChild->LeftChild = (_RTL_SPLAY_LINKS *)p_LeftChild;
        p_LeftChild[1] = i[-1].RightChild;
        i[-1].RightChild = 0LL;
        LOWORD(v5->Parent) = 514;
      }
    }
    else
    {
      v7 = i[-1].RightChild;
      v8 = v7;
      for ( k = v7->LeftChild; k != v5; k = k->LeftChild )
        v8 = k;
      v8->LeftChild = v7;
    }
  }
}
