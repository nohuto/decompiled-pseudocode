/*
 * XREFs of PsImpersonateClient @ 0x140609080
 * Callers:
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     PsAssignImpersonationToken @ 0x140608FB0 (PsAssignImpersonationToken.c)
 *     AlpcpImpersonateMessage @ 0x140610040 (AlpcpImpersonateMessage.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     PsRevertToSelf @ 0x14067D040 (PsRevertToSelf.c)
 *     SeImpersonateClientEx @ 0x14067D1E0 (SeImpersonateClientEx.c)
 *     PsRevertThreadToSelf @ 0x1409041E0 (PsRevertThreadToSelf.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     SeSetTokenTrustLink @ 0x14030F6C8 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x140319084 (SeQueryTokenTrustSid.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PspWriteTebImpersonationInfo @ 0x140609460 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x140609600 (SeTokenCanImpersonate.c)
 *     SeCopyClientToken @ 0x1406C24B8 (SeCopyClientToken.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // rbx
  char v6; // bp
  unsigned __int64 v9; // rsi
  struct _DMA_ADAPTER *v11; // rsi
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r9
  bool v19; // zf
  struct _KTHREAD *v20; // rdx
  signed __int64 *v21; // r13
  struct _DMA_ADAPTER *v22; // r14
  int v23; // r8d
  char v24; // bp
  struct _KTHREAD *v25; // r14
  unsigned __int64 v26; // rbx
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _DWORD *v31; // r9
  int v33; // ebx
  NTSTATUS v34; // ebx
  signed __int64 *p_Lock; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  struct _KTHREAD *v39; // [rsp+30h] [rbp-58h]
  _DWORD *v40; // [rsp+38h] [rbp-50h] BYREF
  char v41; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v42; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v40 = 0LL;
  v9 = (unsigned __int64)Token;
  v39 = 0LL;
  if ( !Token )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = Thread[1].WaitBlock[1].Thread;
      v11 = (struct _DMA_ADAPTER *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock(&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v19 = CurrentThread->KernelApcDisable++ == -1;
    if ( v19
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v16, v15, v17, v18);
    }
    v20 = CurrentThread;
LABEL_20:
    PspWriteTebImpersonationInfo(Thread, v20);
    if ( v11 )
      HalPutDmaAdapter(v11);
    if ( v12 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return 0;
  }
  v21 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v22 = (struct _DMA_ADAPTER *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v22 )
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v22 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v21);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v42, v36, v37, v38);
    if ( !v22 )
    {
      v24 = ImpersonationLevel;
      goto LABEL_12;
    }
  }
  v41 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v22, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_11:
    ObFastDereferenceObject(v21, v22);
    v19 = v6 == 0;
    v24 = v41;
    if ( !v19 )
    {
LABEL_13:
      v25 = KeGetCurrentThread();
      v26 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v24 & 3 | (4LL * (EffectiveOnly & 1));
      --v25->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = Thread[1].WaitBlock[1].Thread;
        v11 = (struct _DMA_ADAPTER *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      else
      {
        v11 = 0LL;
        v12 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
      }
      Thread[1].WaitBlock[1].Thread = v39;
      *($8F66661DB6C9C59E7BD0F880B8A64BC5 *)((char *)&Thread[1].116 + 4) = ($8F66661DB6C9C59E7BD0F880B8A64BC5)v26;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v27 & 2) != 0 && (v27 & 4) == 0 )
        ExfTryToWakePushLock(&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v19 = v25->KernelApcDisable++ == -1;
      if ( v19
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
        && !v25->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v29, v28, v30, v31);
      }
      v20 = v25;
      goto LABEL_20;
    }
LABEL_12:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_13;
  }
  v33 = 1;
  v41 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v33 = *(_DWORD *)(v9 + 196);
    v41 = v33;
  }
  v34 = SeCopyClientToken(v9, v33, v23, 0, 0LL, (__int64)&v40);
  if ( v34 >= 0 )
  {
    v9 = (unsigned __int64)v40;
    v6 = 1;
    goto LABEL_11;
  }
  ObFastDereferenceObject(v21, v22);
  return v34;
}
