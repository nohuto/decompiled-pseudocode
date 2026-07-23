/*
 * XREFs of PspJobDelete @ 0x1402D96F0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403F3E30 (ZwDeleteWnfStateName.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     PspUnlockJobConditionally @ 0x1405F0C88 (PspUnlockJobConditionally.c)
 *     ExDestroyHandle @ 0x1405F1A78 (ExDestroyHandle.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406129B4 (PspLockJobExclusive.c)
 *     PsReturnSharedPoolQuota @ 0x14061551C (PsReturnSharedPoolQuota.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 *     PspLockJobListExclusive @ 0x14065B718 (PspLockJobListExclusive.c)
 *     PspUnlockJobListExclusive @ 0x14065B740 (PspUnlockJobListExclusive.c)
 *     PspLockJobConditionally @ 0x14065E260 (PspLockJobConditionally.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140674678 (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x140674DFC (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140675570 (PspGetJobLockHierarchyForDeletion.c)
 *     PspJobIoRateControlDisable @ 0x1406755E8 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x14067564C (PspJobDeleteStorageArrays.c)
 *     IoFreeMiniCompletionPacket @ 0x140675F20 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveIoAttribution @ 0x140675FF0 (PspRemoveIoAttribution.c)
 *     PspRemoveCpuRateControl @ 0x140676128 (PspRemoveCpuRateControl.c)
 *     PspLockRootJobExclusive @ 0x1406CBE4C (PspLockRootJobExclusive.c)
 *     PspEmptyPropertySet @ 0x1407070A8 (PspEmptyPropertySet.c)
 *     PspDeleteSilo @ 0x140902240 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x140904954 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x140904BCC (PspRemoveRateControl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  char **v5; // rdx
  PVOID *v6; // rcx
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  void *v13; // rcx
  char **v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-21h] BYREF
  __int128 v20; // [rsp+48h] [rbp-19h] BYREF
  __int64 v21; // [rsp+58h] [rbp-9h]
  _OWORD v22[2]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v23; // [rsp+80h] [rbp+1Fh]
  _OWORD v24[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+47h]

  v23 = 0LL;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v24, 0, sizeof(v24));
  v18 = 0LL;
  PspEmptyPropertySet(Object + 1280);
  PspJobDeleteStorageArrays(Object);
  if ( *((_QWORD *)Object + 126) || *((_QWORD *)Object + 164) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v18);
    PspLockJobConditionally(Object, &v18);
    if ( *((_QWORD *)Object + 126) )
      PspRemoveCpuRateControl(Object);
    v16 = *((_QWORD *)Object + 164);
    if ( v16 )
    {
      memset((char *)v22 + 8, 0, 24);
      v23 = 4LL;
      *(_QWORD *)&v22[0] = *(_QWORD *)(v16 + 56);
      PspNetRateControlDispatch(v22);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v18);
    PspUnlockJob(v18, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 169) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v18);
    PspLockJobConditionally(Object, &v18);
    if ( *((_QWORD *)Object + 169) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v18);
    PspUnlockJob(v18, CurrentThread);
  }
  v19 = *((_DWORD *)Object + 120);
  if ( v19 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v20 = Object;
    DWORD2(v20) = 2;
    v21 = 0LL;
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v20, 1LL, &v19);
    PspUnlockJob(Object, CurrentThread);
  }
  v3 = (void *)*((_QWORD *)Object + 57);
  *((_DWORD *)Object + 64) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
    *((_QWORD *)Object + 57) = 0LL;
  }
  v4 = *((_QWORD *)Object + 54);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 54), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 55));
  }
  PspLockJobListExclusive(CurrentThread);
  v5 = (char **)*((_QWORD *)Object + 3);
  if ( v5[1] != Object + 24 )
    goto LABEL_40;
  v6 = (PVOID *)*((_QWORD *)Object + 4);
  if ( *v6 != Object + 24 )
    goto LABEL_40;
  *v6 = v5;
  v5[1] = (char *)v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = (void *)*((_QWORD *)Object + 123);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v17 = (void *)*((_QWORD *)Object + 124);
    *((_QWORD *)Object + 123) = 0LL;
    PsReturnSharedPoolQuota(v17);
  }
  if ( *((_QWORD *)Object + 125) )
    IoFreeMiniCompletionPacket();
  if ( (*((_DWORD *)Object + 330) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 110);
  PspGetJobLockHierarchyForDeletion(Object, v24);
  PspLockJobsAndProcessExclusive(v24, 0LL, CurrentThread, 0LL);
  v8 = Object + 1040;
  v9 = (char *)*((_QWORD *)Object + 130);
  if ( v9 != Object + 1040 )
  {
    if ( *((char **)v9 + 1) == v8 )
    {
      v14 = (char **)*((_QWORD *)Object + 131);
      if ( *v14 == v8 )
      {
        *v14 = v9;
        *((_QWORD *)v9 + 1) = v14;
        *((_QWORD *)Object + 131) = Object + 1040;
        *(_QWORD *)v8 = v8;
        ObDereferenceObjectDeferDelete(*((PVOID *)Object + 134));
        *((_QWORD *)Object + 134) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v24, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 138) )
  {
    v15 = (void *)*((_QWORD *)Object + 139);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x624A7350u);
      *((_QWORD *)Object + 139) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 330) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = *((_DWORD *)Object + 309);
  if ( v11 )
  {
    v12 = ExMapHandleToPointer(PspUniqueJobIdTable, v11);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 309), v12);
  }
  KeLeaveCriticalRegion();
  v13 = (void *)*((_QWORD *)Object + 195);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x624A7350u);
}
