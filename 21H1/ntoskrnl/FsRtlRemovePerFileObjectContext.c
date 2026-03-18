/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x1402F61C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     IoGetFileObjectFilterContext @ 0x1402F63AC (IoGetFileObjectFilterContext.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v6; // rbx
  ULONG_PTR v7; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *i; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !FileObject )
    return 0LL;
  IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL);
  if ( !BugCheckParameter2 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( InstanceId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_8:
        v6 = i;
        goto LABEL_9;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_8;
    }
  }
  else if ( *(_QWORD *)(v7 + 8) != v7 + 8 )
  {
    v6 = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
LABEL_9:
    if ( v6 )
    {
      Flink = v6->Links.Flink;
      if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v6->Links.Flink->Blink != v6
        || (Blink = v6->Links.Blink, (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v6) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  ExReleasePushLockEx(v7, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  return v6;
}
