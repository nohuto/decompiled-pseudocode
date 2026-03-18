/*
 * XREFs of PoClearPowerRequestInternal @ 0x14033D2AC
 * Callers:
 *     PoClearPowerRequest @ 0x14033D250 (PoClearPowerRequest.c)
 *     PpmEndHighPerfRequest @ 0x1403A3814 (PpmEndHighPerfRequest.c)
 *     PpmHighPerfRequestExpiration @ 0x1403A41F0 (PpmHighPerfRequestExpiration.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140571528 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopPowerRequestActionInfo @ 0x1407000C0 (PopPowerRequestActionInfo.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PopDiagTracePowerRequestChange @ 0x14033D6A4 (PopDiagTracePowerRequestChange.c)
 *     PopQueuePowerRequestCallback @ 0x14033D7C8 (PopQueuePowerRequestCallback.c)
 *     PopPowerRequestCallbackWorker @ 0x14033D8B0 (PopPowerRequestCallbackWorker.c)
 *     PopAcquirePowerRequestSpinLock @ 0x14055F90C (PopAcquirePowerRequestSpinLock.c)
 *     PopReleasePowerRequestSpinLock @ 0x14055F964 (PopReleasePowerRequestSpinLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140700294 (PopReleasePowerRequestPushLock.c)
 *     PopProcessDisplayRequiredChange @ 0x140700944 (PopProcessDisplayRequiredChange.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopNotifyUserPowerRequestAction @ 0x1408DD138 (PopNotifyUserPowerRequestAction.c)
 */

__int64 __fastcall PoClearPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  char v4; // bp
  unsigned __int8 CurrentIrql; // r13
  void *v7; // r14
  _KPROCESS *Process; // rcx
  __int64 v9; // r9
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  char v17; // [rsp+88h] [rbp+10h]

  v2 = (int)a2;
  v3 = 0;
  v4 = 0;
  v17 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( a2 > 5 )
    return (unsigned int)-1073741637;
  Process = (_KPROCESS *)a2;
  if ( ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 || !*(_DWORD *)(a1 + 4LL * (int)a2 + 32) )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)(a1 + 88) )
    v4 = a2 <= 3;
  if ( a2 == 3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( *(_KPROCESS **)(a1 + 120) != Process )
      return (unsigned int)-1073741637;
  }
  if ( v4 || a2 == 3 )
  {
    LOBYTE(Process) = 1;
    v17 = 1;
    PopAcquirePowerRequestPushLock(Process);
    v4 = PopPowerRequestNotificationsEnabled != 0 ? v4 : 0;
  }
  PopAcquirePowerRequestSpinLock(&LockHandle);
  v10 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v10;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) != 0 )
  {
    v4 = 0;
  }
  else
  {
    if ( v10 )
    {
      v12 = 0;
      if ( v4 )
        v4 = 0;
      goto LABEL_16;
    }
    v11 = PopPowerRequestAttributes[4 * v2] - 1;
    PopPowerRequestAttributes[4 * v2] = v11;
    if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || !v11 )
    {
      LOBYTE(v9) = CurrentIrql >= 2u;
      PopQueuePowerRequestCallback(
        a1,
        (unsigned int)v2,
        0LL,
        v9,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
    }
    if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 120) && CurrentIrql < 2u )
    {
      v7 = *(void **)(a1 + 120);
      ObfReferenceObjectWithTag(v7, 0x72506F50u);
      v12 = 2;
      goto LABEL_16;
    }
  }
  v12 = 0;
LABEL_16:
  PopDiagTracePowerRequestChange(a1);
  PopReleasePowerRequestSpinLock(&LockHandle);
  if ( v4 )
    PopNotifyUserPowerRequestAction(a1, (unsigned int)v2, 0LL);
  if ( v17 )
    PopReleasePowerRequestPushLock(v14, v13);
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker(0LL);
  if ( v7 )
  {
    PopProcessDisplayRequiredChange(v7, v12);
    ObfDereferenceObjectWithTag(v7, 0x72506F50u);
  }
  return v3;
}
