/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x1405F0E60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifySetCancelRoutine @ 0x140228778 (FsRtlNotifySetCancelRoutine.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     memset @ 0x140414300 (memset.c)
 *     FsRtlNotifyCompleteIrp @ 0x1405F0C54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x1405F1184 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyInitializeSync @ 0x1405F1270 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x14061EF30 (FsRtlNotifyUninitializeSync.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14088D5F4 (FsRtlCheckNotifyForDeleteLite.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 v14; // rax
  unsigned int v15; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  __int16 v19; // ax
  unsigned int v20; // r8d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  PSECURITY_SUBJECT_CONTEXT v25; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+98h] [rbp+10h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v12 = Irp;
  if ( (_QWORD *)*a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    NotifySync = 0LL;
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v14 = *a1;
  }
  LOBYTE(v15) = 1;
  ++*(_DWORD *)(v14 + 64);
  if ( !v12 )
  {
    FsRtlCheckNotifyForDeleteLite(a2);
    goto LABEL_32;
  }
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  v12->IoStatus.Status = 0;
  v12->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_26;
  IsNotifyOnList = FsRtlIsNotifyOnList(a2, v27);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( IsNotifyOnList )
  {
    v19 = *(_WORD *)(IsNotifyOnList + 72);
    if ( (v19 & 4) == 0 )
    {
      if ( (v19 & 0x20) == 0 )
      {
        if ( (v19 & 2) != 0 && (v19 & 8) == 0 )
        {
          *((_WORD *)PoolWithTag + 36) = v19 & 0xFFFD;
          v12->Tail.Overlay.CurrentStackLocation->Control |= v15;
          v12->IoStatus.Status = 268;
          goto LABEL_27;
        }
        v20 = *((_DWORD *)PoolWithTag + 26);
        if ( v20 && (v19 & 8) == 0 )
        {
          PoolWithTag[13] = 0LL;
          FsRtlNotifyCompleteIrp(v12, (__int64)PoolWithTag, v20, 0, 0);
          goto LABEL_32;
        }
        goto LABEL_13;
      }
      CurrentStackLocation->Control |= v15;
      v12->IoStatus.Status = -1073741738;
LABEL_27:
      IofCompleteRequest(v12, v15);
      goto LABEL_32;
    }
LABEL_26:
    CurrentStackLocation->Control |= v15;
    v12->IoStatus.Status = 267;
    goto LABEL_27;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x80uLL, 0x4E725346u);
  memset(PoolWithTag, 0, 0x80uLL);
  *((_WORD *)PoolWithTag + 36) |= 0x40u;
  *PoolWithTag = *a1;
  PoolWithTag[1] = v27;
  PoolWithTag[2] = a7;
  PoolWithTag[3] = SubjectContext;
  SubjectContext = 0LL;
  PoolWithTag[8] = a9;
  PoolWithTag[7] = PoolWithTag + 6;
  PoolWithTag[6] = PoolWithTag + 6;
  v15 = 1;
  if ( (a4 & 1) != 0 )
    *((_WORD *)PoolWithTag + 36) |= 1u;
  if ( (a4 & 4) != 0 )
    *((_WORD *)PoolWithTag + 36) |= 0x80u;
  *((_DWORD *)PoolWithTag + 19) = a5;
  if ( (a4 & 2) == 0 )
    *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
  PoolWithTag[15] = v12->Tail.Overlay.Thread->Process;
  v23 = PoolWithTag + 4;
  v24 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v24 != a2 )
LABEL_31:
    __fastfail(3u);
  *v23 = a2;
  PoolWithTag[5] = v24;
  *v24 = v23;
  a2[1] = v23;
  *((_DWORD *)PoolWithTag + 28) = 1;
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
LABEL_13:
  v12->IoStatus.Information = (ULONG_PTR)PoolWithTag;
  CurrentStackLocation->Control |= v15;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v12->Tail.Overlay.ListEntry;
  v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
  if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
    goto LABEL_31;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
  v12->Tail.Overlay.ListEntry.Blink = v22;
  v22->Flink = &p_ListEntry->ListEntry;
  PoolWithTag[7] = p_ListEntry;
  _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v15);
  FsRtlNotifySetCancelRoutine((__int64)v12, 0LL);
LABEL_32:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v25 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v25, 0);
  }
}
