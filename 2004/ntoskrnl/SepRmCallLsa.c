/*
 * XREFs of SepRmCallLsa @ 0x14034F640
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     SepRmDispatchDataToLsa @ 0x14034F888 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     NtWaitForSingleObject @ 0x1405F7B90 (NtWaitForSingleObject.c)
 *     AdtpWriteToEtw @ 0x1407A4924 (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1407AABA4 (SepAdtOpenEtwReadyEvent.c)
 *     SepAuditFailed @ 0x1409220D0 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1)
{
  char v1; // r15
  int v3; // r14d
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  signed __int32 v8; // r14d
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v14; // eax
  NTSTATUS v15; // ebx
  struct _KEVENT *v16; // rcx
  _QWORD *v17; // rdx
  __int64 *v18; // rcx
  struct _KEVENT *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  char v27[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v30[3]; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v1 = SepRmAuditingEnabled;
  memset(v30, 0, sizeof(v30));
  v3 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    v15 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v15 < 0 )
      return (unsigned int)v15;
  }
  if ( v1 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v30);
  do
  {
    v4 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_53;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v6 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v16 = (struct _KEVENT *)a1[24];
      if ( v16 )
        KeSetEvent(v16, 0, 0);
    }
    else if ( *((_DWORD *)v6 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v4 = *a1;
      v7 = (__int64 *)*v6;
      if ( (__int64 **)v6[1] != a1 || (__int64 *)v7[1] != v6 )
LABEL_50:
        __fastfail(3u);
      *a1 = v7;
      v7[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v4 )
    {
LABEL_53:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v17 = a1 + 2;
      v18 = a1[2];
      if ( v18 == (__int64 *)(a1 + 2) )
      {
        v19 = (struct _KEVENT *)a1[25];
        if ( v19 )
          KeSetEvent(v19, 0, 0);
      }
      else if ( *((_DWORD *)v18 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = a1[2];
        v20 = *v18;
        if ( (_QWORD *)v18[1] != v17 || *(__int64 **)(v20 + 8) != v18 )
          goto LABEL_50;
        *v17 = v20;
        *(_QWORD *)(v20 + 8) = v17;
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
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v25 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v1 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v11 = KeGetCurrentThread();
      v12 = (struct _LIST_ENTRY *)v4[7];
      v27[0] = 0;
      Blink = v11[1].WaitBlock[3].WaitListEntry.Blink;
      v11[1].WaitBlock[3].WaitListEntry.Blink = v12;
      v14 = AdtpWriteToEtw(v4[3], v27);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v14 < 0 )
      {
        SepAdtLastAuditFailStatus = v14;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v27[0] )
          SepAuditFailed((unsigned int)v14);
      }
      if ( (unsigned int)(*((_DWORD *)v4 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v9 = (void *)v4[7];
    v3 = v8 - 1;
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x69416553u);
      v4[7] = 0LL;
    }
    ((void (__fastcall *)(__int64 *))a1[27])(v4);
  }
  while ( v3 );
  if ( v1 )
    KiUnstackDetachProcess((__int64)v30, 0LL);
  return 0LL;
}
