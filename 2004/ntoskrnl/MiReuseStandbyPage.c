/*
 * XREFs of MiReuseStandbyPage @ 0x14054BEC0
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = MiUnlinkPageFromList(BugCheckParameter2, 0);
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  LOBYTE(v3) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xFD;
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  LOBYTE(v3) = v3 | 5;
  v4 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_BYTE *)(BugCheckParameter2 + 34) = v3;
  LOBYTE(v3) = v3 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 34) = v3;
  *(_BYTE *)(BugCheckParameter2 + 35) = v4 & 0xDF;
  *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16), v3, v5, v6);
  return v2;
}
