/*
 * XREFs of CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087D5D8
 * Callers:
 *     CmpPromoteSubtree @ 0x140717798 (CmpPromoteSubtree.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14069CD68 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanupKeyNodeStack @ 0x1406E93D8 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406E9448 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpInitializeKeyNodeStack @ 0x1406E9520 (CmpInitializeKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408731EC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087CE00 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(__int64 a1, __int16 *a2, char a3)
{
  char v6; // di
  __int16 v7; // r14
  ULONG_PTR KcbAtLayerHeight; // rsi
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  int started; // ebx
  __int64 EntryAtLayerHeight; // r15
  __int16 v13; // dx
  __int16 v15[40]; // [rsp+20h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = 0;
  CmpInitializeKeyNodeStack((char *)v15);
  v7 = *(_WORD *)(a1 + 2);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v7);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v15, a1, v9, v10);
  if ( started < 0 )
    goto LABEL_11;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v15, v7);
  if ( *(_DWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v13) + 8) == -1 )
  {
    started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v15, (__int64)a2);
    if ( started < 0 )
      goto LABEL_11;
    v6 = 1;
  }
  if ( a3 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v15, a2);
    if ( started < 0 )
      goto LABEL_9;
    v6 = 1;
  }
  started = 0;
LABEL_9:
  if ( v6 )
  {
    ++*(_QWORD *)(KcbAtLayerHeight + 304);
    CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
  }
LABEL_11:
  CmpCleanupKeyNodeStack((__int64)v15);
  return (unsigned int)started;
}
