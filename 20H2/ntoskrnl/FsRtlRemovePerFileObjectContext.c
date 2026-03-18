/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x14030DF20
 * Callers:
 *     <none>
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x14020B550 (IoGetFileObjectFilterContext.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v7; // rbx
  ULONG_PTR v8; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *i; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !FileObject )
    return 0LL;
  IoGetFileObjectFilterContext((__int64)FileObject, &BugCheckParameter2, 0LL, v3);
  if ( !BugCheckParameter2 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( InstanceId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v8 + 8);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v8 + 8);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_8:
        v7 = i;
        goto LABEL_9;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v8 + 8);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v8 + 8);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_8;
    }
  }
  else if ( *(_QWORD *)(v8 + 8) != v8 + 8 )
  {
    v7 = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v8 + 8);
LABEL_9:
    if ( v7 )
    {
      Flink = v7->Links.Flink;
      if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v7->Links.Flink->Blink != v7
        || (Blink = v7->Links.Blink, (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v7) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  ExReleasePushLockEx(v8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
