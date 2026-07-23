/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1404F1380
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbp
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rbx
  struct _LIST_ENTRY *v11; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v5 + 8);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  Flink = *v7;
  v10 = 0LL;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
LABEL_6:
    v10 = Flink;
    if ( Flink )
    {
      v11 = Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v11->Blink != v10
        || (Blink = v10->Links.Blink, (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v10) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v11;
      v11->Blink = Blink;
    }
  }
  ExReleasePushLockEx(v6, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  return v10;
}
