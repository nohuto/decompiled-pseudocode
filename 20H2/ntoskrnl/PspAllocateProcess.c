/*
 * XREFs of PspAllocateProcess @ 0x140695CA4
 * Callers:
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CA1A0 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x140208A50 (PoEnergyEstimationEnabled.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsIsSystemProcess @ 0x140233630 (PsIsSystemProcess.c)
 *     PsIsProtectedProcess @ 0x14023DEE0 (PsIsProtectedProcess.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeQueryAffinityProcess @ 0x14023EF70 (KeQueryAffinityProcess.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     MmGetDefaultPagePriority @ 0x14024422C (MmGetDefaultPagePriority.c)
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402D6A04 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x1402D6A60 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     PsIsProtectedProcessLight @ 0x1402E2210 (PsIsProtectedProcessLight.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1402E545C (RtlWow64GetEquivalentMachineCHPE.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402E8F20 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x1402E8F50 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x1402E8F78 (KeIsUserCetAllowed.c)
 *     KeSelectNodeForAffinity @ 0x1402F7D00 (KeSelectNodeForAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x140320F70 (KeFirstGroupAffinityEx.c)
 *     PspUnlockProcessExclusive @ 0x14032A1F8 (PspUnlockProcessExclusive.c)
 *     PspWow64PickBestNtdll @ 0x14032C834 (PspWow64PickBestNtdll.c)
 *     KeQueryActiveGroupCount @ 0x1403379E0 (KeQueryActiveGroupCount.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeSecureProcess @ 0x140511F00 (KeSecureProcess.c)
 *     PspInitializeProcessLock @ 0x14057F370 (PspInitializeProcessLock.c)
 *     PsReferencePartition @ 0x1405828E8 (PsReferencePartition.c)
 *     PspApplyComponentFilterOptions @ 0x1405CD924 (PspApplyComponentFilterOptions.c)
 *     SeDeleteCodeIntegrityOriginClaimMembers @ 0x1405CDD38 (SeDeleteCodeIntegrityOriginClaimMembers.c)
 *     SeGetCodeIntegrityOriginClaimForFileObject @ 0x1405CDD5C (SeGetCodeIntegrityOriginClaimForFileObject.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ObInitProcess @ 0x1406301EC (ObInitProcess.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     PspInitializeFullProcessImageName @ 0x140631C6C (PspInitializeFullProcessImageName.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     MmGetSectionInformation @ 0x140636810 (MmGetSectionInformation.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 *     PspUpdateCreateInfo @ 0x1406909C0 (PspUpdateCreateInfo.c)
 *     PsWow64IsMachineSupported @ 0x1406927E0 (PsWow64IsMachineSupported.c)
 *     PsWow64GetProcessMachine @ 0x1406941D0 (PsWow64GetProcessMachine.c)
 *     PspApplyMitigationOptions @ 0x140698088 (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x140698B88 (PspInheritMitigationOptions.c)
 *     MmNewProcessInitialized @ 0x140698C64 (MmNewProcessInitialized.c)
 *     SmProcessCreateNotification @ 0x140698CB0 (SmProcessCreateNotification.c)
 *     PspInheritMitigationAuditOptions @ 0x140698D00 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140698DE8 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140698E70 (PspReadIFEOMitigationAuditOptions.c)
 *     PspComputeQuantumAndPriority @ 0x140699094 (PspComputeQuantumAndPriority.c)
 *     KeInitializeProcess @ 0x1406A71A0 (KeInitializeProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406ACE1C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406AD068 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1406AD2EC (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1406AD308 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406AD340 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1406ADCA4 (PspWritePebAffinityInfo.c)
 *     MmSecureVirtualMemory @ 0x1406B3E10 (MmSecureVirtualMemory.c)
 *     SeQuerySessionIdToken @ 0x1406B9DE0 (SeQuerySessionIdToken.c)
 *     PspAssignProcessQuotaBlock @ 0x1406CF394 (PspAssignProcessQuotaBlock.c)
 *     PspDetectComplusILImage @ 0x1406CFFE4 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x1406D00B8 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406D0110 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406D0300 (RtlQueryImageFileKeyOption.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 *     RtlAcquirePrivilege @ 0x1406D329C (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x1406D4998 (PspSelectNodeForProcess.c)
 *     PspSetProcessPriorityClass @ 0x1406D5AB4 (PspSetProcessPriorityClass.c)
 *     PoEnergyContextInitialize @ 0x1406D64D4 (PoEnergyContextInitialize.c)
 *     LpcInitializeProcess @ 0x1406D6ED4 (LpcInitializeProcess.c)
 *     PspSetupReservedUserMappings @ 0x1406D6F04 (PspSetupReservedUserMappings.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1406D8920 (MmGetSessionSchedulingGroupByProcess.c)
 *     PspHardenMitigationOptions @ 0x1406D970C (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x1406DA1B0 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x1406DAD24 (PspApplyWin32kFilterOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x1406DADB0 (RtlOpenImageFileOptionsKey.c)
 *     RtlReleasePrivilege @ 0x1406DB348 (RtlReleasePrivilege.c)
 *     PspApplyIFEOPerfOptions @ 0x1406DEF54 (PspApplyIFEOPerfOptions.c)
 *     PspAttachSession @ 0x1406DF204 (PspAttachSession.c)
 *     PspDetachSession @ 0x1406E062C (PspDetachSession.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     ObCreateObject @ 0x14070ACF0 (ObCreateObject.c)
 *     MmIsSessionLeaderProcess @ 0x14077DB60 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CAD44 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407CCC14 (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C6D90 (MmGetImageSectionBasedAddress.c)
 *     MmGetSectionStrongImageReference @ 0x1408DA768 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x14090AE14 (PspSetProcessAffinitySafe.c)
 *     ExCreateHandle @ 0x14094EE60 (ExCreateHandle.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        KPROCESSOR_MODE a2,
        volatile signed __int32 *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  int v16; // r15d
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int64 result; // rax
  unsigned int v21; // r14d
  int MaximumGroupCount; // eax
  int v23; // ecx
  int v24; // r9d
  unsigned int v25; // r12d
  char *v26; // r15
  char *v27; // rcx
  char v28; // al
  int v29; // r12d
  int v30; // r8d
  __int64 Flink; // rcx
  int v32; // eax
  PEPROCESS v33; // r14
  int v34; // edx
  int DefaultPagePriority; // r8d
  __int64 v36; // r8
  int v37; // r9d
  int SectionInformation; // r14d
  void *v39; // rax
  unsigned __int64 v40; // rax
  PVOID v41; // rcx
  char v42; // r8
  int v43; // ebx
  __int16 v44; // cx
  int v45; // eax
  __int16 EquivalentMachineCHPE; // ax
  unsigned __int16 v47; // di
  int v48; // ecx
  HANDLE *v49; // r12
  int v50; // eax
  int v51; // r14d
  int ImageFileKeyOption; // eax
  int v53; // edi
  int v54; // r12d
  _WORD *PoolWithTag; // r10
  int v56; // eax
  __int16 v57; // r11
  _QWORD *v58; // rax
  unsigned int v59; // edi
  KPROCESSOR_MODE v60; // al
  __int16 v61; // r14
  bool v62; // sf
  unsigned __int16 v63; // di
  volatile signed __int32 *v64; // rdi
  PEPROCESS v65; // r12
  ULONG v66; // r14d
  char v67; // r12
  int v68; // edi
  int v69; // eax
  int v70; // edx
  PEPROCESS v71; // rdx
  int v72; // r8d
  __int64 SessionSchedulingGroupByProcess; // rax
  int v74; // ecx
  char v75; // r8
  _DWORD *v76; // r14
  _DWORD *v77; // rcx
  __int64 v78; // rax
  char v79; // al
  __int64 v80; // r9
  int v81; // r8d
  int inited; // eax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // edi
  __int16 v87; // r11
  int v88; // r11d
  unsigned int v89; // edi
  unsigned __int64 v90; // rax
  __int64 ProcessServerSilo; // rax
  PEPROCESS v92; // r12
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  int v96; // edi
  __int64 v97; // rdi
  PVOID v98; // rax
  PVOID v99; // r12
  int v100; // eax
  __int64 ImageSectionBasedAddress; // rax
  __int64 v102; // rcx
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v105; // di
  PEPROCESS v106; // rcx
  __int64 v107; // rax
  __int16 v108; // cx
  __int64 v109; // rdi
  __int64 v110; // rax
  unsigned int ProcessNtdllType; // eax
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v117; // rcx
  int v119; // [rsp+78h] [rbp-6F0h]
  char v120; // [rsp+7Ch] [rbp-6ECh] BYREF
  char v121; // [rsp+7Dh] [rbp-6EBh] BYREF
  char v122[2]; // [rsp+7Eh] [rbp-6EAh] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-6E8h]
  unsigned int NumberOfBytes; // [rsp+88h] [rbp-6E0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+8Ch] [rbp-6DCh]
  int v126; // [rsp+90h] [rbp-6D8h]
  int v127; // [rsp+94h] [rbp-6D4h]
  __int16 v128; // [rsp+98h] [rbp-6D0h]
  int v129; // [rsp+9Ch] [rbp-6CCh]
  int v130; // [rsp+A0h] [rbp-6C8h]
  unsigned int v131; // [rsp+A4h] [rbp-6C4h]
  __int64 v132; // [rsp+A8h] [rbp-6C0h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-6B8h] BYREF
  volatile signed __int32 *v134; // [rsp+B8h] [rbp-6B0h]
  int v135; // [rsp+C0h] [rbp-6A8h]
  PVOID TokenInformation; // [rsp+C4h] [rbp-6A4h] BYREF
  ULONG SessionId; // [rsp+CCh] [rbp-69Ch] BYREF
  int v138; // [rsp+D0h] [rbp-698h]
  int v139; // [rsp+D4h] [rbp-694h]
  int v140; // [rsp+D8h] [rbp-690h]
  _KPROCESS *v141; // [rsp+E0h] [rbp-688h]
  PVOID v142; // [rsp+E8h] [rbp-680h]
  PVOID v143; // [rsp+F0h] [rbp-678h]
  __int64 v144; // [rsp+F8h] [rbp-670h]
  int v145; // [rsp+100h] [rbp-668h]
  int v146; // [rsp+104h] [rbp-664h]
  int v147; // [rsp+108h] [rbp-660h]
  int v148; // [rsp+10Ch] [rbp-65Ch]
  PVOID Address; // [rsp+110h] [rbp-658h]
  __int64 v150; // [rsp+118h] [rbp-650h]
  PACCESS_TOKEN Token; // [rsp+120h] [rbp-648h]
  __int128 v152; // [rsp+128h] [rbp-640h] BYREF
  unsigned __int64 v153; // [rsp+138h] [rbp-630h]
  struct _KTHREAD *CurrentThread; // [rsp+140h] [rbp-628h]
  int v155; // [rsp+148h] [rbp-620h] BYREF
  HANDLE Handle; // [rsp+150h] [rbp-618h] BYREF
  __int64 v157; // [rsp+158h] [rbp-610h]
  PVOID v158; // [rsp+160h] [rbp-608h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+168h] [rbp-600h] BYREF
  PVOID v160; // [rsp+170h] [rbp-5F8h] BYREF
  PVOID P; // [rsp+178h] [rbp-5F0h]
  unsigned __int64 *v162; // [rsp+180h] [rbp-5E8h]
  HANDLE KeyHandle; // [rsp+188h] [rbp-5E0h] BYREF
  __int128 v164; // [rsp+190h] [rbp-5D8h] BYREF
  __int64 v165; // [rsp+1A0h] [rbp-5C8h]
  __int64 v166; // [rsp+1A8h] [rbp-5C0h]
  __int64 v167; // [rsp+1B0h] [rbp-5B8h]
  __int64 v168[2]; // [rsp+1C0h] [rbp-5A8h] BYREF
  __int64 v169; // [rsp+1D0h] [rbp-598h]
  _QWORD *v170; // [rsp+1D8h] [rbp-590h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp-588h] BYREF
  OBJECT_ATTRIBUTES v172; // [rsp+210h] [rbp-558h] BYREF
  __int128 v173; // [rsp+240h] [rbp-528h] BYREF
  __int64 v174; // [rsp+250h] [rbp-518h]
  __int128 v175; // [rsp+260h] [rbp-508h] BYREF
  __int64 v176; // [rsp+270h] [rbp-4F8h]
  __int128 v177; // [rsp+280h] [rbp-4E8h] BYREF
  __int64 v178; // [rsp+290h] [rbp-4D8h]
  __int128 v179; // [rsp+2A0h] [rbp-4C8h] BYREF
  __int64 v180; // [rsp+2B0h] [rbp-4B8h]
  __int128 v181; // [rsp+2C0h] [rbp-4A8h] BYREF
  __int64 v182; // [rsp+2D0h] [rbp-498h]
  __int128 v183; // [rsp+2E0h] [rbp-488h] BYREF
  __int64 v184; // [rsp+2F0h] [rbp-478h]
  __int128 v185; // [rsp+300h] [rbp-468h] BYREF
  __int64 v186; // [rsp+310h] [rbp-458h]
  __int128 v187; // [rsp+320h] [rbp-448h] BYREF
  __int64 v188; // [rsp+330h] [rbp-438h]
  _DWORD v189[20]; // [rsp+340h] [rbp-428h] BYREF
  __int128 v190; // [rsp+390h] [rbp-3D8h] BYREF
  __int64 v191; // [rsp+3A0h] [rbp-3C8h]
  __int128 v192; // [rsp+3A8h] [rbp-3C0h] BYREF
  __int64 v193; // [rsp+3B8h] [rbp-3B0h]
  struct _KAPC_STATE ApcState; // [rsp+3C0h] [rbp-3A8h] BYREF
  __int128 v195; // [rsp+3F0h] [rbp-378h] BYREF
  __int128 v196; // [rsp+400h] [rbp-368h]
  _OWORD v197[11]; // [rsp+410h] [rbp-358h] BYREF
  _DWORD v198[136]; // [rsp+4C0h] [rbp-2A8h] BYREF
  _DWORD v199[6]; // [rsp+6E0h] [rbp-88h] BYREF
  _WORD v200[20]; // [rsp+6F8h] [rbp-70h] BYREF

  v16 = (int)a3;
  v134 = a3;
  Process = (PEPROCESS)a1;
  v166 = a1;
  v142 = a7;
  Token = a8;
  v18 = a11;
  v167 = a11;
  v158 = a13;
  v169 = a14;
  v170 = a15;
  v155 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v152 = 0LL;
  KeyHandle = 0LL;
  memset(v197, 0, 0xA8uLL);
  v19 = 0;
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v122[0] = 0;
  memset(&v172, 0, sizeof(v172));
  Handle = 0LL;
  Object = 0LL;
  v121 = 0;
  v128 = 0;
  NumberOfBytes = 0;
  memset(v189, 0, 0x48uLL);
  TokenInformation = 0LL;
  v168[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v141 = CurrentThread->ApcState.Process;
  v157 = 0LL;
  v132 = 0LL;
  P = 0LL;
  v131 = 0;
  v146 = 0;
  v127 = 0;
  v143 = 0LL;
  v140 = 0;
  v139 = 0;
  LOWORD(v126) = 0;
  v130 = 0;
  v148 = 0;
  v135 = 0;
  Address = 0LL;
  v147 = 0;
  v165 = 0LL;
  memset(v198, 0, 0x218uLL);
  v119 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v19 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v19 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v19 = 197632;
    }
  }
  v150 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v157 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v132 = v157;
    v150 = 0LL;
  }
  else if ( a1 )
  {
    v150 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v150 = a1;
      v127 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
    v19 |= 0x1000u;
  v195 = 0LL;
  v196 = 0LL;
  v160 = 0LL;
  v21 = 2624;
  NumberOfBytes_4 = 0;
  v144 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2664;
    v19 |= 0x200u;
    v144 = 2624LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    NumberOfBytes_4 = (v21 + 7) & 0xFFFFFFF8;
    v21 = NumberOfBytes_4 + 480;
    v19 |= 0x2000u;
    v16 = (int)v134;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v134) = MaximumGroupCount;
  v25 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v25 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * (unsigned __int16)MaximumGroupCount + v25;
  }
  LOBYTE(v24) = a2;
  LOBYTE(v23) = a2;
  result = ObCreateObject(v23, (_DWORD)PsProcessType, v16, v24, 0, v21, 0, v21, (__int64)&Object);
  if ( (int)result >= 0 )
  {
    v26 = (char *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(v26, 0x746C6644u);
    memset(v26, 0, v21);
    LpcInitializeProcess(v26);
    ExInitializePushLock((PKSPIN_LOCK)v26 + 139);
    PspInitializeProcessLock((__int64)v26);
    *((_QWORD *)v26 + 189) = v26 + 1504;
    *((_QWORD *)v26 + 188) = v26 + 1504;
    *((_QWORD *)v26 + 277) = v26 + 2208;
    *((_QWORD *)v26 + 276) = v26 + 2208;
    *((_QWORD *)v26 + 307) = v26 + 2448;
    *((_QWORD *)v26 + 306) = v26 + 2448;
    v26[2170] = a4;
    v26[2168] = a5;
    v26[2169] = a6;
    *((_QWORD *)v26 + 283) = 0LL;
    *((_QWORD *)v26 + 321) = 0LL;
    *((_QWORD *)v26 + 320) = 0LL;
    *((_QWORD *)v26 + 323) = 0LL;
    *((_QWORD *)v26 + 322) = 0LL;
    if ( (v19 & 0x400) != 0 )
      *((_DWORD *)v26 + 543) |= 1u;
    v138 = 32;
    if ( (v119 & 0x8000) != 0 )
      *((_DWORD *)v26 + 543) |= 0x20u;
    if ( v25 )
    {
      *((_DWORD *)v26 + 543) |= 0x80u;
      v27 = &v26[v25];
      *((_QWORD *)v26 + 297) = v27;
      *((_QWORD *)v26 + 298) = &v27[8 * (unsigned int)v134];
    }
    v28 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v26 + 543) |= 0x1000u;
    if ( (v28 & 4) != 0 )
      *((_DWORD *)v26 + 543) |= 0x800000u;
    if ( (v28 & 8) != 0 )
      *((_DWORD *)v26 + 543) |= 0x8000000u;
    v29 = v119;
    v30 = 512;
    Flink = (__int64)v141[1].Header.WaitListHead.Flink | 2;
    if ( (v119 & 0x200) != 0 )
      Flink = (__int64)v141[1].Header.WaitListHead.Flink;
    *((_QWORD *)v26 + 169) = Flink;
    if ( (v19 & 0x200) != 0 )
      *((_QWORD *)v26 + 279) = &v26[v144];
    if ( (v19 & 0x2000) != 0 )
    {
      *((_QWORD *)v26 + 285) = &v26[NumberOfBytes_4];
      PoEnergyContextInitialize();
    }
    if ( v18 && (v30 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v32 = *(_DWORD *)(v18 + 316);
      v33 = Process;
    }
    else
    {
      v33 = Process;
      if ( Process )
        v32 = Process[1].ActiveProcessors.Bitmap[9];
      else
        v32 = 5;
    }
    v168[1] = (__int64)(v26 + 1528);
    *((_DWORD *)v26 + 382) = v32;
    *((_DWORD *)v26 + 501) = 259;
    if ( v33 )
    {
      v34 = (HIDWORD(v33[1].DirectoryTableBase) >> 27) & 7;
      DefaultPagePriority = (LODWORD(v33[1].DirectoryTableBase) >> 12) & 7;
      *((_QWORD *)v26 + 168) = v33[1].Header.WaitListHead.Flink;
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    v134 = (volatile signed __int32 *)(v26 + 1124);
    *((_DWORD *)v26 + 281) = *((_DWORD *)v26 + 281) & 0xC7FFFFFF | (v34 << 27);
    v144 = (__int64)(v26 + 1120);
    *((_DWORD *)v26 + 280) = (DefaultPagePriority << 12) | *((_DWORD *)v26 + 280) & 0xFFFF8FFF;
    if ( v158 )
    {
      if ( !PsReferencePartitionSafe((__int64)v158) )
      {
        SectionInformation = -1073740640;
LABEL_176:
        PspRundownSingleProcess((__int64)v26, 0);
        ObfDereferenceObjectWithTag(v26, 0x72437350u);
LABEL_177:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        SeDeleteCodeIntegrityOriginClaimMembers();
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v158 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    *((_QWORD *)v26 + 315) = v36;
    if ( !v37 )
    {
      v143 = v142;
      if ( v142 )
      {
        if ( (v119 & 0x1000) != 0 )
        {
LABEL_57:
          SectionInformation = -1073741776;
          goto LABEL_176;
        }
        ObfReferenceObject(v142);
      }
      else if ( v33 )
      {
        if ( a12 )
          goto LABEL_57;
        if ( PsIsSystemProcess((__int64)v33) )
        {
          SectionInformation = -1073741811;
          goto LABEL_176;
        }
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v33[1].ProfileListHead.Blink) )
        {
          v39 = (void *)v33[1].Affinity.Bitmap[17];
          v142 = v39;
          if ( v39 )
            ObfReferenceObject(v39);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v33[1].ProfileListHead.Blink);
        }
        if ( !v142 )
        {
          SectionInformation = -1073741558;
          goto LABEL_176;
        }
        v40 = v33[1].AffinityPadding[10];
        if ( v40 )
        {
          v19 |= 0x4000u;
          v126 = *(unsigned __int16 *)(v40 + 8);
          HIDWORD(TokenInformation) = *(_DWORD *)(v40 + 12);
        }
        if ( (v33[1].DirectoryTableBase & 0x2000000000000LL) != 0 )
        {
          v119 |= 8u;
          a9 = v29 | 8;
        }
      }
    }
    v162 = (unsigned __int64 *)(v26 + 1304);
    v41 = v142;
    *((_QWORD *)v26 + 163) = v142;
    LOWORD(NumberOfBytes_4) = 0;
    if ( v18 )
    {
      *((_QWORD *)v26 + 270) = *(_QWORD *)(v18 + 464);
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v42 = *(_BYTE *)(v18 + 99);
      v43 = v19 | (32
                 * (v42 & 4 | (4
                             * (v42 & 2 | ((*(_DWORD *)(v18 + 112) & 1 | (2
                                                                        * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xF8))))) << 11)))));
      v140 = *(unsigned __int16 *)(v18 + 86);
      v139 = *(unsigned __int16 *)(v18 + 84);
      v44 = *(_WORD *)(v18 + 96);
      if ( (v43 & 0x100) != 0 && v44 == 332 && (v42 & 1) != 0 )
        v45 = 0x8000;
      else
        v45 = 0;
      v19 = v45 | v43;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v44);
      v47 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        v48 = 3;
LABEL_82:
        SectionInformation = -1073741701;
LABEL_83:
        PspUpdateCreateInfo(v48, v18, 0LL);
        goto LABEL_176;
      }
      if ( (v19 & 0x8000) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
        {
          v19 |= 0x4000u;
          LOWORD(v126) = v47;
        }
        if ( (v19 & 0x8000) == 0
          && (v47 < MEMORY[0xFFFFF7800000002C] || v47 > MEMORY[0xFFFFF7800000002E])
          && (v19 & 0x4000) == 0 )
        {
          v48 = 4;
          goto LABEL_82;
        }
      }
      if ( v143 )
      {
        LOWORD(NumberOfBytes_4) = *(_WORD *)(v18 + 94);
        v49 = (HANDLE *)(v18 + 192);
        v50 = RtlOpenImageFileOptionsKey(v18 + 232, 0LL, v18 + 192);
        if ( v50 < 0 )
        {
          if ( v50 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v49 = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        *((_QWORD *)v26 + 180) = *(_QWORD *)(v18 + 176);
        if ( (v19 & 0x4000) != 0 )
        {
          v51 = v119;
        }
        else
        {
          SectionInformation = PspDetectComplusILImage(v18, &a9);
          if ( SectionInformation < 0 )
            goto LABEL_176;
          v51 = a9;
          LOWORD(v119) = a9;
          if ( v47 == 332 && (a9 & 8) == 0 )
          {
            if ( (unsigned int)PsWow64IsMachineSupported(332) )
            {
              v126 = 332;
LABEL_105:
              v19 |= 0x4000u;
              goto LABEL_108;
            }
            if ( (unsigned int)PsWow64IsMachineSupported(452) )
            {
              LOWORD(v126) = 452;
              goto LABEL_105;
            }
            v51 |= 8u;
            LOWORD(v119) = v51;
            a9 = v51;
          }
        }
LABEL_108:
        if ( *v49 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            ImageFileKeyOption = RtlQueryImageFileKeyOption(*v49, 2, (__int64)&NumberOfBytes);
            if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && NumberOfBytes == 2 && v128 )
            {
              SectionInformation = -1073741767;
              v48 = 5;
              goto LABEL_83;
            }
          }
          v129 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*v49, 4, 0LL) >= 0 )
          {
            if ( v129 )
            {
              v51 |= 0x10u;
              LOWORD(v119) = v51;
              a9 = v51;
              if ( (v19 & 0x4000) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v49;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v129 = 0;
                  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 && v129 )
                  {
                    v51 |= 0x20u;
                    LOWORD(v119) = v51;
                    a9 = v51;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v150 )
          {
            PspReadIFEONodeOptions(v26, *v49, &v132);
            v157 = v132;
          }
          v145 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*v49, 4, 0LL) >= 0 && v145 )
            v127 |= 0x40u;
          if ( (unsigned int)RtlQueryImageFileKeyOption(*v49, 0, (__int64)&NumberOfBytes) == -2147483643 )
          {
            v53 = NumberOfBytes;
            if ( NumberOfBytes <= 0xA0 && (NumberOfBytes & 7) == 0 )
            {
              P = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x73437350u);
              if ( !P )
              {
LABEL_132:
                SectionInformation = -1073741801;
                goto LABEL_176;
              }
              if ( (int)RtlQueryImageFileKeyOption(*v49, v53, (__int64)&NumberOfBytes) >= 0 && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v131 = NumberOfBytes >> 3;
              }
            }
          }
          v172.Length = 48;
          v172.RootDirectory = *v49;
          v172.Attributes = 576;
          v172.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v172.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v172) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle);
            ObCloseHandle(Handle, 0);
          }
        }
LABEL_143:
        v54 = v146 | 0x20000;
        if ( (v51 & 8) == 0 )
          v54 = v146;
        if ( (v19 & 0x4000) != 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          *((_QWORD *)v26 + 176) = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_132;
          v56 = HIDWORD(TokenInformation);
          v57 = v126;
          if ( !HIDWORD(TokenInformation) )
            v56 = PspWow64PickBestNtdll(v18);
          PoolWithTag[4] = v57;
          *(_DWORD *)(*((_QWORD *)v26 + 176) + 12LL) = v56;
          v58 = (_QWORD *)*((_QWORD *)v26 + 176);
          if ( v58 )
            *v58 = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_176;
        v59 = 0;
        v60 = a2;
        if ( a2 )
        {
          if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
          {
            v199[0] = 14;
            v59 = 1;
          }
          if ( a12 )
            v199[v59++] = 3;
          v61 = v119;
          if ( (v119 & 0x30) != 0 )
            v199[v59++] = 4;
          if ( (v119 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v141) )
            v199[v59++] = 10;
          if ( (v119 & 0x8400) != 0 )
            v199[v59++] = 7;
          if ( v59 )
          {
            v62 = (int)RtlAcquirePrivilege(v199, v59, a12 != 0, &v160) < 0;
            v60 = a2;
            if ( !v62 )
              v19 |= 0x10u;
          }
          else
          {
            v60 = a2;
          }
        }
        else
        {
          v61 = v119;
        }
        if ( (v61 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v60) )
          goto LABEL_173;
        if ( v150 )
        {
          KeQueryAffinityProcess(v150, v197, 0LL, (__int64)v200);
          KeFirstGroupAffinityEx((__int64)&v152, v197);
          v132 = KeNodeBlock[(unsigned __int16)v200[WORD4(v152)]];
        }
        else
        {
          if ( v157 )
          {
            v63 = *(_WORD *)(v157 + 144);
          }
          else if ( Process )
          {
            if ( (Process[1].DirectoryTableBase & 0x100000) != 0 )
            {
              v127 |= 0x100000u;
              v132 = KeNodeBlock[Process->IdealGlobalNode];
              v63 = *(_WORD *)(v132 + 144);
            }
            else
            {
              v132 = PspSelectNodeForProcess();
              v63 = *(_WORD *)(v132 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v63 )
              {
                v132 = 0LL;
                v63 = 1;
              }
            }
          }
          else
          {
            v63 = 0;
          }
          WORD4(v152) = v63;
          *(_QWORD *)&v152 = qword_140CFC848[v63];
          if ( !v132 )
            v132 = KeSelectNodeForAffinity((__int64)&v152);
          LOBYTE(v119) = a9;
          v26 = (char *)Object;
        }
        v64 = v134;
        *v134 |= v54;
        *(_DWORD *)v144 |= v127;
        v65 = Process;
        if ( Process )
        {
          DmaAdapter = 0LL;
          v66 = 0;
          SessionId = 0;
          v67 = 0;
          v120 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v19 |= 4u;
            SectionInformation = SeIsTokenAssignableToProcess(Token, &v120);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v68 = (v19 >> 2) & 1;
            v67 = v120;
            if ( !v120 && !v68 )
              goto LABEL_173;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v69 = MmGetSessionIdEx((__int64)v141);
            v66 = SessionId;
            if ( SessionId != v69 )
            {
              if ( !v68 )
              {
LABEL_173:
                SectionInformation = -1073741727;
                goto LABEL_174;
              }
              if ( (v119 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_174;
              }
              v19 |= 1u;
            }
          }
          else if ( !v143 )
          {
            v66 = MmGetSessionIdEx((__int64)Process);
            SessionId = v66;
            v19 |= v66 != (unsigned int)MmGetSessionIdEx((__int64)v141);
          }
          if ( (v19 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v66, &ApcState, &DmaAdapter);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v19) = v19 & 0xFE;
              goto LABEL_174;
            }
            *(_DWORD *)v144 |= 0x80u;
          }
          if ( !a12 || v67 )
          {
            v71 = Process;
            if ( v67 )
              v71 = v141;
            PspInheritQuota(v26, v71);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, v26, Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 1) != 0 )
                PspDetachSession(DmaAdapter);
              goto LABEL_174;
            }
          }
          v72 = PspMaximumWorkingSet;
          if ( (BYTE4(v195) & 1) != 0 )
            v72 = DWORD2(v196);
          v19 |= 32
               * (MmCreateProcessAddressSpace(
                    (_DWORD)v158,
                    v70,
                    v72,
                    BYTE4(v195) & 1,
                    (unsigned int)*(unsigned __int16 *)(v132 + 146) + 1,
                    (__int64)v26) & 1);
          if ( (v19 & 1) != 0 )
            PspDetachSession(DmaAdapter);
          if ( (v19 & 0x20) == 0 )
            goto LABEL_228;
          v65 = Process;
          v64 = v134;
        }
        else
        {
          PspInheritQuota(v26, 0LL);
          v26[912] = 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
            goto LABEL_174;
        }
        HIDWORD(TokenInformation) = v19;
        _InterlockedOr(v64, 0x40000u);
        v26 = (char *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
        SectionInformation = KeInitializeProcess(
                               v74,
                               8,
                               (unsigned int)&v152,
                               v132,
                               SessionSchedulingGroupByProcess,
                               v75);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        if ( v18 )
        {
          v130 = *(_DWORD *)(v18 + 416);
          v148 = *(_DWORD *)(v18 + 420);
          Address = *(PVOID *)(v18 + 440);
          v147 = *(_DWORD *)(v18 + 448);
          v165 = *(_QWORD *)(v18 + 208);
          v76 = *(_DWORD **)(v18 + 424);
          v135 = *(_DWORD *)(v18 + 432);
          if ( *(_QWORD *)(v18 + 176) && (int)SeGetCodeIntegrityOriginClaimForFileObject() >= 0 )
          {
            if ( !v198[0] && v76 && v135 == 524 )
            {
              v77 = v198;
              v78 = 4LL;
              do
              {
                *(_OWORD *)v77 = *(_OWORD *)v76;
                *((_OWORD *)v77 + 1) = *((_OWORD *)v76 + 1);
                *((_OWORD *)v77 + 2) = *((_OWORD *)v76 + 2);
                *((_OWORD *)v77 + 3) = *((_OWORD *)v76 + 3);
                *((_OWORD *)v77 + 4) = *((_OWORD *)v76 + 4);
                *((_OWORD *)v77 + 5) = *((_OWORD *)v76 + 5);
                *((_OWORD *)v77 + 6) = *((_OWORD *)v76 + 6);
                v77 += 32;
                *((_OWORD *)v77 - 1) = *((_OWORD *)v76 + 7);
                v76 += 32;
                --v78;
              }
              while ( v78 );
              *(_QWORD *)v77 = *(_QWORD *)v76;
              v77[2] = v76[2];
            }
            v76 = v198;
            v135 = 536;
          }
        }
        else
        {
          v76 = 0LL;
        }
        SectionInformation = PspInitializeProcessSecurity(
                               v65,
                               (__int64)v26,
                               (__int64)Token,
                               a12,
                               v130,
                               (v19 >> 11) & 1,
                               (v19 >> 12) & 1,
                               v148,
                               (__int64)v76,
                               v135,
                               (__int64)Address,
                               v147,
                               v165,
                               (_DWORD *)v169);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        v26[1463] = 2;
        if ( v65 )
        {
          v79 = v26[1463];
          if ( ((HIBYTE(v65[1].ActiveProcessors.Bitmap[0]) - 1) & 0xFB) == 0 )
            v79 = HIBYTE(v65[1].ActiveProcessors.Bitmap[0]);
          v26[1463] = v79;
          if ( v18 )
            v80 = *(_QWORD *)(v18 + 296);
          else
            LODWORD(v80) = 0;
          v81 = v18 ? *(_DWORD *)(v18 + 292) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)((unsigned __int64)v65 & -(__int64)((a9 & 4) != 0)),
                     (__int64)v26,
                     v81,
                     v80);
        }
        else
        {
          *((_QWORD *)v26 + 174) = v141[1].AffinityPadding[8];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v26);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_174;
        if ( (v195 & 7) != 0 )
        {
          LOBYTE(v84) = a2;
          PspApplyIFEOPerfOptions(v26, &v195, v84);
        }
        if ( (v19 & 0x200000) != 0 )
          KeSetCpuSetsProcess((__int64)v26, v131, (char *)P);
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            LOBYTE(v85) = a2;
            LOBYTE(v83) = *(_BYTE *)(v18 + 248);
            SectionInformation = PspSetProcessPriorityClass(v26, v83, 0LL, v85);
            if ( SectionInformation < 0 )
              goto LABEL_174;
          }
        }
        v26[640] = PspComputeQuantumAndPriority((_DWORD)v26, 0, (unsigned int)&v121, 0, 0LL);
        v26[641] = v121;
        SectionInformation = 0;
        v130 = 0;
        PspReadIFEOMitigationOptions(v18, &v190);
        v175 = v190;
        v176 = v191;
        v177 = PspSystemMitigationOptions;
        v178 = qword_140CFC9E0;
        PspInheritMitigationOptions(&v177, &v175, &v190);
        PspReadIFEOMitigationAuditOptions(v18, &v192);
        v179 = v192;
        v180 = v193;
        v181 = PspSystemMitigationAuditOptions;
        v182 = qword_140CFCB80;
        PspInheritMitigationAuditOptions(&v181, &v179, &v192);
        v86 = (WORD3(v190) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v183 = *(_OWORD *)(v18 + 360);
            v184 = *(_QWORD *)(v18 + 376);
            v185 = v190;
            v186 = v191;
            PspInheritMitigationOptions(&v185, &v183, &v190);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v173 = *(_OWORD *)(v18 + 488);
            v174 = *(_QWORD *)(v18 + 504);
            v187 = v192;
            v188 = v193;
            PspInheritMitigationAuditOptions(&v187, &v173, &v192);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v86) = v86 | 4;
        v87 = v86 | 0x100;
        if ( (v86 & 4) == 0 )
          v87 = v86;
        if ( (v87 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v190);
        if ( !KeIsUserCetAllowed() )
          *((_QWORD *)&v190 + 1) = *((_QWORD *)&v190 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (NumberOfBytes_4 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v138 = 0;
        v89 = v88 | ((NumberOfBytes_4 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)NumberOfBytes_4 >> 4) & 2 | ((v19 & 0x180) != 0) | v138 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2);
        LODWORD(v134) = v19 & 0x400;
        if ( (v19 & 0x400) != 0 )
        {
          *((_QWORD *)&v190 + 1) = *((_QWORD *)&v190 + 1) & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v90 = v190 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v90 = v190 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          *(_QWORD *)&v190 = v90;
        }
        if ( !v143 && Process && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
          *((_QWORD *)&v190 + 1) = *((_QWORD *)&v190 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v26);
        if ( !PsIsHostSilo(ProcessServerSilo) )
          *((_QWORD *)&v190 + 1) = *((_QWORD *)&v190 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x4000) != 0 )
          *((_QWORD *)&v190 + 1) = *((_QWORD *)&v190 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v92 = Process;
        PspApplyMitigationOptions((_DWORD)v26, (_DWORD)Process, (unsigned int)&v190, (unsigned int)&v192, v89);
        if ( v18 )
        {
          PspApplyWin32kFilterOptions(v26, v18);
          PspApplyComponentFilterOptions(v94, v93);
          *(_OWORD *)(v18 + 360) = v190;
          *(_QWORD *)(v18 + 376) = v191;
          *(_OWORD *)(v18 + 488) = v192;
          *(_QWORD *)(v18 + 504) = v193;
        }
        PsQueryProcessAttributes((struct _KPROCESS *)v26, 0LL, (__int64)v122);
        v95 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v95 = (_DWORD)TokenInformation != 0;
        SmProcessCreateNotification(v26, v95);
        if ( v92 && v92 != PsInitialSystemProcess && (HIDWORD(v92[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
          *((_DWORD *)v26 + 543) |= 0x2000000u;
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v141)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_173;
        }
        v96 = (int)v134;
        if ( (_DWORD)v134 || v143 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v18, (__int64)v26);
          if ( SectionInformation >= 0 )
          {
            if ( (v19 & 0x10000) != 0 )
            {
              v100 = MmInitializeProcessAddressSpace((ULONG_PTR)v26, (v19 >> 17) & 1);
              v99 = v142;
            }
            else
            {
              v99 = v142;
              v100 = MmInitializeProcessAddressSpace((ULONG_PTR)v26, 0);
            }
            SectionInformation = v100;
            if ( v100 >= 0 )
            {
              if ( v18 )
              {
                ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v99);
                v102 = *((_QWORD *)v26 + 164);
                if ( ImageSectionBasedAddress != v102 )
                  *(_QWORD *)(v18 + 48) += v102 - ImageSectionBasedAddress;
              }
              v130 = SectionInformation;
              if ( !v96 )
                LOWORD(v19) = v19 | 2;
              LOWORD(v19) = (4 * (a9 & 0x10 | 2)) | v19;
              goto LABEL_321;
            }
          }
        }
        else
        {
          if ( !v92 )
            goto LABEL_321;
          *((_QWORD *)v26 + 164) = v92[1].Affinity.Bitmap[18];
          SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v26, (v19 >> 11) & 1);
          if ( SectionInformation >= 0 )
          {
            LOWORD(v19) = WORD2(TokenInformation) | (4 * (a9 & 0x10)) | 2;
            v97 = *(unsigned __int16 *)(v92[1].ActiveProcessors.Bitmap[2] + 2);
            v98 = ExAllocatePoolWithTag(NonPagedPoolNx, v97 + 16, 0x61506553u);
            *((_QWORD *)v26 + 184) = v98;
            if ( !v98 )
            {
LABEL_228:
              SectionInformation = -1073741670;
              goto LABEL_174;
            }
            memmove(v98, (const void *)v92[1].ActiveProcessors.Bitmap[2], v97 + 16);
            *(_QWORD *)(*((_QWORD *)v26 + 184) + 8LL) = *((_QWORD *)v26 + 184) + 16LL;
            *((_DWORD *)v26 + 330) = v92[1].Affinity.Bitmap[19];
            if ( (a9 & 0x1000) != 0 )
            {
              *v162 = 0LL;
              HalPutDmaAdapter((PADAPTER_OBJECT)v142);
            }
LABEL_321:
            if ( (v19 & 0x10) != 0 )
              RtlReleasePrivilege(v160);
            if ( (unsigned __int16)PsWow64GetProcessMachine((__int64)v26) == 332 )
              *((_DWORD *)v26 + 158) |= 1u;
            v131 = v19 & 8;
            if ( (v19 & 8) != 0 )
            {
              if ( v18 )
              {
                SectionInformation = PspSetupReservedUserMappings(v26, &ApcState, v18);
                if ( SectionInformation < 0 )
                  goto LABEL_176;
              }
            }
            LODWORD(v134) = v19 & 2;
            if ( (v19 & 2) != 0 )
            {
              *(_QWORD *)&v164 = 0LL;
              *((_QWORD *)&v164 + 1) = -1LL;
              IsProtectedProcess = PsIsProtectedProcess((__int64)v26);
              IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v26);
              v105 = BYTE3(v164) & 0x88 | ((v19 & 0x40) != 0) | (2
                                                               * (IsProtectedProcess | (2
                                                                                      * ((16 * IsProtectedProcessLight) | ((v19 & 0x80) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v122[0] & 1));
              BYTE3(v164) = v105;
              if ( v143 )
              {
                SectionInformation = MmCreatePeb(v26, &v164, v26 + 1360, &v152);
                if ( SectionInformation < 0 )
                {
                  *((_QWORD *)v26 + 170) = 0LL;
                  goto LABEL_176;
                }
                if ( (_QWORD)v152 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v144, 0xFFCFFFFF);
                  v26 = (char *)Object;
                  PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v152, (__int64)&v155);
                }
              }
              else
              {
                v106 = Process;
                Address = (PVOID)Process[1].AffinityPadding[4];
                *((_QWORD *)v26 + 170) = Address;
                if ( (v19 & 0x800) != 0 )
                {
LABEL_347:
                  if ( (v19 & 8) != 0 && v18 )
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(v106, v26, &ApcState, v18);
                  }
                  else if ( (_DWORD)v134 && (v19 & 0x800) == 0 )
                  {
                    SectionInformation = 0;
                    KeStackAttachProcess((PRKPROCESS)v26, &ApcState);
                    v109 = (__int64)CurrentThread;
                    PspWritePebAffinityInfo(CurrentThread, v26);
                    if ( (v19 & 8) != 0 )
                    {
                      SectionInformation = MmMapApiSetView(v26);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspMapSiloSharedDataView(v26);
                        if ( SectionInformation >= 0 )
                        {
                          SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
                          if ( SectionInformation >= 0 )
                          {
                            if ( *((_QWORD *)v26 + 176) )
                            {
                              ProcessNtdllType = PsWow64GetProcessNtdllType(v26);
                              SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                            }
                          }
                        }
                      }
                    }
                    KeUnstackDetachProcess(&ApcState);
LABEL_351:
                    MmNewProcessInitialized(v26);
                    if ( SectionInformation < 0 )
                      goto LABEL_176;
                    PspLockProcessExclusive((__int64)v26, v109);
                    v110 = ExCreateHandle(PspCidTable, v26);
                    *((_QWORD *)v26 + 136) = v110;
                    if ( !v110 )
                    {
                      PspUnlockProcessExclusive((__int64)v26, v109);
                      SectionInformation = -1073741670;
                      goto LABEL_176;
                    }
                    if ( (v19 & 0x1000) != 0 )
                    {
                      SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v26 + 163), v168);
                      v112 = (__int64)v26;
                      if ( SectionInformation < 0 )
                      {
LABEL_365:
                        PspUnlockProcessExclusive(v112, v109);
                        goto LABEL_176;
                      }
                      SectionInformation = KeSecureProcess(
                                             (_KPROCESS *)v26,
                                             **(_QWORD **)(v18 + 392),
                                             *((_QWORD *)v26 + 170),
                                             *((_QWORD *)v26 + 136),
                                             v168[0],
                                             *((_QWORD *)v26 + 164),
                                             *(struct _MDL **)(v18 + 392),
                                             *(unsigned int *)(v18 + 408));
                      if ( SectionInformation < 0 )
                      {
                        v112 = (__int64)v26;
                        goto LABEL_365;
                      }
                    }
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise((__int64 *)v26 + 141, v113, v114, v115);
                    }
                    else
                    {
                      v26 = (char *)Object;
                      *((_QWORD *)Object + 141) = MEMORY[0xFFFFF78000000014];
                    }
                    *((_QWORD *)v26 + 288) = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                    v117 = Object;
                    *((_QWORD *)Object + 289) = UnbiasedInterruptTime;
                    v117[291] = *((_QWORD *)v26 + 288);
                    *v170 = v117;
                    SectionInformation = v130;
                    goto LABEL_177;
                  }
                  v109 = (__int64)CurrentThread;
                  goto LABEL_351;
                }
                LOBYTE(v164) = 1;
                KeStackAttachProcess((PRKPROCESS)v26, &ApcState);
                if ( MmSecureVirtualMemory(Address, 0x7C8uLL, 4u) )
                  *(_OWORD *)Address = v164;
                else
                  SectionInformation = -1073741503;
                if ( SectionInformation >= 0 )
                {
                  v107 = *((_QWORD *)v26 + 176);
                  if ( v107 )
                  {
                    v108 = *(_WORD *)(v107 + 8);
                    if ( v108 == 332 || v108 == 452 )
                    {
                      v162 = *(unsigned __int64 **)v107;
                      if ( MmSecureVirtualMemory(v162, 0x480uLL, 4u) )
                      {
                        v153 = 0xFFFFFFFF00000001uLL;
                        BYTE3(v153) = v105;
                        *v162 = v153;
                      }
                      else
                      {
                        SectionInformation = -1073741503;
                      }
                    }
                  }
                }
                KeUnstackDetachProcess(&ApcState);
                if ( SectionInformation < 0 )
                  goto LABEL_176;
              }
            }
            v106 = Process;
            goto LABEL_347;
          }
        }
LABEL_174:
        if ( (v19 & 0x10) != 0 )
          RtlReleasePrivilege(v160);
        goto LABEL_176;
      }
    }
    else if ( v41 )
    {
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, (__int64)v189);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v19 |= 32
           * (HIBYTE(v189[12]) & 4 | (4
                                    * (HIBYTE(v189[12]) & 2 | ((v189[16] & 1 | (2
                                                                              * (v189[16] & 2 | (2 * (v189[16] & 0xF8))))) << 11))));
      LOWORD(NumberOfBytes_4) = HIWORD(v189[11]);
      v140 = HIWORD(v189[9]);
      v139 = LOWORD(v189[9]);
      if ( !v143 )
      {
        v146 = 8;
        v19 |= 0x800u;
      }
    }
    LOBYTE(v51) = v119;
    goto LABEL_143;
  }
  return result;
}
