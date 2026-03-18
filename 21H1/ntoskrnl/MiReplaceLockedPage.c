/*
 * XREFs of MiReplaceLockedPage @ 0x140537C4C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MiTradeActivePage @ 0x1402F16A8 (MiTradeActivePage.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     MiCanPageMove @ 0x14034C6C0 (MiCanPageMove.c)
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
  int active; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // [rsp+28h] [rbp-30h]
  char v25; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a2, a2, a3) )
    return 0LL;
  v25 = 17;
  v9 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a2 + 0x58000000000LL) / 48) + 2);
  PfnChannel = MiGetPfnChannel(a2);
  Page = MiGetPage(
           *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)),
           (PfnChannel << byte_140C4DDCD) | (v9 << byte_140C4DDCC) | (unsigned int)((__int64)(a2 + 0x58000000000LL) / 48) & dword_140C4DE38,
           a4);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x58000000000LL;
  v14 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, (__int64)&v25);
  if ( !v14 )
  {
LABEL_8:
    MiReleaseFreshPage(v12, v13, v15);
    return 0LL;
  }
  v16 = MiTbFlushType(a1);
  active = MiTradeActivePage(a2, v12, a3, v16, a5, v24);
  LOBYTE(v20) = v25;
  if ( !active )
  {
    MiUnlockProtoPoolPage(v14, v20, v18, v19);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v14, v20, v18, v19);
  *(_QWORD *)(a2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
  MiReleaseFreshPage(a2, v22, v23);
  return 1LL;
}
