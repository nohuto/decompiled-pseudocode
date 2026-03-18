/*
 * XREFs of CmpSubtreeEnumeratorAdvance @ 0x14065B81C
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     CmpKeyEnumStackAdvance @ 0x14065B900 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackReset @ 0x14065BC50 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14065BD24 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406D2154 (CmpFindKcbInHashEntryByName.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 *     CmpHashCompressedComponent @ 0x14071BC04 (CmpHashCompressedComponent.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpPopulateKcbStack @ 0x1407C063C (CmpPopulateKcbStack.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14091514C (CmpFindKcbInHashEntryByCompressedName.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorAdvance(__int64 a1)
{
  unsigned int v2; // edi
  __int16 v3; // cx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 KcbInHashEntryByName; // rax
  __int64 KcbAtLayerHeight; // r14
  __int64 v9; // r9
  __int16 v10; // dx
  __int64 EntryAtLayerHeight; // rax
  __int16 v12; // dx
  bool v13; // zf
  int v14; // r12d
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  _OWORD v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *(_WORD *)a1;
  v19[0] = 0LL;
  if ( v3 < 0 )
  {
    return (unsigned int)-2147483622;
  }
  else
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 96) + 408LL * v3;
      if ( !*(_BYTE *)v4 )
      {
        CmpKeyEnumStackBeginEnumerationForKeyNodeStack(v4 + 56, *(_QWORD *)(v4 + 16), 0LL);
        *(_BYTE *)v4 = 1;
      }
      if ( (unsigned int)CmpKeyEnumStackAdvance(v4 + 56) != -2147483622 )
        break;
      CmpKeyEnumStackReset(v4 + 56);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_BYTE *)v4 = 0;
      v3 = *(_WORD *)a1 - 1;
      *(_WORD *)a1 = v3;
      if ( v3 < 0 )
        return (unsigned int)-2147483622;
    }
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v5, *(unsigned __int16 *)(a1 + 2));
      v9 = 0LL;
      if ( v10 >= 0 )
      {
        while ( 1 )
        {
          EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v4 + 64);
          if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
            break;
          if ( (__int16)(v12 - 1) < 0 )
            goto LABEL_18;
        }
        v9 = *(_QWORD *)(EntryAtLayerHeight + 16);
      }
LABEL_18:
      v13 = (*(_BYTE *)(v9 + 2) & 0x20) == 0;
      v14 = v9 + 76;
      v15 = *(unsigned __int16 *)(v9 + 72);
      *((_QWORD *)&v19[0] + 1) = v9 + 76;
      LOWORD(v19[0]) = v15;
      WORD1(v19[0]) = v15;
      if ( v13 )
      {
        v17 = CmpHashUnicodeComponent(v19);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                                 *(_QWORD *)(KcbAtLayerHeight + 32),
                                 (unsigned int)(v17 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16)),
                                 KcbAtLayerHeight,
                                 v19);
      }
      else
      {
        v16 = CmpHashCompressedComponent(v9 + 76, v15);
        KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                                 *(_QWORD *)(KcbAtLayerHeight + 32),
                                 v16 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                 KcbAtLayerHeight,
                                 v14,
                                 v15);
      }
    }
    else
    {
      KcbInHashEntryByName = 0LL;
    }
    *(_QWORD *)(v4 + 424) = v4 + 64;
    if ( KcbInHashEntryByName )
    {
      CmpPopulateKcbStack(v4 + 24, KcbInHashEntryByName);
      *(_QWORD *)(v4 + 416) = v18;
    }
    ++*(_WORD *)a1;
  }
  return v2;
}
