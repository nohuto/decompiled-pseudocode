/*
 * XREFs of _RtlSplay@4 @ 0x4B2E8250
 * Callers:
 *     _RtlInsertElementGenericTableFull@24 @ 0x4B2A7DA0 (_RtlInsertElementGenericTableFull@24.c)
 *     _RtlLookupElementGenericTableFull@16 @ 0x4B2A7F10 (_RtlLookupElementGenericTableFull@16.c)
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _PfxFindPrefix@8 @ 0x4B345160 (_PfxFindPrefix@8.c)
 *     _PfxInsertPrefix@12 @ 0x4B345220 (_PfxInsertPrefix@12.c)
 *     _RtlEnumerateGenericTable@8 @ 0x4B35E0A0 (_RtlEnumerateGenericTable@8.c)
 *     _RtlpTpIoLookup@12 @ 0x4B385A3D (_RtlpTpIoLookup@12.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // eax
  _RTL_SPLAY_LINKS *i; // ecx
  _RTL_SPLAY_LINKS *LeftChild; // esi
  _RTL_SPLAY_LINKS *Parent; // edx
  _RTL_SPLAY_LINKS *v5; // edx
  _RTL_SPLAY_LINKS *v6; // esi
  _RTL_SPLAY_LINKS *v7; // esi
  _RTL_SPLAY_LINKS **v8; // esi
  _RTL_SPLAY_LINKS *v9; // edx
  _RTL_SPLAY_LINKS *v10; // esi
  _RTL_SPLAY_LINKS *v11; // esi
  _RTL_SPLAY_LINKS **p_RightChild; // esi
  _RTL_SPLAY_LINKS *v13; // esi
  _RTL_SPLAY_LINKS *RightChild; // esi
  _RTL_SPLAY_LINKS **p_LeftChild; // esi
  _RTL_SPLAY_LINKS *v16; // esi
  _RTL_SPLAY_LINKS **v17; // esi

  result = Links;
  for ( i = Links->Parent; Links->Parent != Links; i = Links->Parent )
  {
    LeftChild = i->LeftChild;
    Parent = i->Parent;
    if ( LeftChild == Links )
    {
      if ( Parent != i )
      {
        if ( Parent->LeftChild != i )
        {
          v13 = Links->LeftChild;
          Parent->RightChild = v13;
          if ( v13 )
            v13->Parent = Parent;
          RightChild = Links->RightChild;
          i->LeftChild = RightChild;
          if ( RightChild )
            RightChild->Parent = i;
          if ( Parent->Parent == Parent )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = Parent->Parent;
            p_LeftChild = &Parent->Parent->LeftChild;
            if ( *p_LeftChild != Parent )
              p_LeftChild = &Parent->Parent->RightChild;
            *p_LeftChild = Links;
          }
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
          continue;
        }
        v10 = Links->RightChild;
        i->LeftChild = v10;
        if ( v10 )
          v10->Parent = i;
        v11 = i->RightChild;
        Parent->LeftChild = v11;
        if ( v11 )
          v11->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          p_RightChild = &Parent->Parent->LeftChild;
          if ( *p_RightChild != Parent )
            p_RightChild = &Parent->Parent->RightChild;
          *p_RightChild = Links;
        }
        Links->RightChild = i;
        i->RightChild = Parent;
LABEL_56:
        i->Parent = Links;
        Parent->Parent = i;
        continue;
      }
      v9 = Links->RightChild;
      i->LeftChild = v9;
      if ( v9 )
        v9->Parent = i;
      Links->RightChild = i;
    }
    else
    {
      if ( Parent != i )
      {
        if ( Parent->RightChild != i )
        {
          v6 = Links->LeftChild;
          i->RightChild = v6;
          if ( v6 )
            v6->Parent = i;
          v7 = Links->RightChild;
          Parent->LeftChild = v7;
          if ( v7 )
            v7->Parent = Parent;
          if ( Parent->Parent == Parent )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = Parent->Parent;
            v8 = &Parent->Parent->LeftChild;
            if ( *v8 != Parent )
              v8 = &Parent->Parent->RightChild;
            *v8 = Links;
          }
          Links->LeftChild = i;
          i->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
          continue;
        }
        Parent->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = Parent;
        v16 = Links->LeftChild;
        i->RightChild = v16;
        if ( v16 )
          v16->Parent = i;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v17 = &Parent->Parent->LeftChild;
          if ( *v17 != Parent )
            v17 = &Parent->Parent->RightChild;
          *v17 = Links;
        }
        Links->LeftChild = i;
        i->LeftChild = Parent;
        goto LABEL_56;
      }
      v5 = Links->LeftChild;
      i->RightChild = v5;
      if ( v5 )
        v5->Parent = i;
      Links->LeftChild = i;
    }
    i->Parent = Links;
    Links->Parent = Links;
  }
  return result;
}
