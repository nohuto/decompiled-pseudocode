/*
 * XREFs of SeCreateClientSecurityEx @ 0x140620380
 * Callers:
 *     AlpcpExposeTokenAttribute @ 0x1405EFE90 (AlpcpExposeTokenAttribute.c)
 *     AlpcpImpersonateMessage @ 0x1405F1220 (AlpcpImpersonateMessage.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140656DCC (AlpcpGetEffectiveTokenMessage.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14022A5B0 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x14060D780 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x140620580 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140924E98 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r14
  ULONG_PTR v10; // rsi
  int v11; // ebp
  char v12; // r13
  __int64 result; // rax
  unsigned int v14; // ebp
  __int64 CurrentServerSilo; // rbx
  unsigned int v16; // ebx
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
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v10 = (ULONG_PTR)PsReferenceImpersonationTokenEx(a1, 0, v19, (bool *)&v17, &v20, &v22);
  if ( v10 )
  {
    v12 = v17;
    v11 = 2;
  }
  else
  {
    v10 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v10 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v10 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v11 = 1;
    v22 = BYTE2(Process[2].Header.WaitListHead.Flink);
    v12 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v10 + 1104), (__int64)&v22, &v18, &v21);
  result = SepCreateClientSecurityEx(v10, a2, a3, v11, v12, v20, 1, a1, v18, v21, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v16 = result;
  if ( (int)result < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    return v16;
  }
  return result;
}
