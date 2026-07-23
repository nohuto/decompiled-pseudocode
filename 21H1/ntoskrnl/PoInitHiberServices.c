/*
 * XREFs of PoInitHiberServices @ 0x14077B118
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14077A5E4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x140397F50 (ExIsSoftBoot.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopBcdClearPendingResume @ 0x14076D570 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14076DA90 (PopBcdEstablishResumeObject.c)
 *     PopAcquireTransitionLock @ 0x140779288 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x1407792E4 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     PoDisableSleepStates @ 0x1408DF380 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x1408E2F30 (PoShutdownBugCheck.c)
 *     PopBcdClose @ 0x1408F116C (PopBcdClose.c)
 *     PopBcdOpen @ 0x1408F1184 (PopBcdOpen.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  if ( qword_140C542C8 )
    qword_140C542C8();
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
