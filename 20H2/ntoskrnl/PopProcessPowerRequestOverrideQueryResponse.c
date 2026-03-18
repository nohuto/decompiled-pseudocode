/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x140361DE0
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406FA488 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueuePowerRequestCallbacks @ 0x1403628D8 (PopQueuePowerRequestCallbacks.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopProcessDisplayRequiredChange @ 0x14071CFF4 (PopProcessDisplayRequiredChange.c)
 *     PopPowerRequestFindEntryById @ 0x14071D914 (PopPowerRequestFindEntryById.c)
 *     PopReleasePowerRequestPushLock @ 0x14071E110 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopNotifyUserPowerRequestAction @ 0x1408E4288 (PopNotifyUserPowerRequestAction.c)
 */

LONG_PTR __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // r14d
  unsigned int v3; // edi
  void *v4; // r13
  char v5; // r15
  __int64 *EntryById; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int v10; // r12d
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned int v13; // ebx
  int *v14; // rsi
  unsigned int v15; // ebx
  int *v16; // rsi
  LONG_PTR result; // rax
  signed int v18; // ebx
  int v19; // r14d
  int *v20; // rax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v26; // eax
  int v27; // [rsp+20h] [rbp-40h]
  unsigned int v28; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+48h] [rbp-18h] BYREF
  __int16 v31; // [rsp+4Ch] [rbp-14h]
  int v32; // [rsp+50h] [rbp-10h] BYREF
  __int16 v33; // [rsp+54h] [rbp-Ch]

  v1 = a1[2];
  v30 = 0;
  v3 = 0;
  v31 = 0;
  v27 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v32 = 0;
  v4 = 0LL;
  v33 = 0;
  v5 = 0;
  v28 = v1;
  PopAcquirePowerRequestPushLock(0LL);
  EntryById = (__int64 *)PopPowerRequestFindEntryById(*a1);
  if ( EntryById )
  {
    v7 = *EntryById;
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v9 = *(_DWORD *)(v7 + 24) == v1;
    v10 = *(_DWORD *)(v7 + 24) ^ v1;
    *(_DWORD *)(v7 + 24) = v1;
    if ( !v9 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v18, v10);
        v19 = 1 << v18;
        if ( *(_DWORD *)(v7 + 4LL * v18 + 32) )
        {
          if ( *(_DWORD *)(v7 + 88) && PopPowerRequestNotificationsEnabled && (unsigned int)v18 <= 3 )
            v5 = 1;
          if ( !v18 && *(_QWORD *)(v7 + 120) )
          {
            v4 = *(void **)(v7 + 120);
            ObfReferenceObjectWithTag(v4, 0x72506F50u);
          }
          v20 = &PopPowerRequestAttributes[4 * v18];
          v21 = *v20;
          if ( (v19 & v28) != 0 )
          {
            v22 = v21 - 1;
            v27 = 2;
            *v20 = v22;
            if ( !v18 || v18 == 3 || !v22 )
              --*(_BYTE *)(v18 + v7 + 72);
            if ( v5 )
              *((_BYTE *)&v32 + v18) = 1;
          }
          else
          {
            v27 = 1;
            if ( v21 != -1 )
            {
              v23 = v21 + 1;
              *v20 = v23;
              if ( !v18 || v18 == 3 || v23 == 1 )
                ++*(_BYTE *)(v18 + v7 + 72);
            }
            if ( v5 )
              *((_BYTE *)&v30 + v18) = 1;
          }
        }
        v10 &= ~v19;
      }
      while ( v10 );
    }
    LOBYTE(v8) = 1;
    PopQueuePowerRequestCallbacks(v7, v8);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v13 = 0;
    v14 = &v30;
    do
    {
      if ( *(_BYTE *)v14 )
      {
        LOBYTE(SchedulerAssist) = 1;
        PopNotifyUserPowerRequestAction(v7, v13, SchedulerAssist);
      }
      ++v13;
      v14 = (int *)((char *)v14 + 1);
    }
    while ( v13 < 6 );
    v15 = 0;
    v16 = &v32;
    do
    {
      if ( *(_BYTE *)v16 )
        PopNotifyUserPowerRequestAction(v7, v15, 0LL);
      ++v15;
      v16 = (int *)((char *)v16 + 1);
    }
    while ( v15 < 6 );
    v3 = v27;
  }
  result = PopReleasePowerRequestPushLock();
  if ( v4 )
  {
    PopProcessDisplayRequiredChange(v4, v3);
    return ObfDereferenceObjectWithTag(v4, 0x72506F50u);
  }
  return result;
}
