/*
 * XREFs of MiReuseStandbyPage @ 0x1405515A0
 * Callers:
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  char v4; // dl
  char v5; // al

  v2 = MiUnlinkPageFromList(a1, 0);
  MiRestoreTransitionPte(a1, 0LL, v3);
  v4 = *(_BYTE *)(a1 + 34) & 0xFD;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v4 |= 5u;
  v5 = *(_BYTE *)(a1 + 35);
  *(_BYTE *)(a1 + 34) = v4;
  *(_BYTE *)(a1 + 34) = v4 & 0xC7;
  *(_BYTE *)(a1 + 35) = v5 & 0xDF;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
  return v2;
}
