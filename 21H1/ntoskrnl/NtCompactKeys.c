/*
 * XREFs of NtCompactKeys @ 0x1408636A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmCheckNoTxContext @ 0x14068D8B0 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     CmpLogUnsupportedOperation @ 0x140871B98 (CmpLogUnsupportedOperation.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // r15d
  __int64 *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // cx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PADAPTER_OBJECT *v25; // rbx
  __int64 v26; // r14
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  __int64 v30; // [rsp+40h] [rbp-38h]
  char v31; // [rsp+90h] [rbp+18h]
  BOOLEAN v32; // [rsp+98h] [rbp+20h]

  TransientPoolWithQuotaTag = 0LL;
  v5 = 0;
  v31 = 0;
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
  v32 = v6;
  if ( v6 )
  {
    CmpLockRegistryExclusive();
    v31 = 1;
    v29 = 0LL;
    v17 = 0;
    v18 = (__int64 *)TransientPoolWithQuotaTag;
    while ( 1 )
    {
      v30 = *v18;
      v7 = CmpPerformKeyBodyDeletionCheck(*v18, 0LL);
      if ( v7 < 0 )
        break;
      v19 = *(_QWORD *)(v30 + 8);
      if ( v17 )
      {
        v20 = v29;
      }
      else
      {
        v20 = *(_QWORD *)(v19 + 32);
        v29 = v20;
      }
      if ( v20 != *(_QWORD *)(v19 + 32) || (v21 = *(_WORD *)(v19 + 186), (v21 & 4) != 0) || (v21 & 0x10) != 0 )
      {
        v7 = -1073741811;
        break;
      }
      if ( *(_WORD *)(v19 + 66) )
      {
        v7 = -1073741822;
        break;
      }
      ++v17;
      ++v18;
      if ( v17 >= Count )
      {
        v6 = v32;
        v7 = 0;
        CmpUnlockRegistry();
        CmpLogUnsupportedOperation(7LL);
        goto LABEL_4;
      }
    }
    v6 = v32;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    v7 = -1073741431;
  }
  v9 = v31;
LABEL_39:
  if ( v9 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  }
  if ( TransientPoolWithQuotaTag )
  {
    if ( v5 )
    {
      v25 = (PADAPTER_OBJECT *)TransientPoolWithQuotaTag;
      v26 = v5;
      do
      {
        HalPutDmaAdapter(*v25++);
        --v26;
      }
      while ( v26 );
    }
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  }
  return v7;
}
