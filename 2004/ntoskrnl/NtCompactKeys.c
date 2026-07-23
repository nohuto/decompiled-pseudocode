/*
 * XREFs of NtCompactKeys @ 0x1408649C0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x140651F20 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     CmpLogUnsupportedOperation @ 0x140872E88 (CmpLogUnsupportedOperation.c)
 */

NTSTATUS __cdecl NtCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  ULONG v5; // r12d
  BOOLEAN v6; // r13
  NTSTATUS v7; // edi
  __int64 v8; // rcx
  char v9; // al
  SIZE_T v10; // r13
  __int64 v11; // r8
  void **v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  ULONG v14; // r15d
  __int64 *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  __int16 v18; // cx
  PADAPTER_OBJECT *v19; // rbx
  __int64 v20; // r14
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]
  char v25; // [rsp+90h] [rbp+18h]
  BOOLEAN v26; // [rsp+98h] [rbp+20h]

  TransientPoolWithQuotaTag = 0LL;
  v5 = 0;
  v25 = 0;
  v6 = 0;
  v7 = CmCheckNoTxContext();
  if ( v7 < 0 )
    goto LABEL_4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    v7 = -1073741727;
LABEL_4:
    v9 = 0;
    goto LABEL_39;
  }
  if ( !Count )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( Count >= 0x1FFFFFFF )
  {
    v7 = -1073741811;
    goto LABEL_4;
  }
  v10 = 8 * Count;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v8, v10, 0x61624D43u);
  if ( !TransientPoolWithQuotaTag )
  {
    v7 = -1073741670;
    v6 = 0;
    goto LABEL_4;
  }
  if ( PreviousMode == 1 && (_DWORD)v10 )
  {
    if ( ((unsigned __int8)KeyArray & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&KeyArray[v10 / 8] > 0x7FFFFFFF0000LL || &KeyArray[v10 / 8] < KeyArray )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(TransientPoolWithQuotaTag, KeyArray, (unsigned int)v10);
  v12 = (void **)TransientPoolWithQuotaTag;
  do
  {
    v7 = CmObReferenceObjectByHandle(
           *v12,
           0x20006u,
           v11,
           PreviousMode,
           (struct _DMA_ADAPTER **)TransientPoolWithQuotaTag + v5,
           0LL);
    if ( v7 < 0 )
    {
      v6 = 0;
      v9 = 0;
      goto LABEL_39;
    }
    ++v5;
    ++v12;
  }
  while ( v5 < Count );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v26 = v6;
  if ( v6 )
  {
    CmpLockRegistryExclusive();
    v25 = 1;
    v23 = 0LL;
    v14 = 0;
    v15 = (__int64 *)TransientPoolWithQuotaTag;
    while ( 1 )
    {
      v24 = *v15;
      v7 = CmpPerformKeyBodyDeletionCheck(*v15, 0LL);
      if ( v7 < 0 )
        break;
      v16 = *(_QWORD *)(v24 + 8);
      if ( v14 )
      {
        v17 = v23;
      }
      else
      {
        v17 = *(_QWORD *)(v16 + 32);
        v23 = v17;
      }
      if ( v17 != *(_QWORD *)(v16 + 32) || (v18 = *(_WORD *)(v16 + 186), (v18 & 4) != 0) || (v18 & 0x10) != 0 )
      {
        v7 = -1073741811;
        break;
      }
      if ( *(_WORD *)(v16 + 66) )
      {
        v7 = -1073741822;
        break;
      }
      ++v14;
      ++v15;
      if ( v14 >= Count )
      {
        v6 = v26;
        v7 = 0;
        CmpUnlockRegistry();
        CmpLogUnsupportedOperation(7LL);
        goto LABEL_4;
      }
    }
    v6 = v26;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  v9 = v25;
LABEL_39:
  if ( v9 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( TransientPoolWithQuotaTag )
  {
    if ( v5 )
    {
      v19 = (PADAPTER_OBJECT *)TransientPoolWithQuotaTag;
      v20 = v5;
      do
      {
        HalPutDmaAdapter(*v19++);
        --v20;
      }
      while ( v20 );
    }
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  }
  return v7;
}
