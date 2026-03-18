/*
 * XREFs of CmpFullPromoteHiveRootFromKcbStack @ 0x1408828C4
 * Callers:
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x1406BDD50 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406BDDC0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpInitializeKeyNodeStack @ 0x1406BDE98 (CmpInitializeKeyNodeStack.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140704958 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140725820 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140878D3C (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKcbStack(__int64 a1)
{
  ULONG_PTR KcbAtLayerHeight; // rdi
  __int64 v3; // r8
  struct _LOOKASIDE_LIST_EX *v4; // r9
  int started; // ebx
  __int64 EntryAtLayerHeight; // rax
  __int16 v8[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  CmpInitializeKeyNodeStack((char *)v8);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v8, a1, v3, v4);
  if ( started >= 0 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v8);
    if ( started >= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v8, *(_WORD *)(a1 + 2));
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
      started = 0;
    }
  }
  CmpCleanupKeyNodeStack((__int64)v8);
  return (unsigned int)started;
}
