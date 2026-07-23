/*
 * XREFs of ObpReferenceDeviceMap @ 0x14068F360
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x14068ED10 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1405F222C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1405F2340 (SeGetTokenDeviceMap.c)
 *     PsReferenceImpersonationTokenEx @ 0x14064B780 (PsReferenceImpersonationTokenEx.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbx
  struct _DMA_ADAPTER *v4; // r15
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rdi
  __int64 *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *v8; // rax
  ULONG_PTR v9; // rdi
  struct _DMA_ADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // bp
  _QWORD v15[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v16; // [rsp+88h] [rbp+10h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v14 = ProcessServerSilo != PsGetCurrentServerSilo();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v14 )
      goto LABEL_3;
  }
  else if ( !v14 )
  {
    v11 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx((__int64)CurrentThread, 1, &v17, &v16, &v18, 0LL);
    v4 = v11;
    if ( !v11 )
      goto LABEL_3;
    if ( v11[1].DmaOperations != (_DMA_OPERATIONS *)999 )
    {
      v15[0] = 0LL;
      if ( SeGetTokenDeviceMap((__int64)v11, v15) >= 0 )
      {
        v3 = v15[0];
        if ( v15[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v14 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals(v13, v12);
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  v9 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v14 )
    v3 = *CurrentServerSiloGlobals;
  else
    v3 = *(_QWORD *)(Process + 1416);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  ExReleasePushLockEx(v9, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_9:
  if ( v4 )
    HalPutDmaAdapter(v4);
  return v3;
}
