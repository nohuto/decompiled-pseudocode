/*
 * XREFs of PoInitHiberServices @ 0x140791508
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x1403A7820 (ExIsSoftBoot.c)
 *     ZwQuerySystemInformation @ 0x1403F8830 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopBcdClearPendingResume @ 0x14077DF80 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14077E4A0 (PopBcdEstablishResumeObject.c)
 *     PopAcquireTransitionLock @ 0x140789C98 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140789CF4 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     PoDisableSleepStates @ 0x1408E6420 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x1408E9DC0 (PoShutdownBugCheck.c)
 *     PopBcdClose @ 0x1408F806C (PopBcdClose.c)
 *     PopBcdOpen @ 0x1408F8084 (PopBcdOpen.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1409930E0 (EmClientQueryRuleState.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void PoInitHiberServices()
{
  _DWORD *v0; // rsi
  bool v1; // di
  int v2; // eax
  HANDLE v3; // rbx
  _DWORD *PoolWithTag; // rax
  unsigned int v5; // r14d
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  ULONG ReturnLength; // [rsp+70h] [rbp+40h] BYREF
  char v13; // [rsp+78h] [rbp+48h] BYREF
  HANDLE BcdStoreHandle; // [rsp+80h] [rbp+50h] BYREF

  BcdStoreHandle = 0LL;
  ReturnLength = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  v0 = 0LL;
  if ( PopHiberEnabledReg == -1 )
    v1 = (unsigned int)(PopHiberEnabledDefaultReg - 1) > 0xFFFFFFFD;
  else
    v1 = PopHiberEnabledReg == 0;
  v2 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v2 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v2;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &v13);
  if ( !ExIsSoftBoot() && (int)PopBcdOpen(&BcdStoreHandle) >= 0 )
  {
    v3 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle, 0LL);
    PopBcdClearPendingResume(v3);
    PopBcdClose(v3);
  }
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x72626968u);
    v0 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, PoolWithTag, ReturnLength, &ReturnLength) >= 0 )
      {
        ReturnLength -= 2;
        if ( *(_BYTE *)v0 )
        {
          if ( v0[1] <= ReturnLength )
          {
            v1 = 1;
            PoDisableSleepStates(2LL, 8LL, &v13);
          }
        }
      }
    }
  }
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v6) )
    {
      v1 = 1;
      if ( (int)PoDisableSleepStates(*(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v6), 8LL, &v13) < 0 )
      {
        LOBYTE(v11) = 1;
        PoShutdownBugCheck(v11, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
    ++v5;
    v6 += 4LL;
  }
  while ( v5 < 2 );
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock(v7);
  LOBYTE(v8) = !v1;
  PopEnableHiberFile(v8, 0LL);
  PopReleasePolicyLock(v10, v9);
  PopReleaseTransitionLock(2);
  if ( qword_140C54248 )
    qword_140C54248();
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
