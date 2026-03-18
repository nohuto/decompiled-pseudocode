/*
 * XREFs of SepRmCallLsa @ 0x140311E50
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x140312098 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     NtWaitForSingleObject @ 0x14062CBD0 (NtWaitForSingleObject.c)
 *     AdtpWriteToEtw @ 0x1407A20D8 (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1407A7A44 (SepAdtOpenEtwReadyEvent.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // r15
  int v6; // r14d
  __int64 *v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int32 v14; // r14d
  void *v15; // rcx
  __int64 result; // rax
  struct _KTHREAD *v17; // rax
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ebx
  struct _KEVENT *v23; // rcx
  _QWORD *v24; // rdx
  __int64 *v25; // rcx
  struct _KEVENT *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v31; // eax
  bool v32; // zf
  _BYTE v33[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v36[3]; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v4 = SepRmAuditingEnabled;
  memset(v36, 0, sizeof(v36));
  v6 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v21) = 1;
    v22 = NtWaitForSingleObject(Handle, v21, 0LL);
    NtClose(Handle);
    if ( v22 < 0 )
      return (unsigned int)v22;
  }
  if ( v4 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v36, SchedulerAssist);
  do
  {
    v7 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_53;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v9 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v23 = (struct _KEVENT *)a1[24];
      if ( v23 )
        KeSetEvent(v23, 0, 0);
    }
    else if ( *((_DWORD *)v9 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v7 = *a1;
      v10 = (__int64 *)*v9;
      if ( (__int64 **)v9[1] != a1 || (__int64 *)v10[1] != v9 )
LABEL_50:
        __fastfail(3u);
      *a1 = v10;
      v10[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
    if ( !v7 )
    {
LABEL_53:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v24 = a1 + 2;
      v25 = a1[2];
      if ( v25 == (__int64 *)(a1 + 2) )
      {
        v26 = (struct _KEVENT *)a1[25];
        if ( v26 )
          KeSetEvent(v26, 0, 0);
      }
      else if ( *((_DWORD *)v25 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v7 = a1[2];
        v27 = *v25;
        if ( (_QWORD *)v25[1] != v24 || *(__int64 **)(v27 + 8) != v25 )
          goto LABEL_50;
        *v24 = v27;
        *(_QWORD *)(v27 + 8) = v24;
      }
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
            v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v32 = (v31 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v31 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( !v7 )
        continue;
    }
    if ( *((_DWORD *)v7 + 8) != 1 || (*(_DWORD *)(v7[3] + 20) & 2) != 0 )
    {
      if ( v4 )
        SepRmDispatchDataToLsa(v7);
    }
    else
    {
      v17 = KeGetCurrentThread();
      v18 = (struct _LIST_ENTRY *)v7[7];
      v33[0] = 0;
      Blink = v17[1].WaitBlock[3].WaitListEntry.Blink;
      v17[1].WaitBlock[3].WaitListEntry.Blink = v18;
      v20 = AdtpWriteToEtw(v7[3], v33);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v20 < 0 )
      {
        SepAdtLastAuditFailStatus = v20;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v33[0] )
          SepAuditFailed((unsigned int)v20);
      }
      if ( (unsigned int)(*((_DWORD *)v7 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v7[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v15 = (void *)v7[7];
    v6 = v14 - 1;
    if ( v15 )
    {
      ObfDereferenceObjectWithTag(v15, 0x69416553u);
      v7[7] = 0LL;
    }
    ((void (__fastcall *)(__int64 *))a1[27])(v7);
  }
  while ( v6 );
  if ( v4 )
    KiUnstackDetachProcess((__int64)v36, 0LL, a3, SchedulerAssist);
  return 0LL;
}
