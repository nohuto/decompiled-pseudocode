/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x1406C1EA8
 * Callers:
 *     ObpReferenceDeviceMap @ 0x1405DFEE0 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeGetTokenDeviceMap @ 0x1406C1FBC (SeGetTokenDeviceMap.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
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
    v12 = 0LL;
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v12);
    if ( TokenDeviceMap < 0 )
      goto LABEL_14;
    v6 = v12;
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
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
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
