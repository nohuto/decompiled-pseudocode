/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1402A9540
 * Callers:
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiUnlockImageSection @ 0x1402F3190 (MiUnlockImageSection.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiMirrorPerformBrownWrites @ 0x140381C74 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x14054ECF8 (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x140561CA0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
      *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
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
