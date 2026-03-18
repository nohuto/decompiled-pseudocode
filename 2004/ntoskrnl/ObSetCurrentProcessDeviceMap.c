/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x1406E2428
 * Callers:
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObpReferenceDeviceMap @ 0x1406661E0 (ObpReferenceDeviceMap.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x140666044 (ObfDereferenceDeviceMap.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
 */

__int64 ObSetCurrentProcessDeviceMap()
{
  void *v0; // r14
  unsigned __int64 *CurrentServerSiloGlobals; // rbx
  _KPROCESS *Process; // r15
  struct _DMA_ADAPTER *v3; // rax
  struct _DMA_ADAPTER *v4; // rsi
  int TokenDeviceMap; // edi
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+58h] [rbp+10h]

  v0 = 0LL;
  CurrentServerSiloGlobals = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
  v4 = v3;
  if ( !v3 )
    return 3221225596LL;
  TokenDeviceMap = 0;
  DmaOperations = v3[1].DmaOperations;
  if ( DmaOperations == (_DMA_OPERATIONS *)999 )
  {
    CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    v6 = *CurrentServerSiloGlobals;
  }
  else
  {
    v9 = 0LL;
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v9);
    if ( TokenDeviceMap < 0 )
      goto LABEL_14;
    v6 = v9;
  }
  if ( v6 )
  {
    if ( !CurrentServerSiloGlobals )
      CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
    v0 = (void *)Process[1].AffinityPadding[11];
    Process[1].AffinityPadding[11] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
    ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_9;
  }
LABEL_14:
  TokenDeviceMap = -1073741767;
LABEL_9:
  HalPutDmaAdapter(v4);
  if ( v0 )
    ObfDereferenceDeviceMap(v0);
  return (unsigned int)TokenDeviceMap;
}
