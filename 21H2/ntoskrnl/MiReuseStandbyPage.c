/*
 * XREFs of MiReuseStandbyPage @ 0x1405B3FA4
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 */

_BOOL8 __fastcall MiReuseStandbyPage(ULONG_PTR BugCheckParameter2)
{
  char v2; // bl
  char v3; // dl
  char v4; // al

  v2 = MiUnlinkPageFromListEx(BugCheckParameter2, 4);
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
  *(_QWORD *)BugCheckParameter2 = 0LL;
  return (v2 & 3) == 0;
}
