/*
 * XREFs of ObpReferenceDeviceMap @ 0x1406661E0
 * Callers:
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x140665BB0 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406952E0 (PsReferenceImpersonationTokenEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406E2428 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
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
  __int64 v11; // rax
  bool v12; // bp
  _QWORD v13[9]; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+88h] [rbp+10h] BYREF
  char v15; // [rsp+90h] [rbp+18h] BYREF
  char v16; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v12 = ProcessServerSilo != PsGetCurrentServerSilo();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v12 )
      goto LABEL_3;
  }
  else if ( !v12 )
  {
    v11 = PsReferenceImpersonationTokenEx(
            (_DWORD)CurrentThread,
            1,
            (unsigned int)&v15,
            (unsigned int)&v14,
            (__int64)&v16,
            0LL);
    v4 = (struct _DMA_ADAPTER *)v11;
    if ( !v11 )
      goto LABEL_3;
    if ( *(_QWORD *)(v11 + 24) != 999LL )
    {
      v13[0] = 0LL;
      if ( (int)SeGetTokenDeviceMap(v11, v13) >= 0 )
      {
        v3 = v13[0];
        if ( v13[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v12 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  v9 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v12 )
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
