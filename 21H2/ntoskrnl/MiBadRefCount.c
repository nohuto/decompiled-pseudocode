/*
 * XREFs of MiBadRefCount @ 0x1403F48DC
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 *     MiRemoveLockedPageCharge @ 0x14023AEB0 (MiRemoveLockedPageCharge.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiUnlockImageSection @ 0x14031AA30 (MiUnlockImageSection.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReadyLargePageToFree @ 0x140329D30 (MiReadyLargePageToFree.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
}
