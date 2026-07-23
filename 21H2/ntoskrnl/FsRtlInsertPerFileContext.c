/*
 * XREFs of FsRtlInsertPerFileContext @ 0x14023DA80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  _QWORD *v4; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rax
  signed __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // rcx

  if ( !PerFileContextPointer )
    return -1073741808;
  v4 = (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  if ( !v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x63665346u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    *PoolWithTag = 0LL;
    v6 = PoolWithTag + 1;
    v4[3] = 0LL;
    v6[1] = v6;
    *v6 = v6;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, (signed __int64)v4, 0LL);
    if ( v7 )
    {
      ExFreePoolWithTag(v4, 0x63665346u);
      v4 = (_QWORD *)v7;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
  v9 = (struct _LIST_ENTRY *)(v4 + 1);
  v10 = (struct _LIST_ENTRY *)v4[1];
  if ( v10->Blink != (struct _LIST_ENTRY *)(v4 + 1) )
    __fastfail(3u);
  Ptr->Links.Flink = v10;
  Ptr->Links.Blink = v9;
  v10->Blink = &Ptr->Links;
  v9->Flink = &Ptr->Links;
  ExReleasePushLockEx((ULONG_PTR)v4, 0LL);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return 0;
}
