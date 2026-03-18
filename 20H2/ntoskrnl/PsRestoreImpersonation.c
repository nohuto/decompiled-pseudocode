/*
 * XREFs of PsRestoreImpersonation @ 0x14067E6F0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x14067E0B0 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140778A2C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140779BA4 (CmpStartCLFSLog.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     SeQueryTokenTrustLink @ 0x14029F2A8 (SeQueryTokenTrustLink.c)
 *     PspWriteTebImpersonationInfo @ 0x140607640 (PspWriteTebImpersonationInfo.c)
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
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
    HalPutDmaAdapter(v3);
    if ( v6 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v6);
    if ( v11 )
      PspWriteTebImpersonationInfo((__int64)Thread, (__int64)CurrentThread);
  }
}
