/*
 * XREFs of SeCreateClientSecurity @ 0x1406821A0
 * Callers:
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     AlpcpImpersonateMessage @ 0x1406881C0 (AlpcpImpersonateMessage.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x1406CABD0 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402960C0 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406952E0 (PsReferenceImpersonationTokenEx.c)
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
  char v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+61h] [rbp-37h] BYREF
  char v16; // [rsp+62h] [rbp-36h] BYREF
  int v17; // [rsp+64h] [rbp-34h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h] BYREF
  char v19; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v17 = 0;
  v19 = 0;
  v15 = 0;
  v18 = 0LL;
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  v9 = PsReferenceImpersonationTokenEx(
         (_DWORD)ClientThread,
         0,
         (unsigned int)&v16,
         (unsigned int)&v14,
         (__int64)&v17,
         (__int64)&v19);
  if ( v9 )
  {
    v11 = v14;
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v10 = 1;
    v19 = BYTE2(Process[2].Header.WaitListHead.Flink);
    v11 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v9 + 1104), (__int64)&v19, &v15, &v18);
  result = SepCreateClientSecurityEx(
             v9,
             (_DWORD)ClientSecurityQos,
             RemoteSession,
             v10,
             v11,
             v17,
             0,
             0LL,
             v15,
             v18,
             (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    return v13;
  }
  return result;
}
