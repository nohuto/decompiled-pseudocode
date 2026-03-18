/*
 * XREFs of FsRtlLookupPerFileContext @ 0x140352AB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  char *v3; // rbp
  struct _FSRTL_PER_FILE_CONTEXT *v4; // rdi
  struct _FSRTL_PER_FILE_CONTEXT **v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax

  v3 = (char *)*PerFileContextPointer;
  v4 = 0LL;
  if ( !*PerFileContextPointer )
    return 0LL;
  v8 = (struct _FSRTL_PER_FILE_CONTEXT **)(v3 + 8);
  if ( *v8 == (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)v3, 0LL);
  if ( InstanceId )
  {
    for ( i = *v8; i != (struct _FSRTL_PER_FILE_CONTEXT *)v8; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_9:
        v4 = i;
        break;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v8; i != (struct _FSRTL_PER_FILE_CONTEXT *)v8; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_9;
    }
  }
  else if ( *v8 != (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
  {
    v4 = *v8;
  }
  ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
