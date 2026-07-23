/*
 * XREFs of PspAllocateProcess @ 0x1406F3CB0
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407B87A0 (PspCreateProcess.c)
 * Callees:
 *     PsIsProtectedProcess @ 0x140203410 (PsIsProtectedProcess.c)
 *     KeQueryAffinityProcess @ 0x140204350 (KeQueryAffinityProcess.c)
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x14025A340 (PoEnergyEstimationEnabled.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     PsIsSystemProcess @ 0x1402A5180 (PsIsSystemProcess.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     ExInitializePushLock @ 0x1402C0830 (ExInitializePushLock.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1402C1358 (RtlWow64GetEquivalentMachineCHPE.c)
 *     MmGetDefaultPagePriority @ 0x1402C2300 (MmGetDefaultPagePriority.c)
 *     KeQueryActiveGroupCount @ 0x1402C9F20 (KeQueryActiveGroupCount.c)
 *     KeSelectNodeForAffinity @ 0x1402CA648 (KeSelectNodeForAffinity.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 *     PsIsProtectedProcessLight @ 0x1402D7910 (PsIsProtectedProcessLight.c)
 *     KeFirstGroupAffinityEx @ 0x1403128B0 (KeFirstGroupAffinityEx.c)
 *     PspUnlockProcessExclusive @ 0x14031BD28 (PspUnlockProcessExclusive.c)
 *     PspWow64PickBestNtdll @ 0x14031E1E4 (PspWow64PickBestNtdll.c)
 *     KeQueryUnbiasedInterruptTime @ 0x140337F80 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x140337FB0 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x140337FD8 (KeIsUserCetAllowed.c)
 *     KeQuerySystemTimeUnsafe @ 0x1403554F4 (KeQuerySystemTimeUnsafe.c)
 *     KeQueryMaximumGroupCount @ 0x140355540 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140355550 (KeQuerySystemTimePrecise.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeSecureProcess @ 0x14050DF80 (KeSecureProcess.c)
 *     PspInitializeProcessLock @ 0x14057B300 (PspInitializeProcessLock.c)
 *     PsReferencePartition @ 0x14057E878 (PsReferencePartition.c)
 *     PspWritePebAffinityInfo @ 0x1405D938C (PspWritePebAffinityInfo.c)
 *     MmGetSectionInformation @ 0x1405DB7B0 (MmGetSectionInformation.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ObCreateObject @ 0x140643F10 (ObCreateObject.c)
 *     PsWow64IsMachineSupported @ 0x14064CAE0 (PsWow64IsMachineSupported.c)
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PspUpdateCreateInfo @ 0x14066E454 (PspUpdateCreateInfo.c)
 *     ObInitProcess @ 0x14066F6F0 (ObInitProcess.c)
 *     MmSecureVirtualMemory @ 0x1406BA930 (MmSecureVirtualMemory.c)
 *     SeQuerySessionIdToken @ 0x1406C21D0 (SeQuerySessionIdToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C7DCC (SeIsTokenAssignableToProcess.c)
 *     PspInitializeFullProcessImageName @ 0x1406D0B9C (PspInitializeFullProcessImageName.c)
 *     PspAssignProcessQuotaBlock @ 0x1406D9004 (PspAssignProcessQuotaBlock.c)
 *     PspDetectComplusILImage @ 0x1406DA1FC (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x1406DA2D0 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406DA328 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DA510 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406DD35C (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x1406DE5D8 (PspSelectNodeForProcess.c)
 *     PspSetProcessPriorityClass @ 0x1406DFD24 (PspSetProcessPriorityClass.c)
 *     PoEnergyContextInitialize @ 0x1406E06F0 (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x1406E0F68 (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x1406E31CC (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x1406E3CD4 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x1406E4C34 (PspApplyWin32kFilterOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x1406E4CC0 (RtlOpenImageFileOptionsKey.c)
 *     RtlReleasePrivilege @ 0x1406E4FD0 (RtlReleasePrivilege.c)
 *     PspApplyIFEOPerfOptions @ 0x1406E8A74 (PspApplyIFEOPerfOptions.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     PsWow64GetProcessMachine @ 0x1406F2CF0 (PsWow64GetProcessMachine.c)
 *     PspComputeQuantumAndPriority @ 0x1406F3A74 (PspComputeQuantumAndPriority.c)
 *     PspApplyMitigationOptions @ 0x1406F5FD0 (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x1406F6A8C (PspInheritMitigationOptions.c)
 *     MmNewProcessInitialized @ 0x1406F6B68 (MmNewProcessInitialized.c)
 *     SmProcessCreateNotification @ 0x1406F6BB4 (SmProcessCreateNotification.c)
 *     PspInheritMitigationAuditOptions @ 0x1406F6C04 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x1406F6CEC (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1406F6D74 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitializeProcessSecurity @ 0x1406F6E68 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x1406F70A0 (KeInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1406F71E4 (MmGetSessionSchedulingGroupByProcess.c)
 *     LpcInitializeProcess @ 0x1406F7210 (LpcInitializeProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406F9B48 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1406F9DCC (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1406F9DE8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406F9E20 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     PspDetachSession @ 0x140711198 (PspDetachSession.c)
 *     PspAttachSession @ 0x1407111BC (PspAttachSession.c)
 *     MmIsSessionLeaderProcess @ 0x14076CE10 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1407B9344 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407BB214 (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x1408BFC00 (MmGetImageSectionBasedAddress.c)
 *     MmGetSectionStrongImageReference @ 0x1408D35D8 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x140903F14 (PspSetProcessAffinitySafe.c)
 *     ExCreateHandle @ 0x140947D00 (ExCreateHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        char a2,
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
  __int64 v16; // r15
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int64 result; // rax
  unsigned int v21; // r14d
  unsigned int MaximumGroupCount; // eax
  unsigned int v23; // r12d
  char *v24; // r15
  int v25; // r14d
  char *v26; // rcx
  char v27; // al
  int v28; // r8d
  __int64 Flink; // rcx
  char *v30; // rcx
  int v31; // eax
  __int64 v32; // r12
  int v33; // edx
  int DefaultPagePriority; // r8d
  __int64 v35; // r8
  int v36; // r9d
  int SectionInformation; // r14d
  void *v38; // rax
  __int64 v39; // rax
  PVOID v40; // rcx
  char v41; // r8
  int v42; // ebx
  __int16 v43; // cx
  int v44; // eax
  __int16 EquivalentMachineCHPE; // ax
  unsigned __int16 v46; // di
  int v47; // ecx
  HANDLE *v48; // r12
  int v49; // eax
  int v50; // r14d
  NTSTATUS v51; // eax
  unsigned int v52; // edi
  PVOID PoolWithTag; // rax
  int v54; // ecx
  _WORD *v55; // r10
  int v56; // eax
  __int16 v57; // r11
  _QWORD *v58; // rax
  ULONG v59; // edi
  KPROCESSOR_MODE v60; // al
  __int16 v61; // r14
  bool v62; // sf
  unsigned __int16 v63; // di
  __int64 v64; // rax
  volatile signed __int32 *v65; // rdi
  ULONG v66; // r14d
  char v67; // r12
  int v68; // edi
  int v69; // eax
  __int64 v70; // rdx
  PEPROCESS v71; // rdx
  unsigned __int64 v72; // r8
  __int64 SessionSchedulingGroupByProcess; // rax
  int v74; // ecx
  char v75; // r8
  char v76; // al
  __int64 v77; // r9
  int v78; // r8d
  int inited; // eax
  __int64 v80; // r9
  int v81; // edi
  __int16 v82; // r11
  int v83; // r11d
  unsigned int v84; // edi
  unsigned __int64 v85; // rax
  __int64 ProcessServerSilo; // rax
  PEPROCESS v87; // r12
  __int64 v88; // rdx
  unsigned int v89; // edi
  __int64 v90; // rdi
  PVOID v91; // rax
  PVOID v92; // r12
  int v93; // eax
  __int64 ImageSectionBasedAddress; // rax
  __int64 v95; // rcx
  _DWORD *v96; // r9
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v99; // di
  PEPROCESS v100; // rcx
  __int64 v101; // rax
  __int16 v102; // cx
  struct _KTHREAD *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // r8
  _DWORD *v106; // r9
  unsigned int ProcessNtdllType; // eax
  __int64 v108; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v110; // rcx
  int v112; // [rsp+78h] [rbp-4F0h]
  char v113; // [rsp+7Ch] [rbp-4ECh] BYREF
  char v114; // [rsp+7Dh] [rbp-4EBh] BYREF
  char v115[2]; // [rsp+7Eh] [rbp-4EAh] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-4E8h]
  ULONG NumberOfBytes; // [rsp+88h] [rbp-4E0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+8Ch] [rbp-4DCh]
  unsigned int v119; // [rsp+90h] [rbp-4D8h]
  int v120; // [rsp+94h] [rbp-4D4h]
  int v121; // [rsp+98h] [rbp-4D0h]
  ULONG v122; // [rsp+9Ch] [rbp-4CCh] BYREF
  ULONG v123; // [rsp+A0h] [rbp-4C8h] BYREF
  int v124; // [rsp+A4h] [rbp-4C4h]
  ULONG v125; // [rsp+A8h] [rbp-4C0h]
  __int64 v126; // [rsp+B0h] [rbp-4B8h]
  PVOID Object; // [rsp+B8h] [rbp-4B0h] BYREF
  PVOID TokenInformation; // [rsp+C0h] [rbp-4A8h] BYREF
  ULONG SessionId; // [rsp+C8h] [rbp-4A0h] BYREF
  int v130; // [rsp+CCh] [rbp-49Ch]
  int v131; // [rsp+D0h] [rbp-498h]
  int v132; // [rsp+D4h] [rbp-494h]
  _KPROCESS *v133; // [rsp+D8h] [rbp-490h]
  PVOID v134; // [rsp+E0h] [rbp-488h]
  PVOID v135; // [rsp+E8h] [rbp-480h]
  __int64 v136; // [rsp+F0h] [rbp-478h]
  ULONG v137; // [rsp+F8h] [rbp-470h] BYREF
  int v138; // [rsp+FCh] [rbp-46Ch]
  int v139; // [rsp+100h] [rbp-468h]
  int v140; // [rsp+104h] [rbp-464h]
  __int64 v141; // [rsp+108h] [rbp-460h]
  PACCESS_TOKEN Token; // [rsp+110h] [rbp-458h]
  int v143; // [rsp+118h] [rbp-450h]
  PVOID Address; // [rsp+120h] [rbp-448h]
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp-440h]
  volatile signed __int32 *v146; // [rsp+130h] [rbp-438h]
  unsigned __int64 v147; // [rsp+138h] [rbp-430h]
  __int128 v148; // [rsp+140h] [rbp-428h] BYREF
  PVOID v149; // [rsp+150h] [rbp-418h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+158h] [rbp-410h] BYREF
  int v151; // [rsp+160h] [rbp-408h] BYREF
  PVOID ReturnedState; // [rsp+168h] [rbp-400h] BYREF
  PVOID P; // [rsp+170h] [rbp-3F8h]
  HANDLE KeyHandle; // [rsp+178h] [rbp-3F0h] BYREF
  HANDLE Handle; // [rsp+180h] [rbp-3E8h] BYREF
  unsigned __int64 *v156; // [rsp+188h] [rbp-3E0h]
  __int64 v157; // [rsp+190h] [rbp-3D8h]
  __int128 v158; // [rsp+198h] [rbp-3D0h] BYREF
  __int64 v159; // [rsp+1B0h] [rbp-3B8h]
  __int64 v160; // [rsp+1C0h] [rbp-3A8h] BYREF
  __int64 v161; // [rsp+1C8h] [rbp-3A0h]
  __int64 v162; // [rsp+1D0h] [rbp-398h]
  __int64 v163; // [rsp+1D8h] [rbp-390h]
  char *v164; // [rsp+1E0h] [rbp-388h]
  __int64 v165; // [rsp+1E8h] [rbp-380h]
  _QWORD *v166; // [rsp+1F0h] [rbp-378h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1F8h] [rbp-370h] BYREF
  OBJECT_ATTRIBUTES v168; // [rsp+228h] [rbp-340h] BYREF
  __m128i v169; // [rsp+260h] [rbp-308h] BYREF
  __int64 v170; // [rsp+270h] [rbp-2F8h]
  __int128 v171; // [rsp+280h] [rbp-2E8h] BYREF
  __int64 v172; // [rsp+290h] [rbp-2D8h]
  __int128 v173; // [rsp+2A0h] [rbp-2C8h] BYREF
  __int64 v174; // [rsp+2B0h] [rbp-2B8h]
  __int128 v175; // [rsp+2C0h] [rbp-2A8h] BYREF
  __int64 v176; // [rsp+2D0h] [rbp-298h]
  __int128 v177; // [rsp+2E0h] [rbp-288h] BYREF
  __int64 v178; // [rsp+2F0h] [rbp-278h]
  __m128i v179; // [rsp+300h] [rbp-268h] BYREF
  __int64 v180; // [rsp+310h] [rbp-258h]
  __int128 v181; // [rsp+320h] [rbp-248h] BYREF
  __int64 v182; // [rsp+330h] [rbp-238h]
  __int128 v183; // [rsp+340h] [rbp-228h] BYREF
  __int64 v184; // [rsp+350h] [rbp-218h]
  _DWORD v185[20]; // [rsp+360h] [rbp-208h] BYREF
  __m128i v186; // [rsp+3B0h] [rbp-1B8h] BYREF
  __int64 v187; // [rsp+3C0h] [rbp-1A8h]
  __int128 v188; // [rsp+3C8h] [rbp-1A0h] BYREF
  __int64 v189; // [rsp+3D8h] [rbp-190h]
  struct _KAPC_STATE ApcState; // [rsp+3E0h] [rbp-188h] BYREF
  __int128 v191; // [rsp+410h] [rbp-158h] BYREF
  __int128 v192; // [rsp+420h] [rbp-148h]
  _OWORD v193[11]; // [rsp+430h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+4E0h] [rbp-88h] BYREF
  _WORD v195[20]; // [rsp+4F8h] [rbp-70h] BYREF

  v16 = (__int64)a3;
  v146 = a3;
  Process = (PEPROCESS)a1;
  v163 = a1;
  v134 = a7;
  Token = a8;
  v18 = a11;
  v159 = a11;
  v149 = a13;
  v165 = a14;
  v166 = a15;
  v151 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v148 = 0LL;
  KeyHandle = 0LL;
  memset(v193, 0, 0xA8uLL);
  v19 = 0;
  v186 = 0LL;
  v187 = 0LL;
  v188 = 0LL;
  v189 = 0LL;
  v115[0] = 0;
  memset(&v168, 0, sizeof(v168));
  Handle = 0LL;
  Object = 0LL;
  v114 = 0;
  LOWORD(v122) = 0;
  NumberOfBytes = 0;
  memset(v185, 0, 0x48uLL);
  TokenInformation = 0LL;
  v160 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v133 = CurrentThread->ApcState.Process;
  v157 = 0LL;
  v126 = 0LL;
  P = 0LL;
  v125 = 0;
  v138 = 0;
  v121 = 0;
  v135 = 0LL;
  v132 = 0;
  v131 = 0;
  LOWORD(v120) = 0;
  v124 = 0;
  v143 = 0;
  Address = 0LL;
  v140 = 0;
  v161 = 0LL;
  v139 = 0;
  v162 = 0LL;
  v112 = a9;
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
  v141 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v157 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v126 = v157;
    v141 = 0LL;
  }
  else if ( a1 )
  {
    v141 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v141 = a1;
      v121 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
    v19 |= 0x1000u;
  v191 = 0LL;
  v192 = 0LL;
  ReturnedState = 0LL;
  v21 = 2624;
  v119 = 0;
  v136 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2664;
    v19 |= 0x200u;
    v136 = 2624LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    v119 = (v21 + 7) & 0xFFFFFFF8;
    v21 = v119 + 480;
    v19 |= 0x2000u;
    v16 = (__int64)v146;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  NumberOfBytes_4 = MaximumGroupCount;
  v23 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v23 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * (unsigned __int16)MaximumGroupCount + v23;
  }
  result = ObCreateObject(a2, PsProcessType, v16, a2, 0, v21, 0, v21, &Object);
  if ( (int)result >= 0 )
  {
    v24 = (char *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    memset(v24, 0, v21);
    LpcInitializeProcess(v24);
    ExInitializePushLock((PKSPIN_LOCK)v24 + 139);
    PspInitializeProcessLock((__int64)v24);
    *((_QWORD *)v24 + 189) = v24 + 1504;
    *((_QWORD *)v24 + 188) = v24 + 1504;
    *((_QWORD *)v24 + 277) = v24 + 2208;
    *((_QWORD *)v24 + 276) = v24 + 2208;
    *((_QWORD *)v24 + 307) = v24 + 2448;
    *((_QWORD *)v24 + 306) = v24 + 2448;
    v24[2170] = a4;
    v24[2168] = a5;
    v24[2169] = a6;
    *((_QWORD *)v24 + 283) = 0LL;
    *((_QWORD *)v24 + 321) = 0LL;
    *((_QWORD *)v24 + 320) = 0LL;
    *((_QWORD *)v24 + 323) = 0LL;
    *((_QWORD *)v24 + 322) = 0LL;
    if ( (v19 & 0x400) != 0 )
      *((_DWORD *)v24 + 543) |= 1u;
    v25 = v112;
    v130 = 32;
    if ( (v112 & 0x8000) != 0 )
      *((_DWORD *)v24 + 543) |= 0x20u;
    if ( v23 )
    {
      *((_DWORD *)v24 + 543) |= 0x80u;
      v26 = &v24[v23];
      *((_QWORD *)v24 + 297) = v26;
      *((_QWORD *)v24 + 298) = &v26[8 * NumberOfBytes_4];
    }
    v27 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v24 + 543) |= 0x1000u;
    if ( (v27 & 4) != 0 )
      *((_DWORD *)v24 + 543) |= 0x800000u;
    if ( (v27 & 8) != 0 )
      *((_DWORD *)v24 + 543) |= 0x8000000u;
    v28 = 512;
    Flink = (__int64)v133[1].Header.WaitListHead.Flink | 2;
    if ( (v112 & 0x200) != 0 )
      Flink = (__int64)v133[1].Header.WaitListHead.Flink;
    *((_QWORD *)v24 + 169) = Flink;
    if ( (v19 & 0x200) != 0 )
      *((_QWORD *)v24 + 279) = &v24[v136];
    if ( (v19 & 0x2000) != 0 )
    {
      v30 = &v24[v119];
      *((_QWORD *)v24 + 285) = v30;
      PoEnergyContextInitialize(v30);
    }
    if ( v18 && (v28 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v31 = *(_DWORD *)(v18 + 316);
      v32 = (__int64)Process;
    }
    else
    {
      v32 = (__int64)Process;
      if ( Process )
        v31 = Process[1].ActiveProcessors.Bitmap[9];
      else
        v31 = 5;
    }
    v164 = v24 + 1528;
    *((_DWORD *)v24 + 382) = v31;
    *((_DWORD *)v24 + 501) = 259;
    if ( v32 )
    {
      v33 = (*(_DWORD *)(v32 + 1124) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v32 + 1120) >> 12) & 7;
      *((_QWORD *)v24 + 168) = *(_QWORD *)(v32 + 1088);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    v146 = (volatile signed __int32 *)(v24 + 1124);
    *((_DWORD *)v24 + 281) = *((_DWORD *)v24 + 281) & 0xC7FFFFFF | (v33 << 27);
    v136 = (__int64)(v24 + 1120);
    *((_DWORD *)v24 + 280) = (DefaultPagePriority << 12) | *((_DWORD *)v24 + 280) & 0xFFFF8FFF;
    if ( v149 )
    {
      if ( !PsReferencePartitionSafe((__int64)v149) )
      {
        SectionInformation = -1073740640;
LABEL_177:
        PspRundownSingleProcess((ULONG_PTR)v24, 0);
        ObfDereferenceObjectWithTag(v24, 0x72437350u);
LABEL_178:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v149 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    *((_QWORD *)v24 + 315) = v35;
    if ( !v36 )
    {
      v135 = v134;
      if ( v134 )
      {
        if ( (v112 & 0x1000) != 0 )
        {
LABEL_57:
          SectionInformation = -1073741776;
          goto LABEL_177;
        }
        ObfReferenceObject(v134);
      }
      else if ( v32 )
      {
        if ( a12 )
          goto LABEL_57;
        if ( PsIsSystemProcess(v32) )
        {
          SectionInformation = -1073741811;
          goto LABEL_177;
        }
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v32 + 1112)) )
        {
          v38 = *(void **)(v32 + 1304);
          v134 = v38;
          if ( v38 )
            ObfReferenceObject(v38);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v32 + 1112));
        }
        if ( !v134 )
        {
          SectionInformation = -1073741558;
          goto LABEL_177;
        }
        v39 = *(_QWORD *)(v32 + 1408);
        if ( v39 )
        {
          v19 |= 0x4000u;
          v120 = *(unsigned __int16 *)(v39 + 8);
          HIDWORD(TokenInformation) = *(_DWORD *)(v39 + 12);
        }
        if ( (*(_DWORD *)(v32 + 1124) & 0x20000) != 0 )
        {
          v112 |= 8u;
          a9 = v25 | 8;
        }
      }
    }
    v156 = (unsigned __int64 *)(v24 + 1304);
    v40 = v134;
    *((_QWORD *)v24 + 163) = v134;
    LOWORD(v119) = 0;
    if ( v18 )
    {
      *((_QWORD *)v24 + 270) = *(_QWORD *)(v18 + 464);
      SectionInformation = MmGetSectionInformation((__int64)v40, 4, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_177;
      v41 = *(_BYTE *)(v18 + 99);
      v42 = v19 | (32
                 * (v41 & 4 | (4
                             * (v41 & 2 | ((*(_DWORD *)(v18 + 112) & 1 | (2
                                                                        * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xF8))))) << 11)))));
      v132 = *(unsigned __int16 *)(v18 + 86);
      v131 = *(unsigned __int16 *)(v18 + 84);
      v43 = *(_WORD *)(v18 + 96);
      if ( (v42 & 0x100) != 0 && v43 == 332 && (v41 & 1) != 0 )
        v44 = 0x8000;
      else
        v44 = 0;
      v19 = v44 | v42;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v43);
      v46 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        v47 = 3;
LABEL_82:
        SectionInformation = -1073741701;
LABEL_83:
        PspUpdateCreateInfo(v47, v18, 0LL);
        goto LABEL_177;
      }
      if ( (v19 & 0x8000) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
        {
          v19 |= 0x4000u;
          LOWORD(v120) = v46;
        }
        if ( (v19 & 0x8000) == 0
          && (v46 < MEMORY[0xFFFFF7800000002C] || v46 > MEMORY[0xFFFFF7800000002E])
          && (v19 & 0x4000) == 0 )
        {
          v47 = 4;
          goto LABEL_82;
        }
      }
      if ( v135 )
      {
        LOWORD(v119) = *(_WORD *)(v18 + 94);
        v48 = (HANDLE *)(v18 + 192);
        v49 = RtlOpenImageFileOptionsKey((unsigned __int16 *)(v18 + 232), 0LL, (HANDLE *)(v18 + 192));
        if ( v49 < 0 )
        {
          if ( v49 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v48 = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        *((_QWORD *)v24 + 180) = *(_QWORD *)(v18 + 176);
        if ( (v19 & 0x4000) != 0 )
        {
          v50 = v112;
          goto LABEL_108;
        }
        SectionInformation = PspDetectComplusILImage(v18, &a9);
        if ( SectionInformation < 0 )
          goto LABEL_177;
        v50 = a9;
        LOWORD(v112) = a9;
        if ( v46 != 332 || (a9 & 8) != 0 )
          goto LABEL_108;
        if ( (unsigned int)PsWow64IsMachineSupported(332) )
        {
          v120 = 332;
        }
        else
        {
          if ( !(unsigned int)PsWow64IsMachineSupported(452) )
          {
            v50 |= 8u;
            LOWORD(v112) = v50;
            a9 = v50;
            goto LABEL_108;
          }
          LOWORD(v120) = 452;
        }
        v19 |= 0x4000u;
LABEL_108:
        if ( *v48 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            v51 = RtlQueryImageFileKeyOption(*v48, L"Debugger", 1, &v122, 2u, &NumberOfBytes);
            if ( v51 == -2147483643 || v51 >= 0 && NumberOfBytes == 2 && (_WORD)v122 )
            {
              SectionInformation = -1073741767;
              v47 = 5;
              goto LABEL_83;
            }
          }
          v123 = 0;
          if ( RtlQueryImageFileKeyOption(*v48, L"UseLargePages", 4, &v123, 4u, 0LL) >= 0 )
          {
            if ( v123 )
            {
              v50 |= 0x10u;
              LOWORD(v112) = v50;
              a9 = v50;
              if ( (v19 & 0x4000) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v48;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v123 = 0;
                  if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4, &v123, 4u, 0LL) >= 0 && v123 )
                  {
                    v50 |= 0x20u;
                    LOWORD(v112) = v50;
                    a9 = v50;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v141 )
          {
            PspReadIFEONodeOptions((__int64)v24, *v48);
            v157 = v126;
          }
          v137 = 0;
          if ( RtlQueryImageFileKeyOption(*v48, L"ForceWakeCharge", 4, &v137, 4u, 0LL) >= 0 && v137 )
            v121 |= 0x40u;
          if ( RtlQueryImageFileKeyOption(*v48, L"AllowedCpuSets", 3, 0LL, 0, &NumberOfBytes) == -2147483643 )
          {
            v52 = NumberOfBytes;
            if ( NumberOfBytes <= 0xA0 && (NumberOfBytes & 7) == 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x73437350u);
              P = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_132:
                SectionInformation = -1073741801;
                goto LABEL_177;
              }
              if ( RtlQueryImageFileKeyOption(*v48, L"AllowedCpuSets", 3, (ULONG *)PoolWithTag, v52, &NumberOfBytes) >= 0
                && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v125 = NumberOfBytes >> 3;
              }
            }
          }
          v168.Length = 48;
          v168.RootDirectory = *v48;
          v168.Attributes = 576;
          v168.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v168.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v168) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle, (__int64)&v191);
            ObCloseHandle(Handle, 0);
          }
        }
        v32 = (__int64)Process;
LABEL_139:
        v54 = v138 | 0x20000;
        if ( (v50 & 8) == 0 )
          v54 = v138;
        NumberOfBytes_4 = v54;
        if ( (v19 & 0x4000) != 0 )
        {
          v55 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          *((_QWORD *)v24 + 176) = v55;
          if ( !v55 )
            goto LABEL_132;
          v56 = HIDWORD(TokenInformation);
          v57 = v120;
          if ( !HIDWORD(TokenInformation) )
            v56 = PspWow64PickBestNtdll(v18);
          v55[4] = v57;
          *(_DWORD *)(*((_QWORD *)v24 + 176) + 12LL) = v56;
          v58 = (_QWORD *)*((_QWORD *)v24 + 176);
          if ( v58 )
            *v58 = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_177;
        v59 = 0;
        v60 = a2;
        if ( a2 )
        {
          if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
          {
            Privilege[0] = 14;
            v59 = 1;
          }
          if ( a12 )
            Privilege[v59++] = 3;
          v61 = v112;
          if ( (v112 & 0x30) != 0 )
            Privilege[v59++] = 4;
          if ( (v112 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v133) )
            Privilege[v59++] = 10;
          if ( (v112 & 0x8400) != 0 )
            Privilege[v59++] = 7;
          if ( v59 )
          {
            v62 = RtlAcquirePrivilege(Privilege, v59, a12 != 0, &ReturnedState) < 0;
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
          v61 = v112;
        }
        if ( (v61 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v60) )
          goto LABEL_174;
        if ( v141 )
        {
          KeQueryAffinityProcess(v141, v193, 0LL, (__int64)v195);
          KeFirstGroupAffinityEx((__int64)&v148, v193);
          v64 = KeNodeBlock[(unsigned __int16)v195[WORD4(v148)]];
        }
        else
        {
          if ( v157 )
          {
            v63 = *(_WORD *)(v157 + 144);
          }
          else if ( v32 )
          {
            if ( (*(_DWORD *)(v32 + 1120) & 0x100000) != 0 )
            {
              v121 |= 0x100000u;
              v126 = KeNodeBlock[*(unsigned __int16 *)(v32 + 836)];
              v63 = *(_WORD *)(v126 + 144);
            }
            else
            {
              v126 = PspSelectNodeForProcess();
              v63 = *(_WORD *)(v126 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v63 )
              {
                v126 = 0LL;
                v63 = 1;
              }
            }
          }
          else
          {
            v63 = 0;
          }
          WORD4(v148) = v63;
          *(_QWORD *)&v148 = qword_140CFC838[v63];
          if ( v126 )
          {
            LOBYTE(v112) = a9;
            v24 = (char *)Object;
            goto LABEL_198;
          }
          v64 = KeSelectNodeForAffinity((__int64)&v148);
          LOBYTE(v112) = a9;
          v24 = (char *)Object;
        }
        v126 = v64;
LABEL_198:
        v65 = v146;
        *v146 |= NumberOfBytes_4;
        *(_DWORD *)v136 |= v121;
        if ( v32 )
        {
          DmaAdapter = 0LL;
          v66 = 0;
          SessionId = 0;
          v67 = 0;
          v113 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v19 |= 4u;
            SectionInformation = SeIsTokenAssignableToProcess((__int64)Token, &v113);
            if ( SectionInformation < 0 )
              goto LABEL_175;
            v68 = (v19 >> 2) & 1;
            v67 = v113;
            if ( !v113 && !v68 )
              goto LABEL_174;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_175;
            v69 = MmGetSessionIdEx((__int64)v133);
            v66 = SessionId;
            if ( SessionId != v69 )
            {
              if ( !v68 )
              {
LABEL_174:
                SectionInformation = -1073741727;
                goto LABEL_175;
              }
              if ( (v112 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_175;
              }
              v19 |= 1u;
            }
          }
          else if ( !v135 )
          {
            v66 = MmGetSessionIdEx((__int64)Process);
            SessionId = v66;
            v19 |= v66 != (unsigned int)MmGetSessionIdEx((__int64)v133);
          }
          if ( (v19 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v66, &ApcState, &DmaAdapter);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v19) = v19 & 0xFE;
              goto LABEL_175;
            }
            *(_DWORD *)v136 |= 0x80u;
          }
          if ( !a12 || v67 )
          {
            v71 = Process;
            if ( v67 )
              v71 = v133;
            PspInheritQuota((__int64)v24, (__int64)v71);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v24, (__int64)Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 1) != 0 )
                PspDetachSession(DmaAdapter);
              goto LABEL_175;
            }
          }
          v72 = PspMaximumWorkingSet;
          if ( (BYTE4(v191) & 1) != 0 )
            v72 = *((_QWORD *)&v192 + 1);
          v19 |= 32
               * (MmCreateProcessAddressSpace(
                    (__int64)v149,
                    v70,
                    v72,
                    BYTE4(v191) & 1,
                    *(unsigned __int16 *)(v126 + 146) + 1,
                    (__int64)v24) & 1);
          if ( (v19 & 1) != 0 )
            PspDetachSession(DmaAdapter);
          if ( (v19 & 0x20) == 0 )
            goto LABEL_230;
          v32 = (__int64)Process;
          v65 = v146;
        }
        else
        {
          PspInheritQuota((__int64)v24, 0LL);
          v24[912] = 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
            goto LABEL_175;
        }
        HIDWORD(TokenInformation) = v19;
        _InterlockedOr(v65, 0x40000u);
        v24 = (char *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
        SectionInformation = KeInitializeProcess(
                               v74,
                               8,
                               (unsigned int)&v148,
                               v126,
                               SessionSchedulingGroupByProcess,
                               v75);
        if ( SectionInformation < 0 )
          goto LABEL_175;
        if ( v18 )
        {
          v124 = *(_DWORD *)(v18 + 416);
          v143 = *(_DWORD *)(v18 + 420);
          Address = *(PVOID *)(v18 + 424);
          v140 = *(_DWORD *)(v18 + 432);
          v161 = *(_QWORD *)(v18 + 440);
          v139 = *(_DWORD *)(v18 + 448);
          v162 = *(_QWORD *)(v18 + 208);
        }
        SectionInformation = PspInitializeProcessSecurity(
                               (PEPROCESS)v32,
                               v124,
                               (v19 >> 11) & 1,
                               (v19 >> 12) & 1,
                               v143,
                               (__int64)Address,
                               v140,
                               v161,
                               v139,
                               v162,
                               v165);
        if ( SectionInformation < 0 )
          goto LABEL_175;
        v24[1463] = 2;
        if ( v32 )
        {
          v76 = v24[1463];
          if ( ((*(_BYTE *)(v32 + 1463) - 1) & 0xFB) == 0 )
            v76 = *(_BYTE *)(v32 + 1463);
          v24[1463] = v76;
          if ( v18 )
            v77 = *(_QWORD *)(v18 + 296);
          else
            LODWORD(v77) = 0;
          v78 = v18 ? *(_DWORD *)(v18 + 292) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)(v32 & -(__int64)((a9 & 4) != 0)),
                     (_KPROCESS *)v24,
                     v78,
                     v77);
        }
        else
        {
          *((_QWORD *)v24 + 174) = v133[1].AffinityPadding[8];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v24);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_175;
        if ( (v191 & 7) != 0 )
          PspApplyIFEOPerfOptions((__int64)v24, (unsigned int *)&v191, a2, v80);
        if ( (v19 & 0x200000) != 0 )
          KeSetCpuSetsProcess((__int64)v24, v125, (char *)P);
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            LOBYTE(v80) = a2;
            SectionInformation = PspSetProcessPriorityClass((__int64)v24, *(_BYTE *)(v18 + 248), 0LL, v80);
            if ( SectionInformation < 0 )
              goto LABEL_175;
          }
        }
        v24[640] = PspComputeQuantumAndPriority((__int64)v24, 0LL, &v114, 0LL, 0LL);
        v24[641] = v114;
        SectionInformation = 0;
        v124 = 0;
        PspReadIFEOMitigationOptions(v18, &v186);
        v169 = v186;
        v170 = v187;
        v171 = PspSystemMitigationOptions;
        v172 = qword_140CFC9D0;
        PspInheritMitigationOptions(&v171, &v169, &v186);
        PspReadIFEOMitigationAuditOptions(v18, &v188);
        v173 = v188;
        v174 = v189;
        v175 = PspSystemMitigationAuditOptions;
        v176 = qword_140CFCB58;
        PspInheritMitigationAuditOptions(&v175, &v173, &v188);
        v81 = (HIWORD(v186.m128i_i64[0]) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v177 = *(_OWORD *)(v18 + 360);
            v178 = *(_QWORD *)(v18 + 376);
            v179 = v186;
            v180 = v187;
            PspInheritMitigationOptions(&v179, &v177, &v186);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v181 = *(_OWORD *)(v18 + 480);
            v182 = *(_QWORD *)(v18 + 496);
            v183 = v188;
            v184 = v189;
            PspInheritMitigationAuditOptions(&v183, &v181, &v188);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v81) = v81 | 4;
        v82 = v81 | 0x100;
        if ( (v81 & 4) == 0 )
          v82 = v81;
        if ( (v82 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v186);
        if ( !KeIsUserCetAllowed() )
          v186.m128i_i64[1] = v186.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v119 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v130 = 0;
        v84 = v83 | ((v119 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)v119 >> 4) & 2 | ((v19 & 0x180) != 0) | v130 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2);
        NumberOfBytes_4 = v19 & 0x400;
        if ( (v19 & 0x400) != 0 )
        {
          v186.m128i_i64[1] = v186.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v85 = v186.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v85 = v186.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          v186.m128i_i64[0] = v85;
        }
        if ( !v135 && Process && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
          v186.m128i_i64[1] = v186.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v24);
        if ( !PsIsHostSilo(ProcessServerSilo) )
          v186.m128i_i64[1] = v186.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x4000) != 0 )
          v186.m128i_i64[1] = v186.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v87 = Process;
        PspApplyMitigationOptions((_DWORD)v24, (_DWORD)Process, (unsigned int)&v186, (unsigned int)&v188, v84);
        if ( v18 )
        {
          PspApplyWin32kFilterOptions((__int64)v24, v18);
          *(__m128i *)(v18 + 360) = v186;
          *(_QWORD *)(v18 + 376) = v187;
          *(_OWORD *)(v18 + 480) = v188;
          *(_QWORD *)(v18 + 496) = v189;
        }
        PsQueryProcessAttributes((struct _KPROCESS *)v24, 0LL, (__int64)v115);
        v88 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v88 = (_DWORD)TokenInformation != 0;
        SmProcessCreateNotification(v24, v88);
        if ( v87 && v87 != PsInitialSystemProcess && (HIDWORD(v87[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
          *((_DWORD *)v24 + 543) |= 0x2000000u;
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v133)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_174;
        }
        v89 = NumberOfBytes_4;
        if ( NumberOfBytes_4 || v135 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v18, (__int64)v24);
          if ( SectionInformation >= 0 )
          {
            if ( (v19 & 0x10000) != 0 )
            {
              v93 = MmInitializeProcessAddressSpace(
                      (ULONG_PTR)v24,
                      (ULONG_PTR)v87,
                      0LL,
                      (unsigned int *)&a9,
                      (v19 & 0x20000) != 0);
              v92 = v134;
            }
            else
            {
              v92 = v134;
              v93 = MmInitializeProcessAddressSpace((ULONG_PTR)v24, 0LL, (__int64)v134, (unsigned int *)&a9, 0);
            }
            SectionInformation = v93;
            if ( v93 >= 0 )
            {
              if ( v18 )
              {
                ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v92);
                v95 = *((_QWORD *)v24 + 164);
                if ( ImageSectionBasedAddress != v95 )
                  *(_QWORD *)(v18 + 48) += v95 - ImageSectionBasedAddress;
              }
              v124 = SectionInformation;
              if ( !v89 )
                LOWORD(v19) = v19 | 2;
              LOWORD(v19) = (4 * (a9 & 0x10 | 2)) | v19;
              goto LABEL_314;
            }
          }
        }
        else
        {
          if ( !v87 )
            goto LABEL_314;
          *((_QWORD *)v24 + 164) = v87[1].Affinity.Bitmap[18];
          SectionInformation = MmInitializeProcessAddressSpace(
                                 (ULONG_PTR)v24,
                                 (ULONG_PTR)v87,
                                 0LL,
                                 (unsigned int *)&a9,
                                 (v19 & 0x800) != 0);
          if ( SectionInformation >= 0 )
          {
            LOWORD(v19) = WORD2(TokenInformation) | (4 * (a9 & 0x10)) | 2;
            v90 = *(unsigned __int16 *)(v87[1].ActiveProcessors.Bitmap[2] + 2);
            v91 = ExAllocatePoolWithTag(NonPagedPoolNx, v90 + 16, 0x61506553u);
            *((_QWORD *)v24 + 184) = v91;
            if ( !v91 )
            {
LABEL_230:
              SectionInformation = -1073741670;
              goto LABEL_175;
            }
            memmove(v91, (const void *)v87[1].ActiveProcessors.Bitmap[2], v90 + 16);
            *(_QWORD *)(*((_QWORD *)v24 + 184) + 8LL) = *((_QWORD *)v24 + 184) + 16LL;
            *((_DWORD *)v24 + 330) = v87[1].Affinity.Bitmap[19];
            if ( (a9 & 0x1000) != 0 )
            {
              *v156 = 0LL;
              HalPutDmaAdapter((PADAPTER_OBJECT)v134);
            }
LABEL_314:
            if ( (v19 & 0x10) != 0 )
              RtlReleasePrivilege(ReturnedState);
            if ( (unsigned __int16)PsWow64GetProcessMachine((__int64)v24) == 332 )
              *((_DWORD *)v24 + 158) |= 1u;
            v125 = v19 & 8;
            if ( (v19 & 8) != 0 )
            {
              if ( v18 )
              {
                SectionInformation = PspSetupReservedUserMappings(
                                       (_KPROCESS *)v24,
                                       (__int64)&ApcState,
                                       (_QWORD *)v18,
                                       v96);
                if ( SectionInformation < 0 )
                  goto LABEL_177;
              }
            }
            NumberOfBytes_4 = v19 & 2;
            if ( (v19 & 2) != 0 )
            {
              *(_QWORD *)&v158 = 0LL;
              *((_QWORD *)&v158 + 1) = -1LL;
              IsProtectedProcess = PsIsProtectedProcess((__int64)v24);
              IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v24);
              v99 = BYTE3(v158) & 0x88 | ((v19 & 0x40) != 0) | (2
                                                              * (IsProtectedProcess | (2
                                                                                     * ((16 * IsProtectedProcessLight) | ((v19 & 0x80) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v115[0] & 1));
              BYTE3(v158) = v99;
              if ( v135 )
              {
                SectionInformation = MmCreatePeb(v24, &v158, v24 + 1360, &v148);
                if ( SectionInformation < 0 )
                {
                  *((_QWORD *)v24 + 170) = 0LL;
                  goto LABEL_177;
                }
                if ( (_QWORD)v148 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v136, 0xFFCFFFFF);
                  v24 = (char *)Object;
                  PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v148, (__int64)&v151);
                }
              }
              else
              {
                v100 = Process;
                Address = (PVOID)Process[1].AffinityPadding[4];
                *((_QWORD *)v24 + 170) = Address;
                if ( (v19 & 0x800) != 0 )
                {
LABEL_340:
                  if ( (v19 & 8) != 0 && v18 )
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(v100, v24, &ApcState, v18);
                  }
                  else if ( NumberOfBytes_4 && (v19 & 0x800) == 0 )
                  {
                    SectionInformation = 0;
                    KeStackAttachProcess((PRKPROCESS)v24, &ApcState);
                    v103 = CurrentThread;
                    PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v24, v105, v106);
                    if ( (v19 & 8) != 0 )
                    {
                      SectionInformation = MmMapApiSetView(v24);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspMapSiloSharedDataView(v24);
                        if ( SectionInformation >= 0 )
                        {
                          SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
                          if ( SectionInformation >= 0 )
                          {
                            if ( *((_QWORD *)v24 + 176) )
                            {
                              ProcessNtdllType = PsWow64GetProcessNtdllType(v24);
                              SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                            }
                          }
                        }
                      }
                    }
                    KeUnstackDetachProcess(&ApcState);
LABEL_344:
                    MmNewProcessInitialized(v24);
                    if ( SectionInformation < 0 )
                      goto LABEL_177;
                    PspLockProcessExclusive((__int64)v24, (__int64)v103);
                    v104 = ExCreateHandle(PspCidTable, v24);
                    *((_QWORD *)v24 + 136) = v104;
                    if ( !v104 )
                    {
                      PspUnlockProcessExclusive((__int64)v24, (__int64)v103);
                      SectionInformation = -1073741670;
                      goto LABEL_177;
                    }
                    if ( (v19 & 0x1000) != 0 )
                    {
                      SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v24 + 163), &v160);
                      v108 = (__int64)v24;
                      if ( SectionInformation < 0 )
                      {
LABEL_358:
                        PspUnlockProcessExclusive(v108, (__int64)v103);
                        goto LABEL_177;
                      }
                      SectionInformation = KeSecureProcess(
                                             (_KPROCESS *)v24,
                                             **(_QWORD **)(v18 + 392),
                                             *((_QWORD *)v24 + 170),
                                             *((_DWORD **)v24 + 136),
                                             v160,
                                             *((_QWORD *)v24 + 164),
                                             *(struct _MDL **)(v18 + 392),
                                             *(unsigned int *)(v18 + 408));
                      if ( SectionInformation < 0 )
                      {
                        v108 = (__int64)v24;
                        goto LABEL_358;
                      }
                    }
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise((LARGE_INTEGER *)v24 + 141);
                    }
                    else
                    {
                      v24 = (char *)Object;
                      *((_QWORD *)Object + 141) = MEMORY[0xFFFFF78000000014];
                    }
                    *((_QWORD *)v24 + 288) = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                    v110 = Object;
                    *((_QWORD *)Object + 289) = UnbiasedInterruptTime;
                    v110[291] = *((_QWORD *)v24 + 288);
                    *v166 = v110;
                    SectionInformation = v124;
                    goto LABEL_178;
                  }
                  v103 = CurrentThread;
                  goto LABEL_344;
                }
                LOBYTE(v158) = 1;
                KeStackAttachProcess((PRKPROCESS)v24, &ApcState);
                if ( MmSecureVirtualMemory(Address, 0x7C8uLL, 4u) )
                  *(_OWORD *)Address = v158;
                else
                  SectionInformation = -1073741503;
                if ( SectionInformation >= 0 )
                {
                  v101 = *((_QWORD *)v24 + 176);
                  if ( v101 )
                  {
                    v102 = *(_WORD *)(v101 + 8);
                    if ( v102 == 332 || v102 == 452 )
                    {
                      v156 = *(unsigned __int64 **)v101;
                      if ( MmSecureVirtualMemory(v156, 0x480uLL, 4u) )
                      {
                        v147 = 0xFFFFFFFF00000001uLL;
                        BYTE3(v147) = v99;
                        *v156 = v147;
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
                  goto LABEL_177;
              }
            }
            v100 = Process;
            goto LABEL_340;
          }
        }
LABEL_175:
        if ( (v19 & 0x10) != 0 )
          RtlReleasePrivilege(ReturnedState);
        goto LABEL_177;
      }
    }
    else if ( v40 )
    {
      SectionInformation = MmGetSectionInformation((__int64)v40, 4, (__int64)v185);
      if ( SectionInformation < 0 )
        goto LABEL_177;
      v19 |= 32
           * (HIBYTE(v185[12]) & 4 | (4
                                    * (HIBYTE(v185[12]) & 2 | ((v185[16] & 1 | (2
                                                                              * (v185[16] & 2 | (2 * (v185[16] & 0xF8))))) << 11))));
      LOWORD(v119) = HIWORD(v185[11]);
      v132 = HIWORD(v185[9]);
      v131 = LOWORD(v185[9]);
      if ( !v135 )
      {
        v138 = 8;
        v19 |= 0x800u;
      }
    }
    LOBYTE(v50) = v112;
    goto LABEL_139;
  }
  return result;
}
