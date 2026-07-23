/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x1405F222C
 * Callers:
 *     ObpReferenceDeviceMap @ 0x14068F360 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     SeGetTokenDeviceMap @ 0x1405F2340 (SeGetTokenDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x14068F1A4 (ObfDereferenceDeviceMap.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
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
