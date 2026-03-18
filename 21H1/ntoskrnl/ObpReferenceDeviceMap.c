/*
 * XREFs of ObpReferenceDeviceMap @ 0x1405DFEE0
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1405DF8B0 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405EBDA0 (PsReferenceImpersonationTokenEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C1EA8 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406C1FBC (SeGetTokenDeviceMap.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbx
  struct _DMA_ADAPTER *v4; // r15
  __int64 Process; // rsi
  struct _LIST_ENTRY *ProcessServerSilo; // rdi
  __int64 *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *v8; // rax
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  bool v15; // bp
  _QWORD v16[9]; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+88h] [rbp+10h] BYREF
  char v18; // [rsp+90h] [rbp+18h] BYREF
  char v19; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(Process);
  v15 = ProcessServerSilo != PsGetCurrentServerSilo();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v15 )
      goto LABEL_3;
  }
  else if ( !v15 )
  {
    v14 = PsReferenceImpersonationTokenEx(
            (_DWORD)CurrentThread,
            1,
            (unsigned int)&v18,
            (unsigned int)&v17,
            (__int64)&v19,
            0LL);
    v4 = (struct _DMA_ADAPTER *)v14;
    if ( !v14 )
      goto LABEL_3;
    if ( *(_QWORD *)(v14 + 24) != 999LL )
    {
      v16[0] = 0LL;
      if ( (int)SeGetTokenDeviceMap(v14, v16) >= 0 )
      {
        v3 = v16[0];
        if ( v16[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1416) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v15 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  v9 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v15 )
    v3 = *CurrentServerSiloGlobals;
  else
    v3 = *(_QWORD *)(Process + 1416);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  ExReleasePushLockEx(v9, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
LABEL_9:
  if ( v4 )
    HalPutDmaAdapter(v4);
  return v3;
}
