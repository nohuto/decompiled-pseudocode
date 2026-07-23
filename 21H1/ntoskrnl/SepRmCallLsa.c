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
  NTSTATUS v21; // ebx
  struct _KEVENT *v22; // rcx
  _QWORD *v23; // rdx
  __int64 *v24; // rcx
  struct _KEVENT *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v30; // eax
  bool v31; // zf
  _BYTE v32[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v35[3]; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v4 = SepRmAuditingEnabled;
  memset(v35, 0, sizeof(v35));
  v6 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    v21 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v21 < 0 )
      return (unsigned int)v21;
  }
  if ( v4 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v35, SchedulerAssist);
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
      v22 = (struct _KEVENT *)a1[24];
      if ( v22 )
        KeSetEvent(v22, 0, 0);
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
      v23 = a1 + 2;
      v24 = a1[2];
      if ( v24 == (__int64 *)(a1 + 2) )
      {
        v25 = (struct _KEVENT *)a1[25];
        if ( v25 )
          KeSetEvent(v25, 0, 0);
      }
      else if ( *((_DWORD *)v24 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v7 = a1[2];
        v26 = *v24;
        if ( (_QWORD *)v24[1] != v23 || *(__int64 **)(v26 + 8) != v24 )
          goto LABEL_50;
        *v23 = v26;
        *(_QWORD *)(v26 + 8) = v23;
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
            v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v31 = (v30 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v30 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v31 )
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
      v32[0] = 0;
      Blink = v17[1].WaitBlock[3].WaitListEntry.Blink;
      v17[1].WaitBlock[3].WaitListEntry.Blink = v18;
      v20 = AdtpWriteToEtw(v7[3], v32);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v20 < 0 )
      {
        SepAdtLastAuditFailStatus = v20;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v32[0] )
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
    KiUnstackDetachProcess((__int64)v35, 0LL, a3, SchedulerAssist);
  return 0LL;
}
