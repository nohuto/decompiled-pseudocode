/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x140692BA8
 * Callers:
 *     ObpReferenceDeviceMap @ 0x1406256F0 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x140625534 (ObfDereferenceDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140692CBC (SeGetTokenDeviceMap.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 */

__int64 ObSetCurrentProcessDeviceMap()
{
  void *v0; // r14
  unsigned __int64 *CurrentServerSiloGlobals; // rbx
  _KPROCESS *Process; // r15
  struct _DMA_ADAPTER *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _DMA_ADAPTER *v6; // rsi
  int TokenDeviceMap; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+58h] [rbp+10h]

  v0 = 0LL;
  CurrentServerSiloGlobals = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
  v6 = v3;
  if ( !v3 )
    return 3221225596LL;
  TokenDeviceMap = 0;
  DmaOperations = v3[1].DmaOperations;
  if ( DmaOperations == (_DMA_OPERATIONS *)999 )
  {
    CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals(v5, v4);
    v10 = *CurrentServerSiloGlobals;
  }
  else
  {
    v13 = 0LL;
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v13);
    if ( TokenDeviceMap < 0 )
      goto LABEL_14;
    v10 = v13;
  }
  if ( v10 )
  {
    if ( !CurrentServerSiloGlobals )
      CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals(v9, v8);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
    v0 = (void *)Process[1].AffinityPadding[11];
    Process[1].AffinityPadding[11] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
    ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_9;
  }
LABEL_14:
  TokenDeviceMap = -1073741767;
LABEL_9:
  HalPutDmaAdapter(v6);
  if ( v0 )
    ObfDereferenceDeviceMap(v0);
  return (unsigned int)TokenDeviceMap;
}
