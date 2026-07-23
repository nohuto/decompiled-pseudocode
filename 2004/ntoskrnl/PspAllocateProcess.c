/*
 * XREFs of PspAllocateProcess @ 0x140610840
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407BB910 (PspCreateProcess.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     PsIsSystemProcess @ 0x14024C150 (PsIsSystemProcess.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     KeQueryUnbiasedInterruptTime @ 0x140268150 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x140268180 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x1402681A8 (KeIsUserCetAllowed.c)
 *     PsIsProtectedProcessLight @ 0x14026AB10 (PsIsProtectedProcessLight.c)
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     PsIsProtectedProcess @ 0x14027C720 (PsIsProtectedProcess.c)
 *     KeQueryAffinityProcess @ 0x14027D660 (KeQueryAffinityProcess.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x140296BC0 (PoEnergyEstimationEnabled.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402F9514 (KeQuerySystemTimeUnsafe.c)
 *     KeQueryMaximumGroupCount @ 0x1402F9560 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x1402F9570 (KeQuerySystemTimePrecise.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1402FDE38 (RtlWow64GetEquivalentMachineCHPE.c)
 *     MmGetDefaultPagePriority @ 0x1402FE7D4 (MmGetDefaultPagePriority.c)
 *     KeQueryActiveGroupCount @ 0x14030B900 (KeQueryActiveGroupCount.c)
 *     KeSelectNodeForAffinity @ 0x14030C27C (KeSelectNodeForAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x140350740 (KeFirstGroupAffinityEx.c)
 *     PspUnlockProcessExclusive @ 0x1403598F8 (PspUnlockProcessExclusive.c)
 *     PspWow64PickBestNtdll @ 0x14035BCE8 (PspWow64PickBestNtdll.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KeSecureProcess @ 0x14050E5D0 (KeSecureProcess.c)
 *     PspInitializeProcessLock @ 0x14057B940 (PspInitializeProcessLock.c)
 *     PsReferencePartition @ 0x14057EEB8 (PsReferencePartition.c)
 *     PspApplyComponentFilterOptions @ 0x1405C8528 (PspApplyComponentFilterOptions.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObCreateObject @ 0x14060ECE0 (ObCreateObject.c)
 *     PspApplyMitigationOptions @ 0x140612B6C (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x140613628 (PspInheritMitigationOptions.c)
 *     MmNewProcessInitialized @ 0x140613704 (MmNewProcessInitialized.c)
 *     SmProcessCreateNotification @ 0x140613750 (SmProcessCreateNotification.c)
 *     PspInheritMitigationAuditOptions @ 0x1406137A0 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140613888 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140613910 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitializeProcessSecurity @ 0x140613A04 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x140613C3C (KeInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x140613D80 (MmGetSessionSchedulingGroupByProcess.c)
 *     LpcInitializeProcess @ 0x140613DAC (LpcInitializeProcess.c)
 *     PspUpdateCreateInfo @ 0x140616EA4 (PspUpdateCreateInfo.c)
 *     ObInitProcess @ 0x140617FD0 (ObInitProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140644EB8 (PspAssignProcessQuotaBlock.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14065D530 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x14065D7B4 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x14065D7D0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14065D808 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     PspInitializeFullProcessImageName @ 0x14065E1E0 (PspInitializeFullProcessImageName.c)
 *     PspWritePebAffinityInfo @ 0x14065F68C (PspWritePebAffinityInfo.c)
 *     MmGetSectionInformation @ 0x140661AB0 (MmGetSectionInformation.c)
 *     PsQueryProcessAttributes @ 0x1406667C0 (PsQueryProcessAttributes.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     PspAttachSession @ 0x1406A4BAC (PspAttachSession.c)
 *     PspDetachSession @ 0x1406A4C08 (PspDetachSession.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     PsWow64GetProcessMachine @ 0x1406ADE50 (PsWow64GetProcessMachine.c)
 *     PspComputeQuantumAndPriority @ 0x1406AEBD4 (PspComputeQuantumAndPriority.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B424C (MmInitializeProcessAddressSpace.c)
 *     PsWow64IsMachineSupported @ 0x1406B5AC0 (PsWow64IsMachineSupported.c)
 *     MmSecureVirtualMemory @ 0x1406DBC40 (MmSecureVirtualMemory.c)
 *     SeQuerySessionIdToken @ 0x1406E2750 (SeQuerySessionIdToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406E848C (SeIsTokenAssignableToProcess.c)
 *     PspDetectComplusILImage @ 0x1406FD27C (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x1406FD350 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406FD3A8 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406FD590 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406FFFBC (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x140701268 (PspSelectNodeForProcess.c)
 *     PspSetProcessPriorityClass @ 0x140702AB4 (PspSetProcessPriorityClass.c)
 *     PoEnergyContextInitialize @ 0x140703480 (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x140703CF8 (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x140706B8C (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x140707630 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x140708894 (PspApplyWin32kFilterOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x140708920 (RtlOpenImageFileOptionsKey.c)
 *     RtlReleasePrivilege @ 0x140708BAC (RtlReleasePrivilege.c)
 *     PspApplyIFEOPerfOptions @ 0x14070CA44 (PspApplyIFEOPerfOptions.c)
 *     MmIsSessionLeaderProcess @ 0x14076F5B0 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1407BC4B4 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407BE384 (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C0F50 (MmGetImageSectionBasedAddress.c)
 *     MmGetSectionStrongImageReference @ 0x1408D4928 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x1409051F4 (PspSetProcessAffinitySafe.c)
 *     ExCreateHandle @ 0x1409490A0 (ExCreateHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  unsigned int MaximumGroupCount; // eax
  int v23; // ecx
  int v24; // r9d
  unsigned int v25; // r12d
  LARGE_INTEGER *v26; // r15
  int v27; // r14d
  char *v28; // rcx
  char v29; // al
  struct _LIST_ENTRY *Flink; // rdx
  int v31; // r8d
  __int64 v32; // rcx
  char *v33; // rcx
  int v34; // eax
  __int64 v35; // r12
  int v36; // edx
  int DefaultPagePriority; // r8d
  LARGE_INTEGER v38; // r8
  int v39; // r9d
  int SectionInformation; // r14d
  void *v41; // rax
  __int64 v42; // rax
  PVOID v43; // rcx
  char v44; // r8
  int v45; // ebx
  __int16 v46; // cx
  int v47; // eax
  unsigned __int16 EquivalentMachineCHPE; // ax
  unsigned __int16 v49; // di
  __int64 v50; // rcx
  HANDLE *v51; // r12
  int v52; // eax
  int v53; // r14d
  int ImageFileKeyOption; // eax
  int v55; // edi
  int v56; // ecx
  _WORD *PoolWithTag; // r10
  int v58; // eax
  __int16 v59; // r11
  _QWORD *QuadPart; // rax
  ULONG v61; // edi
  KPROCESSOR_MODE v62; // al
  __int16 v63; // r14
  bool v64; // sf
  unsigned __int16 v65; // di
  __int64 v66; // rax
  volatile signed __int32 *v67; // rdi
  ULONG v68; // r14d
  char v69; // r12
  int v70; // edi
  int v71; // eax
  int v72; // edx
  PEPROCESS v73; // rdx
  int v74; // r8d
  __int64 SessionSchedulingGroupByProcess; // rax
  int v76; // ecx
  char v77; // r8
  char QuadPart_high; // al
  __int64 v79; // r9
  __int64 v80; // r8
  int inited; // eax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // edi
  __int16 v86; // r11
  int v87; // r11d
  unsigned int v88; // edi
  unsigned __int64 v89; // rax
  __int64 ProcessServerSilo; // rax
  PEPROCESS v91; // r12
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  unsigned int v95; // edi
  __int64 v96; // rdi
  PVOID v97; // rax
  PVOID v98; // r12
  int v99; // eax
  __int64 ImageSectionBasedAddress; // rax
  LARGE_INTEGER v101; // rcx
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v104; // di
  PEPROCESS v105; // rcx
  LARGE_INTEGER v106; // rax
  __int16 v107; // cx
  __int64 v108; // rdi
  __int64 v109; // rax
  unsigned int ProcessNtdllType; // eax
  __int64 v111; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v113; // rcx
  int v115; // [rsp+78h] [rbp-4F0h]
  char v116; // [rsp+7Ch] [rbp-4ECh] BYREF
  char v117; // [rsp+7Dh] [rbp-4EBh] BYREF
  char v118[2]; // [rsp+7Eh] [rbp-4EAh] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-4E8h]
  unsigned int NumberOfBytes; // [rsp+88h] [rbp-4E0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+8Ch] [rbp-4DCh]
  unsigned int v122; // [rsp+90h] [rbp-4D8h]
  int v123; // [rsp+94h] [rbp-4D4h]
  int v124; // [rsp+98h] [rbp-4D0h]
  __int16 v125; // [rsp+9Ch] [rbp-4CCh]
  int v126; // [rsp+A0h] [rbp-4C8h]
  int v127; // [rsp+A4h] [rbp-4C4h]
  unsigned int v128; // [rsp+A8h] [rbp-4C0h]
  __int64 v129; // [rsp+B0h] [rbp-4B8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-4B0h]
  PVOID TokenInformation; // [rsp+C0h] [rbp-4A8h] BYREF
  ULONG SessionId; // [rsp+C8h] [rbp-4A0h] BYREF
  int v133; // [rsp+CCh] [rbp-49Ch]
  int v134; // [rsp+D0h] [rbp-498h]
  int v135; // [rsp+D4h] [rbp-494h]
  _KPROCESS *v136; // [rsp+D8h] [rbp-490h]
  PVOID v137; // [rsp+E0h] [rbp-488h]
  PVOID v138; // [rsp+E8h] [rbp-480h]
  __int64 v139; // [rsp+F0h] [rbp-478h]
  int v140; // [rsp+F8h] [rbp-470h]
  int v141; // [rsp+FCh] [rbp-46Ch]
  int v142; // [rsp+100h] [rbp-468h]
  int v143; // [rsp+104h] [rbp-464h]
  __int64 v144; // [rsp+108h] [rbp-460h]
  PACCESS_TOKEN Token; // [rsp+110h] [rbp-458h]
  int v146; // [rsp+118h] [rbp-450h]
  PVOID Address; // [rsp+120h] [rbp-448h]
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp-440h]
  volatile signed __int32 *p_HighPart; // [rsp+130h] [rbp-438h]
  unsigned __int64 v150; // [rsp+138h] [rbp-430h]
  __int128 v151; // [rsp+140h] [rbp-428h] BYREF
  PVOID v152; // [rsp+150h] [rbp-418h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+158h] [rbp-410h] BYREF
  int v154; // [rsp+160h] [rbp-408h] BYREF
  PVOID ReturnedState; // [rsp+168h] [rbp-400h] BYREF
  PVOID P; // [rsp+170h] [rbp-3F8h]
  HANDLE KeyHandle; // [rsp+178h] [rbp-3F0h] BYREF
  HANDLE Handle; // [rsp+180h] [rbp-3E8h] BYREF
  unsigned __int64 *p_QuadPart; // [rsp+188h] [rbp-3E0h]
  __int64 v160; // [rsp+190h] [rbp-3D8h]
  __int128 v161; // [rsp+198h] [rbp-3D0h] BYREF
  __int64 v162; // [rsp+1B0h] [rbp-3B8h]
  __int64 v163; // [rsp+1C0h] [rbp-3A8h] BYREF
  __int64 v164; // [rsp+1C8h] [rbp-3A0h]
  __int64 v165; // [rsp+1D0h] [rbp-398h]
  __int64 v166; // [rsp+1D8h] [rbp-390h]
  LARGE_INTEGER *v167; // [rsp+1E0h] [rbp-388h]
  __int64 v168; // [rsp+1E8h] [rbp-380h]
  _QWORD *v169; // [rsp+1F0h] [rbp-378h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1F8h] [rbp-370h] BYREF
  OBJECT_ATTRIBUTES v171; // [rsp+228h] [rbp-340h] BYREF
  __int128 v172; // [rsp+260h] [rbp-308h] BYREF
  __int64 v173; // [rsp+270h] [rbp-2F8h]
  __int128 v174; // [rsp+280h] [rbp-2E8h] BYREF
  __int64 v175; // [rsp+290h] [rbp-2D8h]
  __int128 v176; // [rsp+2A0h] [rbp-2C8h] BYREF
  __int64 v177; // [rsp+2B0h] [rbp-2B8h]
  __int128 v178; // [rsp+2C0h] [rbp-2A8h] BYREF
  __int64 v179; // [rsp+2D0h] [rbp-298h]
  __int128 v180; // [rsp+2E0h] [rbp-288h] BYREF
  __int64 v181; // [rsp+2F0h] [rbp-278h]
  __int128 v182; // [rsp+300h] [rbp-268h] BYREF
  __int64 v183; // [rsp+310h] [rbp-258h]
  __int128 v184; // [rsp+320h] [rbp-248h] BYREF
  __int64 v185; // [rsp+330h] [rbp-238h]
  __int128 v186; // [rsp+340h] [rbp-228h] BYREF
  __int64 v187; // [rsp+350h] [rbp-218h]
  _DWORD v188[20]; // [rsp+360h] [rbp-208h] BYREF
  __int128 v189; // [rsp+3B0h] [rbp-1B8h] BYREF
  __int64 v190; // [rsp+3C0h] [rbp-1A8h]
  __int128 v191; // [rsp+3C8h] [rbp-1A0h] BYREF
  __int64 v192; // [rsp+3D8h] [rbp-190h]
  struct _KAPC_STATE ApcState; // [rsp+3E0h] [rbp-188h] BYREF
  __int128 v194; // [rsp+410h] [rbp-158h] BYREF
  __int128 v195; // [rsp+420h] [rbp-148h]
  _OWORD v196[11]; // [rsp+430h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+4E0h] [rbp-88h] BYREF
  _WORD v198[20]; // [rsp+4F8h] [rbp-70h] BYREF

  v16 = (int)a3;
  p_HighPart = a3;
  Process = (PEPROCESS)a1;
  v166 = a1;
  v137 = a7;
  Token = a8;
  v18 = a11;
  v162 = a11;
  v152 = a13;
  v168 = a14;
  v169 = a15;
  v154 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v151 = 0LL;
  KeyHandle = 0LL;
  memset(v196, 0, 0xA8uLL);
  v19 = 0;
  v189 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v118[0] = 0;
  memset(&v171, 0, sizeof(v171));
  Handle = 0LL;
  Object = 0LL;
  v117 = 0;
  v125 = 0;
  NumberOfBytes = 0;
  memset(v188, 0, 0x48uLL);
  TokenInformation = 0LL;
  v163 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v136 = CurrentThread->ApcState.Process;
  v160 = 0LL;
  v129 = 0LL;
  P = 0LL;
  v128 = 0;
  v141 = 0;
  v124 = 0;
  v138 = 0LL;
  v135 = 0;
  v134 = 0;
  LOWORD(v123) = 0;
  v127 = 0;
  v146 = 0;
  Address = 0LL;
  v143 = 0;
  v164 = 0LL;
  v142 = 0;
  v165 = 0LL;
  v115 = a9;
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
  v144 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v160 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v129 = v160;
    v144 = 0LL;
  }
  else if ( a1 )
  {
    v144 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v144 = a1;
      v124 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
    v19 |= 0x1000u;
  v194 = 0LL;
  v195 = 0LL;
  ReturnedState = 0LL;
  v21 = 2624;
  v122 = 0;
  v139 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2664;
    v19 |= 0x200u;
    v139 = 2624LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    v122 = (v21 + 7) & 0xFFFFFFF8;
    v21 = v122 + 480;
    v19 |= 0x2000u;
    v16 = (int)p_HighPart;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  NumberOfBytes_4 = MaximumGroupCount;
  v25 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v25 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * (unsigned __int16)MaximumGroupCount + v25;
  }
  LOBYTE(v24) = a2;
  LOBYTE(v23) = a2;
  result = ObCreateObject(v23, (int)PsProcessType, v16, v24);
  if ( (int)result >= 0 )
  {
    v26 = (LARGE_INTEGER *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    memset(Object, 0, v21);
    LpcInitializeProcess(Object);
    ExInitializePushLock((PKSPIN_LOCK)Object + 139);
    PspInitializeProcessLock((__int64)Object);
    *((_QWORD *)Object + 189) = (char *)Object + 1504;
    v26[188].QuadPart = (LONGLONG)&v26[188];
    v26[277].QuadPart = (LONGLONG)&v26[276];
    v26[276].QuadPart = (LONGLONG)&v26[276];
    v26[307].QuadPart = (LONGLONG)&v26[306];
    v26[306].QuadPart = (LONGLONG)&v26[306];
    BYTE2(v26[271].u.LowPart) = a4;
    LOBYTE(v26[271].LowPart) = a5;
    BYTE1(v26[271].LowPart) = a6;
    v26[283].QuadPart = 0LL;
    v26[321].QuadPart = 0LL;
    v26[320].QuadPart = 0LL;
    v26[323].QuadPart = 0LL;
    v26[322].QuadPart = 0LL;
    if ( (v19 & 0x400) != 0 )
      v26[271].HighPart |= 1u;
    v27 = v115;
    v133 = 32;
    if ( (v115 & 0x8000) != 0 )
      v26[271].HighPart |= 0x20u;
    if ( v25 )
    {
      v26[271].HighPart |= 0x80u;
      v28 = (char *)v26 + v25;
      v26[297].QuadPart = (LONGLONG)v28;
      v26[298].QuadPart = (LONGLONG)&v28[8 * NumberOfBytes_4];
    }
    v29 = a10;
    if ( (a10 & 1) != 0 )
      v26[271].HighPart |= 0x1000u;
    if ( (v29 & 4) != 0 )
      v26[271].HighPart |= 0x800000u;
    if ( (v29 & 8) != 0 )
      v26[271].HighPart |= 0x8000000u;
    Flink = v136[1].Header.WaitListHead.Flink;
    v31 = 512;
    v32 = (unsigned __int64)Flink | 2;
    if ( (v115 & 0x200) != 0 )
      v32 = (__int64)v136[1].Header.WaitListHead.Flink;
    v26[169].QuadPart = v32;
    if ( (v19 & 0x200) != 0 )
      v26[279].QuadPart = (LONGLONG)v26 + v139;
    if ( (v19 & 0x2000) != 0 )
    {
      v33 = (char *)v26 + v122;
      v26[285].QuadPart = (LONGLONG)v33;
      PoEnergyContextInitialize(v33, Flink, 512LL, v19 & 0x400, 0LL);
    }
    if ( v18 && (v31 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v34 = *(_DWORD *)(v18 + 316);
      v35 = (__int64)Process;
    }
    else
    {
      v35 = (__int64)Process;
      if ( Process )
        v34 = Process[1].ActiveProcessors.Bitmap[9];
      else
        v34 = 5;
    }
    v167 = v26 + 191;
    v26[191].LowPart = v34;
    v26[250].HighPart = 259;
    if ( v35 )
    {
      v36 = (*(_DWORD *)(v35 + 1124) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v35 + 1120) >> 12) & 7;
      v26[168] = *(LARGE_INTEGER *)(v35 + 1088);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    p_HighPart = &v26[140].HighPart;
    v26[140].HighPart = v26[140].HighPart & 0xC7FFFFFF | (v36 << 27);
    v139 = (__int64)&v26[140];
    v26[140].LowPart = (DefaultPagePriority << 12) | v26[140].LowPart & 0xFFFF8FFF;
    if ( v152 )
    {
      if ( !PsReferencePartitionSafe((__int64)v152) )
      {
        SectionInformation = -1073740640;
LABEL_177:
        PspRundownSingleProcess((ULONG_PTR)v26);
        ObfDereferenceObjectWithTag(v26, 0x72437350u);
LABEL_178:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v152 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    v26[315] = v38;
    if ( !v39 )
    {
      v138 = v137;
      if ( v137 )
      {
        if ( (v115 & 0x1000) != 0 )
        {
LABEL_57:
          SectionInformation = -1073741776;
          goto LABEL_177;
        }
        ObfReferenceObject(v137);
      }
      else if ( v35 )
      {
        if ( a12 )
          goto LABEL_57;
        if ( PsIsSystemProcess(v35) )
        {
          SectionInformation = -1073741811;
          goto LABEL_177;
        }
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v35 + 1112)) )
        {
          v41 = *(void **)(v35 + 1304);
          v137 = v41;
          if ( v41 )
            ObfReferenceObject(v41);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v35 + 1112));
        }
        if ( !v137 )
        {
          SectionInformation = -1073741558;
          goto LABEL_177;
        }
        v42 = *(_QWORD *)(v35 + 1408);
        if ( v42 )
        {
          v19 |= 0x4000u;
          v123 = *(unsigned __int16 *)(v42 + 8);
          HIDWORD(TokenInformation) = *(_DWORD *)(v42 + 12);
        }
        if ( (*(_DWORD *)(v35 + 1124) & 0x20000) != 0 )
        {
          v115 |= 8u;
          a9 = v27 | 8;
        }
      }
    }
    p_QuadPart = (unsigned __int64 *)&v26[163].QuadPart;
    v43 = v137;
    v26[163].QuadPart = (LONGLONG)v137;
    LOWORD(v122) = 0;
    if ( v18 )
    {
      v26[270] = *(LARGE_INTEGER *)(v18 + 464);
      SectionInformation = MmGetSectionInformation(v43, 4LL, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_177;
      v44 = *(_BYTE *)(v18 + 99);
      v45 = v19 | (32
                 * (v44 & 4 | (4
                             * (v44 & 2 | ((*(_DWORD *)(v18 + 112) & 1 | (2
                                                                        * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xF8))))) << 11)))));
      v135 = *(unsigned __int16 *)(v18 + 86);
      v134 = *(unsigned __int16 *)(v18 + 84);
      v46 = *(_WORD *)(v18 + 96);
      if ( (v45 & 0x100) != 0 && v46 == 332 && (v44 & 1) != 0 )
        v47 = 0x8000;
      else
        v47 = 0;
      v19 = v47 | v45;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v46);
      v49 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        v50 = 3LL;
LABEL_82:
        SectionInformation = -1073741701;
LABEL_83:
        PspUpdateCreateInfo(v50, v18, 0LL);
        goto LABEL_177;
      }
      if ( (v19 & 0x8000) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
        {
          v19 |= 0x4000u;
          LOWORD(v123) = v49;
        }
        if ( (v19 & 0x8000) == 0
          && (v49 < MEMORY[0xFFFFF7800000002C] || v49 > MEMORY[0xFFFFF7800000002E])
          && (v19 & 0x4000) == 0 )
        {
          v50 = 4LL;
          goto LABEL_82;
        }
      }
      if ( v138 )
      {
        LOWORD(v122) = *(_WORD *)(v18 + 94);
        v51 = (HANDLE *)(v18 + 192);
        v52 = RtlOpenImageFileOptionsKey(v18 + 232, 0LL, v18 + 192);
        if ( v52 < 0 )
        {
          if ( v52 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v51 = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        v26[180] = *(LARGE_INTEGER *)(v18 + 176);
        if ( (v19 & 0x4000) != 0 )
        {
          v53 = v115;
          goto LABEL_108;
        }
        SectionInformation = PspDetectComplusILImage(v18, &a9);
        if ( SectionInformation < 0 )
          goto LABEL_177;
        v53 = a9;
        LOWORD(v115) = a9;
        if ( v49 != 332 || (a9 & 8) != 0 )
          goto LABEL_108;
        if ( (unsigned int)PsWow64IsMachineSupported(332LL) )
        {
          v123 = 332;
        }
        else
        {
          if ( !(unsigned int)PsWow64IsMachineSupported(452LL) )
          {
            v53 |= 8u;
            LOWORD(v115) = v53;
            a9 = v53;
            goto LABEL_108;
          }
          LOWORD(v123) = 452;
        }
        v19 |= 0x4000u;
LABEL_108:
        if ( *v51 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            ImageFileKeyOption = RtlQueryImageFileKeyOption(*v51, 2, (__int64)&NumberOfBytes);
            if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && NumberOfBytes == 2 && v125 )
            {
              SectionInformation = -1073741767;
              v50 = 5LL;
              goto LABEL_83;
            }
          }
          v126 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*v51, 4, 0LL) >= 0 )
          {
            if ( v126 )
            {
              v53 |= 0x10u;
              LOWORD(v115) = v53;
              a9 = v53;
              if ( (v19 & 0x4000) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v51;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v126 = 0;
                  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 && v126 )
                  {
                    v53 |= 0x20u;
                    LOWORD(v115) = v53;
                    a9 = v53;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v144 )
          {
            PspReadIFEONodeOptions(v26, *v51, &v129);
            v160 = v129;
          }
          v140 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*v51, 4, 0LL) >= 0 && v140 )
            v124 |= 0x40u;
          if ( (unsigned int)RtlQueryImageFileKeyOption(*v51, 0, (__int64)&NumberOfBytes) == -2147483643 )
          {
            v55 = NumberOfBytes;
            if ( NumberOfBytes <= 0xA0 && (NumberOfBytes & 7) == 0 )
            {
              P = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x73437350u);
              if ( !P )
              {
LABEL_132:
                SectionInformation = -1073741801;
                goto LABEL_177;
              }
              if ( (int)RtlQueryImageFileKeyOption(*v51, v55, (__int64)&NumberOfBytes) >= 0 && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v128 = NumberOfBytes >> 3;
              }
            }
          }
          v171.Length = 48;
          v171.RootDirectory = *v51;
          v171.Attributes = 576;
          v171.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v171.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v171) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle);
            ObCloseHandle(Handle, 0);
          }
        }
        v35 = (__int64)Process;
LABEL_139:
        v56 = v141 | 0x20000;
        if ( (v53 & 8) == 0 )
          v56 = v141;
        NumberOfBytes_4 = v56;
        if ( (v19 & 0x4000) != 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          v26[176].QuadPart = (LONGLONG)PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_132;
          v58 = HIDWORD(TokenInformation);
          v59 = v123;
          if ( !HIDWORD(TokenInformation) )
            v58 = PspWow64PickBestNtdll(v18);
          PoolWithTag[4] = v59;
          *(_DWORD *)(v26[176].QuadPart + 12) = v58;
          QuadPart = (_QWORD *)v26[176].QuadPart;
          if ( QuadPart )
            *QuadPart = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_177;
        v61 = 0;
        v62 = a2;
        if ( a2 )
        {
          if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
          {
            Privilege[0] = 14;
            v61 = 1;
          }
          if ( a12 )
            Privilege[v61++] = 3;
          v63 = v115;
          if ( (v115 & 0x30) != 0 )
            Privilege[v61++] = 4;
          if ( (v115 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v136) )
            Privilege[v61++] = 10;
          if ( (v115 & 0x8400) != 0 )
            Privilege[v61++] = 7;
          if ( v61 )
          {
            v64 = RtlAcquirePrivilege(Privilege, v61, a12 != 0, &ReturnedState) < 0;
            v62 = a2;
            if ( !v64 )
              v19 |= 0x10u;
          }
          else
          {
            v62 = a2;
          }
        }
        else
        {
          v63 = v115;
        }
        if ( (v63 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v62) )
          goto LABEL_174;
        if ( v144 )
        {
          KeQueryAffinityProcess(v144, v196, 0LL, (__int64)v198);
          KeFirstGroupAffinityEx((__int64)&v151, v196);
          v66 = KeNodeBlock[(unsigned __int16)v198[WORD4(v151)]];
        }
        else
        {
          if ( v160 )
          {
            v65 = *(_WORD *)(v160 + 144);
          }
          else if ( v35 )
          {
            if ( (*(_DWORD *)(v35 + 1120) & 0x100000) != 0 )
            {
              v124 |= 0x100000u;
              v129 = KeNodeBlock[*(unsigned __int16 *)(v35 + 836)];
              v65 = *(_WORD *)(v129 + 144);
            }
            else
            {
              v129 = PspSelectNodeForProcess();
              v65 = *(_WORD *)(v129 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v65 )
              {
                v129 = 0LL;
                v65 = 1;
              }
            }
          }
          else
          {
            v65 = 0;
          }
          WORD4(v151) = v65;
          *(_QWORD *)&v151 = qword_140CFC848[v65];
          if ( v129 )
          {
            LOBYTE(v115) = a9;
            v26 = (LARGE_INTEGER *)Object;
            goto LABEL_198;
          }
          v66 = KeSelectNodeForAffinity((__int64)&v151);
          LOBYTE(v115) = a9;
          v26 = (LARGE_INTEGER *)Object;
        }
        v129 = v66;
LABEL_198:
        v67 = p_HighPart;
        *p_HighPart |= NumberOfBytes_4;
        *(_DWORD *)v139 |= v124;
        if ( v35 )
        {
          DmaAdapter = 0LL;
          v68 = 0;
          SessionId = 0;
          v69 = 0;
          v116 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v19 |= 4u;
            SectionInformation = SeIsTokenAssignableToProcess(Token, &v116);
            if ( SectionInformation < 0 )
              goto LABEL_175;
            v70 = (v19 >> 2) & 1;
            v69 = v116;
            if ( !v116 && !v70 )
              goto LABEL_174;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_175;
            v71 = MmGetSessionIdEx((__int64)v136);
            v68 = SessionId;
            if ( SessionId != v71 )
            {
              if ( !v70 )
              {
LABEL_174:
                SectionInformation = -1073741727;
                goto LABEL_175;
              }
              if ( (v115 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_175;
              }
              v19 |= 1u;
            }
          }
          else if ( !v138 )
          {
            v68 = MmGetSessionIdEx((__int64)Process);
            SessionId = v68;
            v19 |= v68 != (unsigned int)MmGetSessionIdEx((__int64)v136);
          }
          if ( (v19 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v68, &ApcState, &DmaAdapter);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v19) = v19 & 0xFE;
              goto LABEL_175;
            }
            *(_DWORD *)v139 |= 0x80u;
          }
          if ( !a12 || v69 )
          {
            v73 = Process;
            if ( v69 )
              v73 = v136;
            PspInheritQuota(v26, v73);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, v26, Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 1) != 0 )
                PspDetachSession(DmaAdapter);
              goto LABEL_175;
            }
          }
          v74 = PspMaximumWorkingSet;
          if ( (BYTE4(v194) & 1) != 0 )
            v74 = DWORD2(v195);
          v19 |= 32
               * (MmCreateProcessAddressSpace(
                    (_DWORD)v152,
                    v72,
                    v74,
                    BYTE4(v194) & 1,
                    (unsigned int)*(unsigned __int16 *)(v129 + 146) + 1,
                    (__int64)v26) & 1);
          if ( (v19 & 1) != 0 )
            PspDetachSession(DmaAdapter);
          if ( (v19 & 0x20) == 0 )
            goto LABEL_230;
          v35 = (__int64)Process;
          v67 = p_HighPart;
        }
        else
        {
          PspInheritQuota(v26, 0LL);
          LOBYTE(v26[114].LowPart) = 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
            goto LABEL_175;
        }
        HIDWORD(TokenInformation) = v19;
        _InterlockedOr(v67, 0x40000u);
        v26 = (LARGE_INTEGER *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
        SectionInformation = KeInitializeProcess(
                               v76,
                               8,
                               (unsigned int)&v151,
                               v129,
                               SessionSchedulingGroupByProcess,
                               v77);
        if ( SectionInformation < 0 )
          goto LABEL_175;
        if ( v18 )
        {
          v127 = *(_DWORD *)(v18 + 416);
          v146 = *(_DWORD *)(v18 + 420);
          Address = *(PVOID *)(v18 + 424);
          v143 = *(_DWORD *)(v18 + 432);
          v164 = *(_QWORD *)(v18 + 440);
          v142 = *(_DWORD *)(v18 + 448);
          v165 = *(_QWORD *)(v18 + 208);
        }
        SectionInformation = PspInitializeProcessSecurity(
                               (PEPROCESS)v35,
                               v127,
                               (v19 >> 11) & 1,
                               (v19 >> 12) & 1,
                               v146,
                               (__int64)Address,
                               v143,
                               v164,
                               v142,
                               v165,
                               v168);
        if ( SectionInformation < 0 )
          goto LABEL_175;
        HIBYTE(v26[182].QuadPart) = 2;
        if ( v35 )
        {
          QuadPart_high = HIBYTE(v26[182].QuadPart);
          if ( ((*(_BYTE *)(v35 + 1463) - 1) & 0xFB) == 0 )
            QuadPart_high = *(_BYTE *)(v35 + 1463);
          HIBYTE(v26[182].QuadPart) = QuadPart_high;
          v79 = v18 ? *(_QWORD *)(v18 + 296) : 0LL;
          v80 = v18 ? *(unsigned int *)(v18 + 292) : 0LL;
          inited = ObInitProcess(v35 & -(__int64)((a9 & 4) != 0), v26, v80, v79);
        }
        else
        {
          v26[174] = (LARGE_INTEGER)v136[1].AffinityPadding[8];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v26);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_175;
        if ( (v194 & 7) != 0 )
        {
          LOBYTE(v83) = a2;
          PspApplyIFEOPerfOptions(v26, &v194, v83);
        }
        if ( (v19 & 0x200000) != 0 )
          KeSetCpuSetsProcess((__int64)v26, v128, (char *)P);
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            LOBYTE(v84) = a2;
            LOBYTE(v82) = *(_BYTE *)(v18 + 248);
            SectionInformation = PspSetProcessPriorityClass(v26, v82, 0LL, v84);
            if ( SectionInformation < 0 )
              goto LABEL_175;
          }
        }
        LOBYTE(v26[80].LowPart) = PspComputeQuantumAndPriority((_DWORD)v26, 0, (unsigned int)&v117, 0, 0LL);
        BYTE1(v26[80].LowPart) = v117;
        SectionInformation = 0;
        v127 = 0;
        PspReadIFEOMitigationOptions(v18, &v189);
        v172 = v189;
        v173 = v190;
        v174 = PspSystemMitigationOptions;
        v175 = qword_140CFC9E0;
        PspInheritMitigationOptions(&v174, &v172, &v189);
        PspReadIFEOMitigationAuditOptions(v18, &v191);
        v176 = v191;
        v177 = v192;
        v178 = PspSystemMitigationAuditOptions;
        v179 = qword_140CFCB80;
        PspInheritMitigationAuditOptions(&v178, &v176, &v191);
        v85 = (WORD3(v189) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v180 = *(_OWORD *)(v18 + 360);
            v181 = *(_QWORD *)(v18 + 376);
            v182 = v189;
            v183 = v190;
            PspInheritMitigationOptions(&v182, &v180, &v189);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v184 = *(_OWORD *)(v18 + 488);
            v185 = *(_QWORD *)(v18 + 504);
            v186 = v191;
            v187 = v192;
            PspInheritMitigationAuditOptions(&v186, &v184, &v191);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v85) = v85 | 4;
        v86 = v85 | 0x100;
        if ( (v85 & 4) == 0 )
          v86 = v85;
        if ( (v86 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v189);
        if ( !KeIsUserCetAllowed() )
          *((_QWORD *)&v189 + 1) = *((_QWORD *)&v189 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v122 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v133 = 0;
        v88 = v87 | ((v122 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)v122 >> 4) & 2 | ((v19 & 0x180) != 0) | v133 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2);
        NumberOfBytes_4 = v19 & 0x400;
        if ( (v19 & 0x400) != 0 )
        {
          *((_QWORD *)&v189 + 1) = *((_QWORD *)&v189 + 1) & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v89 = v189 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v89 = v189 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          *(_QWORD *)&v189 = v89;
        }
        if ( !v138 && Process && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
          *((_QWORD *)&v189 + 1) = *((_QWORD *)&v189 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v26);
        if ( !PsIsHostSilo(ProcessServerSilo) )
          *((_QWORD *)&v189 + 1) = *((_QWORD *)&v189 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x4000) != 0 )
          *((_QWORD *)&v189 + 1) = *((_QWORD *)&v189 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v91 = Process;
        PspApplyMitigationOptions((_DWORD)v26, (_DWORD)Process, (unsigned int)&v189, (unsigned int)&v191, v88);
        if ( v18 )
        {
          PspApplyWin32kFilterOptions(v26, v18);
          PspApplyComponentFilterOptions(v93, v92);
          *(_OWORD *)(v18 + 360) = v189;
          *(_QWORD *)(v18 + 376) = v190;
          *(_OWORD *)(v18 + 488) = v191;
          *(_QWORD *)(v18 + 504) = v192;
        }
        PsQueryProcessAttributes(v26, 0LL, v118);
        v94 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v94 = (_DWORD)TokenInformation != 0;
        SmProcessCreateNotification(v26, v94);
        if ( v91 && v91 != PsInitialSystemProcess && (HIDWORD(v91[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
          v26[271].HighPart |= 0x2000000u;
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v136)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_174;
        }
        v95 = NumberOfBytes_4;
        if ( NumberOfBytes_4 || v138 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v18, v26);
          if ( SectionInformation >= 0 )
          {
            if ( (v19 & 0x10000) != 0 )
            {
              v99 = MmInitializeProcessAddressSpace((ULONG_PTR)v26, (v19 >> 17) & 1);
              v98 = v137;
            }
            else
            {
              v98 = v137;
              v99 = MmInitializeProcessAddressSpace((ULONG_PTR)v26, 0);
            }
            SectionInformation = v99;
            if ( v99 >= 0 )
            {
              if ( v18 )
              {
                ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v98);
                v101 = v26[164];
                if ( ImageSectionBasedAddress != v101.QuadPart )
                  *(_QWORD *)(v18 + 48) += v101.QuadPart - ImageSectionBasedAddress;
              }
              v127 = SectionInformation;
              if ( !v95 )
                LOWORD(v19) = v19 | 2;
              LOWORD(v19) = (4 * (a9 & 0x10 | 2)) | v19;
              goto LABEL_314;
            }
          }
        }
        else
        {
          if ( !v91 )
            goto LABEL_314;
          v26[164] = (LARGE_INTEGER)v91[1].Affinity.Bitmap[18];
          SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v26, (v19 >> 11) & 1);
          if ( SectionInformation >= 0 )
          {
            LOWORD(v19) = WORD2(TokenInformation) | (4 * (a9 & 0x10)) | 2;
            v96 = *(unsigned __int16 *)(v91[1].ActiveProcessors.Bitmap[2] + 2);
            v97 = ExAllocatePoolWithTag(NonPagedPoolNx, v96 + 16, 0x61506553u);
            v26[184].QuadPart = (LONGLONG)v97;
            if ( !v97 )
            {
LABEL_230:
              SectionInformation = -1073741670;
              goto LABEL_175;
            }
            memmove(v97, (const void *)v91[1].ActiveProcessors.Bitmap[2], v96 + 16);
            *(_QWORD *)(v26[184].QuadPart + 8) = v26[184].QuadPart + 16;
            v26[165].LowPart = v91[1].Affinity.Bitmap[19];
            if ( (a9 & 0x1000) != 0 )
            {
              *p_QuadPart = 0LL;
              HalPutDmaAdapter((PADAPTER_OBJECT)v137);
            }
LABEL_314:
            if ( (v19 & 0x10) != 0 )
              RtlReleasePrivilege(ReturnedState);
            if ( (unsigned __int16)PsWow64GetProcessMachine(v26) == 332 )
              v26[79].LowPart |= 1u;
            v128 = v19 & 8;
            if ( (v19 & 8) != 0 )
            {
              if ( v18 )
              {
                SectionInformation = PspSetupReservedUserMappings(v26, &ApcState, v18);
                if ( SectionInformation < 0 )
                  goto LABEL_177;
              }
            }
            NumberOfBytes_4 = v19 & 2;
            if ( (v19 & 2) != 0 )
            {
              *(_QWORD *)&v161 = 0LL;
              *((_QWORD *)&v161 + 1) = -1LL;
              IsProtectedProcess = PsIsProtectedProcess((__int64)v26);
              IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v26);
              v104 = BYTE3(v161) & 0x88 | ((v19 & 0x40) != 0) | (2
                                                               * (IsProtectedProcess | (2
                                                                                      * ((16 * IsProtectedProcessLight) | ((v19 & 0x80) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v118[0] & 1));
              BYTE3(v161) = v104;
              if ( v138 )
              {
                SectionInformation = MmCreatePeb(v26, &v161, &v26[170], &v151);
                if ( SectionInformation < 0 )
                {
                  v26[170].QuadPart = 0LL;
                  goto LABEL_177;
                }
                if ( (_QWORD)v151 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v139, 0xFFCFFFFF);
                  v26 = (LARGE_INTEGER *)Object;
                  PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v151, (__int64)&v154);
                }
              }
              else
              {
                v105 = Process;
                Address = (PVOID)Process[1].AffinityPadding[4];
                v26[170].QuadPart = (LONGLONG)Address;
                if ( (v19 & 0x800) != 0 )
                {
LABEL_340:
                  if ( (v19 & 8) != 0 && v18 )
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(v105, v26, &ApcState, v18);
                  }
                  else if ( NumberOfBytes_4 && (v19 & 0x800) == 0 )
                  {
                    SectionInformation = 0;
                    KeStackAttachProcess((PRKPROCESS)v26, &ApcState);
                    v108 = (__int64)CurrentThread;
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
                            if ( v26[176].QuadPart )
                            {
                              ProcessNtdllType = PsWow64GetProcessNtdllType(v26);
                              SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                            }
                          }
                        }
                      }
                    }
                    KeUnstackDetachProcess(&ApcState);
LABEL_344:
                    MmNewProcessInitialized(v26);
                    if ( SectionInformation < 0 )
                      goto LABEL_177;
                    PspLockProcessExclusive((__int64)v26, v108);
                    v109 = ExCreateHandle(PspCidTable, v26);
                    v26[136].QuadPart = v109;
                    if ( !v109 )
                    {
                      PspUnlockProcessExclusive((__int64)v26, v108);
                      SectionInformation = -1073741670;
                      goto LABEL_177;
                    }
                    if ( (v19 & 0x1000) != 0 )
                    {
                      SectionInformation = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSectionStrongImageReference)(
                                             0LL,
                                             0LL,
                                             (LARGE_INTEGER)v26[163].QuadPart,
                                             &v163);
                      v111 = (__int64)v26;
                      if ( SectionInformation < 0 )
                      {
LABEL_358:
                        PspUnlockProcessExclusive(v111, v108);
                        goto LABEL_177;
                      }
                      SectionInformation = KeSecureProcess(
                                             (_KPROCESS *)v26,
                                             **(_QWORD **)(v18 + 392),
                                             v26[170].QuadPart,
                                             v26[136].QuadPart,
                                             v163,
                                             v26[164].QuadPart,
                                             *(struct _MDL **)(v18 + 392),
                                             *(unsigned int *)(v18 + 408));
                      if ( SectionInformation < 0 )
                      {
                        v111 = (__int64)v26;
                        goto LABEL_358;
                      }
                    }
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise(v26 + 141);
                    }
                    else
                    {
                      v26 = (LARGE_INTEGER *)Object;
                      *((_QWORD *)Object + 141) = MEMORY[0xFFFFF78000000014];
                    }
                    v26[288].QuadPart = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                    v113 = Object;
                    *((_QWORD *)Object + 289) = UnbiasedInterruptTime;
                    v113[291] = v26[288].QuadPart;
                    *v169 = v113;
                    SectionInformation = v127;
                    goto LABEL_178;
                  }
                  v108 = (__int64)CurrentThread;
                  goto LABEL_344;
                }
                LOBYTE(v161) = 1;
                KeStackAttachProcess((PRKPROCESS)v26, &ApcState);
                if ( MmSecureVirtualMemory(Address, 0x7C8uLL, 4u) )
                  *(_OWORD *)Address = v161;
                else
                  SectionInformation = -1073741503;
                if ( SectionInformation >= 0 )
                {
                  v106 = v26[176];
                  if ( v106.QuadPart )
                  {
                    v107 = *(_WORD *)(v106.QuadPart + 8);
                    if ( v107 == 332 || v107 == 452 )
                    {
                      p_QuadPart = *(unsigned __int64 **)v106.QuadPart;
                      if ( MmSecureVirtualMemory(p_QuadPart, 0x480uLL, 4u) )
                      {
                        v150 = 0xFFFFFFFF00000001uLL;
                        BYTE3(v150) = v104;
                        *p_QuadPart = v150;
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
            v105 = Process;
            goto LABEL_340;
          }
        }
LABEL_175:
        if ( (v19 & 0x10) != 0 )
          RtlReleasePrivilege(ReturnedState);
        goto LABEL_177;
      }
    }
    else if ( v43 )
    {
      SectionInformation = MmGetSectionInformation(v43, 4LL, v188);
      if ( SectionInformation < 0 )
        goto LABEL_177;
      v19 |= 32
           * (HIBYTE(v188[12]) & 4 | (4
                                    * (HIBYTE(v188[12]) & 2 | ((v188[16] & 1 | (2
                                                                              * (v188[16] & 2 | (2 * (v188[16] & 0xF8))))) << 11))));
      LOWORD(v122) = HIWORD(v188[11]);
      v135 = HIWORD(v188[9]);
      v134 = LOWORD(v188[9]);
      if ( !v138 )
      {
        v141 = 8;
        v19 |= 0x800u;
      }
    }
    LOBYTE(v53) = v115;
    goto LABEL_139;
  }
  return result;
}
