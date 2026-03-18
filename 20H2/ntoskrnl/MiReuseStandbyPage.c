/*
 * XREFs of MiReuseStandbyPage @ 0x14054F890
 * Callers:
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  char v3; // dl
  char v4; // al

  v2 = MiUnlinkPageFromList(BugCheckParameter2, 0);
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  v3 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xFD;
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
  v3 |= 5u;
  v4 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_BYTE *)(BugCheckParameter2 + 34) = v3;
  *(_BYTE *)(BugCheckParameter2 + 34) = v3 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) = v4 & 0xDF;
  *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
  return v2;
}
