/*
 * XREFs of _PfxRemovePrefix@8 @ 0x4B345310
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 */

void __cdecl PfxRemovePrefix(PPREFIX_TABLE PrefixTable, PPREFIX_TABLE_ENTRY PrefixTableEntry)
{
  RTL_SPLAY_LINKS *p_Links; // esi
  _PREFIX_TABLE_ENTRY *Parent; // ecx
  _RTL_SPLAY_LINKS *v4; // edi
  PRTL_SPLAY_LINKS v5; // eax
  _RTL_SPLAY_LINKS *j; // eax
  _RTL_SPLAY_LINKS *v7; // edx
  _RTL_SPLAY_LINKS *i; // eax

  if ( PrefixTableEntry->NodeTypeCode >= 513 && PrefixTableEntry->NodeTypeCode <= 514 )
  {
    p_Links = &PrefixTableEntry->Links;
    Parent = (_PREFIX_TABLE_ENTRY *)PrefixTableEntry->Links.Parent;
    if ( Parent != (_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
    {
      do
      {
        p_Links = (RTL_SPLAY_LINKS *)Parent;
        Parent = *(_PREFIX_TABLE_ENTRY **)&Parent->NodeTypeCode;
      }
      while ( Parent != (_PREFIX_TABLE_ENTRY *)p_Links );
    }
    v4 = (RTL_SPLAY_LINKS *)((char *)p_Links - 8);
    v5 = RtlDelete(&PrefixTableEntry->Links);
    if ( v5 )
    {
      if ( p_Links != v5 )
      {
        v7 = (PRTL_SPLAY_LINKS)((char *)v5 - 8);
        for ( i = p_Links[-1].RightChild; i->LeftChild != v4; i = i->LeftChild )
          ;
        LOWORD(v7->Parent) = 513;
        i->LeftChild = v7;
        v7->LeftChild = p_Links[-1].RightChild;
        p_Links[-1].RightChild = 0;
        LOWORD(v4->Parent) = 514;
      }
    }
    else
    {
      for ( j = p_Links[-1].RightChild; j->LeftChild != v4; j = j->LeftChild )
        ;
      j->LeftChild = p_Links[-1].RightChild;
    }
  }
}
