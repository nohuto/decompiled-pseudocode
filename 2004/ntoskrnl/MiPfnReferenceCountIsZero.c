/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x140234560
 * Callers:
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiInsertProtectedStandbyPage @ 0x140278FC0 (MiInsertProtectedStandbyPage.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiUnlockImageSection @ 0x140324F00 (MiUnlockImageSection.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiMirrorPerformBrownWrites @ 0x14037FD90 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053C420 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x14054B328 (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x14055E2D0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
      *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1LL);
    return MiInsertPageInFreeOrZeroedList(a2);
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
