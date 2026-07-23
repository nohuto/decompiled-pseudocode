/*
 * XREFs of NtQueryInformationProcess @ 0x1405DBB20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWin32KFilterSet @ 0x1402032C0 (PsGetWin32KFilterSet.c)
 *     PsIsProtectedProcess @ 0x140203410 (PsIsProtectedProcess.c)
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     MmQueryWorkingSetInformation @ 0x1402041E4 (MmQueryWorkingSetInformation.c)
 *     KeQueryGroupMaskProcess @ 0x14020433C (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x140204350 (KeQueryAffinityProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     KeEnterCriticalRegionThread @ 0x1402A46D0 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     ExReleaseExtensionTable @ 0x1402D3FCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     PsQueryProcessCommandLine @ 0x14030EFD0 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x1403145B8 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x140319880 (PsGetProcessProtection.c)
 *     KeQuerySystemTimePrecise @ 0x140355550 (KeQuerySystemTimePrecise.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14037E020 (ExQueryHandleExceptionsPermanency.c)
 *     PspUnlockProcessShared @ 0x140396240 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140396950 (PspLockProcessSecurityShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CC000 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1403F4C70 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140516B54 (KeQueryCpuSetsProcess.c)
 *     PspReadProcessSecurityDomain @ 0x14057BEC4 (PspReadProcessSecurityDomain.c)
 *     ExIsRestrictedCaller @ 0x1405CEDDC (ExIsRestrictedCaller.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1405D5DEC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PsQueryFullProcessImageName @ 0x1405D94EC (PsQueryFullProcessImageName.c)
 *     PsQueryProcessQuotaCounters @ 0x1405DA92C (PsQueryProcessQuotaCounters.c)
 *     PspQueryQuotaLimits @ 0x1405DA958 (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x1405DAB40 (IoQueryFileDosDeviceName.c)
 *     MmGetSectionInformation @ 0x1405DB7B0 (MmGetSectionInformation.c)
 *     PsQueryRuntimeProcess @ 0x1405DBA50 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1405DF8B0 (ObQueryDeviceMapInformation.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     PsGetProcessDeepFreezeStats @ 0x1405EF3AC (PsGetProcessDeepFreezeStats.c)
 *     PsQueryProcessEnergyValues @ 0x14060F730 (PsQueryProcessEnergyValues.c)
 *     PsQueryStatisticsProcess @ 0x140616850 (PsQueryStatisticsProcess.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PsReferenceProcessFilePointer @ 0x14064E790 (PsReferenceProcessFilePointer.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     ExEnumHandleTable @ 0x1406B8320 (ExEnumHandleTable.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     ObDereferenceProcessHandleTable @ 0x1406CC4E0 (ObDereferenceProcessHandleTable.c)
 *     KeGetExecuteOptions @ 0x1406DA160 (KeGetExecuteOptions.c)
 *     ObGetProcessHandleCount @ 0x1406E037C (ObGetProcessHandleCount.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1406E8EE0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406ECA38 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14076CFF0 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 *     DbgkOpenProcessDebugPort @ 0x14087FFD8 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x14088B598 (VslGetSecurePebAddress.c)
 *     VslLiveDumpCaptureProcess @ 0x14088B90C (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408EE208 (PoQueryProcessEnergyTrackingState.c)
 *     PsGetKeepAliveCountProcess @ 0x1409031D4 (PsGetKeepAliveCountProcess.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140903210 (PsQueryTotalCycleTimeProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x1409039F8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140903BA0 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140908398 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x14093049C (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x140947D24 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x140947F64 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x140947F74 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x140948174 (ExReferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  struct _DMA_ADAPTER *v98; // r14
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // edi
  _DWORD *v104; // rcx
  int v105; // eax
  __int64 v106; // rax
  int v107; // ecx
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  int v111; // eax
  int v112; // eax
  _DWORD *v113; // rcx
  int v114; // eax
  int v115; // ecx
  int v116; // eax
  _DWORD *v117; // rcx
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  _DWORD *v122; // rcx
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  _DWORD *v128; // rcx
  int v129; // eax
  _DWORD *v130; // rcx
  int v131; // eax
  _DWORD *v132; // rcx
  int v133; // eax
  NTSTATUS v134; // edi
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  int v138; // ebx
  PVOID v139; // rbx
  __int64 v140; // rax
  char v141; // r9
  PVOID v142; // rbx
  NTSTATUS ProcessCommandLine; // eax
  __int64 v144; // rax
  __int64 v145; // r8
  ULONG v146; // ebx
  void *v147; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v149; // eax
  int v150; // eax
  unsigned __int64 ExtensionTable; // rdi
  int v152; // ebx
  __int64 (__fastcall *v153)(PVOID, __int64 *); // rax
  PVOID v154; // rdi
  _DWORD *v155; // rcx
  int v156; // edx
  int v157; // eax
  PVOID v158; // rdi
  ULONG v159; // ebx
  __int64 v160; // rcx
  _KPROCESS *v161; // rcx
  __int64 v162; // r12
  struct _KTHREAD *v163; // rdi
  __int64 v164; // rcx
  int v165; // r8d
  ULONG v166; // edi
  _KPROCESS *v167; // rax
  unsigned __int64 v168; // r8
  __int64 v169; // rcx
  __int64 *v170; // rdx
  int v171; // eax
  signed __int32 v172[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-9A0h]
  _BYTE v176[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v177; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v178; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v180; // [rsp+58h] [rbp-990h]
  ULONG v181; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v183; // [rsp+70h] [rbp-978h]
  int v184; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v185; // [rsp+78h] [rbp-970h]
  volatile signed __int32 *v186; // [rsp+80h] [rbp-968h]
  int v187; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v191; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v192; // [rsp+B0h] [rbp-938h] BYREF
  int v193; // [rsp+B4h] [rbp-934h] BYREF
  int v194; // [rsp+B8h] [rbp-930h]
  int v195; // [rsp+BCh] [rbp-92Ch] BYREF
  int v196; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v197; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v198; // [rsp+D0h] [rbp-918h]
  PVOID v199; // [rsp+D8h] [rbp-910h]
  int v200[4]; // [rsp+E0h] [rbp-908h]
  _OBJECT_NAME_INFORMATION v201; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v202; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v203[4]; // [rsp+110h] [rbp-8D8h] BYREF
  __int64 v204; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v205; // [rsp+128h] [rbp-8C0h] BYREF
  LARGE_INTEGER v206; // [rsp+130h] [rbp-8B8h] BYREF
  __int64 v207; // [rsp+138h] [rbp-8B0h]
  PVOID v208; // [rsp+140h] [rbp-8A8h] BYREF
  __int64 v209; // [rsp+148h] [rbp-8A0h] BYREF
  _QWORD v210[2]; // [rsp+150h] [rbp-898h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+160h] [rbp-888h] BYREF
  PVOID v212; // [rsp+168h] [rbp-880h] BYREF
  _OWORD v213[3]; // [rsp+170h] [rbp-878h] BYREF
  __int64 v214; // [rsp+1A0h] [rbp-848h]
  __int128 v215; // [rsp+1A8h] [rbp-840h] BYREF
  __int64 v216; // [rsp+1B8h] [rbp-830h]
  __int64 v217; // [rsp+1C0h] [rbp-828h]
  HANDLE v218; // [rsp+1C8h] [rbp-820h]
  __int64 v219; // [rsp+1D0h] [rbp-818h]
  __int64 v220; // [rsp+1D8h] [rbp-810h]
  int v221; // [rsp+1E0h] [rbp-808h]
  int v222; // [rsp+1E4h] [rbp-804h]
  char *v223; // [rsp+1E8h] [rbp-800h]
  __int64 v224; // [rsp+1F0h] [rbp-7F8h]
  __int64 v225; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v226; // [rsp+200h] [rbp-7E8h]
  int v227; // [rsp+210h] [rbp-7D8h]
  __int128 v228; // [rsp+218h] [rbp-7D0h]
  __int128 v229; // [rsp+228h] [rbp-7C0h]
  __int128 v230; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v232; // [rsp+260h] [rbp-788h] BYREF
  __int128 v233; // [rsp+270h] [rbp-778h] BYREF
  __int128 v234; // [rsp+280h] [rbp-768h] BYREF
  __int128 v235; // [rsp+290h] [rbp-758h] BYREF
  __int128 v236; // [rsp+2A0h] [rbp-748h]
  __int128 v237; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v238; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v239; // [rsp+2D0h] [rbp-718h]
  _OWORD v240[6]; // [rsp+2E0h] [rbp-708h] BYREF
  __int64 v241; // [rsp+340h] [rbp-6A8h]
  unsigned __int64 v242; // [rsp+350h] [rbp-698h]
  __int128 v243; // [rsp+358h] [rbp-690h] BYREF
  unsigned __int64 v244; // [rsp+368h] [rbp-680h]
  void *v245; // [rsp+370h] [rbp-678h]
  __int128 v246; // [rsp+380h] [rbp-668h]
  __int128 v247; // [rsp+390h] [rbp-658h]
  __int128 v248; // [rsp+3A0h] [rbp-648h]
  __int128 v249; // [rsp+3B0h] [rbp-638h]
  __int128 v250; // [rsp+3C0h] [rbp-628h]
  __int128 v251; // [rsp+3D0h] [rbp-618h]
  __int128 v252; // [rsp+3E0h] [rbp-608h]
  __int128 v253; // [rsp+3F0h] [rbp-5F8h]
  __int128 v254; // [rsp+400h] [rbp-5E8h]
  __int128 v255; // [rsp+410h] [rbp-5D8h]
  __int64 v256; // [rsp+420h] [rbp-5C8h] BYREF
  int v257; // [rsp+428h] [rbp-5C0h]
  __int128 JobObjectInformation; // [rsp+430h] [rbp-5B8h] BYREF
  __int128 v259; // [rsp+440h] [rbp-5A8h]
  __int64 v260; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v262; // [rsp+488h] [rbp-560h] BYREF
  __int128 v263; // [rsp+4C0h] [rbp-528h] BYREF
  __int128 v264; // [rsp+4D0h] [rbp-518h]
  __int128 v265; // [rsp+4E0h] [rbp-508h]
  __int128 v266; // [rsp+4F0h] [rbp-4F8h]
  __int128 v267; // [rsp+500h] [rbp-4E8h]
  __int128 v268; // [rsp+510h] [rbp-4D8h]
  __int128 v269; // [rsp+520h] [rbp-4C8h]
  __int128 v270; // [rsp+530h] [rbp-4B8h]
  __int128 v271; // [rsp+540h] [rbp-4A8h]
  __int64 v272; // [rsp+550h] [rbp-498h]
  _OWORD v273[9]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v274[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v275[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _BYTE v276[432]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v277[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v180 = ProcessHandle;
  v199 = ProcessInformation;
  v223 = (char *)ProcessInformation;
  v203[2] = ProcessInformationLength;
  v186 = (volatile signed __int32 *)ReturnLength;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v181 = 0;
  Handle = 0LL;
  v184 = 0;
  memset(v275, 0, 0xA8uLL);
  v191 = 0LL;
  GroupMaskProcess = 0;
  v203[0] = 0;
  v221 = 0;
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0LL;
  v263 = 0LL;
  v264 = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  v272 = 0LL;
  memset(&v213[1], 0, 32);
  v214 = 0LL;
  v198 = 0LL;
  v243 = 0LL;
  v205 = 0LL;
  JobObjectInformation = 0LL;
  v259 = 0LL;
  v260 = 0LL;
  v204 = 0LL;
  ObjectNameInformation = 0LL;
  v183 = 0;
  Object = 0LL;
  v210[0] = 0LL;
  v192 = 0;
  memset(v240, 0, sizeof(v240));
  v241 = 0LL;
  Src = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v10 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v176[1] = v10;
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
      memset(v274, 0, 0xA8uLL);
      v176[0] = 0;
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
      v181 = v5;
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
          KeQueryAffinityProcess((__int64)v22, v274, &GroupMaskProcess, 0LL);
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
                P = (PVOID)*((_QWORD *)v274 + Group + 1);
            }
          }
        }
        if ( v21 )
          PsQueryProcessAttributes(v22, v176, 0LL);
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
          if ( v176[0] )
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
      PsQueryStatisticsProcess(Object, v240);
      v228 = *(_OWORD *)((char *)&v240[2] + 8);
      v229 = *(_OWORD *)((char *)&v240[3] + 8);
      v230 = *(_OWORD *)((char *)&v240[4] + 8);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v228;
      *(_OWORD *)(v6 + 16) = v229;
      *(_OWORD *)(v6 + 32) = v230;
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
      LODWORD(v232) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v232 + 1, &v233, &v237, &v204, &v205, v203);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters((__int64)v32, 1, &v234, (_QWORD *)&v233 + 1);
      PsQueryProcessQuotaCounters(v33, 0, &v235, (_QWORD *)&v234 + 1);
      *((_QWORD *)&v235 + 1) = v32[201] << 12;
      *(_QWORD *)&v236 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v237 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v236 + 1) = *((_QWORD *)&v235 + 1);
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
      v35 = PsQueryRuntimeProcess((__int64)Object, &v192);
      v36 = KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)v35;
      *(_QWORD *)(v6 + 24) = v36 * v192;
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
      HIBYTE(v183) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v183;
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
      v193 = 0;
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
      ProcessHandleCount = ObGetProcessHandleCount(Object, &v193);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = v193;
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
        || (KeQueryAffinityProcess((__int64)v34, v275, &GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ObfDereferenceObjectWithTag(v34, 0x79517350u);
        return -1073741811;
      }
      _BitScanForward((unsigned int *)&v83, GroupMaskProcess);
      v84 = *((_QWORD *)v275 + v83 + 1);
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
        v185 = *(_DWORD *)(v6 + 40);
        v45 = v185;
        if ( (v185 & 0xFFFFFFFE) != 0 )
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
        v6 = (unsigned __int64)&v243;
        v14 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v9 = (unsigned int *)(v223 + 16);
      v181 = v14;
      DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, (_OWORD *)v6, v9, &v181);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *ReturnLength = v181 + 16;
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
        v51 = Object;
        v52 = ObReferenceProcessHandleTable(Object);
        v53 = v52;
        v204 = v52;
        if ( v52 )
        {
          v54 = ExReferenceHandleDebugInfo(v52);
          v55 = v54;
          v205 = v54;
          if ( v54 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v56 = (unsigned int)(*(_DWORD *)(v54 + 72) % *(_DWORD *)(v54 + 4));
            v194 = v56;
            while ( 1 )
            {
              v203[1] = (_DWORD)v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v55 + 4) )
                break;
              v57 = (_OWORD *)(v55 + 160 * v56);
              v246 = v57[5];
              v247 = v57[6];
              v248 = v57[7];
              v249 = v57[8];
              v250 = v57[9];
              v251 = v57[10];
              v252 = v57[11];
              v253 = v57[12];
              v254 = v57[13];
              v255 = v57[14];
              v58 = v247;
              if ( *(_QWORD *)v6 == (_QWORD)v247 || !*(_QWORD *)v6 )
              {
                v59 = DWORD2(v247);
                if ( DWORD2(v247) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)P )
                  {
                    P = (PVOID)(unsigned int)((_DWORD)P - 1);
                    v222 = (int)P;
                    *(_QWORD *)v49 = v58;
                    *(_OWORD *)(v49 + 8) = v246;
                    *(_DWORD *)(v49 + 24) = v59;
                    *(_OWORD *)(v49 + 32) = v248;
                    *(_OWORD *)(v49 + 48) = v249;
                    *(_OWORD *)(v49 + 64) = v250;
                    *(_OWORD *)(v49 + 80) = v251;
                    *(_OWORD *)(v49 + 96) = v252;
                    *(_OWORD *)(v49 + 112) = v253;
                    *(_OWORD *)(v49 + 128) = v254;
                    *(_OWORD *)(v49 + 144) = v255;
                    v49 += 160LL;
                    v244 = v49;
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
              v194 = v56;
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
      ExecuteOptions = KeGetExecuteOptions(CurrentProcess, &v184);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v184;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      v206.QuadPart = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v63 = (struct _DMA_ADAPTER *)PsGetCurrentProcess();
        v186 = (volatile signed __int32 *)v63;
        Object = v63;
      }
      else
      {
        v212 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v10, &v212, 0LL);
        v63 = (struct _DMA_ADAPTER *)v212;
        v186 = (volatile signed __int32 *)v212;
        Object = v212;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        DmaOperations = (int)v63[82].DmaOperations;
        if ( DmaOperations )
          break;
        KeQuerySystemTimePrecise(&v206);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v67 = ExGenRandom(1);
        v68 = __rdtsc();
        _InterlockedCompareExchange(
          v186 + 330,
          v68 ^ v67 ^ CurrentPrcb->MmPageFaultCount ^ v206.LowPart ^ v206.HighPart ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v63 = (struct _DMA_ADAPTER *)Object;
        v186 = (volatile signed __int32 *)Object;
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
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v210);
      *(_QWORD *)(v6 + 8) = v210[0];
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
      v191 = v17;
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
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v191);
        v17 = (struct _FILE_OBJECT *)v191;
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
      v245 = *(void **)v6;
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
                         &v191,
                         0LL);
      v38 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v77 = (struct _DMA_ADAPTER *)v191;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v78 = (_DMA_OPERATIONS *)*((_QWORD *)v191 + 5);
      v79 = DmaAdapter;
      v80 = DmaAdapter[2].DmaOperations;
      v81 = 0;
      if ( v78 != v80 )
        v81 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v191);
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
      v185 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v82 = (v185 >> 19) & 1 | 2;
      if ( (v185 & 0x40000) == 0 )
        v82 = (v185 >> 19) & 1;
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
      v185 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v185 & 0x200000) != 0;
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
        v87 = v181;
        do
        {
          _BitScanForward(&v88, v85);
          v87 += 2;
          v181 = v87;
          if ( v87 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v88;
            v6 += 2LL;
            v242 = v6;
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
      memset(&v262, 0, sizeof(v262));
      v187 = 0;
      *(_OWORD *)v200 = 0LL;
      v225 = 0LL;
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
          KeStackAttachProcess(v91, &v262);
          v92 = (unsigned int **)v91[1].AffinityPadding[10];
          if ( v92 )
            v9 = *v92;
          if ( v9 )
          {
            v224 = v9[4];
            v187 = *(_DWORD *)(v224 + 104);
            v93 = *(_QWORD *)(v224 + 112);
            v210[1] = v93;
            v200[0] = v93;
            *(_QWORD *)&v200[2] = HIDWORD(v93);
          }
          else
          {
            v207 = *(_QWORD *)(v91[1].AffinityPadding[4] + 32);
            v94 = v207 + 164;
            if ( (unsigned __int64)(v207 + 164) >= 0x7FFFFFFF0000LL )
              v94 = 0x7FFFFFFF0000LL;
            v187 = *(_DWORD *)v94;
            v226 = 0LL;
            v95 = v207 + 176;
            if ( (unsigned __int64)(v207 + 176) >= 0x7FFFFFFF0000LL )
              v95 = 0x7FFFFFFF0000LL;
            LODWORD(v226) = *(_DWORD *)v95;
            *((_QWORD *)&v226 + 1) = *(_QWORD *)(v95 + 8);
            *(_OWORD *)v200 = v226;
            LOWORD(v93) = v226;
          }
          DeviceMapInformation = i;
          KeUnstackDetachProcess(&v262);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v96 = (unsigned __int16)v93 + 6;
          if ( ReturnLength )
            *ReturnLength = v96;
          if ( (unsigned int)v5 >= v96 )
          {
            *(_DWORD *)v6 = v187;
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
                                     v200[2],
                                     v97,
                                     (int)v6 + 6,
                                     *(size_t *)Tag,
                                     1,
                                     (__int64)&v225);
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
      v208 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v10, &v208, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v98 = (struct _DMA_ADAPTER *)v208;
        v99 = ObReferenceProcessHandleTable(v208);
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
        v77 = v98;
LABEL_365:
        HalPutDmaAdapter(v77);
        return ProcessHandleInformation;
      }
      return result;
    case ProcessMitigationPolicy:
      v195 = 0;
      v177 = 0;
      v178 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v103 = *(_DWORD *)v6;
      v227 = *(_DWORD *)v6;
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
      v134 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v135 = ObReferenceProcessHandleTable(Object);
      if ( !v135 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryHandleExceptions(v135) != 0;
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
      LOBYTE(v136) = 1;
      *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v136);
      *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(v137, 0LL);
      goto LABEL_122;
    case ProcessHandleTable:
      v209 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 v6,
                 (unsigned int)v5,
                 (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
                 1LL,
                 &v209,
                 &P);
      if ( result >= 0 )
      {
        v138 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v138 >= 0 )
        {
          v213[0] = 0LL;
          v139 = Object;
          v140 = ObReferenceProcessHandleTable(Object);
          if ( v140 )
          {
            *(_QWORD *)&v213[0] = v209;
            *((_QWORD *)&v213[0] + 1) = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v140, PspHandleTableWalker, v213, 0LL);
            ObDereferenceProcessHandleTable(v139);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v139, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v213[0]);
          ExUnlockUserBuffer((struct _MDL *)P);
          return (int)v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v138;
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
      v141 = v10;
      v142 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v141, ReturnLength);
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
      v142 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (ULONG_PTR)Object,
                             (volatile void *)v6,
                             (unsigned int)v5,
                             (__int64)ReturnLength);
LABEL_523:
      DeviceMapInformation = ProcessCommandLine;
      if ( v142 )
        goto LABEL_524;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      v196 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v201 = *(_OBJECT_NAME_INFORMATION *)v6;
        v202 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v201.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v201.Name.MaximumLength + 1) >= 8u || v201.Name.Buffer )
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
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v196, &v201.Name.Buffer, &v202, (_QWORD *)&v202 + 1);
              *(_DWORD *)(&v201.Name.MaximumLength + 1) ^= ((unsigned __int8)v196 ^ *((_BYTE *)&v201.Name.MaximumLength
                                                                                    + 2)) & 1;
              v201.Name.Buffer = (wchar_t *)((__int64)v201.Name.Buffer << 12);
              *(_QWORD *)&v202 = (_QWORD)v202 << 12;
              *((_QWORD *)&v202 + 1) <<= 12;
              *(_OBJECT_NAME_INFORMATION *)v6 = v201;
              *(_OWORD *)(v6 + 16) = v202;
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
        v146 = 8 * KeQueryCpuSetsProcess((__int64)Object, v277, v145, (int)v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v146;
        if ( v146 < (unsigned int)v5 )
          LODWORD(v5) = v146;
        memmove((void *)v6, v277, (unsigned int)v5);
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
        *((_QWORD *)&v213[2] + 1) = 0LL;
        v214 = 0LL;
        if ( *((_QWORD *)Object + 162) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, &v263, 0x98u, 0LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v213[1] + 8) = JobObjectInformation;
          *(_QWORD *)&v213[1] = v259;
          v73 = v214;
          if ( (v264 & 0x200000) != 0 )
            v73 = v272;
          v214 = v73;
          v74 = *((_QWORD *)&v213[2] + 1);
          if ( (v264 & 0x200) != 0 )
            v74 = *((_QWORD *)&v270 + 1);
          *((_QWORD *)&v213[2] + 1) = v74;
          *(__m256i *)v6 = *(__m256i *)&v213[1];
          *(_QWORD *)(v6 + 32) = v214;
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
      v134 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v144 = ObReferenceProcessHandleTable(Object);
      if ( !v144 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v144) != 0;
      *(_DWORD *)v6 = (_DWORD)v9;
LABEL_506:
      ObDereferenceProcessHandleTable(v91);
      ObfDereferenceObjectWithTag(v91, 0x79517350u);
      return v134;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v147 = PsGetCurrentProcess();
        Object = v147;
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
        v147 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v147);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v149 = NoChildProcessRestrictedPolicy - 1;
      if ( !v149 )
        goto LABEL_575;
      v150 = v149 - 1;
      if ( v150 )
      {
        if ( v150 == 1 )
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
      ObfDereferenceObjectWithTag(v147, 0x79517350u);
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
        LODWORD(v9) = qword_140C1E010;
      *(_DWORD *)v6 = (_DWORD)v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessEnergyValues:
      memset(v276, 0, sizeof(v276));
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
      PsQueryProcessEnergyValues(Object, v276);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v276, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_638;
    case ProcessPowerThrottlingState:
      v256 = 0LL;
      v257 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v152 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v10,
               0x79517350u,
               &Object,
               0LL);
      if ( v152 >= 0 )
      {
        v153 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v154 = Object;
        v152 = v153(Object, &v256);
        if ( v152 >= 0 )
        {
          *(_QWORD *)v6 = v256;
          *(_DWORD *)(v6 + 8) = v257;
          if ( ReturnLength )
            *ReturnLength = 12;
          v152 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v154, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v152;
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v155 = PsGetCurrentProcess();
        Object = v155;
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
        v155 = Object;
      }
      *(_DWORD *)v6 = 0;
      v156 = v155[628];
      v157 = 0;
      if ( (v156 & 0x4000) != 0 )
      {
        v157 = 1;
        *(_DWORD *)v6 = 1;
        v156 = v155[628];
      }
      if ( (v156 & 0x8000) != 0 )
        *(_DWORD *)v6 = v157 | 2;
      *(_DWORD *)(v6 + 4) = v155[602];
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
        v142 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(
                                 (__int64)CurrentThread,
                                 (__int64)Object,
                                 v6);
        if ( DeviceMapInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
          ObfDereferenceObjectWithTag(v142, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_524:
          ObfDereferenceObjectWithTag(v142, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case ProcessEnergyTrackingState:
      memset(v273, 0, sizeof(v273));
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
        v158 = Object;
        PoQueryProcessEnergyTrackingState(Object, v273);
        v159 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v159 = v5;
        memmove((void *)v6, v273, v159);
        if ( ReturnLength )
          *ReturnLength = v159;
        i = 0;
        ObfDereferenceObjectWithTag(v158, 0x79517350u);
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
      v238 = 0LL;
      v239 = 0LL;
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
      v216 = 0LL;
      v162 = 0LL;
      v217 = 0LL;
      v197 = 0LL;
      v218 = 0LL;
      v220 = 0LL;
      v163 = CurrentThread;
      v147 = Object;
      PspLockProcessSecurityShared((__int64)Object, (__int64)CurrentThread);
      v164 = *((_QWORD *)v147 + 292) >> 61;
      if ( (unsigned __int64)(v164 - 3) <= 1
        && (v197 = (HANDLE)(*((_QWORD *)v147 + 292) & 0x1FFFFFFFFFFFFFFFLL),
            v218 = v197,
            v216 = *((_QWORD *)v147 + 291),
            v162 = v216 - *((_QWORD *)v147 + 288),
            v217 = v162,
            v164 == 3) )
      {
        v165 = 512;
      }
      else
      {
        v165 = v220;
      }
      LODWORD(v220) = v165 & 0xFFFFFE00 | *((_BYTE *)v147 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v147 + 2171) & 0x38 | (32 * (*((_DWORD *)v147 + 543) & 4))));
      PspUnlockProcessShared((__int64)v147, (__int64)v163);
      PsGetProcessDeepFreezeStats(v147, &v238);
      v215 = v238;
      v219 = v239;
      if ( !v162 )
        v217 = v238 - *((_QWORD *)v147 + 288);
      if ( !v197 )
        v218 = (HANDLE)(*((_QWORD *)&v238 + 1) - *((_QWORD *)v147 + 289) - v239);
      v166 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v166 = v5;
      memmove((void *)v6, &v215, v166);
      if ( ReturnLength )
        *ReturnLength = v166;
      i = 0;
      goto LABEL_579;
    case ProcessImageSection:
      v197 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v10 )
      {
        v160 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v160 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v160 = *(_QWORD *)v160;
      }
      v161 = PsGetCurrentProcess();
      if ( ProcessHandle != (HANDLE)-1LL || v161 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v161[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v10, &v197);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v197;
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
        _InterlockedOr(v172, 0);
        *(_QWORD *)v6 = PspReadProcessSecurityDomain((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 8;
        i = 0;
LABEL_618:
        ObfDereferenceObjectWithTag(v155, 0x79517350u);
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
          v167 = PsGetCurrentProcess();
          v168 = v167[1].AffinityPadding[4];
          if ( v168 )
          {
            v169 = 0LL;
            v170 = (__int64 *)v167[1].AffinityPadding[10];
            if ( v170 )
              v169 = *v170;
            if ( v169 )
            {
              if ( (*(_DWORD *)(v169 + 1140) & 1) != 0 )
                LODWORD(v198) = 1;
            }
            else
            {
              v171 = v198;
              if ( (*(_BYTE *)(v168 + 1984) & 1) != 0 )
                v171 = 1;
              LODWORD(v198) = v171;
            }
          }
          *(_QWORD *)v6 = v198;
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
      v104 = Object;
      v105 = *((_DWORD *)Object + 628);
      if ( (v105 & 0x40) == 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v105 = v104[628];
      }
      if ( (v105 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v105 = v104[628];
      }
      if ( (v105 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v105 = v104[628];
      }
      if ( (v105 & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_499;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v109 = Object;
      v110 = *((_DWORD *)Object + 628);
      if ( (v110 & 0x100) != 0 )
      {
        v111 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v110 & 0x800) == 0 )
          goto LABEL_399;
        v111 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v111;
LABEL_399:
      v112 = v109[628];
      if ( (v112 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v112 = v109[628];
      }
      if ( (v112 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_499;
    case 3:
      i = 0;
      v106 = ObReferenceProcessHandleTable(Object);
      if ( v106 )
      {
        ExQueryHandleExceptionsPermanency(v106, &v177, &v178);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v177 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v178 )
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
      v107 = *((_DWORD *)Object + 628);
      if ( (v107 & 0x1000) != 0 )
      {
        v108 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v107 & 0x2000) == 0 )
          goto LABEL_499;
        v108 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v108;
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
      v113 = Object;
      v114 = *((_DWORD *)Object + 628);
      if ( (v114 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v114 = v113[628];
      }
      if ( (v114 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v114 = v113[628];
      }
      if ( (v114 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_499;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v195);
      *(_DWORD *)(v6 + 4) = v195;
      goto LABEL_499;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v115 = *((_DWORD *)Object + 628);
      if ( (v115 & 0x10000) != 0 )
      {
        v116 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v115 & 0x20000) == 0 )
          goto LABEL_499;
        v116 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v116;
      goto LABEL_499;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v117 = Object;
      v118 = *((_DWORD *)Object + 628);
      if ( (v118 & 0x80000) != 0 )
      {
        v119 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v118 & 0x100000) == 0 )
          goto LABEL_426;
        v119 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v119;
LABEL_426:
      v120 = v117[628];
      if ( (v120 & 0x200000) != 0 )
      {
        v121 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v120 & 0x400000) == 0 )
          goto LABEL_431;
        v121 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v121;
LABEL_431:
      if ( (v117[628] & 0x40000) != 0 )
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
      v122 = Object;
      v123 = *((_DWORD *)Object + 629);
      if ( (v123 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v123 = v122[629];
      }
      if ( (v123 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v123 = v122[629];
      }
      if ( (v123 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v123 = v122[629];
      }
      if ( (v123 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v123 = v122[629];
      }
      if ( (v123 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v123 = v122[629];
      }
      if ( (v123 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v123 = v122[629];
      }
      if ( (v123 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v123 = v122[629];
      }
      if ( (v123 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v123 = v122[629];
      }
      if ( (v123 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v123 = v122[629];
      }
      if ( (v123 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v123 = v122[629];
      }
      if ( (v123 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v123 = v122[629];
      }
      if ( (v123 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_499;
    case 13:
      i = 0;
      v124 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v125 = v124 - 1;
      if ( !v125 )
        goto LABEL_465;
      v126 = v125 - 1;
      if ( v126 )
      {
        if ( v126 != 1 )
          goto LABEL_499;
        v127 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_465:
        v127 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v127;
LABEL_499:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v128 = Object;
      v129 = *((_DWORD *)Object + 628);
      if ( (v129 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v129 = v128[628];
      }
      if ( v129 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v130 = Object;
      v131 = *((_DWORD *)Object + 629);
      if ( (v131 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v131 = v130[629];
      }
      if ( (v131 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_499;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v132 = Object;
      v133 = *((_DWORD *)Object + 629);
      if ( (v133 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v133 = v132[629];
      }
      if ( (v133 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v133 = v132[629];
      }
      if ( (v133 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v133 = v132[629];
      }
      if ( (v133 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v133 = v132[629];
      }
      if ( (v133 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v133 = v132[629];
      }
      if ( (v133 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v133 = v132[629];
      }
      if ( (v133 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v133 = v132[629];
      }
      if ( (v133 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v133 = v132[629];
      }
      if ( (v133 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v133 = v132[629];
      }
      if ( v133 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_499;
    default:
      i = -1073741637;
      goto LABEL_499;
  }
}
