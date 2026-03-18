/*
 * XREFs of CmpPromoteSubtree @ 0x14065B6A0
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpPromoteSubtreeForKcbStack @ 0x140922C44 (CmpPromoteSubtreeForKcbStack.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14065B3DC (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x14065C388 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x14065C63C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x14065C6C0 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14065CB84 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpInitializeKeyNodeStack @ 0x14069F2B4 (CmpInitializeKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x14091D2E4 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140922B20 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPromoteSubtree(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int16 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  int v12; // eax
  __int16 *v14; // [rsp+20h] [rbp-59h] BYREF
  __int64 v15; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v16[14]; // [rsp+30h] [rbp-49h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  memset((char *)v16 + 2, 0, 0x66uLL);
  LOWORD(v16[0]) = -2;
  CmpInitializeKeyNodeStack(&v16[2]);
  if ( a1 )
    v4 = CmpSubtreeEnumeratorStartForKcbStack(v16, a1);
  else
    v4 = CmpSubtreeEnumeratorStartForKeyNodeStack(v16, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v6 = CmpSubtreeEnumeratorAdvance(v16);
      v5 = v6;
      if ( v6 == -2147483622 )
        break;
      if ( v6 < 0 )
        goto LABEL_14;
      CmpSubtreeEnumeratorGetCurrentKeyStacks(v16, &v15, &v14);
      v7 = v14;
      v8 = *(_QWORD *)(408LL * SLOWORD(v16[0]) + v16[12] - 392);
      v11 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(v14) + 16);
      if ( v15 )
      {
        LOBYTE(v9) = 1;
        v12 = CmpPromoteSingleKeyFromKcbStacks(v10, v15, v9);
      }
      else if ( v10 )
      {
        LOBYTE(v9) = 1;
        v12 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(v10, v7, v9);
      }
      else
      {
        v5 = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v8, (__int64)v7);
        if ( v5 < 0 )
          goto LABEL_14;
        v12 = CmpFullPromoteSingleKeyFromKeyNodeStacks(v8, v7);
      }
      v5 = v12;
      if ( v12 < 0 )
        goto LABEL_14;
      if ( !v11 )
        CmpKeyEnumStackNotifyPromotion(v16[12] + 56LL + 408LL * (SLOWORD(v16[0]) - 1));
    }
    v5 = 0;
  }
LABEL_14:
  CmpSubtreeEnumeratorCleanup(v16);
  return (unsigned int)v5;
}
