/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x14021FDD0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x14021FECC (IoGetFileObjectFilterContext.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     IoChangeFileObjectFilterContext @ 0x14036190C (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v6; // r8
  void *v7; // rbx
  _QWORD *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *v12; // rcx
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
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    *PoolWithTag = 0LL;
    LOBYTE(v6) = 1;
    v8 = PoolWithTag + 1;
    v8[1] = v8;
    *v8 = v8;
    if ( (int)IoChangeFileObjectFilterContext(FileObject, v7, v6) >= 0
      || (ExFreePoolWithTag(v7, 0),
          IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL),
          BugCheckParameter2) )
    {
LABEL_6:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v11 = (struct _LIST_ENTRY *)(v10 + 8);
      v12 = *(struct _LIST_ENTRY **)(v10 + 8);
      if ( v12->Blink != (struct _LIST_ENTRY *)(v10 + 8) )
        __fastfail(3u);
      Ptr->Links.Flink = v12;
      Ptr->Links.Blink = v11;
      v12->Blink = &Ptr->Links;
      v11->Flink = &Ptr->Links;
      ExReleasePushLockEx(v10, 0LL);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
