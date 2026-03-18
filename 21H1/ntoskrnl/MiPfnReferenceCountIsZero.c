/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x14028D5B0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     MiUnlockImageSection @ 0x1402EB5D0 (MiUnlockImageSection.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiMirrorPerformBrownWrites @ 0x14038A368 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053BDD0 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x14054ACD8 (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x14055DC80 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
      *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1LL,
      0LL);
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
