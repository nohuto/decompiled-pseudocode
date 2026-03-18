/*
 * XREFs of MiReplaceLockedPage @ 0x14053829C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiCanPageMove @ 0x14031D380 (MiCanPageMove.c)
 *     MiTradeActivePage @ 0x14032D448 (MiTradeActivePage.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v9; // edi
  int PfnChannel; // eax
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // eax
  int active; // eax
  __int64 v16; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
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
           *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)),
           (PfnChannel << byte_140C4DC8D) | (v9 << byte_140C4DC8C) | (unsigned int)((__int64)(a2 + 0x58000000000LL) / 48) & dword_140C4DCF8,
           a4);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x58000000000LL;
  v13 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v21);
  if ( !v13 )
  {
LABEL_8:
    MiReleaseFreshPage(v12);
    return 0LL;
  }
  v14 = MiTbFlushType(a1);
  active = MiTradeActivePage(a2, v12, a3, v14, a5, v20);
  LOBYTE(v16) = v21;
  if ( !active )
  {
    MiUnlockProtoPoolPage(v13, v16);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v13, v16);
  *(_QWORD *)(a2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16), ZeroPte, v18, v19);
  MiReleaseFreshPage(a2);
  return 1LL;
}
