/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x14087D444
 * Callers:
 *     CmpPromoteSubtree @ 0x140717798 (CmpPromoteSubtree.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
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

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(__int64 a1, __int64 a2, char a3)
{
  __int16 v5; // r14
  char v6; // si
  ULONG_PTR KcbAtLayerHeight; // r15
  __int16 v8; // dx
  ULONG_PTR v9; // rdi
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  int started; // ebx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  __int64 EntryAtLayerHeight; // r13
  __int16 v16; // dx
  __int64 v17; // r14
  __int16 v20[40]; // [rsp+30h] [rbp-89h] BYREF
  __int16 v21[40]; // [rsp+80h] [rbp-39h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  CmpInitializeKeyNodeStack((char *)v21);
  CmpInitializeKeyNodeStack((char *)v20);
  v5 = *(_WORD *)(a1 + 2);
  v6 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v5);
  v9 = CmpGetKcbAtLayerHeight(a2, v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v21, a1, v10, v11);
  if ( started < 0 )
    goto LABEL_12;
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v20, a2, v13, v14);
  if ( started < 0 )
    goto LABEL_12;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v21, v5);
  v17 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v20, v16);
  if ( *(_DWORD *)(v9 + 40) == -1 )
  {
    started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v21, (__int64)v20);
    if ( started < 0 )
      goto LABEL_12;
    v6 = 1;
    *(_DWORD *)(v9 + 40) = *(_DWORD *)(v17 + 8);
  }
  if ( a3 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v21, v20);
    if ( started < 0 )
      goto LABEL_10;
    v6 = 1;
  }
  started = 0;
LABEL_10:
  if ( v6 )
  {
    ++*(_QWORD *)(v9 + 304);
    CmpRebuildKcbCacheFromNode(v9, *(_QWORD *)(v17 + 16), 0LL, 0);
    ++*(_QWORD *)(KcbAtLayerHeight + 304);
    CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
  }
LABEL_12:
  CmpCleanupKeyNodeStack((__int64)v20);
  CmpCleanupKeyNodeStack((__int64)v21);
  return (unsigned int)started;
}
