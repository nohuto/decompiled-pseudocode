/*
 * XREFs of NtQueryInformationProcess @ 0x140636B80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeEnterCriticalRegionThread @ 0x14022C1A0 (KeEnterCriticalRegionThread.c)
 *     MmGetSessionId @ 0x140233F30 (MmGetSessionId.c)
 *     PsIsProtectedProcess @ 0x14023DEE0 (PsIsProtectedProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14023ED3C (MmQueryWorkingSetInformation.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14023EF60 (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x14023EF70 (KeQueryAffinityProcess.c)
 *     ExUnlockUserBuffer @ 0x14025EE10 (ExUnlockUserBuffer.c)
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     PsGetWin32KFilterSet @ 0x14030A230 (PsGetWin32KFilterSet.c)
 *     PsQueryProcessCommandLine @ 0x14031D3D0 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x140322E58 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x1403281A0 (PsGetProcessProtection.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380810 (ExQueryHandleExceptionsPermanency.c)
 *     PspUnlockProcessShared @ 0x1403992D0 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x1403999E0 (PspLockProcessSecurityShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CFAD0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1403FAAD0 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x14051AB74 (KeQueryCpuSetsProcess.c)
 *     PspReadProcessSecurityDomain @ 0x14057FF34 (PspReadProcessSecurityDomain.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CD5C8 (PspGetRedirectionTrustPolicy.c)
 *     PsQueryProcessEnergyValues @ 0x1405F0910 (PsQueryProcessEnergyValues.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14062F538 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     PsQueryProcessQuotaCounters @ 0x140635F10 (PsQueryProcessQuotaCounters.c)
 *     PspQueryQuotaLimits @ 0x140635F3C (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x140636120 (IoQueryFileDosDeviceName.c)
 *     MmGetSectionInformation @ 0x140636810 (MmGetSectionInformation.c)
 *     PsQueryRuntimeProcess @ 0x140636AB0 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x14063A950 (ObQueryDeviceMapInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     PsGetProcessDeepFreezeStats @ 0x140659BDC (PsGetProcessDeepFreezeStats.c)
 *     ExLockUserBuffer @ 0x14065C658 (ExLockUserBuffer.c)
 *     PsQueryStatisticsProcess @ 0x140666240 (PsQueryStatisticsProcess.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x140679AB0 (MmCopyVirtualMemory.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14068D3B0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsReferenceProcessFilePointer @ 0x14068ECE0 (PsReferenceProcessFilePointer.c)
 *     ExEnumHandleTable @ 0x1406B11E0 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406C1760 (ObDereferenceProcessHandleTable.c)
 *     ExIsRestrictedCaller @ 0x1406C58CC (ExIsRestrictedCaller.c)
 *     PsQueryFullProcessImageName @ 0x1406CCF8C (PsQueryFullProcessImageName.c)
 *     KeGetExecuteOptions @ 0x1406CFF48 (KeGetExecuteOptions.c)
 *     ObGetProcessHandleCount @ 0x1406D614C (ObGetProcessHandleCount.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1406DF270 (PsQueryProcessSignatureMitigationPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14077DD90 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExSystemExceptionFilter @ 0x1407D0AE0 (ExSystemExceptionFilter.c)
 *     DbgkOpenProcessDebugPort @ 0x140886E48 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x140892408 (VslGetSecurePebAddress.c)
 *     VslLiveDumpCaptureProcess @ 0x14089277C (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408F5108 (PoQueryProcessEnergyTrackingState.c)
 *     PsGetKeepAliveCountProcess @ 0x14090A0D4 (PsGetKeepAliveCountProcess.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14090A110 (PsQueryTotalCycleTimeProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x14090A8F8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14090AAA0 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090F268 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x14093757C (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094EE84 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x14094F0C4 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x14094F0D4 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x14094F2D4 (ExReferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // bl
  __int64 v13; // rax
  __int64 v14; // rcx
  NTSTATUS result; // eax
  ULONG v16; // ecx
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v18; // r12
  struct _FILE_OBJECT *v19; // rbx
  int v20; // r12d
  POBJECT_NAME_INFORMATION v21; // rbx
  ULONG v22; // edi
  unsigned __int64 v23; // rdi
  _KPROCESS *v24; // rbx
  PVOID v25; // rcx
  __int64 v26; // r8
  unsigned __int64 Group; // rdx
  unsigned __int64 v28; // rax
  __int16 v29; // cx
  _DWORD *v30; // rcx
  int v31; // edx
  int v32; // ecx
  int v33; // ebx
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  struct _EX_RUNDOWN_REF *v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int ExecuteOptions; // ebx
  _DWORD *v40; // rcx
  HANDLE v41; // rdx
  int ProcessHandleCount; // edi
  NTSTATUS ProcessTelemetryCoverage; // eax
  NTSTATUS v44; // ebx
  int v45; // ebx
  int v46; // ebx
  unsigned int v47; // edi
  int SessionId; // ebx
  unsigned __int64 *v49; // rax
  int v50; // ebx
  unsigned __int64 v51; // r13
  NTSTATUS v52; // edi
  PVOID v53; // r12
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  _OWORD *v59; // rax
  __int64 v60; // r9
  int v61; // eax
  PVOID v62; // r12
  void *CurrentProcess; // r10
  void *v64; // r10
  struct _DMA_ADAPTER *v65; // rdx
  int DmaOperations; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v69; // ecx
  unsigned __int64 v70; // rax
  struct _EX_RUNDOWN_REF *v71; // r13
  struct _DMA_ADAPTER *Count; // r12
  NTSTATUS v73; // ebx
  PVOID v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  void *v77; // rdi
  NTSTATUS ProcessHandleInformation; // edi
  struct _DMA_ADAPTER *v79; // rcx
  _DMA_OPERATIONS *v80; // rsi
  struct _DMA_ADAPTER *v81; // rbx
  _DMA_OPERATIONS *v82; // rdi
  NTSTATUS v83; // r12d
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // eax
  void *v88; // r8
  ULONG v89; // ecx
  unsigned int v90; // edx
  NTSTATUS v91; // ebx
  __int64 v92; // rbx
  struct _KPROCESS *v93; // rbx
  unsigned __int64 *v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rcx
  ULONG v98; // eax
  int v99; // eax
  struct _DMA_ADAPTER *v100; // r14
  __int64 v101; // rax
  int v102; // edi
  _DWORD *v103; // rcx
  int v104; // eax
  __int64 v105; // rax
  int v106; // ecx
  int v107; // eax
  _DWORD *v108; // rcx
  int v109; // eax
  int v110; // eax
  int v111; // eax
  _DWORD *v112; // rcx
  int v113; // eax
  int v114; // ecx
  int v115; // eax
  _DWORD *v116; // rcx
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  _DWORD *v121; // rcx
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int RedirectionTrustPolicy; // eax
  int v128; // eax
  int v129; // eax
  _DWORD *v130; // rcx
  int v131; // eax
  _DWORD *v132; // rcx
  int v133; // eax
  _DWORD *v134; // rcx
  int v135; // eax
  NTSTATUS v136; // edi
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // ebx
  PVOID v141; // rbx
  __int64 v142; // rax
  char v143; // r9
  PVOID v144; // rbx
  NTSTATUS ProcessCommandLine; // eax
  __int64 v146; // rax
  __int64 v147; // r8
  ULONG v148; // ebx
  void *v149; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v151; // eax
  int v152; // eax
  unsigned __int64 ExtensionTable; // rdi
  int v154; // ebx
  __int64 (__fastcall *v155)(PVOID, __int64 *); // rax
  PVOID v156; // rdi
  _DWORD *v157; // rcx
  int v158; // edx
  int v159; // eax
  PVOID v160; // rdi
  ULONG v161; // ebx
  __int64 v162; // rcx
  _KPROCESS *v163; // rcx
  __int64 v164; // r12
  struct _KTHREAD *v165; // rdi
  __int64 v166; // rcx
  int v167; // r8d
  ULONG v168; // edi
  _KPROCESS *v169; // rax
  unsigned __int64 v170; // r8
  __int64 v171; // rcx
  __int64 *v172; // rdx
  int v173; // eax
  signed __int32 v174[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-9A0h]
  _BYTE v178[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v179; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v180; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v182; // [rsp+58h] [rbp-990h]
  ULONG v183; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v185; // [rsp+70h] [rbp-978h]
  int v186; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v187; // [rsp+78h] [rbp-970h]
  volatile signed __int32 *v188; // [rsp+80h] [rbp-968h]
  int v189; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v193; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v194; // [rsp+B0h] [rbp-938h] BYREF
  int v195; // [rsp+B4h] [rbp-934h] BYREF
  int v196; // [rsp+B8h] [rbp-930h]
  int v197; // [rsp+BCh] [rbp-92Ch] BYREF
  int v198; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v199; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v200; // [rsp+D0h] [rbp-918h]
  PVOID v201; // [rsp+D8h] [rbp-910h]
  int v202[4]; // [rsp+E0h] [rbp-908h]
  _OBJECT_NAME_INFORMATION v203; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v204; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v205[4]; // [rsp+110h] [rbp-8D8h] BYREF
  __int64 v206; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v207; // [rsp+128h] [rbp-8C0h] BYREF
  LARGE_INTEGER v208; // [rsp+130h] [rbp-8B8h] BYREF
  __int64 v209; // [rsp+138h] [rbp-8B0h]
  PVOID v210; // [rsp+140h] [rbp-8A8h] BYREF
  __int64 v211; // [rsp+148h] [rbp-8A0h] BYREF
  _QWORD v212[2]; // [rsp+150h] [rbp-898h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+160h] [rbp-888h] BYREF
  PVOID v214; // [rsp+168h] [rbp-880h] BYREF
  _OWORD v215[3]; // [rsp+170h] [rbp-878h] BYREF
  __int64 v216; // [rsp+1A0h] [rbp-848h]
  __int128 v217; // [rsp+1A8h] [rbp-840h] BYREF
  __int64 v218; // [rsp+1B8h] [rbp-830h]
  __int64 v219; // [rsp+1C0h] [rbp-828h]
  HANDLE v220; // [rsp+1C8h] [rbp-820h]
  __int64 v221; // [rsp+1D0h] [rbp-818h]
  __int64 v222; // [rsp+1D8h] [rbp-810h]
  int v223; // [rsp+1E0h] [rbp-808h]
  int v224; // [rsp+1E4h] [rbp-804h]
  char *v225; // [rsp+1E8h] [rbp-800h]
  __int64 v226; // [rsp+1F0h] [rbp-7F8h]
  __int64 v227; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v228; // [rsp+200h] [rbp-7E8h]
  int v229; // [rsp+210h] [rbp-7D8h]
  __int128 v230; // [rsp+218h] [rbp-7D0h]
  __int128 v231; // [rsp+228h] [rbp-7C0h]
  __int128 v232; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v234; // [rsp+260h] [rbp-788h] BYREF
  __int128 v235; // [rsp+270h] [rbp-778h] BYREF
  __int128 v236; // [rsp+280h] [rbp-768h] BYREF
  __int128 v237; // [rsp+290h] [rbp-758h] BYREF
  __int128 v238; // [rsp+2A0h] [rbp-748h]
  __int128 v239; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v240; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v241; // [rsp+2D0h] [rbp-718h]
  _OWORD v242[6]; // [rsp+2E0h] [rbp-708h] BYREF
  __int64 v243; // [rsp+340h] [rbp-6A8h]
  unsigned __int64 v244; // [rsp+350h] [rbp-698h]
  __int128 v245; // [rsp+358h] [rbp-690h] BYREF
  unsigned __int64 v246; // [rsp+368h] [rbp-680h]
  void *v247; // [rsp+370h] [rbp-678h]
  __int128 v248; // [rsp+380h] [rbp-668h]
  __int128 v249; // [rsp+390h] [rbp-658h]
  __int128 v250; // [rsp+3A0h] [rbp-648h]
  __int128 v251; // [rsp+3B0h] [rbp-638h]
  __int128 v252; // [rsp+3C0h] [rbp-628h]
  __int128 v253; // [rsp+3D0h] [rbp-618h]
  __int128 v254; // [rsp+3E0h] [rbp-608h]
  __int128 v255; // [rsp+3F0h] [rbp-5F8h]
  __int128 v256; // [rsp+400h] [rbp-5E8h]
  __int128 v257; // [rsp+410h] [rbp-5D8h]
  __int64 v258; // [rsp+420h] [rbp-5C8h] BYREF
  int v259; // [rsp+428h] [rbp-5C0h]
  __int128 JobObjectInformation; // [rsp+430h] [rbp-5B8h] BYREF
  __int128 v261; // [rsp+440h] [rbp-5A8h]
  __int64 v262; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v264; // [rsp+488h] [rbp-560h] BYREF
  __int128 v265; // [rsp+4C0h] [rbp-528h] BYREF
  __int128 v266; // [rsp+4D0h] [rbp-518h]
  __int128 v267; // [rsp+4E0h] [rbp-508h]
  __int128 v268; // [rsp+4F0h] [rbp-4F8h]
  __int128 v269; // [rsp+500h] [rbp-4E8h]
  __int128 v270; // [rsp+510h] [rbp-4D8h]
  __int128 v271; // [rsp+520h] [rbp-4C8h]
  __int128 v272; // [rsp+530h] [rbp-4B8h]
  __int128 v273; // [rsp+540h] [rbp-4A8h]
  __int64 v274; // [rsp+550h] [rbp-498h]
  _OWORD v275[9]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v276[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v277[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _OWORD v278[27]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v279[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v182 = ProcessHandle;
  v201 = ProcessInformation;
  v225 = (char *)ProcessInformation;
  v205[2] = ProcessInformationLength;
  v188 = (volatile signed __int32 *)ReturnLength;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v183 = 0;
  Handle = 0LL;
  v186 = 0;
  memset(v277, 0, 0xA8uLL);
  v193 = 0LL;
  GroupMaskProcess = 0;
  v205[0] = 0;
  v223 = 0;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  v272 = 0LL;
  v273 = 0LL;
  v274 = 0LL;
  memset(&v215[1], 0, 32);
  v216 = 0LL;
  v200 = 0LL;
  v245 = 0LL;
  v207 = 0LL;
  JobObjectInformation = 0LL;
  v261 = 0LL;
  v262 = 0LL;
  v206 = 0LL;
  ObjectNameInformation = 0LL;
  v185 = 0;
  Object = 0LL;
  v212[0] = 0LL;
  v194 = 0;
  memset(v242, 0, sizeof(v242));
  v243 = 0LL;
  Src = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v238 = 0LL;
  v239 = 0LL;
  v12 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v178[1] = v12;
  CurrentThread = KeGetCurrentThread();
  if ( !v12 )
    goto LABEL_23;
  if ( ProcessInformationClass == ProcessProtectionInformation )
  {
LABEL_13:
    v13 = 0LL;
    goto LABEL_14;
  }
  if ( ProcessInformationClass != ProcessCommitReleaseInformation )
  {
    if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
    {
      if ( ProcessInformationClass == ProcessSequenceNumber )
      {
        v13 = 7LL;
      }
      else if ( ProcessInformationClass == ProcessSecurityDomainInformation )
      {
        v13 = 7LL;
      }
      else
      {
        v13 = 3LL;
        if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
          v13 = 0LL;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v13 = 7LL;
LABEL_14:
  if ( (_DWORD)v5 )
  {
    if ( (v13 & v6) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v6 + v5 > 0x7FFFFFFF0000LL || v6 + v5 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( ReturnLength )
  {
    v14 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
LABEL_23:
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      memset(v276, 0, 0xA8uLL);
      v178[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v23 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        LODWORD(v5) = 64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v23 = 0LL;
        ObjectNameInformation = 0LL;
      }
      v183 = v5;
      P = (PVOID)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v20 = result;
      i = result;
      if ( result < 0 )
        return result;
      v24 = (_KPROCESS *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 501);
      *(_QWORD *)(v6 + 8) = v24[1].AffinityPadding[4];
      if ( (v24->SecureState.SecureHandle & 1) != 0 )
        VslGetSecurePebAddress(v24);
      v25 = v24;
      if ( v20 >= 0 )
      {
        P = 0LL;
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v24);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 || v24 == CurrentThread->Process )
        {
          KeQueryAffinityProcess((__int64)v24, v276, &GroupMaskProcess, 0LL);
          v26 = GroupMaskProcess;
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 )
          {
            _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
            goto LABEL_69;
          }
          if ( v24 == CurrentThread->Process )
          {
            Group = CurrentThread->UserAffinity.Group;
            if ( _bittest64(&v26, Group) )
            {
LABEL_69:
              if ( (_DWORD)Group != 20 )
                P = (PVOID)*((_QWORD *)v276 + Group + 1);
            }
          }
        }
        if ( v23 )
          PsQueryProcessAttributes(v24, (__int64)v178, 0LL);
        *(_QWORD *)(v6 + 16) = P;
        *(_DWORD *)(v6 + 24) = v24->BasePriority;
        *(_QWORD *)(v6 + 32) = v24[1].Header.WaitListHead.Flink;
        *(_QWORD *)(v6 + 40) = v24[1].AffinityPadding[2];
        if ( v23 )
        {
          *(_DWORD *)(v23 + 56) = 0;
          if ( PsIsProtectedProcess((__int64)v24) )
          {
            *(_DWORD *)(v23 + 56) = 1;
            LODWORD(v9) = 1;
          }
          v28 = v24[1].AffinityPadding[10];
          if ( v28 )
          {
            v29 = *(_WORD *)(v28 + 8);
            if ( v29 == 332 || v29 == 452 )
              *(_DWORD *)(v23 + 56) = v9 | 2;
          }
          v30 = (_DWORD *)&v24[1].DirectoryTableBase + 1;
          if ( (v24[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
            *(_DWORD *)(v23 + 56) |= 4u;
          v24 = (_KPROCESS *)Object;
          v31 = *(_DWORD *)(v23 + 56) ^ ((unsigned __int8)*(_DWORD *)(v23 + 56) ^ (unsigned __int8)(*((_DWORD *)Object + 280) >> 4)) & 8;
          *(_DWORD *)(v23 + 56) = v31;
          if ( v24->FreezeCount + ((*(_DWORD *)&v24->0 >> 3) & 1) )
          {
            v31 |= 0x10u;
            *(_DWORD *)(v23 + 56) = v31;
          }
          v32 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(*v30 >> 15)) & 0x20;
          *(_DWORD *)(v23 + 56) = v32;
          if ( v178[0] )
          {
            v32 |= 0x40u;
            *(_DWORD *)(v23 + 56) = v32;
          }
          if ( (v24->SecureState.SecureHandle & 1) != 0 )
          {
            v32 |= 0x80u;
            *(_DWORD *)(v23 + 56) = v32;
          }
          if ( *(_QWORD *)&v24[2].Affinity.Count )
            *(_DWORD *)(v23 + 56) = v32 | 0x100;
          v20 = i;
        }
        if ( ReturnLength )
          *ReturnLength = v5;
        goto LABEL_538;
      }
LABEL_554:
      ObfDereferenceObjectWithTag(v25, 0x79517350u);
      return v20;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits(ProcessHandle, 0x7FFFFFFF0000LL, (void *)v6, v5, ReturnLength, v12);
    case ProcessIoCounters:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      PsQueryStatisticsProcess(Object, v242);
      v230 = *(_OWORD *)((char *)&v242[2] + 8);
      v231 = *(_OWORD *)((char *)&v242[3] + 8);
      v232 = *(_OWORD *)((char *)&v242[4] + 8);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v230;
      *(_OWORD *)(v6 + 16) = v231;
      *(_OWORD *)(v6 + 32) = v232;
      if ( ReturnLength )
        *ReturnLength = 48;
      return DeviceMapInformation;
    case ProcessVmCounters:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v34 = Object;
      Src = *((_OWORD *)Object + 73);
      LODWORD(v234) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v234 + 1, &v235, &v239, &v206, &v207, v205);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters((__int64)v34, 1, &v236, (_QWORD *)&v235 + 1);
      PsQueryProcessQuotaCounters(v35, 0, &v237, (_QWORD *)&v236 + 1);
      *((_QWORD *)&v237 + 1) = v34[201] << 12;
      *(_QWORD *)&v238 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v239 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v238 + 1) = *((_QWORD *)&v237 + 1);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      result = i;
      if ( i < 0 )
        return result;
      memmove((void *)v6, &Src, v5);
      if ( ReturnLength )
        *ReturnLength = v5;
      return 0;
    case ProcessTimes:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v36 = (struct _EX_RUNDOWN_REF *)Object;
      v37 = PsQueryRuntimeProcess((__int64)Object, &v194);
      v38 = KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)v37;
      *(_QWORD *)(v6 + 24) = v38 * v194;
      *(struct _EX_RUNDOWN_REF *)v6 = v36[141];
      *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v36[264];
      if ( ReturnLength )
        *ReturnLength = 32;
      goto LABEL_355;
    case ProcessDebugPort:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 175) >> 64);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x410u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
      goto LABEL_150;
    case ProcessDefaultHardErrorMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v33 = *((_DWORD *)Object + 382);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v33;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessPooledUsageAndLimits:
      return PspQueryPooledQuotaLimits(ProcessHandle, v12);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch(ProcessHandle, (__int64)ReturnLength, v12);
    case ProcessPriorityClass:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      HIBYTE(v185) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v185;
      if ( ReturnLength )
        *ReturnLength = 2;
      return 0;
    case ProcessWx86Information:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x400u,
                               (POBJECT_TYPE)PsProcessType,
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v45 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v45;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessHandleCount:
      v195 = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount(Object, &v195);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = v195;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessAffinityMask:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v36 = (struct _EX_RUNDOWN_REF *)Object;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
        || (KeQueryAffinityProcess((__int64)v36, v277, &GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ObfDereferenceObjectWithTag(v36, 0x79517350u);
        return -1073741811;
      }
      _BitScanForward((unsigned int *)&v85, GroupMaskProcess);
      v86 = *((_QWORD *)v277 + v85 + 1);
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v85;
      *(_QWORD *)v6 = v86;
      if ( ReturnLength )
        *ReturnLength = v5;
      goto LABEL_355;
    case ProcessPriorityBoost:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v46 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v46;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessDeviceMap:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v187 = *(_DWORD *)(v6 + 40);
        v47 = v187;
        if ( (v187 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v47 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v47);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && ReturnLength )
        *ReturnLength = v5;
      return DeviceMapInformation;
    case ProcessSessionInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      SessionId = MmGetSessionId((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = SessionId;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessWow64Information:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v49 = (unsigned __int64 *)*((_QWORD *)Object + 176);
      if ( v49 )
        v9 = *v49;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessImageFileName:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v16 = v5 - 16;
      }
      else
      {
        v6 = (unsigned __int64)&v245;
        v16 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v9 = (unsigned __int64)(v225 + 16);
      v183 = v16;
      DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v9, &v183);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *ReturnLength = v183 + 16;
      return DeviceMapInformation;
    case ProcessLUIDDeviceMapsEnabled:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessBreakOnTermination:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v50 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v50;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v12, &Handle);
      v41 = Handle;
      if ( DeviceMapInformation < 0 )
        v41 = 0LL;
      Handle = v41;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return DeviceMapInformation;
    case ProcessDebugFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessHandleTracing:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(v12, 0x7FFFFFFF0000LL, v10, v11) )
        return -1073741790;
      P = (PVOID)((unsigned int)(v5 - 16) / 0xA0uLL);
      v51 = v6 + 16;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v52 = result;
      if ( result >= 0 )
      {
        v53 = Object;
        v54 = ObReferenceProcessHandleTable(Object);
        v55 = v54;
        v206 = v54;
        if ( v54 )
        {
          v56 = ExReferenceHandleDebugInfo(v54);
          v57 = v56;
          v207 = v56;
          if ( v56 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v58 = (unsigned int)(*(_DWORD *)(v56 + 72) % *(_DWORD *)(v56 + 4));
            v196 = v58;
            while ( 1 )
            {
              v205[1] = v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v57 + 4) )
                break;
              v59 = (_OWORD *)(v57 + 160 * v58);
              v248 = v59[5];
              v249 = v59[6];
              v250 = v59[7];
              v251 = v59[8];
              v252 = v59[9];
              v253 = v59[10];
              v254 = v59[11];
              v255 = v59[12];
              v256 = v59[13];
              v257 = v59[14];
              v60 = v249;
              if ( *(_QWORD *)v6 == (_QWORD)v249 || !*(_QWORD *)v6 )
              {
                v61 = DWORD2(v249);
                if ( DWORD2(v249) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)P )
                  {
                    P = (PVOID)(unsigned int)((_DWORD)P - 1);
                    v224 = (int)P;
                    *(_QWORD *)v51 = v60;
                    *(_OWORD *)(v51 + 8) = v248;
                    *(_DWORD *)(v51 + 24) = v61;
                    *(_OWORD *)(v51 + 32) = v250;
                    *(_OWORD *)(v51 + 48) = v251;
                    *(_OWORD *)(v51 + 64) = v252;
                    *(_OWORD *)(v51 + 80) = v253;
                    *(_OWORD *)(v51 + 96) = v254;
                    *(_OWORD *)(v51 + 112) = v255;
                    *(_OWORD *)(v51 + 128) = v256;
                    *(_OWORD *)(v51 + 144) = v257;
                    v51 += 160LL;
                    v246 = v51;
                  }
                  else
                  {
                    v52 = -1073741820;
                    i = -1073741820;
                  }
                }
              }
              if ( !(_DWORD)v58 )
                LODWORD(v58) = *(_DWORD *)(v57 + 4);
              v58 = (unsigned int)(v58 - 1);
              v196 = v58;
              LODWORD(v9) = v9 + 1;
            }
            if ( ReturnLength )
              *ReturnLength = v51 - v6;
            ExDereferenceHandleDebugInfo(v55, v57);
            v62 = Object;
            ObDereferenceProcessHandleTable(Object);
            ObfDereferenceObjectWithTag(v62, 0x79517350u);
            return v52;
          }
          else
          {
            ObDereferenceProcessHandleTable(v53);
            ObfDereferenceObjectWithTag(v53, 0x79517350u);
            return -1073741811;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v53, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ProcessIoPriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessExecuteFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        CurrentProcess = PsGetCurrentProcess();
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v12,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        CurrentProcess = Object;
      }
      ExecuteOptions = KeGetExecuteOptions(CurrentProcess, &v186);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v64, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v186;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      v208.QuadPart = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v65 = (struct _DMA_ADAPTER *)PsGetCurrentProcess();
        v188 = (volatile signed __int32 *)v65;
        Object = v65;
      }
      else
      {
        v214 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v12, &v214, 0LL);
        v65 = (struct _DMA_ADAPTER *)v214;
        v188 = (volatile signed __int32 *)v214;
        Object = v214;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        DmaOperations = (int)v65[82].DmaOperations;
        if ( DmaOperations )
          break;
        KeQuerySystemTimePrecise(&v208);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v69 = ExGenRandom(1);
        v70 = __rdtsc();
        _InterlockedCompareExchange(
          v188 + 330,
          v70 ^ v69 ^ CurrentPrcb->MmPageFaultCount ^ v208.LowPart ^ v208.HighPart ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v65 = (struct _DMA_ADAPTER *)Object;
        v188 = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)v6 = DmaOperations;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        HalPutDmaAdapter(v65);
      return v9;
    case ProcessImageInformation:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v71 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == CurrentThread->Process )
      {
        Count = (struct _DMA_ADAPTER *)*((_QWORD *)Object + 163);
        if ( !Count )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        Count = (struct _DMA_ADAPTER *)v71[163].Count;
        if ( Count )
          ObfReferenceObject(v71[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection_0(v71 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Count = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v71, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation((__int64)Count, 1, v6);
        if ( (_DWORD)v9 )
          HalPutDmaAdapter(Count);
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return DeviceMapInformation;
    case ProcessCycleTime:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v73 = result;
      if ( result < 0 )
        return result;
      v74 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v212);
      *(_QWORD *)(v6 + 8) = v212[0];
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_644;
    case ProcessPagePriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 280) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessImageFileNameWin32:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v18 = (struct _EX_RUNDOWN_REF *)Object;
      v19 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 180);
      v193 = v19;
      if ( v19 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          ObfReferenceObject(v19);
          ExReleaseRundownProtection_0(v18 + 139);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v193);
        v19 = (struct _FILE_OBJECT *)v193;
      }
      ObfDereferenceObjectWithTag(v18, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v20 = IoQueryFileDosDeviceName(v19, &ObjectNameInformation);
      HalPutDmaAdapter((PADAPTER_OBJECT)v19);
      if ( v20 >= 0 )
      {
        v21 = ObjectNameInformation;
        v22 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v22 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *(_WORD *)(v6 + 2) = v21->Name.MaximumLength;
          if ( v21->Name.MaximumLength )
          {
            v9 = v6 + 16;
            memmove((void *)(v6 + 16), v21->Name.Buffer, v21->Name.MaximumLength);
          }
          *(_QWORD *)(v6 + 8) = v9;
        }
        else
        {
          v20 = -1073741820;
          i = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v22;
        ExFreePoolWithTag(v21, 0);
      }
      return v20;
    case ProcessImageFileMapping:
      DmaAdapter = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v77 = *(void **)v6;
      v247 = *(void **)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObReferenceObjectByHandleWithTag(
                         v77,
                         0x100020u,
                         (POBJECT_TYPE)IoFileObjectType,
                         v12,
                         0x79517350u,
                         &v193,
                         0LL);
      v40 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v79 = (struct _DMA_ADAPTER *)v193;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v80 = (_DMA_OPERATIONS *)*((_QWORD *)v193 + 5);
      v81 = DmaAdapter;
      v82 = DmaAdapter[2].DmaOperations;
      v83 = 0;
      if ( v80 != v82 )
        v83 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v193);
      HalPutDmaAdapter(v81);
      result = v83;
      if ( v80 == v82 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v187 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v84 = (v187 >> 19) & 1 | 2;
      if ( (v187 & 0x40000) == 0 )
        v84 = (v187 >> 19) & 1;
      *(_DWORD *)v6 = v84;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v187 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v187 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (v5 & 1) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v87 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v87;
        v89 = v183;
        do
        {
          _BitScanForward(&v90, v87);
          v89 += 2;
          v183 = v89;
          if ( v89 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v90;
            v6 += 2LL;
            v244 = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v90);
          v87 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *ReturnLength = v89;
        v91 = (unsigned int)v5 < v89 ? 0xC0000023 : 0;
        i = v91;
        ObfDereferenceObjectWithTag(v88, 0x79517350u);
        return v91;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v92 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v92;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      memset(&v264, 0, sizeof(v264));
      v189 = 0;
      *(_OWORD *)v202 = 0LL;
      v227 = 0LL;
      if ( v12 != 1 )
        return -1073741823;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL);
      i = result;
      if ( result >= 0 )
      {
        v93 = (struct _KPROCESS *)Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          KeStackAttachProcess(v93, &v264);
          v94 = (unsigned __int64 *)v93[1].AffinityPadding[10];
          if ( v94 )
            v9 = *v94;
          if ( v9 )
          {
            v226 = *(unsigned int *)(v9 + 16);
            v189 = *(_DWORD *)(v226 + 104);
            v95 = *(_QWORD *)(v226 + 112);
            v212[1] = v95;
            v202[0] = v95;
            *(_QWORD *)&v202[2] = HIDWORD(v95);
          }
          else
          {
            v209 = *(_QWORD *)(v93[1].AffinityPadding[4] + 32);
            v96 = v209 + 164;
            if ( (unsigned __int64)(v209 + 164) >= 0x7FFFFFFF0000LL )
              v96 = 0x7FFFFFFF0000LL;
            v189 = *(_DWORD *)v96;
            v228 = 0LL;
            v97 = v209 + 176;
            if ( (unsigned __int64)(v209 + 176) >= 0x7FFFFFFF0000LL )
              v97 = 0x7FFFFFFF0000LL;
            LODWORD(v228) = *(_DWORD *)v97;
            *((_QWORD *)&v228 + 1) = *(_QWORD *)(v97 + 8);
            *(_OWORD *)v202 = v228;
            LOWORD(v95) = v228;
          }
          DeviceMapInformation = i;
          KeUnstackDetachProcess(&v264);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v98 = (unsigned __int16)v95 + 6;
          if ( ReturnLength )
            *ReturnLength = v98;
          if ( (unsigned int)v5 >= v98 )
          {
            *(_DWORD *)v6 = v189;
            *(_WORD *)(v6 + 4) = v95;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v95 )
          {
            v99 = (unsigned int)PsGetCurrentProcess();
            *(_QWORD *)Tag = (unsigned __int16)v95;
            v36 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MmCopyVirtualMemory(
                                     (int)Object,
                                     v202[2],
                                     v99,
                                     (int)v6 + 6,
                                     *(size_t *)Tag,
                                     1,
                                     (__int64)&v227);
          }
          else
          {
LABEL_353:
            v36 = (struct _EX_RUNDOWN_REF *)Object;
          }
          ExReleaseRundownProtection_0(v36 + 139);
LABEL_355:
          ObfDereferenceObjectWithTag(v36, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_334:
          ObfDereferenceObjectWithTag(v93, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ProcessHandleInformation:
      if ( (unsigned int)v5 < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      v210 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v12, &v210, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v100 = (struct _DMA_ADAPTER *)v210;
        v101 = ObReferenceProcessHandleTable(v210);
        if ( v101 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v101, v6, (unsigned int)v5, ReturnLength);
          ObDereferenceProcessHandleTable(v100);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v79 = v100;
LABEL_365:
        HalPutDmaAdapter(v79);
        return ProcessHandleInformation;
      }
      return result;
    case ProcessMitigationPolicy:
      v197 = 0;
      v179 = 0;
      v180 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v102 = *(_DWORD *)v6;
      v229 = *(_DWORD *)v6;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = PsGetCurrentProcess();
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x1000u,
                   (POBJECT_TYPE)PsProcessType,
                   v12,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case ProcessHandleCheckingMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v136 = result;
      i = result;
      if ( result < 0 )
        return result;
      v93 = (struct _KPROCESS *)Object;
      v137 = ObReferenceProcessHandleTable(Object);
      if ( !v137 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryHandleExceptions(v137) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_512;
    case ProcessKeepAliveCount:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      LOBYTE(v138) = 1;
      *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v138);
      *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(v139, 0LL);
      goto LABEL_122;
    case ProcessHandleTable:
      v211 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 v6,
                 (unsigned int)v5,
                 (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
                 1LL,
                 &v211,
                 &P);
      if ( result >= 0 )
      {
        v140 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v140 >= 0 )
        {
          v215[0] = 0LL;
          v141 = Object;
          v142 = ObReferenceProcessHandleTable(Object);
          if ( v142 )
          {
            *(_QWORD *)&v215[0] = v211;
            *((_QWORD *)&v215[0] + 1) = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v142, PspHandleTableWalker, v215, 0LL);
            ObDereferenceProcessHandleTable(v141);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v141, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v215[0]);
          ExUnlockUserBuffer((struct _MDL *)P);
          return v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v140;
        }
      }
      return result;
    case ProcessCheckStackExtentsMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 158) >> 5) & 1;
      goto LABEL_122;
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v143 = v12;
      v144 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v143, ReturnLength);
      goto LABEL_529;
    case ProcessProtectionInformation:
      v20 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v12,
              0x79517350u,
              &Object,
              0LL);
      if ( v20 < 0 )
        return v20;
      if ( (_DWORD)v5 )
      {
        v24 = (_KPROCESS *)Object;
        *(_BYTE *)v6 = PsGetProcessProtection((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 1;
        v20 = 0;
      }
      else
      {
        v20 = -1073741820;
        v24 = (_KPROCESS *)Object;
      }
      if ( !v24 )
        return v20;
LABEL_538:
      ObfDereferenceObjectWithTag(v24, 0x79517350u);
      return v20;
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v144 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (ULONG_PTR)Object,
                             (volatile void *)v6,
                             (unsigned int)v5,
                             (__int64)ReturnLength);
LABEL_529:
      DeviceMapInformation = ProcessCommandLine;
      if ( v144 )
        goto LABEL_530;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      v198 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v203 = *(_OBJECT_NAME_INFORMATION *)v6;
        v204 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v203.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v203.Name.MaximumLength + 1) >= 8u || v203.Name.Buffer )
          {
            v20 = -1073741811;
          }
          else
          {
            v20 = ObReferenceObjectByHandleWithTag(
                    ProcessHandle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v12,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v20 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v198, &v203.Name.Buffer, &v204, (_QWORD *)&v204 + 1);
              *(_DWORD *)(&v203.Name.MaximumLength + 1) ^= ((unsigned __int8)v198 ^ *((_BYTE *)&v203.Name.MaximumLength
                                                                                    + 2)) & 1;
              v203.Name.Buffer = (wchar_t *)((__int64)v203.Name.Buffer << 12);
              *(_QWORD *)&v204 = (_QWORD)v204 << 12;
              *((_QWORD *)&v204 + 1) <<= 12;
              *(_OBJECT_NAME_INFORMATION *)v6 = v203;
              *(_OWORD *)(v6 + 16) = v204;
              v20 = 0;
            }
          }
        }
        else
        {
          v20 = -1073741735;
        }
      }
      else
      {
        v20 = -1073741820;
      }
      v25 = Object;
      if ( Object )
        goto LABEL_554;
      return v20;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
        return -1073741820;
      v20 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v12,
              0x79517350u,
              &Object,
              0LL);
      if ( v20 >= 0 )
      {
        LOBYTE(v9) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
        v148 = 8 * KeQueryCpuSetsProcess((__int64)Object, v279, v147, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v148;
        if ( v148 < (unsigned int)v5 )
          LODWORD(v5) = v148;
        memmove((void *)v6, v279, (unsigned int)v5);
      }
      return v20;
    case ProcessJobMemoryInformation:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        *((_QWORD *)&v215[2] + 1) = 0LL;
        v216 = 0LL;
        if ( *((_QWORD *)Object + 162) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, &v265, 0x98u, 0LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v215[1] + 8) = JobObjectInformation;
          *(_QWORD *)&v215[1] = v261;
          v75 = v216;
          if ( (v266 & 0x200000) != 0 )
            v75 = v274;
          v216 = v75;
          v76 = *((_QWORD *)&v215[2] + 1);
          if ( (v266 & 0x200) != 0 )
            v76 = *((_QWORD *)&v272 + 1);
          *((_QWORD *)&v215[2] + 1) = v76;
          *(__m256i *)v6 = *(__m256i *)&v215[1];
          *(_QWORD *)(v6 + 32) = v216;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          LODWORD(v9) = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v9;
      }
      return result;
    case ProcessInPrivate:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_BYTE *)v6 = *((int *)Object + 280) < 0;
      goto LABEL_122;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v136 = result;
      i = result;
      if ( result < 0 )
        return result;
      v93 = (struct _KPROCESS *)Object;
      v146 = ObReferenceProcessHandleTable(Object);
      if ( !v146 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v146) != 0;
      *(_DWORD *)v6 = v9;
LABEL_512:
      ObDereferenceProcessHandleTable(v93);
      ObfDereferenceObjectWithTag(v93, 0x79517350u);
      return v136;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v149 = PsGetCurrentProcess();
        Object = v149;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v12,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v149 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v149);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v151 = NoChildProcessRestrictedPolicy - 1;
      if ( !v151 )
        goto LABEL_581;
      v152 = v151 - 1;
      if ( v152 )
      {
        if ( v152 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_581:
        *(_BYTE *)v6 = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return v9;
LABEL_585:
      ObfDereferenceObjectWithTag(v149, 0x79517350u);
      return 0;
    case ProcessHighGraphicsPriorityInformation:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 543) & 0x200) != 0;
      goto LABEL_122;
    case ProcessSubsystemInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      if ( *((_QWORD *)Object + 280) )
        LODWORD(v9) = qword_140C1DEF0;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessEnergyValues:
      memset(v278, 0, sizeof(v278));
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v73 = result;
      if ( result < 0 )
        return result;
      v74 = Object;
      PsQueryProcessEnergyValues(Object, v278);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v278, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_644;
    case ProcessPowerThrottlingState:
      v258 = 0LL;
      v259 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v154 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v12,
               0x79517350u,
               &Object,
               0LL);
      if ( v154 >= 0 )
      {
        v155 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v156 = Object;
        v154 = v155(Object, &v258);
        if ( v154 >= 0 )
        {
          *(_QWORD *)v6 = v258;
          *(_DWORD *)(v6 + 8) = v259;
          if ( ReturnLength )
            *ReturnLength = 12;
          v154 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v156, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v154;
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v157 = PsGetCurrentProcess();
        Object = v157;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v12,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v157 = Object;
      }
      *(_DWORD *)v6 = 0;
      v158 = v157[628];
      v159 = 0;
      if ( (v158 & 0x4000) != 0 )
      {
        v159 = 1;
        *(_DWORD *)v6 = 1;
        v158 = v157[628];
      }
      if ( (v158 & 0x8000) != 0 )
        *(_DWORD *)v6 = v159 | 2;
      *(_DWORD *)(v6 + 4) = v157[602];
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle != (HANDLE)-1LL )
        goto LABEL_624;
      return v9;
    case ProcessWakeInformation:
      if ( v12 )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 0,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v144 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(
                                 (__int64)CurrentThread,
                                 (__int64)Object,
                                 v6);
        if ( DeviceMapInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
          ObfDereferenceObjectWithTag(v144, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_530:
          ObfDereferenceObjectWithTag(v144, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case ProcessEnergyTrackingState:
      memset(v275, 0, sizeof(v275));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v160 = Object;
        PoQueryProcessEnergyTrackingState(Object, v275);
        v161 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v161 = v5;
        memmove((void *)v6, v275, v161);
        if ( ReturnLength )
          *ReturnLength = v161;
        i = 0;
        ObfDereferenceObjectWithTag(v160, 0x79517350u);
        return 0;
      }
      return result;
    case ProcessCaptureTrustletLiveDump:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x418u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v74 = Object;
      if ( *((_QWORD *)Object + 124) )
      {
        v73 = VslLiveDumpCaptureProcess(Object);
LABEL_644:
        ObfDereferenceObjectWithTag(v74, 0x79517350u);
        return v73;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
LABEL_150:
      v44 = ProcessTelemetryCoverage;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v44;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !(_DWORD)v5
        || ProcessInformationClass == ProcessEnableLogging && (unsigned int)v5 < 4 )
      {
        return -1073741820;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 280)) & 3;
      if ( ProcessInformationClass == ProcessEnableLogging )
        *(_DWORD *)v6 |= (v40[543] >> 17) & 0xC;
      goto LABEL_122;
    case ProcessUptimeInformation:
      v240 = 0LL;
      v241 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v218 = 0LL;
      v164 = 0LL;
      v219 = 0LL;
      v199 = 0LL;
      v220 = 0LL;
      v222 = 0LL;
      v165 = CurrentThread;
      v149 = Object;
      PspLockProcessSecurityShared((__int64)Object, (__int64)CurrentThread);
      v166 = *((_QWORD *)v149 + 292) >> 61;
      if ( (unsigned __int64)(v166 - 3) <= 1
        && (v199 = (HANDLE)(*((_QWORD *)v149 + 292) & 0x1FFFFFFFFFFFFFFFLL),
            v220 = v199,
            v218 = *((_QWORD *)v149 + 291),
            v164 = v218 - *((_QWORD *)v149 + 288),
            v219 = v164,
            v166 == 3) )
      {
        v167 = 512;
      }
      else
      {
        v167 = v222;
      }
      LODWORD(v222) = v167 & 0xFFFFFE00 | *((_BYTE *)v149 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v149 + 2171) & 0x38 | (32 * (*((_DWORD *)v149 + 543) & 4))));
      PspUnlockProcessShared((__int64)v149, (__int64)v165);
      PsGetProcessDeepFreezeStats(v149, &v240);
      v217 = v240;
      v221 = v241;
      if ( !v164 )
        v219 = v240 - *((_QWORD *)v149 + 288);
      if ( !v199 )
        v220 = (HANDLE)(*((_QWORD *)&v240 + 1) - *((_QWORD *)v149 + 289) - v241);
      v168 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v168 = v5;
      memmove((void *)v6, &v217, v168);
      if ( ReturnLength )
        *ReturnLength = v168;
      i = 0;
      goto LABEL_585;
    case ProcessImageSection:
      v199 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v12 )
      {
        v162 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v162 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v162 = *(_QWORD *)v162;
      }
      v163 = PsGetCurrentProcess();
      if ( ProcessHandle != (HANDLE)-1LL || v163 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v163[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v12, &v199);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v199;
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    case ProcessSequenceNumber:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( ReturnLength )
        *ReturnLength = 8;
LABEL_122:
      ObfDereferenceObjectWithTag(v40, 0x79517350u);
      return ExecuteOptions;
    case ProcessSecurityDomainInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
      {
        _InterlockedOr(v174, 0);
        *(_QWORD *)v6 = PspReadProcessSecurityDomain((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 8;
        i = 0;
LABEL_624:
        ObfDereferenceObjectWithTag(v157, 0x79517350u);
        return 0;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case ProcessLeapSecondInformation:
      if ( (_DWORD)v5 == 8 )
      {
        if ( ProcessHandle == (HANDLE)-1LL )
        {
          v169 = PsGetCurrentProcess();
          v170 = v169[1].AffinityPadding[4];
          if ( v170 )
          {
            v171 = 0LL;
            v172 = (__int64 *)v169[1].AffinityPadding[10];
            if ( v172 )
              v171 = *v172;
            if ( v171 )
            {
              if ( (*(_DWORD *)(v171 + 1140) & 1) != 0 )
                LODWORD(v200) = 1;
            }
            else
            {
              v173 = v200;
              if ( (*(_BYTE *)(v170 + 1984) & 1) != 0 )
                v173 = 1;
              LODWORD(v200) = v173;
            }
          }
          *(_QWORD *)v6 = v200;
          if ( ReturnLength )
            *ReturnLength = 8;
          return v9;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 8;
        return -1073741820;
      }
    default:
      return -1073741821;
  }
  switch ( v102 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v103 = Object;
      v104 = *((_DWORD *)Object + 628);
      if ( (v104 & 0x40) == 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v104 = v103[628];
      }
      if ( (v104 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v104 = v103[628];
      }
      if ( (v104 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v104 = v103[628];
      }
      if ( (v104 & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_505;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v108 = Object;
      v109 = *((_DWORD *)Object + 628);
      if ( (v109 & 0x100) != 0 )
      {
        v110 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v109 & 0x800) == 0 )
          goto LABEL_399;
        v110 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v110;
LABEL_399:
      v111 = v108[628];
      if ( (v111 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v111 = v108[628];
      }
      if ( (v111 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_505;
    case 3:
      i = 0;
      v105 = ObReferenceProcessHandleTable(Object);
      if ( v105 )
      {
        ExQueryHandleExceptionsPermanency(v105, &v179, &v180);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v179 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v180 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ObDereferenceProcessHandleTable(Object);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_505;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v106 = *((_DWORD *)Object + 628);
      if ( (v106 & 0x1000) != 0 )
      {
        v107 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v106 & 0x2000) == 0 )
          goto LABEL_505;
        v107 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v107;
      goto LABEL_505;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_505;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v112 = Object;
      v113 = *((_DWORD *)Object + 628);
      if ( (v113 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v113 = v112[628];
      }
      if ( (v113 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v113 = v112[628];
      }
      if ( (v113 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_505;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v197);
      *(_DWORD *)(v6 + 4) = v197;
      goto LABEL_505;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v114 = *((_DWORD *)Object + 628);
      if ( (v114 & 0x10000) != 0 )
      {
        v115 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v114 & 0x20000) == 0 )
          goto LABEL_505;
        v115 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v115;
      goto LABEL_505;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v116 = Object;
      v117 = *((_DWORD *)Object + 628);
      if ( (v117 & 0x80000) != 0 )
      {
        v118 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v117 & 0x100000) == 0 )
          goto LABEL_426;
        v118 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v118;
LABEL_426:
      v119 = v116[628];
      if ( (v119 & 0x200000) != 0 )
      {
        v120 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v119 & 0x400000) == 0 )
          goto LABEL_431;
        v120 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v120;
LABEL_431:
      if ( (v116[628] & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_505;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_505;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v121 = Object;
      v122 = *((_DWORD *)Object + 629);
      if ( (v122 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v122 = v121[629];
      }
      if ( (v122 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v122 = v121[629];
      }
      if ( (v122 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v122 = v121[629];
      }
      if ( (v122 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v122 = v121[629];
      }
      if ( (v122 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v122 = v121[629];
      }
      if ( (v122 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v122 = v121[629];
      }
      if ( (v122 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v122 = v121[629];
      }
      if ( (v122 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v122 = v121[629];
      }
      if ( (v122 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v122 = v121[629];
      }
      if ( (v122 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v122 = v121[629];
      }
      if ( (v122 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v122 = v121[629];
      }
      if ( (v122 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_505;
    case 13:
      i = 0;
      v123 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v124 = v123 - 1;
      if ( !v124 )
        goto LABEL_465;
      v125 = v124 - 1;
      if ( v125 )
      {
        if ( v125 != 1 )
          goto LABEL_505;
        v126 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_465:
        v126 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v126;
      goto LABEL_505;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v130 = Object;
      v131 = *((_DWORD *)Object + 628);
      if ( (v131 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v131 = v130[628];
      }
      if ( v131 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v132 = Object;
      v133 = *((_DWORD *)Object + 629);
      if ( (v133 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v133 = v132[629];
      }
      if ( (v133 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_505;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v134 = Object;
      v135 = *((_DWORD *)Object + 629);
      if ( (v135 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v135 = v134[629];
      }
      if ( (v135 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v135 = v134[629];
      }
      if ( (v135 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v135 = v134[629];
      }
      if ( (v135 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v135 = v134[629];
      }
      if ( (v135 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v135 = v134[629];
      }
      if ( (v135 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v135 = v134[629];
      }
      if ( (v135 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v135 = v134[629];
      }
      if ( (v135 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v135 = v134[629];
      }
      if ( (v135 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v135 = v134[629];
      }
      if ( v135 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_505;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v128 = RedirectionTrustPolicy - 1;
      if ( v128 )
      {
        if ( v128 != 1 )
          goto LABEL_505;
        v129 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v129 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v129;
LABEL_505:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_505;
  }
}
