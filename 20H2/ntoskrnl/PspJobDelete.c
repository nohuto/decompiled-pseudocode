/*
 * XREFs of PspJobDelete @ 0x14035D490
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403F9C90 (ZwDeleteWnfStateName.c)
 *     PsReturnSharedPoolQuota @ 0x1405F70FC (PsReturnSharedPoolQuota.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     ExMapHandleToPointer @ 0x140628CB0 (ExMapHandleToPointer.c)
 *     PspLockJobsAndProcessExclusive @ 0x14062C618 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14062CDA8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobConditionally @ 0x1406638E8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140665CB0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140665CF4 (PspLockJobExclusive.c)
 *     PspUnlockJobConditionally @ 0x14066650C (PspUnlockJobConditionally.c)
 *     ExDestroyHandle @ 0x1406672F8 (ExDestroyHandle.c)
 *     PspEmptyPropertySet @ 0x1406834DC (PspEmptyPropertySet.c)
 *     PspRemoveIoAttribution @ 0x14069F718 (PspRemoveIoAttribution.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140710AE4 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobListExclusive @ 0x140711024 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x140711064 (PspLockJobListExclusive.c)
 *     PspJobIoRateControlDisable @ 0x14071108C (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x1407110F0 (PspJobDeleteStorageArrays.c)
 *     IoFreeMiniCompletionPacket @ 0x140711120 (IoFreeMiniCompletionPacket.c)
 *     PspRemoveCpuRateControl @ 0x14071113C (PspRemoveCpuRateControl.c)
 *     PspLockRootJobExclusive @ 0x140711600 (PspLockRootJobExclusive.c)
 *     PspDeleteSilo @ 0x140908C68 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x14090B854 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x14090BACC (PspRemoveRateControl.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  char **v5; // rdx
  PVOID *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rdx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  void *v14; // rcx
  char **v15; // rcx
  void *v16; // rcx
  __int64 v17; // rax
  void *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-21h]
  __int128 v21; // [rsp+48h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-9h]
  _OWORD v23[2]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  _OWORD v25[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+47h]

  v24 = 0LL;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  v26 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v25, 0, sizeof(v25));
  v19 = 0LL;
  PspEmptyPropertySet(Object + 1280);
  PspJobDeleteStorageArrays(Object);
  if ( *((_QWORD *)Object + 126) || *((_QWORD *)Object + 164) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v19);
    PspLockJobConditionally(Object, &v19);
    if ( *((_QWORD *)Object + 126) )
      PspRemoveCpuRateControl(Object);
    v17 = *((_QWORD *)Object + 164);
    if ( v17 )
    {
      memset((char *)v23 + 8, 0, 24);
      v24 = 4LL;
      *(_QWORD *)&v23[0] = *(_QWORD *)(v17 + 56);
      PspNetRateControlDispatch(v23);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 169) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v19);
    PspLockJobConditionally(Object, &v19);
    if ( *((_QWORD *)Object + 169) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  v20 = *((_DWORD *)Object + 120);
  if ( v20 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v21 = Object;
    DWORD2(v21) = 2;
    v22 = 0LL;
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v21, 1LL);
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
    v18 = (void *)*((_QWORD *)Object + 124);
    *((_QWORD *)Object + 123) = 0LL;
    PsReturnSharedPoolQuota(v18);
  }
  v8 = *((_QWORD *)Object + 125);
  if ( v8 )
    IoFreeMiniCompletionPacket(v8);
  if ( (*((_DWORD *)Object + 330) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 110);
  PspGetJobLockHierarchyForDeletion(Object, v25);
  PspLockJobsAndProcessExclusive(v25, 0LL, CurrentThread, 0LL);
  v9 = Object + 1040;
  v10 = (char *)*((_QWORD *)Object + 130);
  if ( v10 != Object + 1040 )
  {
    if ( *((char **)v10 + 1) == v9 )
    {
      v15 = (char **)*((_QWORD *)Object + 131);
      if ( *v15 == v9 )
      {
        *v15 = v10;
        *((_QWORD *)v10 + 1) = v15;
        *((_QWORD *)Object + 131) = Object + 1040;
        *(_QWORD *)v9 = v9;
        ObDereferenceObjectDeferDelete(*((PVOID *)Object + 134));
        *((_QWORD *)Object + 134) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v25, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 138) )
  {
    v16 = (void *)*((_QWORD *)Object + 139);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x624A7350u);
      *((_QWORD *)Object + 139) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 330) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = *((_DWORD *)Object + 309);
  if ( v12 )
  {
    v13 = ExMapHandleToPointer(PspUniqueJobIdTable, v12);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 309), v13);
  }
  KeLeaveCriticalRegion();
  v14 = (void *)*((_QWORD *)Object + 195);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x624A7350u);
}
