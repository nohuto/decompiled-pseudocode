/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x140338500
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiAddPageToInsertList @ 0x140276C78 (MiAddPageToInsertList.c)
 *     MiInsertProtectedStandbyPage @ 0x140276D2C (MiInsertProtectedStandbyPage.c)
 *     MiWriteCompletePfn @ 0x14028C82C (MiWriteCompletePfn.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiUnlockMdlWritePages @ 0x140334830 (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiUnlockImageSection @ 0x140369180 (MiUnlockImageSection.c)
 *     MiMirrorPerformBrownWrites @ 0x140399444 (MiMirrorPerformBrownWrites.c)
 *     MiMarkFileOnlyPfnGood @ 0x14059FBF4 (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x1405B379C (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x1405C4C94 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall MiPfnReferenceCountIsZero(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // cl

  v4 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v4 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, v4, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v7 = *(_BYTE *)(a1 + 35);
    if ( (v7 & 0x10) != 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
      *(_BYTE *)(a1 + 35) = v7 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1);
    MiInsertPageInFreeOrZeroedList(a2, 2);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = -9LL;
    if ( (v5 & 0x400) != 0 )
      v6 = -2049LL;
    *(_QWORD *)(a1 + 16) = v5 & v6;
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      MiInsertPageInList(a1, 8u);
    else
      MiInsertPageInList(a1, 4u);
  }
}
