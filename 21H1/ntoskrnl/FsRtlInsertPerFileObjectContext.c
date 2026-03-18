/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x1402F62B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     IoChangeFileObjectFilterContext @ 0x1402819BC (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x1402F63AC (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rax
  void *v6; // rbx
  _QWORD *v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rbx
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !FileObject )
    return -1073741811;
  result = IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 1);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2 )
      goto LABEL_6;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x58434F46u);
    BugCheckParameter2 = (ULONG_PTR)PoolWithTag;
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    *PoolWithTag = 0LL;
    v7 = PoolWithTag + 1;
    v7[1] = v7;
    *v7 = v7;
    if ( (int)IoChangeFileObjectFilterContext((__int64)FileObject) >= 0
      || (ExFreePoolWithTag(v6, 0),
          IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL),
          BugCheckParameter2) )
    {
LABEL_6:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v10 = (struct _LIST_ENTRY *)(v9 + 8);
      v11 = *(struct _LIST_ENTRY **)(v9 + 8);
      if ( v11->Blink != (struct _LIST_ENTRY *)(v9 + 8) )
        __fastfail(3u);
      Ptr->Links.Flink = v11;
      Ptr->Links.Blink = v10;
      v11->Blink = &Ptr->Links;
      v10->Flink = &Ptr->Links;
      ExReleasePushLockEx(v9, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
