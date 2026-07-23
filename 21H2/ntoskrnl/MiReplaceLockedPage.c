/*
 * XREFs of MiReplaceLockedPage @ 0x14053D9AC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiCanPageMove @ 0x140259930 (MiCanPageMove.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v9; // edi
  int PfnChannel; // eax
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v16; // [rsp+28h] [rbp-30h]
  unsigned __int8 v17; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a2) )
    return 0LL;
  v17 = 17;
  v9 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a2 + 0x58000000000LL) / 48) + 2);
  PfnChannel = MiGetPfnChannel(a2);
  Page = MiGetPage(
           *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)),
           (PfnChannel << byte_140C4DECD) | (v9 << byte_140C4DECC) | (unsigned int)((__int64)(a2 + 0x58000000000LL) / 48) & dword_140C4DF38,
           a4);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x58000000000LL;
  v13 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v17);
  if ( !v13 )
  {
LABEL_8:
    MiReleaseFreshPage(v12);
    return 0LL;
  }
  v14 = MiTbFlushType(a1);
  if ( !(unsigned int)MiTradeActivePage(a2, v12, a3, v14, a5, v16) )
  {
    MiUnlockProtoPoolPage(v13, v17);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v13, v17);
  *(_QWORD *)(a2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
  MiReleaseFreshPage(a2);
  return 1LL;
}
