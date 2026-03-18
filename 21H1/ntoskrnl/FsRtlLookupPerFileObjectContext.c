/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x1402EC4D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  ULONG_PTR v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v9; // rbp
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v10; // rcx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  if ( FileObjectExtension == IopRevocationExtension )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v7, 0LL);
  v10 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
  if ( InstanceId )
  {
    Flink = *v10;
    if ( *v10 == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v10 )
      goto LABEL_11;
    while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
    {
      Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
      if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v10 )
        goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( !OwnerId )
  {
    if ( *v10 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v10 )
      v9 = *v10;
    goto LABEL_11;
  }
  Flink = *v10;
  if ( *v10 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v10 )
  {
    while ( Flink->OwnerId != OwnerId )
    {
      Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
      if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v10 )
        goto LABEL_11;
    }
LABEL_10:
    v9 = Flink;
  }
LABEL_11:
  ExReleasePushLockEx(v7, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v9;
}
