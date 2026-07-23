/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x140330B40
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiUnlockImageSection @ 0x140325780 (MiUnlockImageSection.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiInsertProtectedStandbyPage @ 0x1403341C0 (MiInsertProtectedStandbyPage.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiMirrorPerformBrownWrites @ 0x140382400 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x140550A08 (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x1405639B0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  char v6; // al

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v6 = *(_BYTE *)(a1 + 35);
    if ( (v6 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v6 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1);
    return MiInsertPageInFreeOrZeroedList(a2, 2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = -9LL;
    if ( (v3 & 0x400) != 0 )
      v4 = -2049LL;
    *(_QWORD *)(a1 + 16) = v3 & v4;
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      return MiInsertPageInList(a1, 8LL);
    else
      return MiInsertPageInList(a1, 4LL);
  }
}
