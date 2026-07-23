/*
 * XREFs of PsImpersonateClient @ 0x140607260
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1405F1220 (AlpcpImpersonateMessage.c)
 *     PsAssignImpersonationToken @ 0x140607190 (PsAssignImpersonationToken.c)
 *     CmpCmdHiveOpen @ 0x140631E44 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     PsRevertToSelf @ 0x1407178A0 (PsRevertToSelf.c)
 *     SeImpersonateClientEx @ 0x140717A40 (SeImpersonateClientEx.c)
 *     PsRevertThreadToSelf @ 0x14090B0E0 (PsRevertThreadToSelf.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     SeSetTokenTrustLink @ 0x14031DAF8 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x140327674 (SeQueryTokenTrustSid.c)
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     PspWriteTebImpersonationInfo @ 0x140607640 (PspWriteTebImpersonationInfo.c)
 *     SeCopyClientToken @ 0x1406BA08C (SeCopyClientToken.c)
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
  __int64 v9; // rsi
  struct _DMA_ADAPTER *v11; // rsi
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  char v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  struct _KTHREAD *v17; // rdx
  signed __int64 *v18; // r13
  struct _DMA_ADAPTER *v19; // r14
  SECURITY_IMPERSONATION_LEVEL v20; // ebx
  int v21; // r8d
  char v22; // bp
  struct _KTHREAD *v23; // r14
  unsigned __int64 v24; // rbx
  char v25; // al
  __int64 v26; // rcx
  __int64 TokenTrustSid; // rax
  int v29; // r9d
  int v30; // r8d
  NTSTATUS v31; // ebx
  int v32; // ebx
  signed __int64 *p_Lock; // rbx
  struct _KTHREAD *v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35[10]; // [rsp+38h] [rbp-50h] BYREF
  char v36; // [rsp+90h] [rbp+8h] BYREF
  struct _KTHREAD *v37; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v35[0] = 0LL;
  v36 = 0;
  v9 = (__int64)Token;
  v34 = 0LL;
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
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v16 = CurrentThread->KernelApcDisable++ == -1;
    if ( v16
      && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v15);
    }
    v17 = CurrentThread;
LABEL_21:
    PspWriteTebImpersonationInfo(Thread, v17);
    if ( v11 )
      HalPutDmaAdapter(v11);
    if ( v12 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return 0;
  }
  v18 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v19 = (struct _DMA_ADAPTER *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v19 )
  {
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v19 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v18);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v37);
    if ( !v19 )
    {
      v22 = ImpersonationLevel;
      goto LABEL_13;
    }
  }
  v20 = ImpersonationLevel;
  LODWORD(v37) = ImpersonationLevel;
  if ( SeTokenCanImpersonate((__int64)v19, v9, ImpersonationLevel, &v36) < 0 )
  {
    v16 = *(_DWORD *)(v9 + 192) == 2;
    v32 = 1;
    LODWORD(v37) = 1;
    if ( v16 && *(int *)(v9 + 196) < 1 )
    {
      v32 = *(_DWORD *)(v9 + 196);
      LODWORD(v37) = v32;
    }
    v31 = SeCopyClientToken(v9, v32, v21, 0, 0LL, (__int64)v35);
    if ( v31 >= 0 )
    {
      v9 = v35[0];
      v6 = 1;
      goto LABEL_12;
    }
  }
  else
  {
    if ( !v36 )
      goto LABEL_12;
    TokenTrustSid = SeQueryTokenTrustSid((__int64)v19);
    LOBYTE(v29) = 1;
    v31 = SeCopyClientToken(v9, v20, v30, v29, TokenTrustSid, (__int64)&v34);
    if ( v31 >= 0 )
    {
      if ( CopyOnOpen )
      {
        SeSetTokenTrustLink((__int64)v34, (void *)v9);
      }
      else
      {
        v9 = (__int64)v34;
        v34 = 0LL;
        v6 = 1;
      }
LABEL_12:
      ObFastDereferenceObject(v18, v19);
      v16 = v6 == 0;
      v22 = (char)v37;
      if ( !v16 )
      {
LABEL_14:
        v23 = KeGetCurrentThread();
        v24 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v22 & 3 | (4LL * (EffectiveOnly & 1));
        --v23->KernelApcDisable;
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
        Thread[1].WaitBlock[1].Thread = v34;
        *($8F66661DB6C9C59E7BD0F880B8A64BC5 *)((char *)&Thread[1].116 + 4) = ($8F66661DB6C9C59E7BD0F880B8A64BC5)v24;
        if ( CopyOnOpen )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
        v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v25 & 2) != 0 && (v25 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
        KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
        v16 = v23->KernelApcDisable++ == -1;
        if ( v16
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
          && !v23->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v26);
        }
        v17 = v23;
        goto LABEL_21;
      }
LABEL_13:
      ObfReferenceObject((PVOID)v9);
      goto LABEL_14;
    }
  }
  ObFastDereferenceObject(v18, v19);
  return v31;
}
