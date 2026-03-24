/*
 * XREFs of MiReplaceLockedPage @ 0x14053D76C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiCanPageMove @ 0x14026B990 (MiCanPageMove.c)
 *     MiTradeActivePage @ 0x1402B65F0 (MiTradeActivePage.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MiTbFlushType @ 0x140337208 (MiTbFlushType.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v9; // edi
  int PfnChannel; // eax
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // [rsp+28h] [rbp-30h]
  unsigned __int8 v21; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a2) )
    return 0LL;
  v21 = 17;
  v9 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a2 + 0x58000000000LL) / 48) + 2);
  PfnChannel = MiGetPfnChannel(a2);
  Page = MiGetPage(
           *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)),
           (PfnChannel << byte_140C4DE8D) | (v9 << byte_140C4DE8C) | (unsigned int)((__int64)(a2 + 0x58000000000LL) / 48) & dword_140C4DEF8,
           a4);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x58000000000LL;
  v14 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, (__int64)&v21);
  if ( !v14 )
  {
LABEL_8:
    MiReleaseFreshPage(v12, v13, v15);
    return 0LL;
  }
  v16 = MiTbFlushType(a1);
  if ( !(unsigned int)MiTradeActivePage(a2, v12, a3, v16, a5, v20) )
  {
    MiUnlockProtoPoolPage(v14, v21);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v14, v21);
  *(_QWORD *)(a2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
  MiReleaseFreshPage(a2, v18, v19);
  return 1LL;
}
