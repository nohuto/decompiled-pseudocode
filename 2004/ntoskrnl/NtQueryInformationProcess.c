/*
 * XREFs of NtQueryInformationProcess @ 0x140661E20
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentProcess @ 0x14023A4B0 (PsGetCurrentProcess.c)
 *     KeEnterCriticalRegionThread @ 0x14024B6A0 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     PsGetWin32KFilterSet @ 0x14027C640 (PsGetWin32KFilterSet.c)
 *     PsIsProtectedProcess @ 0x14027C720 (PsIsProtectedProcess.c)
 *     MmGetSessionId @ 0x14027D4C0 (MmGetSessionId.c)
 *     MmQueryWorkingSetInformation @ 0x14027D4F4 (MmQueryWorkingSetInformation.c)
 *     KeQueryGroupMaskProcess @ 0x14027D64C (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x14027D660 (KeQueryAffinityProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KeQuerySystemTimePrecise @ 0x1402F9570 (KeQuerySystemTimePrecise.c)
 *     ExReleaseExtensionTable @ 0x14032FE4C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     ExUnlockUserBuffer @ 0x140335610 (ExUnlockUserBuffer.c)
 *     PsQueryProcessCommandLine @ 0x14034C6A0 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x1403523C4 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x140357A00 (PsGetProcessProtection.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14037EAE0 (ExQueryHandleExceptionsPermanency.c)
 *     PspUnlockProcessShared @ 0x140396E50 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140397560 (PspLockProcessSecurityShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CCE40 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1403F5F00 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x1405171A4 (KeQueryCpuSetsProcess.c)
 *     PspReadProcessSecurityDomain @ 0x14057C504 (PspReadProcessSecurityDomain.c)
 *     ObReferenceProcessHandleTable @ 0x1405E9CC4 (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x1405EA910 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     PsQueryFullProcessImageName @ 0x14065F7EC (PsQueryFullProcessImageName.c)
 *     PsQueryProcessQuotaCounters @ 0x140660C2C (PsQueryProcessQuotaCounters.c)
 *     PspQueryQuotaLimits @ 0x140660C58 (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x140660E40 (IoQueryFileDosDeviceName.c)
 *     MmGetSectionInformation @ 0x140661AB0 (MmGetSectionInformation.c)
 *     PsQueryRuntimeProcess @ 0x140661D50 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x140665BB0 (ObQueryDeviceMapInformation.c)
 *     PsQueryProcessAttributes @ 0x1406667C0 (PsQueryProcessAttributes.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsQueryProcessEnergyValues @ 0x1406878B0 (PsQueryProcessEnergyValues.c)
 *     PsGetProcessDeepFreezeStats @ 0x1406988BC (PsGetProcessDeepFreezeStats.c)
 *     PsQueryStatisticsProcess @ 0x14069B8D0 (PsQueryStatisticsProcess.c)
 *     PsReferenceProcessFilePointer @ 0x1406B7770 (PsReferenceProcessFilePointer.c)
 *     ExEnumHandleTable @ 0x1406D7420 (ExEnumHandleTable.c)
 *     ExLockUserBuffer @ 0x1406DE498 (ExLockUserBuffer.c)
 *     ObDereferenceProcessHandleTable @ 0x1406ED7E0 (ObDereferenceProcessHandleTable.c)
 *     ExIsRestrictedCaller @ 0x1406F252C (ExIsRestrictedCaller.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F64D4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     KeGetExecuteOptions @ 0x1406FD1E0 (KeGetExecuteOptions.c)
 *     ObGetProcessHandleCount @ 0x14070310C (ObGetProcessHandleCount.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14070CD80 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140710518 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14076F790 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExSystemExceptionFilter @ 0x1407C22E0 (ExSystemExceptionFilter.c)
 *     DbgkOpenProcessDebugPort @ 0x1408812F8 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x14088C8B8 (VslGetSecurePebAddress.c)
 *     VslLiveDumpCaptureProcess @ 0x14088CC2C (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408EF4F8 (PoQueryProcessEnergyTrackingState.c)
 *     PsGetKeepAliveCountProcess @ 0x1409044B4 (PsGetKeepAliveCountProcess.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1409044F0 (PsQueryTotalCycleTimeProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x140904CD8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140904E80 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140909648 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x14093174C (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409490C4 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x140949304 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x140949314 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x140949514 (ExReferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  int ExecuteOptions; // ebx
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
  PVOID v51; // r12
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbx
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
  _KPROCESS *v97; // rax
  struct _DMA_ADAPTER *v98; // r14
  unsigned __int64 v99; // rax
  int v100; // edi
  _DWORD *v101; // rcx
  int v102; // eax
  unsigned __int64 v103; // rax
  int v104; // ecx
  int v105; // eax
  _DWORD *v106; // rcx
  int v107; // eax
  int v108; // eax
  int v109; // eax
  _DWORD *v110; // rcx
  int v111; // eax
  int v112; // ecx
  int v113; // eax
  _DWORD *v114; // rcx
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  _DWORD *v119; // rcx
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  _DWORD *v125; // rcx
  int v126; // eax
  _DWORD *v127; // rcx
  int v128; // eax
  _DWORD *v129; // rcx
  int v130; // eax
  NTSTATUS v131; // edi
  unsigned __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  int v135; // ebx
  PVOID v136; // rbx
  unsigned __int64 v137; // rax
  char v138; // r9
  PVOID v139; // rbx
  NTSTATUS ProcessCommandLine; // eax
  char v141; // r9
  unsigned __int64 v142; // rax
  __int64 v143; // r8
  ULONG v144; // ebx
  void *v145; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v147; // eax
  int v148; // eax
  unsigned __int64 ExtensionTable; // rdi
  int v150; // ebx
  __int64 (__fastcall *v151)(PVOID, __int64 *); // rax
  PVOID v152; // rdi
  _DWORD *v153; // rcx
  int v154; // edx
  int v155; // eax
  PVOID v156; // rdi
  ULONG v157; // ebx
  __int64 v158; // rcx
  _KPROCESS *v159; // rcx
  __int64 v160; // r12
  struct _KTHREAD *v161; // rdi
  __int64 v162; // rcx
  int v163; // r8d
  ULONG v164; // edi
  _KPROCESS *v165; // rax
  unsigned __int64 v166; // r8
  __int64 v167; // rcx
  __int64 *v168; // rdx
  int v169; // eax
  signed __int32 v170[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-9A0h]
  _BYTE v174[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v175; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v176; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v178; // [rsp+58h] [rbp-990h]
  ULONG v179; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v181; // [rsp+70h] [rbp-978h]
  int v182; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v183; // [rsp+78h] [rbp-970h]
  volatile signed __int32 *v184; // [rsp+80h] [rbp-968h]
  int v185; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v189; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v190; // [rsp+B0h] [rbp-938h] BYREF
  int v191; // [rsp+B4h] [rbp-934h] BYREF
  int v192; // [rsp+B8h] [rbp-930h]
  int v193; // [rsp+BCh] [rbp-92Ch] BYREF
  int v194; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v195; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v196; // [rsp+D0h] [rbp-918h]
  PVOID v197; // [rsp+D8h] [rbp-910h]
  int v198[4]; // [rsp+E0h] [rbp-908h]
  _OBJECT_NAME_INFORMATION v199; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v200; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v201[4]; // [rsp+110h] [rbp-8D8h] BYREF
  unsigned __int64 v202; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v203; // [rsp+128h] [rbp-8C0h] BYREF
  LARGE_INTEGER v204; // [rsp+130h] [rbp-8B8h] BYREF
  __int64 v205; // [rsp+138h] [rbp-8B0h]
  PVOID v206; // [rsp+140h] [rbp-8A8h] BYREF
  __int64 v207; // [rsp+148h] [rbp-8A0h] BYREF
  _QWORD v208[2]; // [rsp+150h] [rbp-898h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+160h] [rbp-888h] BYREF
  PVOID v210; // [rsp+168h] [rbp-880h] BYREF
  _OWORD v211[3]; // [rsp+170h] [rbp-878h] BYREF
  __int64 v212; // [rsp+1A0h] [rbp-848h]
  __int128 v213; // [rsp+1A8h] [rbp-840h] BYREF
  __int64 v214; // [rsp+1B8h] [rbp-830h]
  __int64 v215; // [rsp+1C0h] [rbp-828h]
  HANDLE v216; // [rsp+1C8h] [rbp-820h]
  __int64 v217; // [rsp+1D0h] [rbp-818h]
  __int64 v218; // [rsp+1D8h] [rbp-810h]
  int v219; // [rsp+1E0h] [rbp-808h]
  int v220; // [rsp+1E4h] [rbp-804h]
  char *v221; // [rsp+1E8h] [rbp-800h]
  __int64 v222; // [rsp+1F0h] [rbp-7F8h]
  __int64 v223; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v224; // [rsp+200h] [rbp-7E8h]
  int v225; // [rsp+210h] [rbp-7D8h]
  __int128 v226; // [rsp+218h] [rbp-7D0h]
  __int128 v227; // [rsp+228h] [rbp-7C0h]
  __int128 v228; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v230; // [rsp+260h] [rbp-788h] BYREF
  __int128 v231; // [rsp+270h] [rbp-778h] BYREF
  __int128 v232; // [rsp+280h] [rbp-768h] BYREF
  __int128 v233; // [rsp+290h] [rbp-758h] BYREF
  __int128 v234; // [rsp+2A0h] [rbp-748h]
  __int128 v235; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v236; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v237; // [rsp+2D0h] [rbp-718h]
  _OWORD v238[6]; // [rsp+2E0h] [rbp-708h] BYREF
  __int64 v239; // [rsp+340h] [rbp-6A8h]
  unsigned __int64 v240; // [rsp+350h] [rbp-698h]
  __int128 v241; // [rsp+358h] [rbp-690h] BYREF
  unsigned __int64 v242; // [rsp+368h] [rbp-680h]
  void *v243; // [rsp+370h] [rbp-678h]
  __int128 v244; // [rsp+380h] [rbp-668h]
  __int128 v245; // [rsp+390h] [rbp-658h]
  __int128 v246; // [rsp+3A0h] [rbp-648h]
  __int128 v247; // [rsp+3B0h] [rbp-638h]
  __int128 v248; // [rsp+3C0h] [rbp-628h]
  __int128 v249; // [rsp+3D0h] [rbp-618h]
  __int128 v250; // [rsp+3E0h] [rbp-608h]
  __int128 v251; // [rsp+3F0h] [rbp-5F8h]
  __int128 v252; // [rsp+400h] [rbp-5E8h]
  __int128 v253; // [rsp+410h] [rbp-5D8h]
  __int64 v254; // [rsp+420h] [rbp-5C8h] BYREF
  int v255; // [rsp+428h] [rbp-5C0h]
  __int128 JobObjectInformation; // [rsp+430h] [rbp-5B8h] BYREF
  __int128 v257; // [rsp+440h] [rbp-5A8h]
  __int64 v258; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v260; // [rsp+488h] [rbp-560h] BYREF
  __int128 v261; // [rsp+4C0h] [rbp-528h] BYREF
  __int128 v262; // [rsp+4D0h] [rbp-518h]
  __int128 v263; // [rsp+4E0h] [rbp-508h]
  __int128 v264; // [rsp+4F0h] [rbp-4F8h]
  __int128 v265; // [rsp+500h] [rbp-4E8h]
  __int128 v266; // [rsp+510h] [rbp-4D8h]
  __int128 v267; // [rsp+520h] [rbp-4C8h]
  __int128 v268; // [rsp+530h] [rbp-4B8h]
  __int128 v269; // [rsp+540h] [rbp-4A8h]
  __int64 v270; // [rsp+550h] [rbp-498h]
  _OWORD v271[9]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v272[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v273[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _BYTE v274[432]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v275[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v178 = ProcessHandle;
  v197 = ProcessInformation;
  v221 = (char *)ProcessInformation;
  v201[2] = ProcessInformationLength;
  v184 = (volatile signed __int32 *)ReturnLength;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v179 = 0;
  Handle = 0LL;
  v182 = 0;
  memset(v273, 0, 0xA8uLL);
  v189 = 0LL;
  GroupMaskProcess = 0;
  v201[0] = 0;
  v219 = 0;
  v226 = 0LL;
  v227 = 0LL;
  v228 = 0LL;
  v261 = 0LL;
  v262 = 0LL;
  v263 = 0LL;
  v264 = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v270 = 0LL;
  memset(&v211[1], 0, 32);
  v212 = 0LL;
  v196 = 0LL;
  v241 = 0LL;
  v203 = 0LL;
  JobObjectInformation = 0LL;
  v257 = 0LL;
  v258 = 0LL;
  v202 = 0LL;
  ObjectNameInformation = 0LL;
  v181 = 0;
  Object = 0LL;
  v208[0] = 0LL;
  v190 = 0;
  memset(v238, 0, sizeof(v238));
  v239 = 0LL;
  Src = 0LL;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v10 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v174[1] = v10;
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
      memset(v272, 0, 0xA8uLL);
      v174[0] = 0;
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
      v179 = v5;
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
          KeQueryAffinityProcess((__int64)v22, v272, &GroupMaskProcess, 0LL);
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
                P = (PVOID)*((_QWORD *)v272 + Group + 1);
            }
          }
        }
        if ( v21 )
          PsQueryProcessAttributes(v22, v174, 0LL);
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
          if ( v174[0] )
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
        goto LABEL_532;
      }
LABEL_548:
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
      PsQueryStatisticsProcess(Object, v238);
      v226 = *(_OWORD *)((char *)&v238[2] + 8);
      v227 = *(_OWORD *)((char *)&v238[3] + 8);
      v228 = *(_OWORD *)((char *)&v238[4] + 8);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v226;
      *(_OWORD *)(v6 + 16) = v227;
      *(_OWORD *)(v6 + 32) = v228;
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
      LODWORD(v230) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v230 + 1, &v231, &v235, &v202, &v203, v201);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters((__int64)v32, 1, &v232, (_QWORD *)&v231 + 1);
      PsQueryProcessQuotaCounters(v33, 0, &v233, (_QWORD *)&v232 + 1);
      *((_QWORD *)&v233 + 1) = v32[201] << 12;
      *(_QWORD *)&v234 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v235 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v234 + 1) = *((_QWORD *)&v233 + 1);
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
      v35 = PsQueryRuntimeProcess((__int64)Object, &v190);
      v36 = KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)v35;
      *(_QWORD *)(v6 + 24) = v36 * v190;
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
      HIBYTE(v181) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v181;
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
      v191 = 0;
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
      ProcessHandleCount = ObGetProcessHandleCount(Object, &v191);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = v191;
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
        || (KeQueryAffinityProcess((__int64)v34, v273, &GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ObfDereferenceObjectWithTag(v34, 0x79517350u);
        return -1073741811;
      }
      _BitScanForward((unsigned int *)&v83, GroupMaskProcess);
      v84 = *((_QWORD *)v273 + v83 + 1);
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
        v183 = *(_DWORD *)(v6 + 40);
        v45 = v183;
        if ( (v183 & 0xFFFFFFFE) != 0 )
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
        v6 = (unsigned __int64)&v241;
        v14 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v9 = (unsigned int *)(v221 + 16);
      v179 = v14;
      DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, (_OWORD *)v6, v9, &v179);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *ReturnLength = v179 + 16;
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
      if ( (unsigned int)ExIsRestrictedCaller(v10) )
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
        v51 = Object;
        v52 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        v53 = v52;
        v202 = v52;
        if ( v52 )
        {
          v54 = ExReferenceHandleDebugInfo(v52);
          v55 = v54;
          v203 = v54;
          if ( v54 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v56 = (unsigned int)(*(_DWORD *)(v54 + 72) % *(_DWORD *)(v54 + 4));
            v192 = v56;
            while ( 1 )
            {
              v201[1] = (_DWORD)v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v55 + 4) )
                break;
              v57 = (_OWORD *)(v55 + 160 * v56);
              v244 = v57[5];
              v245 = v57[6];
              v246 = v57[7];
              v247 = v57[8];
              v248 = v57[9];
              v249 = v57[10];
              v250 = v57[11];
              v251 = v57[12];
              v252 = v57[13];
              v253 = v57[14];
              v58 = v245;
              if ( *(_QWORD *)v6 == (_QWORD)v245 || !*(_QWORD *)v6 )
              {
                v59 = DWORD2(v245);
                if ( DWORD2(v245) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)P )
                  {
                    P = (PVOID)(unsigned int)((_DWORD)P - 1);
                    v220 = (int)P;
                    *(_QWORD *)v49 = v58;
                    *(_OWORD *)(v49 + 8) = v244;
                    *(_DWORD *)(v49 + 24) = v59;
                    *(_OWORD *)(v49 + 32) = v246;
                    *(_OWORD *)(v49 + 48) = v247;
                    *(_OWORD *)(v49 + 64) = v248;
                    *(_OWORD *)(v49 + 80) = v249;
                    *(_OWORD *)(v49 + 96) = v250;
                    *(_OWORD *)(v49 + 112) = v251;
                    *(_OWORD *)(v49 + 128) = v252;
                    *(_OWORD *)(v49 + 144) = v253;
                    v49 += 160LL;
                    v242 = v49;
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
              v192 = v56;
              LODWORD(v9) = (_DWORD)v9 + 1;
            }
            if ( ReturnLength )
              *ReturnLength = v49 - v6;
            ExDereferenceHandleDebugInfo(v53, v55);
            v60 = Object;
            ObDereferenceProcessHandleTable(Object);
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
      ExecuteOptions = KeGetExecuteOptions(CurrentProcess, &v182);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v182;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      v204.QuadPart = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v63 = (struct _DMA_ADAPTER *)PsGetCurrentProcess();
        v184 = (volatile signed __int32 *)v63;
        Object = v63;
      }
      else
      {
        v210 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v10, &v210, 0LL);
        v63 = (struct _DMA_ADAPTER *)v210;
        v184 = (volatile signed __int32 *)v210;
        Object = v210;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        DmaOperations = (int)v63[82].DmaOperations;
        if ( DmaOperations )
          break;
        KeQuerySystemTimePrecise(&v204);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v67 = ExGenRandom(1);
        v68 = __rdtsc();
        _InterlockedCompareExchange(
          v184 + 330,
          v68 ^ v67 ^ CurrentPrcb->MmPageFaultCount ^ v204.LowPart ^ v204.HighPart ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v63 = (struct _DMA_ADAPTER *)Object;
        v184 = (volatile signed __int32 *)Object;
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
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        Count = (struct _DMA_ADAPTER *)v69[163].Count;
        if ( Count )
          ObfReferenceObject(v69[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection_0(v69 + 139);
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
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v208);
      *(_QWORD *)(v6 + 8) = v208[0];
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_638;
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
      v189 = v17;
      if ( v17 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          ObfReferenceObject(v17);
          ExReleaseRundownProtection_0(v16 + 139);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v189);
        v17 = (struct _FILE_OBJECT *)v189;
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
      v243 = *(void **)v6;
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
                         &v189,
                         0LL);
      v38 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v77 = (struct _DMA_ADAPTER *)v189;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v78 = (_DMA_OPERATIONS *)*((_QWORD *)v189 + 5);
      v79 = DmaAdapter;
      v80 = DmaAdapter[2].DmaOperations;
      v81 = 0;
      if ( v78 != v80 )
        v81 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v189);
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
      v183 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v82 = (v183 >> 19) & 1 | 2;
      if ( (v183 & 0x40000) == 0 )
        v82 = (v183 >> 19) & 1;
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
      v183 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v183 & 0x200000) != 0;
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
        v87 = v179;
        do
        {
          _BitScanForward(&v88, v85);
          v87 += 2;
          v179 = v87;
          if ( v87 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v88;
            v6 += 2LL;
            v240 = v6;
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
      memset(&v260, 0, sizeof(v260));
      v185 = 0;
      *(_OWORD *)v198 = 0LL;
      v223 = 0LL;
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
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          KeStackAttachProcess(v91, &v260);
          v92 = (unsigned int **)v91[1].AffinityPadding[10];
          if ( v92 )
            v9 = *v92;
          if ( v9 )
          {
            v222 = v9[4];
            v185 = *(_DWORD *)(v222 + 104);
            v93 = *(_QWORD *)(v222 + 112);
            v208[1] = v93;
            v198[0] = v93;
            *(_QWORD *)&v198[2] = HIDWORD(v93);
          }
          else
          {
            v205 = *(_QWORD *)(v91[1].AffinityPadding[4] + 32);
            v94 = v205 + 164;
            if ( (unsigned __int64)(v205 + 164) >= 0x7FFFFFFF0000LL )
              v94 = 0x7FFFFFFF0000LL;
            v185 = *(_DWORD *)v94;
            v224 = 0LL;
            v95 = v205 + 176;
            if ( (unsigned __int64)(v205 + 176) >= 0x7FFFFFFF0000LL )
              v95 = 0x7FFFFFFF0000LL;
            LODWORD(v224) = *(_DWORD *)v95;
            *((_QWORD *)&v224 + 1) = *(_QWORD *)(v95 + 8);
            *(_OWORD *)v198 = v224;
            LOWORD(v93) = v224;
          }
          DeviceMapInformation = i;
          KeUnstackDetachProcess(&v260);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v96 = (unsigned __int16)v93 + 6;
          if ( ReturnLength )
            *ReturnLength = v96;
          if ( (unsigned int)v5 >= v96 )
          {
            *(_DWORD *)v6 = v185;
            *(_WORD *)(v6 + 4) = v93;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v93 )
          {
            v97 = PsGetCurrentProcess();
            *(_QWORD *)Tag = (unsigned __int16)v93;
            v34 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MmCopyVirtualMemory(
                                     (ULONG_PTR)Object,
                                     *(char **)&v198[2],
                                     (ULONG_PTR)v97,
                                     (char *)(v6 + 6),
                                     *(size_t *)Tag,
                                     1,
                                     &v223);
          }
          else
          {
LABEL_353:
            v34 = (struct _EX_RUNDOWN_REF *)Object;
          }
          ExReleaseRundownProtection_0(v34 + 139);
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
      v206 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v10, &v206, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v98 = (struct _DMA_ADAPTER *)v206;
        v99 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v206);
        if ( v99 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v99, v6, (unsigned int)v5, ReturnLength);
          ObDereferenceProcessHandleTable(v98);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v77 = v98;
LABEL_365:
        HalPutDmaAdapter(v77);
        return ProcessHandleInformation;
      }
      return result;
    case ProcessMitigationPolicy:
      v193 = 0;
      v175 = 0;
      v176 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v100 = *(_DWORD *)v6;
      v225 = *(_DWORD *)v6;
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
      v131 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v132 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v132 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryHandleExceptions(v132) != 0;
      *(_DWORD *)v6 = (_DWORD)v9;
      goto LABEL_506;
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
      LOBYTE(v133) = 1;
      *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v133);
      *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(v134, 0LL);
      goto LABEL_122;
    case ProcessHandleTable:
      v207 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 v6,
                 (unsigned int)v5,
                 (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
                 1LL,
                 &v207,
                 &P);
      if ( result >= 0 )
      {
        v135 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v135 >= 0 )
        {
          v211[0] = 0LL;
          v136 = Object;
          v137 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v137 )
          {
            *(_QWORD *)&v211[0] = v207;
            *((_QWORD *)&v211[0] + 1) = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v137, PspHandleTableWalker, v211, 0LL);
            ObDereferenceProcessHandleTable(v136);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v136, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v211[0]);
          ExUnlockUserBuffer((struct _MDL *)P);
          return (int)v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v135;
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
      v138 = v10;
      v139 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v138, ReturnLength);
      goto LABEL_523;
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
LABEL_532:
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
      v141 = v10;
      v139 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (__int64)Object,
                             (char *)v6,
                             (unsigned int)v5,
                             v141,
                             ReturnLength);
LABEL_523:
      DeviceMapInformation = ProcessCommandLine;
      if ( v139 )
        goto LABEL_524;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      v194 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v199 = *(_OBJECT_NAME_INFORMATION *)v6;
        v200 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v199.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v199.Name.MaximumLength + 1) >= 8u || v199.Name.Buffer )
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
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v194, &v199.Name.Buffer, &v200, (_QWORD *)&v200 + 1);
              *(_DWORD *)(&v199.Name.MaximumLength + 1) ^= ((unsigned __int8)v194 ^ *((_BYTE *)&v199.Name.MaximumLength
                                                                                    + 2)) & 1;
              v199.Name.Buffer = (wchar_t *)((__int64)v199.Name.Buffer << 12);
              *(_QWORD *)&v200 = (_QWORD)v200 << 12;
              *((_QWORD *)&v200 + 1) <<= 12;
              *(_OBJECT_NAME_INFORMATION *)v6 = v199;
              *(_OWORD *)(v6 + 16) = v200;
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
        goto LABEL_548;
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
        v144 = 8 * KeQueryCpuSetsProcess((__int64)Object, v275, v143, (int)v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v144;
        if ( v144 < (unsigned int)v5 )
          LODWORD(v5) = v144;
        memmove((void *)v6, v275, (unsigned int)v5);
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
        *((_QWORD *)&v211[2] + 1) = 0LL;
        v212 = 0LL;
        if ( *((_QWORD *)Object + 162) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, &v261, 0x98u, 0LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v211[1] + 8) = JobObjectInformation;
          *(_QWORD *)&v211[1] = v257;
          v73 = v212;
          if ( (v262 & 0x200000) != 0 )
            v73 = v270;
          v212 = v73;
          v74 = *((_QWORD *)&v211[2] + 1);
          if ( (v262 & 0x200) != 0 )
            v74 = *((_QWORD *)&v268 + 1);
          *((_QWORD *)&v211[2] + 1) = v74;
          *(__m256i *)v6 = *(__m256i *)&v211[1];
          *(_QWORD *)(v6 + 32) = v212;
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
      v131 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v142 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v142 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v142) != 0;
      *(_DWORD *)v6 = (_DWORD)v9;
LABEL_506:
      ObDereferenceProcessHandleTable(v91);
      ObfDereferenceObjectWithTag(v91, 0x79517350u);
      return v131;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v145 = PsGetCurrentProcess();
        Object = v145;
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
        v145 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v145);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v147 = NoChildProcessRestrictedPolicy - 1;
      if ( !v147 )
        goto LABEL_575;
      v148 = v147 - 1;
      if ( v148 )
      {
        if ( v148 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_575:
        *(_BYTE *)v6 = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return (int)v9;
LABEL_579:
      ObfDereferenceObjectWithTag(v145, 0x79517350u);
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
        LODWORD(v9) = qword_140C1DE30;
      *(_DWORD *)v6 = (_DWORD)v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessEnergyValues:
      memset(v274, 0, sizeof(v274));
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
      PsQueryProcessEnergyValues(Object, v274);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v274, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_638;
    case ProcessPowerThrottlingState:
      v254 = 0LL;
      v255 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v150 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v10,
               0x79517350u,
               &Object,
               0LL);
      if ( v150 >= 0 )
      {
        v151 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v152 = Object;
        v150 = v151(Object, &v254);
        if ( v150 >= 0 )
        {
          *(_QWORD *)v6 = v254;
          *(_DWORD *)(v6 + 8) = v255;
          if ( ReturnLength )
            *ReturnLength = 12;
          v150 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v152, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v150;
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
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
        v153 = Object;
      }
      *(_DWORD *)v6 = 0;
      v154 = v153[628];
      v155 = 0;
      if ( (v154 & 0x4000) != 0 )
      {
        v155 = 1;
        *(_DWORD *)v6 = 1;
        v154 = v153[628];
      }
      if ( (v154 & 0x8000) != 0 )
        *(_DWORD *)v6 = v155 | 2;
      *(_DWORD *)(v6 + 4) = v153[602];
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle != (HANDLE)-1LL )
        goto LABEL_618;
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
        v139 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
        if ( DeviceMapInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
          ObfDereferenceObjectWithTag(v139, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_524:
          ObfDereferenceObjectWithTag(v139, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case ProcessEnergyTrackingState:
      memset(v271, 0, sizeof(v271));
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
        v156 = Object;
        PoQueryProcessEnergyTrackingState(Object, v271);
        v157 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v157 = v5;
        memmove((void *)v6, v271, v157);
        if ( ReturnLength )
          *ReturnLength = v157;
        i = 0;
        ObfDereferenceObjectWithTag(v156, 0x79517350u);
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
LABEL_638:
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
      v236 = 0LL;
      v237 = 0LL;
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
      v214 = 0LL;
      v160 = 0LL;
      v215 = 0LL;
      v195 = 0LL;
      v216 = 0LL;
      v218 = 0LL;
      v161 = CurrentThread;
      v145 = Object;
      PspLockProcessSecurityShared((__int64)Object, (__int64)CurrentThread);
      v162 = *((_QWORD *)v145 + 292) >> 61;
      if ( (unsigned __int64)(v162 - 3) <= 1
        && (v195 = (HANDLE)(*((_QWORD *)v145 + 292) & 0x1FFFFFFFFFFFFFFFLL),
            v216 = v195,
            v214 = *((_QWORD *)v145 + 291),
            v160 = v214 - *((_QWORD *)v145 + 288),
            v215 = v160,
            v162 == 3) )
      {
        v163 = 512;
      }
      else
      {
        v163 = v218;
      }
      LODWORD(v218) = v163 & 0xFFFFFE00 | *((_BYTE *)v145 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v145 + 2171) & 0x38 | (32 * (*((_DWORD *)v145 + 543) & 4))));
      PspUnlockProcessShared((__int64)v145, (__int64)v161);
      PsGetProcessDeepFreezeStats(v145, &v236);
      v213 = v236;
      v217 = v237;
      if ( !v160 )
        v215 = v236 - *((_QWORD *)v145 + 288);
      if ( !v195 )
        v216 = (HANDLE)(*((_QWORD *)&v236 + 1) - *((_QWORD *)v145 + 289) - v237);
      v164 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v164 = v5;
      memmove((void *)v6, &v213, v164);
      if ( ReturnLength )
        *ReturnLength = v164;
      i = 0;
      goto LABEL_579;
    case ProcessImageSection:
      v195 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v10 )
      {
        v158 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v158 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v158 = *(_QWORD *)v158;
      }
      v159 = PsGetCurrentProcess();
      if ( ProcessHandle != (HANDLE)-1LL || v159 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v159[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v10, &v195);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v195;
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
        _InterlockedOr(v170, 0);
        *(_QWORD *)v6 = PspReadProcessSecurityDomain((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 8;
        i = 0;
LABEL_618:
        ObfDereferenceObjectWithTag(v153, 0x79517350u);
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
          v165 = PsGetCurrentProcess();
          v166 = v165[1].AffinityPadding[4];
          if ( v166 )
          {
            v167 = 0LL;
            v168 = (__int64 *)v165[1].AffinityPadding[10];
            if ( v168 )
              v167 = *v168;
            if ( v167 )
            {
              if ( (*(_DWORD *)(v167 + 1140) & 1) != 0 )
                LODWORD(v196) = 1;
            }
            else
            {
              v169 = v196;
              if ( (*(_BYTE *)(v166 + 1984) & 1) != 0 )
                v169 = 1;
              LODWORD(v196) = v169;
            }
          }
          *(_QWORD *)v6 = v196;
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
  switch ( v100 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v101 = Object;
      v102 = *((_DWORD *)Object + 628);
      if ( (v102 & 0x40) == 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v102 = v101[628];
      }
      if ( (v102 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v102 = v101[628];
      }
      if ( (v102 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v102 = v101[628];
      }
      if ( (v102 & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_499;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v106 = Object;
      v107 = *((_DWORD *)Object + 628);
      if ( (v107 & 0x100) != 0 )
      {
        v108 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v107 & 0x800) == 0 )
          goto LABEL_399;
        v108 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v108;
LABEL_399:
      v109 = v106[628];
      if ( (v109 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v109 = v106[628];
      }
      if ( (v109 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_499;
    case 3:
      i = 0;
      v103 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v103 )
      {
        ExQueryHandleExceptionsPermanency(v103, &v175, &v176);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v175 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v176 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ObDereferenceProcessHandleTable(Object);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_499;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v104 = *((_DWORD *)Object + 628);
      if ( (v104 & 0x1000) != 0 )
      {
        v105 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v104 & 0x2000) == 0 )
          goto LABEL_499;
        v105 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v105;
      goto LABEL_499;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_499;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v110 = Object;
      v111 = *((_DWORD *)Object + 628);
      if ( (v111 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v111 = v110[628];
      }
      if ( (v111 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v111 = v110[628];
      }
      if ( (v111 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_499;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v193);
      *(_DWORD *)(v6 + 4) = v193;
      goto LABEL_499;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v112 = *((_DWORD *)Object + 628);
      if ( (v112 & 0x10000) != 0 )
      {
        v113 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v112 & 0x20000) == 0 )
          goto LABEL_499;
        v113 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v113;
      goto LABEL_499;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v114 = Object;
      v115 = *((_DWORD *)Object + 628);
      if ( (v115 & 0x80000) != 0 )
      {
        v116 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v115 & 0x100000) == 0 )
          goto LABEL_426;
        v116 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v116;
LABEL_426:
      v117 = v114[628];
      if ( (v117 & 0x200000) != 0 )
      {
        v118 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v117 & 0x400000) == 0 )
          goto LABEL_431;
        v118 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v118;
LABEL_431:
      if ( (v114[628] & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_499;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_499;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v119 = Object;
      v120 = *((_DWORD *)Object + 629);
      if ( (v120 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v120 = v119[629];
      }
      if ( (v120 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v120 = v119[629];
      }
      if ( (v120 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v120 = v119[629];
      }
      if ( (v120 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v120 = v119[629];
      }
      if ( (v120 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v120 = v119[629];
      }
      if ( (v120 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v120 = v119[629];
      }
      if ( (v120 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v120 = v119[629];
      }
      if ( (v120 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v120 = v119[629];
      }
      if ( (v120 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v120 = v119[629];
      }
      if ( (v120 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v120 = v119[629];
      }
      if ( (v120 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v120 = v119[629];
      }
      if ( (v120 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_499;
    case 13:
      i = 0;
      v121 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v122 = v121 - 1;
      if ( !v122 )
        goto LABEL_465;
      v123 = v122 - 1;
      if ( v123 )
      {
        if ( v123 != 1 )
          goto LABEL_499;
        v124 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_465:
        v124 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v124;
LABEL_499:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v125 = Object;
      v126 = *((_DWORD *)Object + 628);
      if ( (v126 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v126 = v125[628];
      }
      if ( v126 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v127 = Object;
      v128 = *((_DWORD *)Object + 629);
      if ( (v128 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v128 = v127[629];
      }
      if ( (v128 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_499;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v129 = Object;
      v130 = *((_DWORD *)Object + 629);
      if ( (v130 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v130 = v129[629];
      }
      if ( (v130 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v130 = v129[629];
      }
      if ( (v130 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v130 = v129[629];
      }
      if ( (v130 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v130 = v129[629];
      }
      if ( (v130 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v130 = v129[629];
      }
      if ( (v130 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v130 = v129[629];
      }
      if ( (v130 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v130 = v129[629];
      }
      if ( (v130 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v130 = v129[629];
      }
      if ( (v130 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v130 = v129[629];
      }
      if ( v130 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_499;
    default:
      i = -1073741637;
      goto LABEL_499;
  }
}
