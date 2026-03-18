/*
 * XREFs of SeCreateClientSecurity @ 0x14060A050
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140610040 (AlpcpImpersonateMessage.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateClientPort @ 0x140648EB8 (AlpcpCreateClientPort.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x14067D070 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140259840 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405EBDA0 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v9; // rdi
  int v10; // esi
  char v11; // r12
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // [rsp+60h] [rbp-38h] BYREF
  char v18; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v19[2]; // [rsp+62h] [rbp-36h] BYREF
  int v20; // [rsp+64h] [rbp-34h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v20 = 0;
  v22 = 0;
  v18 = 0;
  v21 = 0LL;
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  v9 = (ULONG_PTR)PsReferenceImpersonationTokenEx((__int64)ClientThread, 0, v19, (bool *)&v17, &v20, &v22);
  if ( v9 )
  {
    v11 = v17;
    v10 = 2;
  }
  else
  {
    v9 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v9 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v9 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
    }
    v10 = 1;
    v22 = BYTE2(Process[2].Header.WaitListHead.Flink);
    v11 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v9 + 1104), (__int64)&v22, &v18, &v21);
  result = SepCreateClientSecurityEx(
             v9,
             (_DWORD)ClientSecurityQos,
             RemoteSession,
             v10,
             v11,
             v20,
             0,
             0LL,
             v18,
             v21,
             (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    return v13;
  }
  return result;
}
