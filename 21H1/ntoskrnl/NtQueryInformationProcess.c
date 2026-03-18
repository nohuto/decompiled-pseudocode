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

int __fastcall NtQueryInformationProcess(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4, unsigned int *a5)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned int *v9; // r14
  unsigned __int8 v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  int result; // eax
  unsigned int v14; // ecx
  int DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v16; // r12
  struct _FILE_OBJECT *v17; // rbx
  NTSTATUS v18; // r12d
  POBJECT_NAME_INFORMATION v19; // rbx
  unsigned int v20; // edi
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
  int ProcessTelemetryCoverage; // eax
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  unsigned int v45; // edi
  int SessionId; // ebx
  unsigned int **v47; // rax
  int v48; // ebx
  unsigned __int64 v49; // r13
  int v50; // edi
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
  _DWORD *v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v69; // ecx
  unsigned __int64 v70; // rax
  struct _EX_RUNDOWN_REF *v71; // r13
  struct _DMA_ADAPTER *Count; // r12
  int v73; // ebx
  PVOID v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  void *v77; // rdi
  int ProcessHandleInformation; // edi
  struct _DMA_ADAPTER *v79; // rcx
  _DMA_OPERATIONS *v80; // rsi
  struct _DMA_ADAPTER *v81; // rbx
  _DMA_OPERATIONS *DmaOperations; // rdi
  int v83; // r12d
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // eax
  void *v88; // r8
  unsigned int v89; // ecx
  unsigned int v90; // edx
  unsigned int v91; // ebx
  __int64 v92; // rbx
  struct _KPROCESS *v93; // rbx
  unsigned int **v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rcx
  unsigned int v98; // eax
  int v99; // eax
  struct _DMA_ADAPTER *v100; // r14
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // edi
  _DWORD *v106; // rcx
  int v107; // eax
  __int64 v108; // rax
  int v109; // ecx
  int v110; // eax
  _DWORD *v111; // rcx
  int v112; // eax
  int v113; // eax
  int v114; // eax
  _DWORD *v115; // rcx
  int v116; // eax
  int v117; // ecx
  int v118; // eax
  _DWORD *v119; // rcx
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  _DWORD *v124; // rcx
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  _DWORD *v130; // rcx
  int v131; // eax
  _DWORD *v132; // rcx
  int v133; // eax
  _DWORD *v134; // rcx
  int v135; // eax
  int v136; // edi
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  NTSTATUS v140; // ebx
  PVOID v141; // rbx
  __int64 v142; // rax
  char v143; // r9
  PVOID v144; // rbx
  int ProcessCommandLine; // eax
  __int64 v146; // rax
  __int64 v147; // r8
  unsigned int v148; // ebx
  void *v149; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v151; // eax
  int v152; // eax
  unsigned __int64 ExtensionTable; // rdi
  NTSTATUS v154; // ebx
  __int64 (__fastcall *v155)(PVOID, __int64 *); // rax
  PVOID v156; // rdi
  _DWORD *v157; // rcx
  int v158; // edx
  int v159; // eax
  PVOID v160; // rdi
  unsigned int v161; // ebx
  __int64 v162; // rcx
  _KPROCESS *v163; // rcx
  __int64 v164; // r12
  struct _KTHREAD *v165; // rdi
  __int64 v166; // rcx
  int v167; // r8d
  unsigned int v168; // edi
  _KPROCESS *v169; // rax
  unsigned __int64 v170; // r8
  __int64 v171; // rcx
  __int64 *v172; // rdx
  int v173; // eax
  signed __int32 v174[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  int i; // [rsp+48h] [rbp-9A0h]
  _BYTE v178[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v179; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v180; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v182; // [rsp+58h] [rbp-990h]
  unsigned int v183; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v185; // [rsp+70h] [rbp-978h]
  int v186; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v187; // [rsp+78h] [rbp-970h]
  _DWORD *v188; // [rsp+80h] [rbp-968h]
  int v189; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handlea; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v193; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v194; // [rsp+B0h] [rbp-938h] BYREF
  int v195; // [rsp+B4h] [rbp-934h] BYREF
  int v196; // [rsp+B8h] [rbp-930h]
  int v197; // [rsp+BCh] [rbp-92Ch] BYREF
  int v198; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v199; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v200; // [rsp+D0h] [rbp-918h]
  unsigned __int64 v201; // [rsp+D8h] [rbp-910h]
  int v202[4]; // [rsp+E0h] [rbp-908h]
  struct _OBJECT_NAME_INFORMATION v203; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v204; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v205[4]; // [rsp+110h] [rbp-8D8h] BYREF
  __int64 v206; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v207; // [rsp+128h] [rbp-8C0h] BYREF
  __int64 v208; // [rsp+130h] [rbp-8B8h] BYREF
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
  unsigned __int64 v225; // [rsp+1E8h] [rbp-800h]
  __int64 v226; // [rsp+1F0h] [rbp-7F8h]
  __int64 v227; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v228; // [rsp+200h] [rbp-7E8h]
  int v229; // [rsp+210h] [rbp-7D8h]
  unsigned __int128 v230; // [rsp+218h] [rbp-7D0h]
  unsigned __int128 v231; // [rsp+228h] [rbp-7C0h]
  unsigned __int128 v232; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v234; // [rsp+260h] [rbp-788h] BYREF
  __int128 v235; // [rsp+270h] [rbp-778h] BYREF
  __int128 v236; // [rsp+280h] [rbp-768h] BYREF
  __int128 v237; // [rsp+290h] [rbp-758h] BYREF
  __int128 v238; // [rsp+2A0h] [rbp-748h]
  __int128 v239; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v240; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v241; // [rsp+2D0h] [rbp-718h]
  _OWORD v242[2]; // [rsp+2E0h] [rbp-708h] BYREF
  __int128 v243; // [rsp+300h] [rbp-6E8h]
  __int128 v244; // [rsp+310h] [rbp-6D8h]
  __int128 v245; // [rsp+320h] [rbp-6C8h]
  __int128 v246; // [rsp+330h] [rbp-6B8h]
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
  __int128 v264; // [rsp+430h] [rbp-5B8h]
  __int128 v265; // [rsp+440h] [rbp-5A8h]
  __int64 v266; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v268; // [rsp+488h] [rbp-560h] BYREF
  __int128 v269; // [rsp+4C0h] [rbp-528h]
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

  v5 = a4;
  v6 = a3;
  v182 = Handle;
  v201 = a3;
  v225 = a3;
  v205[2] = a4;
  v188 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v183 = 0;
  Handlea = 0LL;
  v186 = 0;
  memset(v281, 0, 0xA8uLL);
  v193 = 0LL;
  GroupMaskProcess = 0;
  v205[0] = 0;
  v223 = 0;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
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
  memset(&v215[1], 0, 32);
  v216 = 0LL;
  v200 = 0LL;
  v249 = 0LL;
  v207 = 0LL;
  v264 = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  v206 = 0LL;
  ObjectNameInformation = 0LL;
  v185 = 0;
  Object = 0LL;
  v212[0] = 0LL;
  v194 = 0;
  memset(v242, 0, sizeof(v242));
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  v246 = 0LL;
  v247 = 0LL;
  Src = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v238 = 0LL;
  v239 = 0LL;
  v10 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v178[1] = v10;
  CurrentThread = KeGetCurrentThread();
  if ( !v10 )
    goto LABEL_23;
  if ( a2 == 61 )
  {
LABEL_13:
    v11 = 0LL;
    goto LABEL_14;
  }
  if ( a2 != 65 )
  {
    if ( ((a2 - 70) & 0xFFFFFFFB) != 0 )
    {
      if ( a2 == 92 )
      {
        v11 = 7LL;
      }
      else if ( a2 == 94 )
      {
        v11 = 7LL;
      }
      else
      {
        v11 = 3LL;
        if ( a2 == 87 )
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
  if ( a5 )
  {
    v12 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
LABEL_23:
  switch ( a2 )
  {
    case 0:
      memset(v280, 0, 0xA8uLL);
      v178[0] = 0;
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
      v183 = v5;
      P = (PVOID)v6;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
          PsQueryProcessAttributes(v22, v178, 0LL);
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
          if ( v178[0] )
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
        if ( a5 )
          *a5 = v5;
        goto LABEL_532;
      }
LABEL_548:
      ObfDereferenceObjectWithTag(v23, 0x79517350u);
      return v18;
    case 1:
      return PspQueryQuotaLimits(Handle, 0x7FFFFFFF0000LL, (void *)v6, v5, a5, v10);
    case 2:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      PsQueryStatisticsProcess(Object, v242);
      v230 = __PAIR128__(v244, *((unsigned __int64 *)&v243 + 1));
      v231 = __PAIR128__(v245, *((unsigned __int64 *)&v244 + 1));
      v232 = __PAIR128__(v246, *((unsigned __int64 *)&v245 + 1));
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v230;
      *(_OWORD *)(v6 + 16) = v231;
      *(_OWORD *)(v6 + 32) = v232;
      if ( a5 )
        *a5 = 48;
      return DeviceMapInformation;
    case 3:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      LODWORD(v234) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v234 + 1, &v235, &v239, &v206, &v207, v205);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters((__int64)v32, 1, &v236, (_QWORD *)&v235 + 1);
      PsQueryProcessQuotaCounters(v33, 0, &v237, (_QWORD *)&v236 + 1);
      *((_QWORD *)&v237 + 1) = v32[201] << 12;
      *(_QWORD *)&v238 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v239 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v238 + 1) = *((_QWORD *)&v237 + 1);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      result = i;
      if ( i < 0 )
        return result;
      memmove((void *)v6, &Src, v5);
      if ( a5 )
        *a5 = v5;
      return 0;
    case 4:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      v35 = PsQueryRuntimeProcess((__int64)Object, &v194);
      v36 = (unsigned int)KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)v35;
      *(_QWORD *)(v6 + 24) = v36 * v194;
      *(struct _EX_RUNDOWN_REF *)v6 = v34[141];
      *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v34[264];
      if ( a5 )
        *a5 = 32;
      goto LABEL_355;
    case 7:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      Handlea = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 175) >> 64);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handlea;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 10:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 12:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      return 0;
    case 14:
      return PspQueryPooledQuotaLimits(Handle, v10);
    case 15:
    case 42:
      return PspQueryWorkingSetWatch(Handle, (__int64)a5, v10);
    case 18:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      HIBYTE(v185) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v185;
      if ( a5 )
        *a5 = 2;
      return 0;
    case 19:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               Handle,
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
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 20:
      v195 = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
      if ( a5 )
        *a5 = 4;
      return 0;
    case 21:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      _BitScanForward((unsigned int *)&v85, GroupMaskProcess);
      v86 = *((_QWORD *)v281 + v85 + 1);
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v85;
      *(_QWORD *)v6 = v86;
      if ( a5 )
        *a5 = v5;
      goto LABEL_355;
    case 22:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               Handle,
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
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 23:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v187 = *(_DWORD *)(v6 + 40);
        v45 = v187;
        if ( (v187 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v45 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( DeviceMapInformation >= 0 && a5 )
        *a5 = v5;
      return DeviceMapInformation;
    case 24:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      return 0;
    case 26:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 8;
      return 0;
    case 27:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
        v9 = (unsigned int *)(v225 + 16);
      v183 = v14;
      DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, (_OWORD *)v6, v9, &v183);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *a5 = v183 + 16;
      return DeviceMapInformation;
    case 28:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 29:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      return 0;
    case 30:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v10, &Handlea);
      v39 = Handlea;
      if ( DeviceMapInformation < 0 )
        v39 = 0LL;
      Handlea = v39;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handlea;
      if ( a5 )
        *a5 = 8;
      return DeviceMapInformation;
    case 31:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 32:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( ExIsRestrictedCaller(v10) )
        return -1073741790;
      P = (PVOID)((unsigned int)(v5 - 16) / 0xA0uLL);
      v49 = v6 + 16;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
        v206 = v52;
        if ( v52 )
        {
          v54 = ExReferenceHandleDebugInfo(v52);
          v55 = v54;
          v207 = v54;
          if ( v54 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v56 = (unsigned int)(*(_DWORD *)(v54 + 72) % *(_DWORD *)(v54 + 4));
            v196 = v56;
            while ( 1 )
            {
              v205[1] = (_DWORD)v9;
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
                    v224 = (int)P;
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
              v196 = v56;
              LODWORD(v9) = (_DWORD)v9 + 1;
            }
            if ( a5 )
              *a5 = v49 - v6;
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
    case 33:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 34:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        CurrentProcess = PsGetCurrentProcess();
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
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
      ExecuteOptions = KeGetExecuteOptions(CurrentProcess, &v186);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v186;
        if ( a5 )
          *a5 = 4;
      }
      return ExecuteOptions;
    case 36:
      v208 = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v63 = PsGetCurrentProcess();
        v188 = v63;
        Object = v63;
      }
      else
      {
        v214 = 0LL;
        result = ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsProcessType, v10, &v214, 0LL);
        v63 = v214;
        v188 = v214;
        Object = v214;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        v66 = v63[330];
        if ( v66 )
          break;
        KeQuerySystemTimePrecise(&v208, (__int64)v63, v64, v65);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v69 = ExGenRandom(1);
        v70 = __rdtsc();
        _InterlockedCompareExchange(
          v188 + 330,
          v70 ^ v69 ^ CurrentPrcb->MmPageFaultCount ^ v208 ^ HIDWORD(v208) ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v63 = Object;
        v188 = Object;
      }
      *(_DWORD *)v6 = v66;
      if ( a5 )
        *a5 = 4;
      if ( Handle != (HANDLE)-1LL )
        HalPutDmaAdapter((PADAPTER_OBJECT)v63);
      return (int)v9;
    case 37:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
        if ( DeviceMapInformation >= 0 && a5 )
          *a5 = 64;
      }
      return DeviceMapInformation;
    case 38:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v73 = result;
      if ( result < 0 )
        return result;
      v74 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v212);
      *(_QWORD *)(v6 + 8) = v212[0];
      if ( a5 )
        *a5 = 16;
      goto LABEL_638;
    case 39:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 43:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      v193 = v17;
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
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v193);
        v17 = (struct _FILE_OBJECT *)v193;
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
        if ( a5 )
          *a5 = v20;
        ExFreePoolWithTag(v19, 0);
      }
      return v18;
    case 44:
      DmaAdapter = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v77 = *(void **)v6;
      v251 = *(void **)v6;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObReferenceObjectByHandleWithTag(
                         v77,
                         0x100020u,
                         (POBJECT_TYPE)IoFileObjectType,
                         v10,
                         0x79517350u,
                         &v193,
                         0LL);
      v38 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v79 = (struct _DMA_ADAPTER *)v193;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v80 = (_DMA_OPERATIONS *)*((_QWORD *)v193 + 5);
      v81 = DmaAdapter;
      DmaOperations = DmaAdapter[2].DmaOperations;
      v83 = 0;
      if ( v80 != DmaOperations )
        v83 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v193);
      HalPutDmaAdapter(v81);
      result = v83;
      if ( v80 == DmaOperations && a5 )
        *a5 = 0;
      return result;
    case 45:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
      if ( a5 )
        *a5 = 4;
      return 0;
    case 46:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v187 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v187 & 0x200000) != 0;
      *(_DWORD *)v6 = (_DWORD)v9;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 47:
      if ( !a5 || (v5 & 1) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
            v248 = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v90);
          v87 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *a5 = v89;
        v91 = (unsigned int)v5 < v89 ? 0xC0000023 : 0;
        i = v91;
        ObfDereferenceObjectWithTag(v88, 0x79517350u);
        return v91;
      }
      return result;
    case 49:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v92 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v92;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 50:
      memset(&v268, 0, sizeof(v268));
      v189 = 0;
      *(_OWORD *)v202 = 0LL;
      v227 = 0LL;
      if ( v10 != 1 )
        return -1073741823;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
          KeStackAttachProcess(v93, &v268);
          v94 = (unsigned int **)v93[1].AffinityPadding[10];
          if ( v94 )
            v9 = *v94;
          if ( v9 )
          {
            v226 = v9[4];
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
          KeUnstackDetachProcess(&v268);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v98 = (unsigned __int16)v95 + 6;
          if ( a5 )
            *a5 = v98;
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
            v34 = (struct _EX_RUNDOWN_REF *)Object;
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
          ObfDereferenceObjectWithTag(v93, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case 51:
      if ( (unsigned int)v5 < 0x10 )
      {
        if ( a5 )
          *a5 = 16;
        return -1073741820;
      }
      v210 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, v10, &v210, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v100 = (struct _DMA_ADAPTER *)v210;
        v101 = ObReferenceProcessHandleTable(v210);
        if ( v101 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v101, v6, (unsigned int)v5, a5);
          ObDereferenceProcessHandleTable(v100);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v102, v103, v104);
        v79 = v100;
LABEL_365:
        HalPutDmaAdapter(v79);
        return ProcessHandleInformation;
      }
      return result;
    case 52:
      v197 = 0;
      v179 = 0;
      v180 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v105 = *(_DWORD *)v6;
      v229 = *(_DWORD *)v6;
      if ( Handle == (HANDLE)-1LL )
      {
        Object = PsGetCurrentProcess();
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
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
    case 54:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
      *(_DWORD *)v6 = (_DWORD)v9;
      goto LABEL_506;
    case 55:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
    case 58:
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
                 Handle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
          if ( a5 )
            *a5 = 4 * HIDWORD(v215[0]);
          ExUnlockUserBuffer((struct _MDL *)P);
          return (int)v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v140;
        }
      }
      return result;
    case 59:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 60:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               Handle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v143 = v10;
      v144 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v143, a5);
      goto LABEL_523;
    case 61:
      v18 = ObReferenceObjectByHandleWithTag(
              Handle,
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
        if ( a5 )
          *a5 = 1;
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
    case 64:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               Handle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
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
                             (__int64)a5);
LABEL_523:
      DeviceMapInformation = ProcessCommandLine;
      if ( v144 )
        goto LABEL_524;
      return DeviceMapInformation;
    case 65:
      v198 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v203 = *(struct _OBJECT_NAME_INFORMATION *)v6;
        v204 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v203.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v203.Name.MaximumLength + 1) >= 8u || v203.Name.Buffer )
          {
            v18 = -1073741811;
          }
          else
          {
            v18 = ObReferenceObjectByHandleWithTag(
                    Handle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v10,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v18 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v198, &v203.Name.Buffer, &v204, (_QWORD *)&v204 + 1);
              *(_DWORD *)(&v203.Name.MaximumLength + 1) ^= ((unsigned __int8)v198 ^ *((_BYTE *)&v203.Name.MaximumLength
                                                                                    + 2)) & 1;
              v203.Name.Buffer = (wchar_t *)((__int64)v203.Name.Buffer << 12);
              *(_QWORD *)&v204 = (_QWORD)v204 << 12;
              *((_QWORD *)&v204 + 1) <<= 12;
              *(struct _OBJECT_NAME_INFORMATION *)v6 = v203;
              *(_OWORD *)(v6 + 16) = v204;
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
    case 66:
    case 67:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
        return -1073741820;
      v18 = ObReferenceObjectByHandleWithTag(
              Handle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      if ( v18 >= 0 )
      {
        LOBYTE(v9) = a2 == 67;
        v148 = 8 * KeQueryCpuSetsProcess((__int64)Object, v283, v147, (int)v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( a5 )
          *a5 = v148;
        if ( v148 < (unsigned int)v5 )
          LODWORD(v5) = v148;
        memmove((void *)v6, v283, (unsigned int)v5);
      }
      return v18;
    case 69:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
          ZwQueryInformationJobObject(0LL, 28LL);
          *(_QWORD *)Tag = 0LL;
          ZwQueryInformationJobObject(0LL, 9LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v215[1] + 8) = v264;
          *(_QWORD *)&v215[1] = v265;
          v75 = v216;
          if ( (v270 & 0x200000) != 0 )
            v75 = v278;
          v216 = v75;
          v76 = *((_QWORD *)&v215[2] + 1);
          if ( (v270 & 0x200) != 0 )
            v76 = *((_QWORD *)&v276 + 1);
          *((_QWORD *)&v215[2] + 1) = v76;
          *(__m256i *)v6 = *(__m256i *)&v215[1];
          *(_QWORD *)(v6 + 32) = v216;
          if ( a5 )
            *a5 = 40;
        }
        else
        {
          LODWORD(v9) = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (int)v9;
      }
      return result;
    case 70:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 71:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
      *(_DWORD *)v6 = (_DWORD)v9;
LABEL_506:
      ObDereferenceProcessHandleTable(v93);
      ObfDereferenceObjectWithTag(v93, 0x79517350u);
      return v136;
    case 72:
      return PsIumGetOnDemandDebugChallenge(Handle, v6, (unsigned int)v5, a5);
    case 73:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v149 = PsGetCurrentProcess();
        Object = v149;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
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
        goto LABEL_575;
      v152 = v151 - 1;
      if ( v152 )
      {
        if ( v152 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_575:
        *(_BYTE *)v6 = 1;
      }
      if ( a5 )
        *a5 = 3;
      if ( Handle == (HANDLE)-1LL )
        return (int)v9;
LABEL_579:
      ObfDereferenceObjectWithTag(v149, 0x79517350u);
      return 0;
    case 74:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 75:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 76:
      memset(v282, 0, sizeof(v282));
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v73 = result;
      if ( result < 0 )
        return result;
      v74 = Object;
      PsQueryProcessEnergyValues(Object, v282);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v282, (unsigned int)v5);
      if ( a5 )
        *a5 = 432;
      goto LABEL_638;
    case 77:
      v262 = 0LL;
      v263 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v154 = ObReferenceObjectByHandleWithTag(
               Handle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v10,
               0x79517350u,
               &Object,
               0LL);
      if ( v154 >= 0 )
      {
        v155 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v156 = Object;
        v154 = v155(Object, &v262);
        if ( v154 >= 0 )
        {
          *(_QWORD *)v6 = v262;
          *(_DWORD *)(v6 + 8) = v263;
          if ( a5 )
            *a5 = 12;
          v154 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v156, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v154;
    case 79:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v157 = PsGetCurrentProcess();
        Object = v157;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
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
      if ( a5 )
        *a5 = 8;
      if ( Handle != (HANDLE)-1LL )
        goto LABEL_618;
      return (int)v9;
    case 81:
      if ( v10 )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
        if ( DeviceMapInformation >= 0 && a5 )
        {
          *a5 = 48;
          ObfDereferenceObjectWithTag(v144, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_524:
          ObfDereferenceObjectWithTag(v144, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case 82:
      memset(v279, 0, sizeof(v279));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v160 = Object;
        PoQueryProcessEnergyTrackingState(Object, v279);
        v161 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v161 = v5;
        memmove((void *)v6, v279, v161);
        if ( a5 )
          *a5 = v161;
        i = 0;
        ObfDereferenceObjectWithTag(v160, 0x79517350u);
        return 0;
      }
      return result;
    case 84:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x418u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v74 = Object;
      if ( *((_QWORD *)Object + 124) )
      {
        v73 = VslLiveDumpCaptureProcess(Object);
LABEL_638:
        ObfDereferenceObjectWithTag(v74, 0x79517350u);
        return v73;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case 85:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, a5);
LABEL_150:
      v42 = ProcessTelemetryCoverage;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v42;
    case 87:
    case 96:
      if ( a2 == 87 && !(_DWORD)v5 || a2 == 96 && (unsigned int)v5 < 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a2 == 96 )
        *(_DWORD *)v6 |= (v38[543] >> 17) & 0xC;
      goto LABEL_122;
    case 88:
      v240 = 0LL;
      v241 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
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
      if ( a5 )
        *a5 = v168;
      i = 0;
      goto LABEL_579;
    case 89:
      v199 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v10 )
      {
        v162 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v162 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v162 = *(_QWORD *)v162;
      }
      v163 = PsGetCurrentProcess();
      if ( Handle != (HANDLE)-1LL || v163 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v163[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v10, &v199);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v199;
        if ( a5 )
          *a5 = 8;
      }
      return result;
    case 92:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 8;
LABEL_122:
      ObfDereferenceObjectWithTag(v38, 0x79517350u);
      return ExecuteOptions;
    case 94:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
        _InterlockedOr(v174, 0);
        *(_QWORD *)v6 = PspReadProcessSecurityDomain((__int64)Object);
        if ( a5 )
          *a5 = 8;
        i = 0;
LABEL_618:
        ObfDereferenceObjectWithTag(v157, 0x79517350u);
        return 0;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case 97:
      if ( (_DWORD)v5 == 8 )
      {
        if ( Handle == (HANDLE)-1LL )
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
          if ( a5 )
            *a5 = 8;
          return (int)v9;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( a5 )
          *a5 = 8;
        return -1073741820;
      }
    default:
      return -1073741821;
  }
  switch ( v105 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v106 = Object;
      v107 = *((_DWORD *)Object + 628);
      if ( (v107 & 0x40) == 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v107 = v106[628];
      }
      if ( (v107 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v107 = v106[628];
      }
      if ( (v107 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v107 = v106[628];
      }
      if ( (v107 & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_499;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v111 = Object;
      v112 = *((_DWORD *)Object + 628);
      if ( (v112 & 0x100) != 0 )
      {
        v113 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v112 & 0x800) == 0 )
          goto LABEL_399;
        v113 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v113;
LABEL_399:
      v114 = v111[628];
      if ( (v114 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v114 = v111[628];
      }
      if ( (v114 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_499;
    case 3:
      i = 0;
      v108 = ObReferenceProcessHandleTable(Object);
      if ( v108 )
      {
        ExQueryHandleExceptionsPermanency(v108, &v179, &v180);
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
      goto LABEL_499;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v109 = *((_DWORD *)Object + 628);
      if ( (v109 & 0x1000) != 0 )
      {
        v110 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v109 & 0x2000) == 0 )
          goto LABEL_499;
        v110 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v110;
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
      v115 = Object;
      v116 = *((_DWORD *)Object + 628);
      if ( (v116 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v116 = v115[628];
      }
      if ( (v116 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v116 = v115[628];
      }
      if ( (v116 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_499;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v197);
      *(_DWORD *)(v6 + 4) = v197;
      goto LABEL_499;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v117 = *((_DWORD *)Object + 628);
      if ( (v117 & 0x10000) != 0 )
      {
        v118 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v117 & 0x20000) == 0 )
          goto LABEL_499;
        v118 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v118;
      goto LABEL_499;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v119 = Object;
      v120 = *((_DWORD *)Object + 628);
      if ( (v120 & 0x80000) != 0 )
      {
        v121 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v120 & 0x100000) == 0 )
          goto LABEL_426;
        v121 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v121;
LABEL_426:
      v122 = v119[628];
      if ( (v122 & 0x200000) != 0 )
      {
        v123 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v122 & 0x400000) == 0 )
          goto LABEL_431;
        v123 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v123;
LABEL_431:
      if ( (v119[628] & 0x40000) != 0 )
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
      v124 = Object;
      v125 = *((_DWORD *)Object + 629);
      if ( (v125 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v125 = v124[629];
      }
      if ( (v125 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v125 = v124[629];
      }
      if ( (v125 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v125 = v124[629];
      }
      if ( (v125 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v125 = v124[629];
      }
      if ( (v125 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v125 = v124[629];
      }
      if ( (v125 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v125 = v124[629];
      }
      if ( (v125 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v125 = v124[629];
      }
      if ( (v125 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v125 = v124[629];
      }
      if ( (v125 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v125 = v124[629];
      }
      if ( (v125 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v125 = v124[629];
      }
      if ( (v125 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v125 = v124[629];
      }
      if ( (v125 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_499;
    case 13:
      i = 0;
      v126 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v127 = v126 - 1;
      if ( !v127 )
        goto LABEL_465;
      v128 = v127 - 1;
      if ( v128 )
      {
        if ( v128 != 1 )
          goto LABEL_499;
        v129 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_465:
        v129 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v129;
LABEL_499:
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
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
      goto LABEL_499;
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
      goto LABEL_499;
    default:
      i = -1073741637;
      goto LABEL_499;
  }
}
