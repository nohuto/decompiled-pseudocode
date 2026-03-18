/*
 * XREFs of CmpPromoteSubtree @ 0x140717798
 * Callers:
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406E9448 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140717DD0 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140717F0C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x1407184D4 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x1407187A8 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140873278 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140873308 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1408776E4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087CE00 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087D444 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087D5D8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPromoteSubtree(__int64 a1, __int16 *a2)
{
  __int16 v4; // r14
  int v5; // eax
  int v6; // ebx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  int v13; // eax
  bool v14; // sf
  __int64 v15; // [rsp+20h] [rbp-59h] BYREF
  __int64 v16; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v17[14]; // [rsp+30h] [rbp-49h] BYREF

  memset(v17, 0, 0x68uLL);
  v16 = 0LL;
  v15 = 0LL;
  CmpSubtreeEnumeratorInitialize(v17);
  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    v5 = CmpSubtreeEnumeratorStartForKcbStack(v17, a1);
  }
  else
  {
    v4 = *a2;
    v5 = CmpSubtreeEnumeratorStartForKeyNodeStack(v17, a2);
  }
  v6 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v6 = CmpSubtreeEnumeratorAdvance(v17);
      if ( v6 == -2147483622 )
      {
        v6 = 0;
        goto LABEL_6;
      }
      if ( v6 < 0 )
        goto LABEL_6;
      CmpSubtreeEnumeratorGetCurrentKeyStacks(v17, &v16, &v15);
      v8 = v15;
      v9 = *(_QWORD *)(408LL * SLOWORD(v17[0]) + v17[12] - 392);
      v12 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(v15, v4) + 16);
      if ( v16 )
        break;
      if ( v11 )
      {
        LOBYTE(v10) = 1;
        v13 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(v11, v8, v10);
        goto LABEL_12;
      }
      v6 = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v9, v8);
      if ( v6 >= 0 )
      {
        v6 = CmpFullPromoteSingleKeyFromKeyNodeStacks(v9, v8);
        if ( v6 >= 0 )
          v6 = 0;
      }
      v14 = v6 < 0;
LABEL_18:
      if ( v14 )
        goto LABEL_6;
      if ( !v12 )
        CmpKeyEnumStackNotifyPromotion(v17[12] + 56LL + 408LL * (SLOWORD(v17[0]) - 1));
    }
    LOBYTE(v10) = 1;
    v13 = CmpPromoteSingleKeyFromKcbStacks(v11, v16, v10);
LABEL_12:
    v6 = v13;
    v14 = v13 < 0;
    goto LABEL_18;
  }
LABEL_6:
  CmpSubtreeEnumeratorCleanup(v17);
  return (unsigned int)v6;
}
