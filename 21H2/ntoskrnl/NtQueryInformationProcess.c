/*
 * XREFs of NtQueryInformationProcess @ 0x14068AF10
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     PsGetWin32KFilterSet @ 0x140224240 (PsGetWin32KFilterSet.c)
 *     PsQueryProcessCommandLine @ 0x14023D260 (PsQueryProcessCommandLine.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmQueryCommitReleaseState @ 0x140242448 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x140247CE0 (PsGetProcessProtection.c)
 *     KeQuerySystemTimePrecise @ 0x140266EA0 (KeQuerySystemTimePrecise.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeEnterCriticalRegionThread @ 0x14027C8F0 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14027DCC0 (MmQueryWorkingSetInformation.c)
 *     KeQueryGroupMaskProcess @ 0x14027DD98 (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x14027DDB0 (KeQueryAffinityProcess.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     PsIsProtectedProcess @ 0x1402F4AE0 (PsIsProtectedProcess.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380BA0 (ExQueryHandleExceptionsPermanency.c)
 *     PspUnlockProcessShared @ 0x140399890 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140399FA0 (PspLockProcessSecurityShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403D05B0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1403FCEE0 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x14051C894 (KeQueryCpuSetsProcess.c)
 *     PsGetProcessSecurityDomain @ 0x140581BCC (PsGetProcessSecurityDomain.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     ExEnumHandleTable @ 0x1405E3DF0 (ExEnumHandleTable.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     ObDereferenceProcessHandleTable @ 0x1405FB710 (ObDereferenceProcessHandleTable.c)
 *     ExIsRestrictedCaller @ 0x1406017E4 (ExIsRestrictedCaller.c)
 *     PsQueryProcessQuotaCounters @ 0x140604894 (PsQueryProcessQuotaCounters.c)
 *     PsQueryFullProcessImageName @ 0x1406084EC (PsQueryFullProcessImageName.c)
 *     KeGetExecuteOptions @ 0x14060D3E8 (KeGetExecuteOptions.c)
 *     ObGetProcessHandleCount @ 0x1406138EC (ObGetProcessHandleCount.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14061E2C0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406215E8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsQueryStatisticsProcess @ 0x140682920 (PsQueryStatisticsProcess.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PspQueryQuotaLimits @ 0x140689EEC (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x14068A0D0 (IoQueryFileDosDeviceName.c)
 *     MmGetSectionInformation @ 0x14068ABA0 (MmGetSectionInformation.c)
 *     PsQueryRuntimeProcess @ 0x14068AE40 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x14068ED10 (ObQueryDeviceMapInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A0CC4 (EtwQueryProcessTelemetryInfo.c)
 *     PsGetProcessDeepFreezeStats @ 0x1406A5BAC (PsGetProcessDeepFreezeStats.c)
 *     PsQueryProcessEnergyValues @ 0x1406D8A30 (PsQueryProcessEnergyValues.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     PsQueryProcessAttributes @ 0x1406F0684 (PsQueryProcessAttributes.c)
 *     PsReferenceProcessFilePointer @ 0x1406F4310 (PsReferenceProcessFilePointer.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F4388 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x140781D30 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 *     DbgkOpenProcessDebugPort @ 0x140884548 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x14088FB08 (VslGetSecurePebAddress.c)
 *     VslLiveDumpCaptureProcess @ 0x14088FEAC (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408F2A48 (PoQueryProcessEnergyTrackingState.c)
 *     PsGetKeepAliveCountProcess @ 0x1409079E4 (PsGetKeepAliveCountProcess.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140907A20 (PsQueryTotalCycleTimeProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x140908208 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409083B0 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090CB78 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x140934F1C (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C824 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x14094CA64 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x14094CA74 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x14094CC74 (ExReferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned int *v9; // r14
  unsigned __int8 v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  unsigned int v14; // ecx
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v16; // r12
  struct _FILE_OBJECT *v17; // rbx
  int v18; // r12d
  POBJECT_NAME_INFORMATION v19; // rbx
  ULONG v20; // edi
  unsigned __int64 v21; // rdi
  _KPROCESS *v22; // rbx
  PVOID v23; // rcx
  __int64 v24; // r8
  unsigned __int64 Group; // rdx
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  _DWORD *v28; // rcx
  int v29; // edx
  int v30; // ecx
  int v31; // ebx
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  struct _EX_RUNDOWN_REF *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rcx
  NTSTATUS ExecuteOptions; // ebx
  _DWORD *v38; // rcx
  HANDLE v39; // rdx
  int ProcessHandleCount; // edi
  NTSTATUS ProcessTelemetryCoverage; // eax
  NTSTATUS v42; // ebx
  int v43; // ebx
  int v44; // ebx
  unsigned int v45; // edi
  int SessionId; // ebx
  unsigned int **v47; // rax
  int v48; // ebx
  unsigned __int64 v49; // r13
  NTSTATUS v50; // edi
  struct _EX_RUNDOWN_REF *v51; // r12
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rdx
  _OWORD *v57; // rax
  __int64 v58; // r9
  int v59; // eax
  PVOID v60; // r12
  void *CurrentProcess; // r10
  void *v62; // r10
  struct _DMA_ADAPTER *v63; // rdx
  int DmaOperations; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v67; // ecx
  unsigned __int64 v68; // rax
  struct _EX_RUNDOWN_REF *v69; // r13
  struct _DMA_ADAPTER *Count; // r12
  NTSTATUS v71; // ebx
  PVOID v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  void *v75; // rdi
  NTSTATUS ProcessHandleInformation; // edi
  struct _DMA_ADAPTER *v77; // rcx
  _DMA_OPERATIONS *v78; // rsi
  struct _DMA_ADAPTER *v79; // rbx
  _DMA_OPERATIONS *v80; // rdi
  NTSTATUS v81; // r12d
  int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned int v85; // eax
  void *v86; // r8
  ULONG v87; // ecx
  unsigned int v88; // edx
  NTSTATUS v89; // ebx
  __int64 v90; // rbx
  struct _KPROCESS *v91; // rbx
  unsigned int **v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rcx
  ULONG v96; // eax
  int v97; // eax
  struct _EX_RUNDOWN_REF *v98; // r14
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // edi
  __int64 v104; // r8
  _DWORD *v105; // rcx
  int v106; // eax
  __int64 v107; // rax
  int v108; // ecx
  int v109; // eax
  int v110; // ecx
  int v111; // eax
  _DWORD *v112; // rcx
  int v113; // eax
  int v114; // eax
  int v115; // eax
  _DWORD *v116; // rcx
  int v117; // eax
  int v118; // ecx
  int v119; // eax
  _DWORD *v120; // rcx
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  _DWORD *v125; // rcx
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int RedirectionTrustPolicy; // eax
  int v132; // eax
  int v133; // eax
  _DWORD *v134; // rcx
  int v135; // eax
  _DWORD *v136; // rcx
  int v137; // eax
  _DWORD *v138; // rcx
  int v139; // eax
  NTSTATUS v140; // edi
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  int v144; // ebx
  struct _EX_RUNDOWN_REF *v145; // rbx
  __int64 v146; // rax
  char v147; // r9
  PVOID v148; // rbx
  NTSTATUS ProcessCommandLine; // eax
  __int64 v150; // rax
  __int64 v151; // r8
  ULONG v152; // ebx
  struct _KPROCESS *v153; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v155; // eax
  int v156; // eax
  unsigned __int64 ExtensionTable; // rdi
  int v158; // ebx
  __int64 (__fastcall *v159)(PVOID, __int64 *); // rax
  PVOID v160; // rdi
  _DWORD *v161; // rcx
  int v162; // edx
  int v163; // eax
  PVOID v164; // rdi
  ULONG v165; // ebx
  __int64 v166; // rcx
  _KPROCESS *v167; // rcx
  unsigned __int64 v168; // r12
  struct _KTHREAD *v169; // rdi
  unsigned __int64 v170; // rcx
  int v171; // r8d
  ULONG v172; // edi
  _KPROCESS *v173; // rax
  unsigned __int64 v174; // r8
  __int64 v175; // rcx
  __int64 *v176; // rdx
  int v177; // eax
  signed __int32 v178[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-9A0h]
  _BYTE v182[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v183; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v184; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v186; // [rsp+58h] [rbp-990h]
  ULONG v187; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v189; // [rsp+70h] [rbp-978h]
  int v190; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v191; // [rsp+78h] [rbp-970h]
  volatile signed __int32 *v192; // [rsp+80h] [rbp-968h]
  int v193; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v197; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v198; // [rsp+B0h] [rbp-938h] BYREF
  int v199; // [rsp+B4h] [rbp-934h] BYREF
  int v200; // [rsp+B8h] [rbp-930h]
  int v201; // [rsp+BCh] [rbp-92Ch] BYREF
  int v202; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v203; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v204; // [rsp+D0h] [rbp-918h]
  PVOID v205; // [rsp+D8h] [rbp-910h]
  int v206[4]; // [rsp+E0h] [rbp-908h]
  _OBJECT_NAME_INFORMATION v207; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v208; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v209[4]; // [rsp+110h] [rbp-8D8h] BYREF
  __int64 v210; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v211; // [rsp+128h] [rbp-8C0h] BYREF
  LARGE_INTEGER v212; // [rsp+130h] [rbp-8B8h] BYREF
  __int64 v213; // [rsp+138h] [rbp-8B0h]
  PVOID v214; // [rsp+140h] [rbp-8A8h] BYREF
  __int64 v215; // [rsp+148h] [rbp-8A0h] BYREF
  _QWORD v216[2]; // [rsp+150h] [rbp-898h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+160h] [rbp-888h] BYREF
  PVOID v218; // [rsp+168h] [rbp-880h] BYREF
  _OWORD v219[3]; // [rsp+170h] [rbp-878h] BYREF
  __int64 v220; // [rsp+1A0h] [rbp-848h]
  __int128 v221; // [rsp+1A8h] [rbp-840h] BYREF
  unsigned __int64 v222; // [rsp+1B8h] [rbp-830h]
  unsigned __int64 v223; // [rsp+1C0h] [rbp-828h]
  HANDLE v224; // [rsp+1C8h] [rbp-820h]
  __int64 v225; // [rsp+1D0h] [rbp-818h]
  __int64 v226; // [rsp+1D8h] [rbp-810h]
  int v227; // [rsp+1E0h] [rbp-808h]
  int v228; // [rsp+1E4h] [rbp-804h]
  char *v229; // [rsp+1E8h] [rbp-800h]
  __int64 v230; // [rsp+1F0h] [rbp-7F8h]
  __int64 v231; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v232; // [rsp+200h] [rbp-7E8h]
  int v233; // [rsp+210h] [rbp-7D8h]
  __int128 v234; // [rsp+218h] [rbp-7D0h]
  __int128 v235; // [rsp+228h] [rbp-7C0h]
  __int128 v236; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v238; // [rsp+260h] [rbp-788h] BYREF
  __int128 v239; // [rsp+270h] [rbp-778h] BYREF
  __int128 v240; // [rsp+280h] [rbp-768h] BYREF
  __int128 v241; // [rsp+290h] [rbp-758h] BYREF
  __int128 v242; // [rsp+2A0h] [rbp-748h]
  __int128 v243; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v244; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v245; // [rsp+2D0h] [rbp-718h]
  _OWORD v246[6]; // [rsp+2E0h] [rbp-708h] BYREF
  __int64 v247; // [rsp+340h] [rbp-6A8h]
  unsigned __int64 v248; // [rsp+350h] [rbp-698h]
  __int128 v249; // [rsp+358h] [rbp-690h] BYREF
  unsigned __int64 v250; // [rsp+368h] [rbp-680h]
  void *v251; // [rsp+370h] [rbp-678h]
  __int128 v252; // [rsp+380h] [rbp-668h]
  __int128 v253; // [rsp+390h] [rbp-658h]
  __int128 v254; // [rsp+3A0h] [rbp-648h]
  __int128 v255; // [rsp+3B0h] [rbp-638h]
  __int128 v256; // [rsp+3C0h] [rbp-628h]
  __int128 v257; // [rsp+3D0h] [rbp-618h]
  __int128 v258; // [rsp+3E0h] [rbp-608h]
  __int128 v259; // [rsp+3F0h] [rbp-5F8h]
  __int128 v260; // [rsp+400h] [rbp-5E8h]
  __int128 v261; // [rsp+410h] [rbp-5D8h]
  __int64 v262; // [rsp+420h] [rbp-5C8h] BYREF
  int v263; // [rsp+428h] [rbp-5C0h]
  __int128 JobObjectInformation; // [rsp+430h] [rbp-5B8h] BYREF
  __int128 v265; // [rsp+440h] [rbp-5A8h]
  __int64 v266; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v268; // [rsp+488h] [rbp-560h] BYREF
  __int128 v269; // [rsp+4C0h] [rbp-528h] BYREF
  __int128 v270; // [rsp+4D0h] [rbp-518h]
  __int128 v271; // [rsp+4E0h] [rbp-508h]
  __int128 v272; // [rsp+4F0h] [rbp-4F8h]
  __int128 v273; // [rsp+500h] [rbp-4E8h]
  __int128 v274; // [rsp+510h] [rbp-4D8h]
  __int128 v275; // [rsp+520h] [rbp-4C8h]
  __int128 v276; // [rsp+530h] [rbp-4B8h]
  __int128 v277; // [rsp+540h] [rbp-4A8h]
  __int64 v278; // [rsp+550h] [rbp-498h]
  _OWORD v279[9]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v280[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v281[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _BYTE v282[432]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v283[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v186 = ProcessHandle;
  v205 = ProcessInformation;
  v229 = (char *)ProcessInformation;
  v209[2] = ProcessInformationLength;
  v192 = (volatile signed __int32 *)ReturnLength;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v187 = 0;
  Handle = 0LL;
  v190 = 0;
  memset(v281, 0, 0xA8uLL);
  v197 = 0LL;
  GroupMaskProcess = 0;
  v209[0] = 0;
  v227 = 0;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v269 = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  v272 = 0LL;
  v273 = 0LL;
  v274 = 0LL;
  v275 = 0LL;
  v276 = 0LL;
  v277 = 0LL;
  v278 = 0LL;
  memset(&v219[1], 0, 32);
  v220 = 0LL;
  v204 = 0LL;
  v249 = 0LL;
  v211 = 0LL;
  JobObjectInformation = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  v210 = 0LL;
  ObjectNameInformation = 0LL;
  v189 = 0;
  Object = 0LL;
  v216[0] = 0LL;
  v198 = 0;
  memset(v246, 0, sizeof(v246));
  v247 = 0LL;
  Src = 0LL;
  v238 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  v241 = 0LL;
  v242 = 0LL;
  v243 = 0LL;
  v10 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v182[1] = v10;
  CurrentThread = KeGetCurrentThread();
  if ( !v10 )
    goto LABEL_23;
  if ( ProcessInformationClass == ProcessProtectionInformation )
  {
LABEL_13:
    v11 = 0LL;
    goto LABEL_14;
  }
  if ( ProcessInformationClass != ProcessCommitReleaseInformation )
  {
    if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
    {
      if ( ProcessInformationClass == ProcessSequenceNumber )
      {
        v11 = 7LL;
      }
      else if ( ProcessInformationClass == ProcessSecurityDomainInformation )
      {
        v11 = 7LL;
      }
      else
      {
        v11 = 3LL;
        if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
          v11 = 0LL;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v11 = 7LL;
LABEL_14:
  if ( (_DWORD)v5 )
  {
    if ( (v11 & v6) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v6 + v5 > 0x7FFFFFFF0000LL || v6 + v5 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( ReturnLength )
  {
    v12 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
LABEL_23:
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      memset(v280, 0, 0xA8uLL);
      v182[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v21 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        LODWORD(v5) = 64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v21 = 0LL;
        ObjectNameInformation = 0LL;
      }
      v187 = v5;
      P = (PVOID)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v18 = result;
      i = result;
      if ( result < 0 )
        return result;
      v22 = (_KPROCESS *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 501);
      *(_QWORD *)(v6 + 8) = v22[1].AffinityPadding[4];
      if ( (v22->SecureState.SecureHandle & 1) != 0 )
        VslGetSecurePebAddress(v22);
      v23 = v22;
      if ( v18 >= 0 )
      {
        P = 0LL;
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v22);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 || v22 == CurrentThread->Process )
        {
          KeQueryAffinityProcess((__int64)v22, v280, &GroupMaskProcess, 0LL);
          v24 = GroupMaskProcess;
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 )
          {
            _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
            goto LABEL_69;
          }
          if ( v22 == CurrentThread->Process )
          {
            Group = CurrentThread->UserAffinity.Group;
            if ( _bittest64(&v24, Group) )
            {
LABEL_69:
              if ( (_DWORD)Group != 20 )
                P = (PVOID)*((_QWORD *)v280 + Group + 1);
            }
          }
        }
        if ( v21 )
          PsQueryProcessAttributes(v22, v182, 0LL);
        *(_QWORD *)(v6 + 16) = P;
        *(_DWORD *)(v6 + 24) = v22->BasePriority;
        *(_QWORD *)(v6 + 32) = v22[1].Header.WaitListHead.Flink;
        *(_QWORD *)(v6 + 40) = v22[1].AffinityPadding[2];
        if ( v21 )
        {
          *(_DWORD *)(v21 + 56) = 0;
          if ( PsIsProtectedProcess((__int64)v22) )
          {
            *(_DWORD *)(v21 + 56) = 1;
            LODWORD(v9) = 1;
          }
          v26 = v22[1].AffinityPadding[10];
          if ( v26 )
          {
            v27 = *(_WORD *)(v26 + 8);
            if ( v27 == 332 || v27 == 452 )
              *(_DWORD *)(v21 + 56) = (unsigned int)v9 | 2;
          }
          v28 = (_DWORD *)&v22[1].DirectoryTableBase + 1;
          if ( (v22[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
            *(_DWORD *)(v21 + 56) |= 4u;
          v22 = (_KPROCESS *)Object;
          v29 = *(_DWORD *)(v21 + 56) ^ ((unsigned __int8)*(_DWORD *)(v21 + 56) ^ (unsigned __int8)(*((_DWORD *)Object + 280) >> 4)) & 8;
          *(_DWORD *)(v21 + 56) = v29;
          if ( v22->FreezeCount + ((*(_DWORD *)&v22->0 >> 3) & 1) )
          {
            v29 |= 0x10u;
            *(_DWORD *)(v21 + 56) = v29;
          }
          v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(*v28 >> 15)) & 0x20;
          *(_DWORD *)(v21 + 56) = v30;
          if ( v182[0] )
          {
            v30 |= 0x40u;
            *(_DWORD *)(v21 + 56) = v30;
          }
          if ( (v22->SecureState.SecureHandle & 1) != 0 )
          {
            v30 |= 0x80u;
            *(_DWORD *)(v21 + 56) = v30;
          }
          if ( *(_QWORD *)&v22[2].Affinity.Count )
            *(_DWORD *)(v21 + 56) = v30 | 0x100;
          v18 = i;
        }
        if ( ReturnLength )
          *ReturnLength = v5;
        goto LABEL_543;
      }
LABEL_559:
      ObfDereferenceObjectWithTag(v23, 0x79517350u);
      return v18;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits(ProcessHandle, 0x7FFFFFFF0000LL, (void *)v6, v5, ReturnLength, v10);
    case ProcessIoCounters:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      PsQueryStatisticsProcess((__int64)Object, v246);
      v234 = *(_OWORD *)((char *)&v246[2] + 8);
      v235 = *(_OWORD *)((char *)&v246[3] + 8);
      v236 = *(_OWORD *)((char *)&v246[4] + 8);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v234;
      *(_OWORD *)(v6 + 16) = v235;
      *(_OWORD *)(v6 + 32) = v236;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v32 = Object;
      Src = *((_OWORD *)Object + 73);
      LODWORD(v238) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v238 + 1, &v239, &v243, &v210, &v211, v209);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters((__int64)v32, 1, &v240, (_QWORD *)&v239 + 1);
      PsQueryProcessQuotaCounters(v33, 0, &v241, (_QWORD *)&v240 + 1);
      *((_QWORD *)&v241 + 1) = v32[201] << 12;
      *(_QWORD *)&v242 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v243 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v242 + 1) = *((_QWORD *)&v241 + 1);
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v34 = (struct _EX_RUNDOWN_REF *)Object;
      v35 = PsQueryRuntimeProcess((__int64)Object, &v198);
      v36 = KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)v35;
      *(_QWORD *)(v6 + 24) = v36 * v198;
      *(struct _EX_RUNDOWN_REF *)v6 = v34[141];
      *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v34[264];
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
                 v10,
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
                 v10,
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v31 = *((_DWORD *)Object + 382);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v31;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessPooledUsageAndLimits:
      return PspQueryPooledQuotaLimits(ProcessHandle, v10);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch(ProcessHandle, (__int64)ReturnLength, v10);
    case ProcessPriorityClass:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      HIBYTE(v189) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v189;
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
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v43 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v43;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessHandleCount:
      v199 = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &v199);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = v199;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v34 = (struct _EX_RUNDOWN_REF *)Object;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
        || (KeQueryAffinityProcess((__int64)v34, v281, &GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ObfDereferenceObjectWithTag(v34, 0x79517350u);
        return -1073741811;
      }
      _BitScanForward((unsigned int *)&v83, GroupMaskProcess);
      v84 = *((_QWORD *)v281 + v83 + 1);
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v83;
      *(_QWORD *)v6 = v84;
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
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v44 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v44;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessDeviceMap:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v191 = *(_DWORD *)(v6 + 40);
        v45 = v191;
        if ( (v191 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v45 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v45);
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
                 v10,
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v47 = (unsigned int **)*((_QWORD *)Object + 176);
      if ( v47 )
        v9 = *v47;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v14 = v5 - 16;
      }
      else
      {
        v6 = (unsigned __int64)&v249;
        v14 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v9 = (unsigned int *)(v229 + 16);
      v187 = v14;
      DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, (_OWORD *)v6, v9, &v187);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *ReturnLength = v187 + 16;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v48 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v48;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v10, &Handle);
      v39 = Handle;
      if ( DeviceMapInformation < 0 )
        v39 = 0LL;
      Handle = v39;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessHandleTracing:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( ExIsRestrictedCaller(v10) )
        return -1073741790;
      P = (PVOID)((unsigned int)(v5 - 16) / 0xA0uLL);
      v49 = v6 + 16;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v50 = result;
      if ( result >= 0 )
      {
        v51 = (struct _EX_RUNDOWN_REF *)Object;
        v52 = ObReferenceProcessHandleTable(Object);
        v53 = v52;
        v210 = v52;
        if ( v52 )
        {
          v54 = ExReferenceHandleDebugInfo(v52);
          v55 = v54;
          v211 = v54;
          if ( v54 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v56 = (unsigned int)(*(_DWORD *)(v54 + 72) % *(_DWORD *)(v54 + 4));
            v200 = v56;
            while ( 1 )
            {
              v209[1] = (_DWORD)v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v55 + 4) )
                break;
              v57 = (_OWORD *)(v55 + 160 * v56);
              v252 = v57[5];
              v253 = v57[6];
              v254 = v57[7];
              v255 = v57[8];
              v256 = v57[9];
              v257 = v57[10];
              v258 = v57[11];
              v259 = v57[12];
              v260 = v57[13];
              v261 = v57[14];
              v58 = v253;
              if ( *(_QWORD *)v6 == (_QWORD)v253 || !*(_QWORD *)v6 )
              {
                v59 = DWORD2(v253);
                if ( DWORD2(v253) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)P )
                  {
                    P = (PVOID)(unsigned int)((_DWORD)P - 1);
                    v228 = (int)P;
                    *(_QWORD *)v49 = v58;
                    *(_OWORD *)(v49 + 8) = v252;
                    *(_DWORD *)(v49 + 24) = v59;
                    *(_OWORD *)(v49 + 32) = v254;
                    *(_OWORD *)(v49 + 48) = v255;
                    *(_OWORD *)(v49 + 64) = v256;
                    *(_OWORD *)(v49 + 80) = v257;
                    *(_OWORD *)(v49 + 96) = v258;
                    *(_OWORD *)(v49 + 112) = v259;
                    *(_OWORD *)(v49 + 128) = v260;
                    *(_OWORD *)(v49 + 144) = v261;
                    v49 += 160LL;
                    v250 = v49;
                  }
                  else
                  {
                    v50 = -1073741820;
                    i = -1073741820;
                  }
                }
              }
              if ( !(_DWORD)v56 )
                LODWORD(v56) = *(_DWORD *)(v55 + 4);
              v56 = (unsigned int)(v56 - 1);
              v200 = v56;
              LODWORD(v9) = (_DWORD)v9 + 1;
            }
            if ( ReturnLength )
              *ReturnLength = v49 - v6;
            ExDereferenceHandleDebugInfo(v53, v55);
            v60 = Object;
            ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
            ObfDereferenceObjectWithTag(v60, 0x79517350u);
            return v50;
          }
          else
          {
            ObDereferenceProcessHandleTable(v51);
            ObfDereferenceObjectWithTag(v51, 0x79517350u);
            return -1073741811;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v51, 0x79517350u);
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v38 = Object;
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
                   v10,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        CurrentProcess = Object;
      }
      ExecuteOptions = KeGetExecuteOptions((__int64)CurrentProcess, &v190);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v190;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      v212.QuadPart = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v63 = (struct _DMA_ADAPTER *)PsGetCurrentProcess();
        v192 = (volatile signed __int32 *)v63;
        Object = v63;
      }
      else
      {
        v218 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v10, &v218, 0LL);
        v63 = (struct _DMA_ADAPTER *)v218;
        v192 = (volatile signed __int32 *)v218;
        Object = v218;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        DmaOperations = (int)v63[82].DmaOperations;
        if ( DmaOperations )
          break;
        KeQuerySystemTimePrecise(&v212);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v67 = ExGenRandom(1);
        v68 = __rdtsc();
        _InterlockedCompareExchange(
          v192 + 330,
          v68 ^ v67 ^ CurrentPrcb->MmPageFaultCount ^ v212.LowPart ^ v212.HighPart ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v63 = (struct _DMA_ADAPTER *)Object;
        v192 = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)v6 = DmaOperations;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        HalPutDmaAdapter(v63);
      return (int)v9;
    case ProcessImageInformation:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v69 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == CurrentThread->Process )
      {
        Count = (struct _DMA_ADAPTER *)*((_QWORD *)Object + 163);
        if ( !Count )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
      {
        Count = (struct _DMA_ADAPTER *)v69[163].Count;
        if ( Count )
          ObfReferenceObject(v69[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection(v69 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Count = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v69, 0x79517350u);
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v71 = result;
      if ( result < 0 )
        return result;
      v72 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v216);
      *(_QWORD *)(v6 + 8) = v216[0];
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_649;
    case ProcessPagePriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 280) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessImageFileNameWin32:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v16 = (struct _EX_RUNDOWN_REF *)Object;
      v17 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 180);
      v197 = v17;
      if ( v17 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        {
          ObfReferenceObject(v17);
          ExReleaseRundownProtection(v16 + 139);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v197);
        v17 = (struct _FILE_OBJECT *)v197;
      }
      ObfDereferenceObjectWithTag(v16, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v18 = IoQueryFileDosDeviceName(v17, &ObjectNameInformation);
      HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      if ( v18 >= 0 )
      {
        v19 = ObjectNameInformation;
        v20 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v20 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *(_WORD *)(v6 + 2) = v19->Name.MaximumLength;
          if ( v19->Name.MaximumLength )
          {
            v9 = (unsigned int *)(v6 + 16);
            memmove((void *)(v6 + 16), v19->Name.Buffer, v19->Name.MaximumLength);
          }
          *(_QWORD *)(v6 + 8) = v9;
        }
        else
        {
          v18 = -1073741820;
          i = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v20;
        ExFreePoolWithTag(v19, 0);
      }
      return v18;
    case ProcessImageFileMapping:
      DmaAdapter = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v75 = *(void **)v6;
      v251 = *(void **)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObReferenceObjectByHandleWithTag(
                         v75,
                         0x100020u,
                         (POBJECT_TYPE)IoFileObjectType,
                         v10,
                         0x79517350u,
                         &v197,
                         0LL);
      v38 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v77 = (struct _DMA_ADAPTER *)v197;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v78 = (_DMA_OPERATIONS *)*((_QWORD *)v197 + 5);
      v79 = DmaAdapter;
      v80 = DmaAdapter[2].DmaOperations;
      v81 = 0;
      if ( v78 != v80 )
        v81 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v197);
      HalPutDmaAdapter(v79);
      result = v81;
      if ( v78 == v80 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v191 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v82 = (v191 >> 19) & 1 | 2;
      if ( (v191 & 0x40000) == 0 )
        v82 = (v191 >> 19) & 1;
      *(_DWORD *)v6 = v82;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v191 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v191 & 0x200000) != 0;
      *(_DWORD *)v6 = (_DWORD)v9;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v85 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v85;
        v87 = v187;
        do
        {
          _BitScanForward(&v88, v85);
          v87 += 2;
          v187 = v87;
          if ( v87 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v88;
            v6 += 2LL;
            v248 = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v88);
          v85 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *ReturnLength = v87;
        v89 = (unsigned int)v5 < v87 ? 0xC0000023 : 0;
        i = v89;
        ObfDereferenceObjectWithTag(v86, 0x79517350u);
        return v89;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v90 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v90;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      memset(&v268, 0, sizeof(v268));
      v193 = 0;
      *(_OWORD *)v206 = 0LL;
      v231 = 0LL;
      if ( v10 != 1 )
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
        v91 = (struct _KPROCESS *)Object;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        {
          KeStackAttachProcess(v91, &v268);
          v92 = (unsigned int **)v91[1].AffinityPadding[10];
          if ( v92 )
            v9 = *v92;
          if ( v9 )
          {
            v230 = v9[4];
            v193 = *(_DWORD *)(v230 + 104);
            v93 = *(_QWORD *)(v230 + 112);
            v216[1] = v93;
            v206[0] = v93;
            *(_QWORD *)&v206[2] = HIDWORD(v93);
          }
          else
          {
            v213 = *(_QWORD *)(v91[1].AffinityPadding[4] + 32);
            v94 = v213 + 164;
            if ( (unsigned __int64)(v213 + 164) >= 0x7FFFFFFF0000LL )
              v94 = 0x7FFFFFFF0000LL;
            v193 = *(_DWORD *)v94;
            v232 = 0LL;
            v95 = v213 + 176;
            if ( (unsigned __int64)(v213 + 176) >= 0x7FFFFFFF0000LL )
              v95 = 0x7FFFFFFF0000LL;
            LODWORD(v232) = *(_DWORD *)v95;
            *((_QWORD *)&v232 + 1) = *(_QWORD *)(v95 + 8);
            *(_OWORD *)v206 = v232;
            LOWORD(v93) = v232;
          }
          DeviceMapInformation = i;
          KeUnstackDetachProcess(&v268);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v96 = (unsigned __int16)v93 + 6;
          if ( ReturnLength )
            *ReturnLength = v96;
          if ( (unsigned int)v5 >= v96 )
          {
            *(_DWORD *)v6 = v193;
            *(_WORD *)(v6 + 4) = v93;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v93 )
          {
            v97 = (unsigned int)PsGetCurrentProcess();
            *(_QWORD *)Tag = (unsigned __int16)v93;
            v34 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MmCopyVirtualMemory(
                                     (int)Object,
                                     v206[2],
                                     v97,
                                     (int)v6 + 6,
                                     *(size_t *)Tag,
                                     1,
                                     (__int64)&v231);
          }
          else
          {
LABEL_353:
            v34 = (struct _EX_RUNDOWN_REF *)Object;
          }
          ExReleaseRundownProtection(v34 + 139);
LABEL_355:
          ObfDereferenceObjectWithTag(v34, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_334:
          ObfDereferenceObjectWithTag(v91, 0x79517350u);
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
      v214 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v10, &v214, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v98 = (struct _EX_RUNDOWN_REF *)v214;
        v99 = ObReferenceProcessHandleTable(v214);
        if ( v99 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v99, v6, (unsigned int)v5, ReturnLength);
          ObDereferenceProcessHandleTable(v98);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v100, v101, v102);
        v77 = (struct _DMA_ADAPTER *)v98;
LABEL_365:
        HalPutDmaAdapter(v77);
        return ProcessHandleInformation;
      }
      return result;
    case ProcessMitigationPolicy:
      v201 = 0;
      v183 = 0;
      v184 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v103 = *(_DWORD *)v6;
      v233 = *(_DWORD *)v6;
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
                   v10,
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v140 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v141 = ObReferenceProcessHandleTable(Object);
      if ( !v141 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryHandleExceptions(v141) != 0;
      *(_DWORD *)v6 = (_DWORD)v9;
      goto LABEL_517;
    case ProcessKeepAliveCount:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      LOBYTE(v142) = 1;
      *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v142);
      *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(v143, 0LL);
      goto LABEL_122;
    case ProcessHandleTable:
      v215 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v215, (struct _MDL **)&P);
      if ( result >= 0 )
      {
        v144 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v144 >= 0 )
        {
          v219[0] = 0LL;
          v145 = (struct _EX_RUNDOWN_REF *)Object;
          v146 = ObReferenceProcessHandleTable(Object);
          if ( v146 )
          {
            *(_QWORD *)&v219[0] = v215;
            *((_QWORD *)&v219[0] + 1) = (unsigned int)v5 >> 2;
            ExEnumHandleTable(
              v146,
              (__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64))PspHandleTableWalker,
              (__int64)v219,
              0LL);
            ObDereferenceProcessHandleTable(v145);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v145, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v219[0]);
          ExUnlockUserBuffer((struct _MDL *)P);
          return (int)v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v144;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 158) >> 5) & 1;
      goto LABEL_122;
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v147 = v10;
      v148 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((struct _EX_RUNDOWN_REF *)Object, v6, v5, v147, ReturnLength);
      goto LABEL_534;
    case ProcessProtectionInformation:
      v18 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      if ( v18 < 0 )
        return v18;
      if ( (_DWORD)v5 )
      {
        v22 = (_KPROCESS *)Object;
        *(_BYTE *)v6 = PsGetProcessProtection((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 1;
        v18 = 0;
      }
      else
      {
        v18 = -1073741820;
        v22 = (_KPROCESS *)Object;
      }
      if ( !v22 )
        return v18;
LABEL_543:
      ObfDereferenceObjectWithTag(v22, 0x79517350u);
      return v18;
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v148 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (ULONG_PTR)Object,
                             (volatile void *)v6,
                             (unsigned int)v5,
                             (__int64)ReturnLength);
LABEL_534:
      DeviceMapInformation = ProcessCommandLine;
      if ( v148 )
        goto LABEL_535;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      v202 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v207 = *(_OBJECT_NAME_INFORMATION *)v6;
        v208 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v207.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v207.Name.MaximumLength + 1) >= 8u || v207.Name.Buffer )
          {
            v18 = -1073741811;
          }
          else
          {
            v18 = ObReferenceObjectByHandleWithTag(
                    ProcessHandle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v10,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v18 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v202, &v207.Name.Buffer, &v208, (_QWORD *)&v208 + 1);
              *(_DWORD *)(&v207.Name.MaximumLength + 1) ^= ((unsigned __int8)v202 ^ *((_BYTE *)&v207.Name.MaximumLength
                                                                                    + 2)) & 1;
              v207.Name.Buffer = (wchar_t *)((__int64)v207.Name.Buffer << 12);
              *(_QWORD *)&v208 = (_QWORD)v208 << 12;
              *((_QWORD *)&v208 + 1) <<= 12;
              *(_OBJECT_NAME_INFORMATION *)v6 = v207;
              *(_OWORD *)(v6 + 16) = v208;
              v18 = 0;
            }
          }
        }
        else
        {
          v18 = -1073741735;
        }
      }
      else
      {
        v18 = -1073741820;
      }
      v23 = Object;
      if ( Object )
        goto LABEL_559;
      return v18;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
        return -1073741820;
      v18 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      if ( v18 >= 0 )
      {
        LOBYTE(v9) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
        v152 = 8 * KeQueryCpuSetsProcess((__int64)Object, v283, v151, (int)v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v152;
        if ( v152 < (unsigned int)v5 )
          LODWORD(v5) = v152;
        memmove((void *)v6, v283, (unsigned int)v5);
      }
      return v18;
    case ProcessJobMemoryInformation:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        *((_QWORD *)&v219[2] + 1) = 0LL;
        v220 = 0LL;
        if ( *((_QWORD *)Object + 162) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, &v269, 0x98u, 0LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v219[1] + 8) = JobObjectInformation;
          *(_QWORD *)&v219[1] = v265;
          v73 = v220;
          if ( (v270 & 0x200000) != 0 )
            v73 = v278;
          v220 = v73;
          v74 = *((_QWORD *)&v219[2] + 1);
          if ( (v270 & 0x200) != 0 )
            v74 = *((_QWORD *)&v276 + 1);
          *((_QWORD *)&v219[2] + 1) = v74;
          *(__m256i *)v6 = *(__m256i *)&v219[1];
          *(_QWORD *)(v6 + 32) = v220;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          LODWORD(v9) = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (int)v9;
      }
      return result;
    case ProcessInPrivate:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_BYTE *)v6 = *((int *)Object + 280) < 0;
      goto LABEL_122;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v140 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v150 = ObReferenceProcessHandleTable(Object);
      if ( !v150 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v150) != 0;
      *(_DWORD *)v6 = (_DWORD)v9;
LABEL_517:
      ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v91);
      ObfDereferenceObjectWithTag(v91, 0x79517350u);
      return v140;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v153 = PsGetCurrentProcess();
        Object = v153;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v153 = (struct _KPROCESS *)Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v153);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v155 = NoChildProcessRestrictedPolicy - 1;
      if ( !v155 )
        goto LABEL_586;
      v156 = v155 - 1;
      if ( v156 )
      {
        if ( v156 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_586:
        *(_BYTE *)v6 = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return (int)v9;
LABEL_590:
      ObfDereferenceObjectWithTag(v153, 0x79517350u);
      return 0;
    case ProcessHighGraphicsPriorityInformation:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 543) & 0x200) != 0;
      goto LABEL_122;
    case ProcessSubsystemInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      if ( *((_QWORD *)Object + 280) )
        LODWORD(v9) = qword_140C1E090;
      *(_DWORD *)v6 = (_DWORD)v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessEnergyValues:
      memset(v282, 0, sizeof(v282));
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v71 = result;
      if ( result < 0 )
        return result;
      v72 = Object;
      PsQueryProcessEnergyValues(Object, v282);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v282, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_649;
    case ProcessPowerThrottlingState:
      v262 = 0LL;
      v263 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v158 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v10,
               0x79517350u,
               &Object,
               0LL);
      if ( v158 >= 0 )
      {
        v159 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v160 = Object;
        v158 = v159(Object, &v262);
        if ( v158 >= 0 )
        {
          *(_QWORD *)v6 = v262;
          *(_DWORD *)(v6 + 8) = v263;
          if ( ReturnLength )
            *ReturnLength = 12;
          v158 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v160, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v158;
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v161 = PsGetCurrentProcess();
        Object = v161;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v161 = Object;
      }
      *(_DWORD *)v6 = 0;
      v162 = v161[628];
      v163 = 0;
      if ( (v162 & 0x4000) != 0 )
      {
        v163 = 1;
        *(_DWORD *)v6 = 1;
        v162 = v161[628];
      }
      if ( (v162 & 0x8000) != 0 )
        *(_DWORD *)v6 = v163 | 2;
      *(_DWORD *)(v6 + 4) = v161[602];
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle != (HANDLE)-1LL )
        goto LABEL_629;
      return (int)v9;
    case ProcessWakeInformation:
      if ( v10 )
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
        v148 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
        if ( DeviceMapInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
          ObfDereferenceObjectWithTag(v148, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_535:
          ObfDereferenceObjectWithTag(v148, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case ProcessEnergyTrackingState:
      memset(v279, 0, sizeof(v279));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v164 = Object;
        PoQueryProcessEnergyTrackingState(Object, v279);
        v165 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v165 = v5;
        memmove((void *)v6, v279, v165);
        if ( ReturnLength )
          *ReturnLength = v165;
        i = 0;
        ObfDereferenceObjectWithTag(v164, 0x79517350u);
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v72 = Object;
      if ( *((_QWORD *)Object + 124) )
      {
        v71 = VslLiveDumpCaptureProcess(Object);
LABEL_649:
        ObfDereferenceObjectWithTag(v72, 0x79517350u);
        return v71;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
LABEL_150:
      v42 = ProcessTelemetryCoverage;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v42;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 280)) & 3;
      if ( ProcessInformationClass == ProcessEnableLogging )
        *(_DWORD *)v6 |= (v38[543] >> 17) & 0xC;
      goto LABEL_122;
    case ProcessUptimeInformation:
      v244 = 0LL;
      v245 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v222 = 0LL;
      v168 = 0LL;
      v223 = 0LL;
      v203 = 0LL;
      v224 = 0LL;
      v226 = 0LL;
      v169 = CurrentThread;
      v153 = (struct _KPROCESS *)Object;
      PspLockProcessSecurityShared((__int64)Object, (__int64)CurrentThread);
      v170 = v153[2].Affinity.Bitmap[11] >> 61;
      if ( v170 - 3 <= 1
        && (v203 = (HANDLE)(v153[2].Affinity.Bitmap[11] & 0x1FFFFFFFFFFFFFFFLL),
            v224 = v203,
            v222 = v153[2].Affinity.Bitmap[10],
            v168 = v222 - v153[2].Affinity.Bitmap[7],
            v223 = v168,
            v170 == 3) )
      {
        v171 = 512;
      }
      else
      {
        v171 = v226;
      }
      LODWORD(v226) = v171 & 0xFFFFFE00 | BYTE3(v153[2].Header.WaitListHead.Flink) & 7 | (2
                                                                                        * (BYTE3(v153[2].Header.WaitListHead.Flink) & 0x38 | (32 * (HIDWORD(v153[2].Header.WaitListHead.Flink) & 4))));
      PspUnlockProcessShared((__int64)v153, (__int64)v169);
      PsGetProcessDeepFreezeStats(v153, &v244);
      v221 = v244;
      v225 = v245;
      if ( !v168 )
        v223 = v244 - v153[2].Affinity.Bitmap[7];
      if ( !v203 )
        v224 = (HANDLE)(*((_QWORD *)&v244 + 1) - v153[2].Affinity.Bitmap[8] - v245);
      v172 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v172 = v5;
      memmove((void *)v6, &v221, v172);
      if ( ReturnLength )
        *ReturnLength = v172;
      i = 0;
      goto LABEL_590;
    case ProcessImageSection:
      v203 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v10 )
      {
        v166 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v166 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v166 = *(_QWORD *)v166;
      }
      v167 = PsGetCurrentProcess();
      if ( ProcessHandle != (HANDLE)-1LL || v167 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v167[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v10, &v203);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v203;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( ReturnLength )
        *ReturnLength = 8;
LABEL_122:
      ObfDereferenceObjectWithTag(v38, 0x79517350u);
      return ExecuteOptions;
    case ProcessSecurityDomainInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
      {
        _InterlockedOr(v178, 0);
        *(_QWORD *)v6 = PsGetProcessSecurityDomain((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 8;
        i = 0;
LABEL_629:
        ObfDereferenceObjectWithTag(v161, 0x79517350u);
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
          v173 = PsGetCurrentProcess();
          v174 = v173[1].AffinityPadding[4];
          if ( v174 )
          {
            v175 = 0LL;
            v176 = (__int64 *)v173[1].AffinityPadding[10];
            if ( v176 )
              v175 = *v176;
            if ( v175 )
            {
              if ( (*(_DWORD *)(v175 + 1140) & 1) != 0 )
                LODWORD(v204) = 1;
            }
            else
            {
              v177 = v204;
              if ( (*(_BYTE *)(v174 + 1984) & 1) != 0 )
                v177 = 1;
              LODWORD(v204) = v177;
            }
          }
          *(_QWORD *)v6 = v204;
          if ( ReturnLength )
            *ReturnLength = 8;
          return (int)v9;
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
  switch ( v103 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v105 = Object;
      v106 = *((_DWORD *)Object + 628);
      if ( (v106 & 0x40) == 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v106 = v105[628];
      }
      if ( (v106 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v106 = v105[628];
      }
      if ( (v106 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v106 = v105[628];
      }
      if ( (v106 & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_510;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v112 = Object;
      v113 = *((_DWORD *)Object + 628);
      if ( (v113 & 0x100) != 0 )
      {
        v114 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v113 & 0x800) == 0 )
          goto LABEL_404;
        v114 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v114;
LABEL_404:
      v115 = v112[628];
      if ( (v115 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v115 = v112[628];
      }
      if ( (v115 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_510;
    case 3:
      i = 0;
      v107 = ObReferenceProcessHandleTable(Object);
      if ( v107 )
      {
        ExQueryHandleExceptionsPermanency(v107, &v183, &v184);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v183 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v184 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_510;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v108 = *((_DWORD *)Object + 628);
      if ( (v108 & 0x1000) != 0 )
      {
        v109 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v108 & 0x2000) == 0 )
          goto LABEL_393;
        v109 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v109;
LABEL_393:
      v110 = *((_DWORD *)Object + 652);
      if ( (v110 & 2) != 0 )
      {
        v111 = *(_DWORD *)(v6 + 4) | 4;
      }
      else
      {
        if ( (v110 & 4) == 0 )
          goto LABEL_510;
        v111 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v111;
      goto LABEL_510;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_510;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v116 = Object;
      v117 = *((_DWORD *)Object + 628);
      if ( (v117 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v117 = v116[628];
      }
      if ( (v117 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v117 = v116[628];
      }
      if ( (v117 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_510;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy((__int64)Object, &v201, v104);
      *(_DWORD *)(v6 + 4) = v201;
      goto LABEL_510;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v118 = *((_DWORD *)Object + 628);
      if ( (v118 & 0x10000) != 0 )
      {
        v119 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v118 & 0x20000) == 0 )
          goto LABEL_510;
        v119 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v119;
      goto LABEL_510;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v120 = Object;
      v121 = *((_DWORD *)Object + 628);
      if ( (v121 & 0x80000) != 0 )
      {
        v122 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v121 & 0x100000) == 0 )
          goto LABEL_431;
        v122 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v122;
LABEL_431:
      v123 = v120[628];
      if ( (v123 & 0x200000) != 0 )
      {
        v124 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v123 & 0x400000) == 0 )
          goto LABEL_436;
        v124 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v124;
LABEL_436:
      if ( (v120[628] & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_510;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_510;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v125 = Object;
      v126 = *((_DWORD *)Object + 629);
      if ( (v126 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v126 = v125[629];
      }
      if ( (v126 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v126 = v125[629];
      }
      if ( (v126 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v126 = v125[629];
      }
      if ( (v126 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v126 = v125[629];
      }
      if ( (v126 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v126 = v125[629];
      }
      if ( (v126 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v126 = v125[629];
      }
      if ( (v126 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v126 = v125[629];
      }
      if ( (v126 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v126 = v125[629];
      }
      if ( (v126 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v126 = v125[629];
      }
      if ( (v126 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v126 = v125[629];
      }
      if ( (v126 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v126 = v125[629];
      }
      if ( (v126 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_510;
    case 13:
      i = 0;
      v127 = PspGetNoChildProcessRestrictedPolicy((struct _KPROCESS *)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v128 = v127 - 1;
      if ( !v128 )
        goto LABEL_470;
      v129 = v128 - 1;
      if ( v129 )
      {
        if ( v129 != 1 )
          goto LABEL_510;
        v130 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_470:
        v130 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v130;
      goto LABEL_510;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v134 = Object;
      v135 = *((_DWORD *)Object + 628);
      if ( (v135 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v135 = v134[628];
      }
      if ( v135 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v136 = Object;
      v137 = *((_DWORD *)Object + 629);
      if ( (v137 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v137 = v136[629];
      }
      if ( (v137 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_510;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v138 = Object;
      v139 = *((_DWORD *)Object + 629);
      if ( (v139 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v139 = v138[629];
      }
      if ( (v139 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v139 = v138[629];
      }
      if ( (v139 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v139 = v138[629];
      }
      if ( (v139 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v139 = v138[629];
      }
      if ( (v139 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v139 = v138[629];
      }
      if ( (v139 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v139 = v138[629];
      }
      if ( (v139 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v139 = v138[629];
      }
      if ( (v139 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v139 = v138[629];
      }
      if ( (v139 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v139 = v138[629];
      }
      if ( v139 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_510;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v132 = RedirectionTrustPolicy - 1;
      if ( v132 )
      {
        if ( v132 != 1 )
          goto LABEL_510;
        v133 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v133 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v133;
LABEL_510:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_510;
  }
}
