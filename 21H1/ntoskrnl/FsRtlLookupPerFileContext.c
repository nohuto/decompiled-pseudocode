/*
 * XREFs of FsRtlLookupPerFileContext @ 0x140314D60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  return v4;
}
