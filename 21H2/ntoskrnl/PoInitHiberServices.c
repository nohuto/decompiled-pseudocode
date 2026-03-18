/*
 * XREFs of PoInitHiberServices @ 0x1408288D4
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     PopBcdEstablishResumeObject @ 0x140800680 (PopBcdEstablishResumeObject.c)
 *     PopBcdClearPendingResume @ 0x140800968 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1408125C4 (BcdOpenStore.c)
 *     PopHibernateEvaluation @ 0x140818DF4 (PopHibernateEvaluation.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1408289F4 (PopTraceHibernatePolicyUpdate.c)
 *     PopInitializeHibernateGlobals @ 0x140828AC4 (PopInitializeHibernateGlobals.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 (*PoInitHiberServices())(void)
{
  int v0; // eax
  int v1; // ecx
  unsigned int v2; // ebx
  _DWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (*result)(void); // rax
  bool v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v9 = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  PopInitializeHibernateGlobals();
  v0 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v0 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v0;
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock(v1);
  v2 = PopAllowHibernateReg;
  LOBYTE(v3) = 1;
  PopHibernateEvaluation(1, v3, &v9);
  PopReleasePolicyLock(v5, v4);
  PopReleaseTransitionLock(2);
  LOBYTE(v6) = v9;
  PopTraceHibernatePolicyUpdate(v2, v6);
  if ( !ExIsSoftBoot() && (int)BcdOpenStore(0LL, 2u, &v10) >= 0 )
  {
    v7 = v10;
    PopBcdEstablishResumeObject(v10, 0LL);
    PopBcdClearPendingResume(v7);
    BcdCloseStore(v7);
  }
  if ( (int)ExSubscribeWnfStateChange(
              (int)&PopHibernatePolicyWnfSubscription,
              (int)&WNF_PO_HIBERNATE_POLICY_CHANGE,
              1,
              0,
              (__int64)PopWnfHibernatePolicyCallback,
              (__int64)&PopAllowHibernateReg) < 0 )
    PopHibernatePolicyWnfSubscription = 0LL;
  result = qword_140C5AD58;
  if ( qword_140C5AD58 )
    return (__int64 (*)(void))qword_140C5AD58();
  return result;
}
