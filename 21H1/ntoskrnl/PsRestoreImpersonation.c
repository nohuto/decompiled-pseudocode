/*
 * XREFs of PsRestoreImpersonation @ 0x1405E0BE0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076803C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14076C9D4 (CmpStartCLFSLog.c)
 * Callees:
 *     SeQueryTokenTrustLink @ 0x140204698 (SeQueryTokenTrustLink.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PspWriteTebImpersonationInfo @ 0x140609460 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _DMA_ADAPTER *v3; // rbp
  __int64 Token; // rdi
  struct _KTHREAD *v6; // r13
  struct _KTHREAD *v7; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  char v11; // bl
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  v7 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      ObfReferenceObject((PVOID)Token);
      v7 = (struct _KTHREAD *)ImpersonationState->Token;
    }
    v10 = Token & 0xFFFFFFFFFFFFFFF8uLL | (ImpersonationState->EffectiveOnly != 0 ? 4 : 0) | (unsigned __int64)(ImpersonationState->Level & 3);
  }
  else
  {
    v10 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = Thread[1].WaitBlock[1].Thread;
    v3 = (struct _DMA_ADAPTER *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( ImpersonationState->Token )
  {
    *($8F66661DB6C9C59E7BD0F880B8A64BC5 *)((char *)&Thread[1].116 + 4) = ($8F66661DB6C9C59E7BD0F880B8A64BC5)v10;
    Thread[1].WaitBlock[1].Thread = v7;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
  }
  else if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
  {
    v11 = 1;
    goto LABEL_12;
  }
  v11 = 0;
LABEL_12:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
  if ( v3 )
  {
    HalPutDmaAdapter(v3);
    if ( v6 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v6);
    if ( v11 )
      PspWriteTebImpersonationInfo(Thread, CurrentThread);
  }
}
