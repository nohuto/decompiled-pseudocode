/*
 * XREFs of ObpReferenceDeviceMap @ 0x1406256F0
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1406250A0 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     PsReferenceImpersonationTokenEx @ 0x140656960 (PsReferenceImpersonationTokenEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140692BA8 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140692CBC (SeGetTokenDeviceMap.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbx
  struct _DMA_ADAPTER *v4; // r15
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *v10; // rax
  ULONG_PTR v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // bp
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF
  char v19; // [rsp+90h] [rbp+18h] BYREF
  char v20; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v16 = ProcessServerSilo != PsGetCurrentServerSilo(v8, v7);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v16 )
      goto LABEL_3;
  }
  else if ( !v16 )
  {
    v13 = PsReferenceImpersonationTokenEx(
            (_DWORD)CurrentThread,
            1,
            (unsigned int)&v19,
            (unsigned int)&v18,
            (__int64)&v20,
            0LL);
    v4 = (struct _DMA_ADAPTER *)v13;
    if ( !v13 )
      goto LABEL_3;
    if ( *(_QWORD *)(v13 + 24) != 999LL )
    {
      v17[0] = 0LL;
      if ( (int)SeGetTokenDeviceMap(v13, v17) >= 0 )
      {
        v3 = v17[0];
        if ( v17[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v16 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals(v15, v14);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  v11 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v16 )
    v3 = *CurrentServerSiloGlobals;
  else
    v3 = *(_QWORD *)(Process + 1416);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  ExReleasePushLockEx(v11, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_9:
  if ( v4 )
    HalPutDmaAdapter(v4);
  return v3;
}
