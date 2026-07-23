/*
 * XREFs of PoSetPowerRequestInternal @ 0x1402703A0
 * Callers:
 *     PoSetPowerRequest @ 0x1402701B0 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A7B20 (PpmBeginHighPerfRequest.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x14066F888 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopDiagTracePowerRequestChange @ 0x1402705D4 (PopDiagTracePowerRequestChange.c)
 *     PopQueuePowerRequestCallback @ 0x1402706F8 (PopQueuePowerRequestCallback.c)
 *     PopPowerRequestCallbackWorker @ 0x1402707E0 (PopPowerRequestCallbackWorker.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopAcquirePowerRequestSpinLock @ 0x14056564C (PopAcquirePowerRequestSpinLock.c)
 *     PopReleasePowerRequestSpinLock @ 0x1405656A4 (PopReleasePowerRequestSpinLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x14066F86C (PopReleasePowerRequestPushLock.c)
 *     PopProcessDisplayRequiredChange @ 0x140670990 (PopProcessDisplayRequiredChange.c)
 *     PopNotifyUserPowerRequestAction @ 0x1408E1BC8 (PopNotifyUserPowerRequestAction.c)
 */

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  char v3; // di
  char v5; // r12
  unsigned __int8 CurrentIrql; // r15
  void *v7; // r14
  unsigned int v8; // r13d
  _KPROCESS *Process; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int *v12; // r9
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = (int)a2;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  v8 = 0;
  if ( a2 > 5 )
    return (unsigned int)-1073741637;
  Process = (_KPROCESS *)a2;
  if ( ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)(a1 + 88) )
    v3 = a2 <= 3;
  if ( a2 == 3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( *(_KPROCESS **)(a1 + 120) != Process )
      return (unsigned int)-1073741637;
  }
  if ( v3 || a2 == 3 )
  {
    LOBYTE(Process) = 1;
    v5 = 1;
    PopAcquirePowerRequestPushLock(Process);
    v3 = PopPowerRequestNotificationsEnabled != 0 ? v3 : 0;
  }
  PopAcquirePowerRequestSpinLock(&LockHandle);
  v10 = 4 * v2;
  v11 = *(unsigned int *)(4 * v2 + a1 + 32);
  if ( (_DWORD)v11 == -1 )
  {
    v15 = -1073741675;
    goto LABEL_17;
  }
  *(_DWORD *)(v10 + a1 + 32) = v11 + 1;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) != 0 )
    goto LABEL_39;
  if ( (_DWORD)v11 )
  {
    if ( !v3 )
    {
LABEL_16:
      PopDiagTracePowerRequestChange(a1);
      v15 = 0;
      goto LABEL_17;
    }
LABEL_39:
    v3 = 0;
    goto LABEL_16;
  }
  v12 = PopPowerRequestAttributes;
  v13 = PopPowerRequestAttributes[4 * v2];
  if ( v13 != -1 )
  {
    v14 = v13 + 1;
    PopPowerRequestAttributes[4 * v2] = v14;
    if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || v14 == 1 )
    {
      LOBYTE(v11) = 1;
      LOBYTE(v12) = CurrentIrql >= 2u;
      PopQueuePowerRequestCallback(
        a1,
        (unsigned int)v2,
        v11,
        v12,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
    }
    if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 120) && CurrentIrql < 2u )
    {
      v7 = *(void **)(a1 + 120);
      ObfReferenceObjectWithTag(v7, 0x72506F50u);
      v8 = 1;
    }
    goto LABEL_16;
  }
  v15 = -1073741675;
  *(_DWORD *)(v10 + a1 + 32) = v11;
LABEL_17:
  PopReleasePowerRequestSpinLock(&LockHandle);
  if ( v15 >= 0 && v3 )
  {
    LOBYTE(v16) = 1;
    PopNotifyUserPowerRequestAction(a1, (unsigned int)v2, v16);
  }
  if ( v5 )
    PopReleasePowerRequestPushLock();
  if ( v15 >= 0 && CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker(0LL);
  if ( v7 )
  {
    PopProcessDisplayRequiredChange(v7, v8);
    ObfDereferenceObjectWithTag(v7, 0x72506F50u);
  }
  return (unsigned int)v15;
}
