/*
 * XREFs of RtlSplay @ 0x1800652F0
 * Callers:
 *     RtlEnumerateGenericTable @ 0x180064F90 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180065100 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x180065210 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x180065500 (RtlDelete.c)
 *     PfxFindPrefix @ 0x1800E5E10 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E5F10 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800F7520 (RtlLookupElementGenericTableFull.c)
 *     RtlpTpIoLookup @ 0x180113354 (RtlpTpIoLookup.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *v5; // rdx
  _RTL_SPLAY_LINKS *v6; // r8
  _RTL_SPLAY_LINKS *v7; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS *v9; // r8
  _RTL_SPLAY_LINKS **v10; // r8
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v12; // r8
  _RTL_SPLAY_LINKS *v13; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8
  _RTL_SPLAY_LINKS *v15; // r8
  _RTL_SPLAY_LINKS *v16; // r8
  _RTL_SPLAY_LINKS **v17; // r8

  while ( 1 )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
      return Links;
    LeftChild = Parent->LeftChild;
    v4 = Parent->Parent;
    if ( LeftChild == Links )
    {
      if ( v4 == Parent )
      {
        RightChild = Links->RightChild;
        Parent->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = Parent;
        Links->RightChild = Parent;
LABEL_8:
        Parent->Parent = Links;
        Links->Parent = Links;
      }
      else if ( v4->LeftChild == Parent )
      {
        v6 = Links->RightChild;
        Parent->LeftChild = v6;
        if ( v6 )
          v6->Parent = Parent;
        v7 = Parent->RightChild;
        v4->LeftChild = v7;
        if ( v7 )
          v7->Parent = v4;
        if ( v4->Parent == v4 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v4->Parent;
          p_LeftChild = &v4->Parent->LeftChild;
          if ( *p_LeftChild != v4 )
            p_LeftChild = &v4->Parent->RightChild;
          *p_LeftChild = Links;
        }
        Links->RightChild = Parent;
        Parent->RightChild = v4;
LABEL_20:
        Parent->Parent = Links;
        v4->Parent = Parent;
      }
      else
      {
        v12 = Links->LeftChild;
        v4->RightChild = v12;
        if ( v12 )
          v12->Parent = v4;
        v13 = Links->RightChild;
        Parent->LeftChild = v13;
        if ( v13 )
          v13->Parent = Parent;
        if ( v4->Parent == v4 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v4->Parent;
          p_RightChild = &v4->Parent->LeftChild;
          if ( *p_RightChild != v4 )
            p_RightChild = &v4->Parent->RightChild;
          *p_RightChild = Links;
        }
        Links->LeftChild = v4;
        v4->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
    else
    {
      if ( v4 == Parent )
      {
        v5 = Links->LeftChild;
        Parent->RightChild = v5;
        if ( v5 )
          v5->Parent = Parent;
        Links->LeftChild = Parent;
        goto LABEL_8;
      }
      if ( v4->RightChild == Parent )
      {
        v4->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = v4;
        v9 = Links->LeftChild;
        Parent->RightChild = v9;
        if ( v9 )
          v9->Parent = Parent;
        if ( v4->Parent == v4 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v4->Parent;
          v10 = &v4->Parent->LeftChild;
          if ( *v10 != v4 )
            v10 = &v4->Parent->RightChild;
          *v10 = Links;
        }
        Links->LeftChild = Parent;
        Parent->LeftChild = v4;
        goto LABEL_20;
      }
      v15 = Links->LeftChild;
      Parent->RightChild = v15;
      if ( v15 )
        v15->Parent = Parent;
      v16 = Links->RightChild;
      v4->LeftChild = v16;
      if ( v16 )
        v16->Parent = v4;
      if ( v4->Parent == v4 )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = v4->Parent;
        v17 = &v4->Parent->LeftChild;
        if ( *v17 != v4 )
          v17 = &v4->Parent->RightChild;
        *v17 = Links;
      }
      Links->LeftChild = Parent;
      Parent->Parent = Links;
      Links->RightChild = v4;
      v4->Parent = Links;
    }
  }
}
