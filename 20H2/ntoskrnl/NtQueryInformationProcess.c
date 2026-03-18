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

int __fastcall NtQueryInformationProcess(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4, unsigned int *a5)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // bl
  __int64 v13; // rax
  __int64 v14; // rcx
  int result; // eax
  unsigned int v16; // ecx
  int DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v18; // r12
  struct _FILE_OBJECT *v19; // rbx
  NTSTATUS v20; // r12d
  POBJECT_NAME_INFORMATION v21; // rbx
  unsigned int v22; // edi
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
  NTSTATUS ExecuteOptions; // ebx
  _DWORD *v40; // rcx
  HANDLE v41; // rdx
  int ProcessHandleCount; // edi
  int ProcessTelemetryCoverage; // eax
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  unsigned int v47; // edi
  int SessionId; // ebx
  unsigned __int64 *v49; // rax
  int v50; // ebx
  unsigned __int64 v51; // r13
  int v52; // edi
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
  _DWORD *v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v71; // ecx
  unsigned __int64 v72; // rax
  struct _EX_RUNDOWN_REF *v73; // r13
  struct _DMA_ADAPTER *Count; // r12
  int v75; // ebx
  PVOID v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  void *v79; // rdi
  int ProcessHandleInformation; // edi
  struct _DMA_ADAPTER *v81; // rcx
  _DMA_OPERATIONS *v82; // rsi
  struct _DMA_ADAPTER *v83; // rbx
  _DMA_OPERATIONS *DmaOperations; // rdi
  int v85; // r12d
  int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned int v89; // eax
  void *v90; // r8
  unsigned int v91; // ecx
  unsigned int v92; // edx
  unsigned int v93; // ebx
  __int64 v94; // rbx
  struct _KPROCESS *v95; // rbx
  unsigned __int64 *v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned int v100; // eax
  int v101; // eax
  struct _DMA_ADAPTER *v102; // r14
  __int64 v103; // rax
  int v104; // edi
  _DWORD *v105; // rcx
  int v106; // eax
  __int64 v107; // rax
  int v108; // ecx
  int v109; // eax
  _DWORD *v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  _DWORD *v114; // rcx
  int v115; // eax
  int v116; // ecx
  int v117; // eax
  _DWORD *v118; // rcx
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int RedirectionTrustPolicy; // eax
  int v130; // eax
  int v131; // eax
  _DWORD *v132; // rcx
  int v133; // eax
  _DWORD *v134; // rcx
  int v135; // eax
  _DWORD *v136; // rcx
  int v137; // eax
  int v138; // edi
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  NTSTATUS v142; // ebx
  PVOID v143; // rbx
  __int64 v144; // rax
  char v145; // r9
  PVOID v146; // rbx
  int ProcessCommandLine; // eax
  __int64 v148; // rax
  __int64 v149; // r8
  unsigned int v150; // ebx
  void *v151; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v153; // eax
  int v154; // eax
  unsigned __int64 ExtensionTable; // rdi
  NTSTATUS v156; // ebx
  __int64 (__fastcall *v157)(PVOID, __int64 *); // rax
  PVOID v158; // rdi
  _DWORD *v159; // rcx
  int v160; // edx
  int v161; // eax
  PVOID v162; // rdi
  unsigned int v163; // ebx
  __int64 v164; // rcx
  _KPROCESS *v165; // rcx
  __int64 v166; // r12
  struct _KTHREAD *v167; // rdi
  __int64 v168; // rcx
  int v169; // r8d
  unsigned int v170; // edi
  _KPROCESS *v171; // rax
  unsigned __int64 v172; // r8
  __int64 v173; // rcx
  __int64 *v174; // rdx
  int v175; // eax
  signed __int32 v176[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  int i; // [rsp+48h] [rbp-9A0h]
  _BYTE v180[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v181; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v182; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v184; // [rsp+58h] [rbp-990h]
  unsigned int v185; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v187; // [rsp+70h] [rbp-978h]
  int v188; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v189; // [rsp+78h] [rbp-970h]
  _DWORD *v190; // [rsp+80h] [rbp-968h]
  int v191; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handlea; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v195; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v196; // [rsp+B0h] [rbp-938h] BYREF
  int v197; // [rsp+B4h] [rbp-934h] BYREF
  int v198; // [rsp+B8h] [rbp-930h]
  int v199; // [rsp+BCh] [rbp-92Ch] BYREF
  int v200; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v201; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v202; // [rsp+D0h] [rbp-918h]
  unsigned __int64 v203; // [rsp+D8h] [rbp-910h]
  int v204[4]; // [rsp+E0h] [rbp-908h]
  struct _OBJECT_NAME_INFORMATION v205; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v206; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v207[4]; // [rsp+110h] [rbp-8D8h] BYREF
  __int64 v208; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v209; // [rsp+128h] [rbp-8C0h] BYREF
  __int64 v210; // [rsp+130h] [rbp-8B8h] BYREF
  __int64 v211; // [rsp+138h] [rbp-8B0h]
  PVOID v212; // [rsp+140h] [rbp-8A8h] BYREF
  __int64 v213; // [rsp+148h] [rbp-8A0h] BYREF
  _QWORD v214[2]; // [rsp+150h] [rbp-898h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+160h] [rbp-888h] BYREF
  PVOID v216; // [rsp+168h] [rbp-880h] BYREF
  _OWORD v217[3]; // [rsp+170h] [rbp-878h] BYREF
  __int64 v218; // [rsp+1A0h] [rbp-848h]
  __int128 v219; // [rsp+1A8h] [rbp-840h] BYREF
  __int64 v220; // [rsp+1B8h] [rbp-830h]
  __int64 v221; // [rsp+1C0h] [rbp-828h]
  HANDLE v222; // [rsp+1C8h] [rbp-820h]
  __int64 v223; // [rsp+1D0h] [rbp-818h]
  __int64 v224; // [rsp+1D8h] [rbp-810h]
  int v225; // [rsp+1E0h] [rbp-808h]
  int v226; // [rsp+1E4h] [rbp-804h]
  unsigned __int64 v227; // [rsp+1E8h] [rbp-800h]
  __int64 v228; // [rsp+1F0h] [rbp-7F8h]
  __int64 v229; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v230; // [rsp+200h] [rbp-7E8h]
  int v231; // [rsp+210h] [rbp-7D8h]
  unsigned __int128 v232; // [rsp+218h] [rbp-7D0h]
  unsigned __int128 v233; // [rsp+228h] [rbp-7C0h]
  unsigned __int128 v234; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v236; // [rsp+260h] [rbp-788h] BYREF
  __int128 v237; // [rsp+270h] [rbp-778h] BYREF
  __int128 v238; // [rsp+280h] [rbp-768h] BYREF
  __int128 v239; // [rsp+290h] [rbp-758h] BYREF
  __int128 v240; // [rsp+2A0h] [rbp-748h]
  __int128 v241; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v242; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v243; // [rsp+2D0h] [rbp-718h]
  _OWORD v244[2]; // [rsp+2E0h] [rbp-708h] BYREF
  __int128 v245; // [rsp+300h] [rbp-6E8h]
  __int128 v246; // [rsp+310h] [rbp-6D8h]
  __int128 v247; // [rsp+320h] [rbp-6C8h]
  __int128 v248; // [rsp+330h] [rbp-6B8h]
  __int64 v249; // [rsp+340h] [rbp-6A8h]
  unsigned __int64 v250; // [rsp+350h] [rbp-698h]
  __int128 v251; // [rsp+358h] [rbp-690h] BYREF
  unsigned __int64 v252; // [rsp+368h] [rbp-680h]
  void *v253; // [rsp+370h] [rbp-678h]
  __int128 v254; // [rsp+380h] [rbp-668h]
  __int128 v255; // [rsp+390h] [rbp-658h]
  __int128 v256; // [rsp+3A0h] [rbp-648h]
  __int128 v257; // [rsp+3B0h] [rbp-638h]
  __int128 v258; // [rsp+3C0h] [rbp-628h]
  __int128 v259; // [rsp+3D0h] [rbp-618h]
  __int128 v260; // [rsp+3E0h] [rbp-608h]
  __int128 v261; // [rsp+3F0h] [rbp-5F8h]
  __int128 v262; // [rsp+400h] [rbp-5E8h]
  __int128 v263; // [rsp+410h] [rbp-5D8h]
  __int64 v264; // [rsp+420h] [rbp-5C8h] BYREF
  int v265; // [rsp+428h] [rbp-5C0h]
  __int128 v266; // [rsp+430h] [rbp-5B8h]
  __int128 v267; // [rsp+440h] [rbp-5A8h]
  __int64 v268; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v270; // [rsp+488h] [rbp-560h] BYREF
  __int128 v271; // [rsp+4C0h] [rbp-528h]
  __int128 v272; // [rsp+4D0h] [rbp-518h]
  __int128 v273; // [rsp+4E0h] [rbp-508h]
  __int128 v274; // [rsp+4F0h] [rbp-4F8h]
  __int128 v275; // [rsp+500h] [rbp-4E8h]
  __int128 v276; // [rsp+510h] [rbp-4D8h]
  __int128 v277; // [rsp+520h] [rbp-4C8h]
  __int128 v278; // [rsp+530h] [rbp-4B8h]
  __int128 v279; // [rsp+540h] [rbp-4A8h]
  __int64 v280; // [rsp+550h] [rbp-498h]
  _OWORD v281[9]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v282[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v283[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _OWORD v284[27]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v285[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = a4;
  v6 = a3;
  v184 = Handle;
  v203 = a3;
  v227 = a3;
  v207[2] = a4;
  v190 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v185 = 0;
  Handlea = 0LL;
  v188 = 0;
  memset(v283, 0, 0xA8uLL);
  v195 = 0LL;
  GroupMaskProcess = 0;
  v207[0] = 0;
  v225 = 0;
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  v271 = 0LL;
  v272 = 0LL;
  v273 = 0LL;
  v274 = 0LL;
  v275 = 0LL;
  v276 = 0LL;
  v277 = 0LL;
  v278 = 0LL;
  v279 = 0LL;
  v280 = 0LL;
  memset(&v217[1], 0, 32);
  v218 = 0LL;
  v202 = 0LL;
  v251 = 0LL;
  v209 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  v268 = 0LL;
  v208 = 0LL;
  ObjectNameInformation = 0LL;
  v187 = 0;
  Object = 0LL;
  v214[0] = 0LL;
  v196 = 0;
  memset(v244, 0, sizeof(v244));
  v245 = 0LL;
  v246 = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  v249 = 0LL;
  Src = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v238 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  v241 = 0LL;
  v12 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v180[1] = v12;
  CurrentThread = KeGetCurrentThread();
  if ( !v12 )
    goto LABEL_23;
  if ( a2 == 61 )
  {
LABEL_13:
    v13 = 0LL;
    goto LABEL_14;
  }
  if ( a2 != 65 )
  {
    if ( ((a2 - 70) & 0xFFFFFFFB) != 0 )
    {
      if ( a2 == 92 )
      {
        v13 = 7LL;
      }
      else if ( a2 == 94 )
      {
        v13 = 7LL;
      }
      else
      {
        v13 = 3LL;
        if ( a2 == 87 )
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
  if ( a5 )
  {
    v14 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
LABEL_23:
  switch ( a2 )
  {
    case 0:
      memset(v282, 0, 0xA8uLL);
      v180[0] = 0;
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
      v185 = v5;
      P = (PVOID)v6;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
          KeQueryAffinityProcess((__int64)v24, v282, &GroupMaskProcess, 0LL);
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
                P = (PVOID)*((_QWORD *)v282 + Group + 1);
            }
          }
        }
        if ( v23 )
          PsQueryProcessAttributes(v24, (__int64)v180, 0LL);
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
          if ( v180[0] )
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
        if ( a5 )
          *a5 = v5;
        goto LABEL_538;
      }
LABEL_554:
      ObfDereferenceObjectWithTag(v25, 0x79517350u);
      return v20;
    case 1:
      return PspQueryQuotaLimits(Handle, 0x7FFFFFFF0000LL, (void *)v6, v5, a5, v12);
    case 2:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      PsQueryStatisticsProcess(Object, v244);
      v232 = __PAIR128__(v246, *((unsigned __int64 *)&v245 + 1));
      v233 = __PAIR128__(v247, *((unsigned __int64 *)&v246 + 1));
      v234 = __PAIR128__(v248, *((unsigned __int64 *)&v247 + 1));
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v232;
      *(_OWORD *)(v6 + 16) = v233;
      *(_OWORD *)(v6 + 32) = v234;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v34 = Object;
      Src = *((_OWORD *)Object + 73);
      LODWORD(v236) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v236 + 1, &v237, &v241, &v208, &v209, v207);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters((__int64)v34, 1, &v238, (_QWORD *)&v237 + 1);
      PsQueryProcessQuotaCounters(v35, 0, &v239, (_QWORD *)&v238 + 1);
      *((_QWORD *)&v239 + 1) = v34[201] << 12;
      *(_QWORD *)&v240 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v241 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v240 + 1) = *((_QWORD *)&v239 + 1);
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v36 = (struct _EX_RUNDOWN_REF *)Object;
      v37 = PsQueryRuntimeProcess((__int64)Object, &v196);
      v38 = (unsigned int)KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)v37;
      *(_QWORD *)(v6 + 24) = v38 * v196;
      *(struct _EX_RUNDOWN_REF *)v6 = v36[141];
      *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v36[264];
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
                 v12,
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
                 v12,
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v33 = *((_DWORD *)Object + 382);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v33;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 14:
      return PspQueryPooledQuotaLimits(Handle, v12);
    case 15:
    case 42:
      return PspQueryWorkingSetWatch(Handle, (__int64)a5, v12);
    case 18:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      HIBYTE(v187) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v187;
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
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v45 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v45;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 20:
      v197 = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount(Object, &v197);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = v197;
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
        || (KeQueryAffinityProcess((__int64)v36, v283, &GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ObfDereferenceObjectWithTag(v36, 0x79517350u);
        return -1073741811;
      }
      _BitScanForward((unsigned int *)&v87, GroupMaskProcess);
      v88 = *((_QWORD *)v283 + v87 + 1);
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v87;
      *(_QWORD *)v6 = v88;
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
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v46 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v46;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 23:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v189 = *(_DWORD *)(v6 + 40);
        v47 = v189;
        if ( (v189 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v47 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
                 v12,
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
      if ( a5 )
        *a5 = 8;
      return 0;
    case 27:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
        v6 = (unsigned __int64)&v251;
        v16 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v9 = v227 + 16;
      v185 = v16;
      DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v9, &v185);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *a5 = v185 + 16;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v50 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v50;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v12, &Handlea);
      v41 = Handlea;
      if ( DeviceMapInformation < 0 )
        v41 = 0LL;
      Handlea = v41;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 32:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(v12, 0x7FFFFFFF0000LL, v10, v11) )
        return -1073741790;
      P = (PVOID)((unsigned int)(v5 - 16) / 0xA0uLL);
      v51 = v6 + 16;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
        v208 = v54;
        if ( v54 )
        {
          v56 = ExReferenceHandleDebugInfo(v54);
          v57 = v56;
          v209 = v56;
          if ( v56 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v58 = (unsigned int)(*(_DWORD *)(v56 + 72) % *(_DWORD *)(v56 + 4));
            v198 = v58;
            while ( 1 )
            {
              v207[1] = v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v57 + 4) )
                break;
              v59 = (_OWORD *)(v57 + 160 * v58);
              v254 = v59[5];
              v255 = v59[6];
              v256 = v59[7];
              v257 = v59[8];
              v258 = v59[9];
              v259 = v59[10];
              v260 = v59[11];
              v261 = v59[12];
              v262 = v59[13];
              v263 = v59[14];
              v60 = v255;
              if ( *(_QWORD *)v6 == (_QWORD)v255 || !*(_QWORD *)v6 )
              {
                v61 = DWORD2(v255);
                if ( DWORD2(v255) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)P )
                  {
                    P = (PVOID)(unsigned int)((_DWORD)P - 1);
                    v226 = (int)P;
                    *(_QWORD *)v51 = v60;
                    *(_OWORD *)(v51 + 8) = v254;
                    *(_DWORD *)(v51 + 24) = v61;
                    *(_OWORD *)(v51 + 32) = v256;
                    *(_OWORD *)(v51 + 48) = v257;
                    *(_OWORD *)(v51 + 64) = v258;
                    *(_OWORD *)(v51 + 80) = v259;
                    *(_OWORD *)(v51 + 96) = v260;
                    *(_OWORD *)(v51 + 112) = v261;
                    *(_OWORD *)(v51 + 128) = v262;
                    *(_OWORD *)(v51 + 144) = v263;
                    v51 += 160LL;
                    v252 = v51;
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
              v198 = v58;
              LODWORD(v9) = v9 + 1;
            }
            if ( a5 )
              *a5 = v51 - v6;
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
    case 33:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
                   v12,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        CurrentProcess = Object;
      }
      ExecuteOptions = KeGetExecuteOptions(CurrentProcess, &v188);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v64, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v188;
        if ( a5 )
          *a5 = 4;
      }
      return ExecuteOptions;
    case 36:
      v210 = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v65 = PsGetCurrentProcess();
        v190 = v65;
        Object = v65;
      }
      else
      {
        v216 = 0LL;
        result = ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsProcessType, v12, &v216, 0LL);
        v65 = v216;
        v190 = v216;
        Object = v216;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        v68 = v65[330];
        if ( v68 )
          break;
        KeQuerySystemTimePrecise(&v210, (__int64)v65, v66, v67);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v71 = ExGenRandom(1);
        v72 = __rdtsc();
        _InterlockedCompareExchange(
          v190 + 330,
          v72 ^ v71 ^ CurrentPrcb->MmPageFaultCount ^ v210 ^ HIDWORD(v210) ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v65 = Object;
        v190 = Object;
      }
      *(_DWORD *)v6 = v68;
      if ( a5 )
        *a5 = 4;
      if ( Handle != (HANDLE)-1LL )
        HalPutDmaAdapter((PADAPTER_OBJECT)v65);
      return v9;
    case 37:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v73 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == CurrentThread->Process )
      {
        Count = (struct _DMA_ADAPTER *)*((_QWORD *)Object + 163);
        if ( !Count )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        Count = (struct _DMA_ADAPTER *)v73[163].Count;
        if ( Count )
          ObfReferenceObject(v73[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection_0(v73 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Count = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v73, 0x79517350u);
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v75 = result;
      if ( result < 0 )
        return result;
      v76 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v214);
      *(_QWORD *)(v6 + 8) = v214[0];
      if ( a5 )
        *a5 = 16;
      goto LABEL_644;
    case 39:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 43:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      v195 = v19;
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
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v195);
        v19 = (struct _FILE_OBJECT *)v195;
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
        if ( a5 )
          *a5 = v22;
        ExFreePoolWithTag(v21, 0);
      }
      return v20;
    case 44:
      DmaAdapter = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v79 = *(void **)v6;
      v253 = *(void **)v6;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObReferenceObjectByHandleWithTag(
                         v79,
                         0x100020u,
                         (POBJECT_TYPE)IoFileObjectType,
                         v12,
                         0x79517350u,
                         &v195,
                         0LL);
      v40 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v81 = (struct _DMA_ADAPTER *)v195;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v82 = (_DMA_OPERATIONS *)*((_QWORD *)v195 + 5);
      v83 = DmaAdapter;
      DmaOperations = DmaAdapter[2].DmaOperations;
      v85 = 0;
      if ( v82 != DmaOperations )
        v85 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v195);
      HalPutDmaAdapter(v83);
      result = v85;
      if ( v82 == DmaOperations && a5 )
        *a5 = 0;
      return result;
    case 45:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v189 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v86 = (v189 >> 19) & 1 | 2;
      if ( (v189 & 0x40000) == 0 )
        v86 = (v189 >> 19) & 1;
      *(_DWORD *)v6 = v86;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v189 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v189 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v89 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v89;
        v91 = v185;
        do
        {
          _BitScanForward(&v92, v89);
          v91 += 2;
          v185 = v91;
          if ( v91 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v92;
            v6 += 2LL;
            v250 = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v92);
          v89 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *a5 = v91;
        v93 = (unsigned int)v5 < v91 ? 0xC0000023 : 0;
        i = v93;
        ObfDereferenceObjectWithTag(v90, 0x79517350u);
        return v93;
      }
      return result;
    case 49:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v94 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v94;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 50:
      memset(&v270, 0, sizeof(v270));
      v191 = 0;
      *(_OWORD *)v204 = 0LL;
      v229 = 0LL;
      if ( v12 != 1 )
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
        v95 = (struct _KPROCESS *)Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          KeStackAttachProcess(v95, &v270);
          v96 = (unsigned __int64 *)v95[1].AffinityPadding[10];
          if ( v96 )
            v9 = *v96;
          if ( v9 )
          {
            v228 = *(unsigned int *)(v9 + 16);
            v191 = *(_DWORD *)(v228 + 104);
            v97 = *(_QWORD *)(v228 + 112);
            v214[1] = v97;
            v204[0] = v97;
            *(_QWORD *)&v204[2] = HIDWORD(v97);
          }
          else
          {
            v211 = *(_QWORD *)(v95[1].AffinityPadding[4] + 32);
            v98 = v211 + 164;
            if ( (unsigned __int64)(v211 + 164) >= 0x7FFFFFFF0000LL )
              v98 = 0x7FFFFFFF0000LL;
            v191 = *(_DWORD *)v98;
            v230 = 0LL;
            v99 = v211 + 176;
            if ( (unsigned __int64)(v211 + 176) >= 0x7FFFFFFF0000LL )
              v99 = 0x7FFFFFFF0000LL;
            LODWORD(v230) = *(_DWORD *)v99;
            *((_QWORD *)&v230 + 1) = *(_QWORD *)(v99 + 8);
            *(_OWORD *)v204 = v230;
            LOWORD(v97) = v230;
          }
          DeviceMapInformation = i;
          KeUnstackDetachProcess(&v270);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v100 = (unsigned __int16)v97 + 6;
          if ( a5 )
            *a5 = v100;
          if ( (unsigned int)v5 >= v100 )
          {
            *(_DWORD *)v6 = v191;
            *(_WORD *)(v6 + 4) = v97;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v97 )
          {
            v101 = (unsigned int)PsGetCurrentProcess();
            *(_QWORD *)Tag = (unsigned __int16)v97;
            v36 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MmCopyVirtualMemory(
                                     (int)Object,
                                     v204[2],
                                     v101,
                                     (int)v6 + 6,
                                     *(size_t *)Tag,
                                     1,
                                     (__int64)&v229);
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
          ObfDereferenceObjectWithTag(v95, 0x79517350u);
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
      v212 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, v12, &v212, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v102 = (struct _DMA_ADAPTER *)v212;
        v103 = ObReferenceProcessHandleTable(v212);
        if ( v103 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v103, v6, (unsigned int)v5, a5);
          ObDereferenceProcessHandleTable(v102);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v81 = v102;
LABEL_365:
        HalPutDmaAdapter(v81);
        return ProcessHandleInformation;
      }
      return result;
    case 52:
      v199 = 0;
      v181 = 0;
      v182 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v104 = *(_DWORD *)v6;
      v231 = *(_DWORD *)v6;
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
                   v12,
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v138 = result;
      i = result;
      if ( result < 0 )
        return result;
      v95 = (struct _KPROCESS *)Object;
      v139 = ObReferenceProcessHandleTable(Object);
      if ( !v139 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryHandleExceptions(v139) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_512;
    case 55:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      LOBYTE(v140) = 1;
      *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v140);
      *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(v141, 0LL);
      goto LABEL_122;
    case 58:
      v213 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 v6,
                 (unsigned int)v5,
                 (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
                 1LL,
                 &v213,
                 &P);
      if ( result >= 0 )
      {
        v142 = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v142 >= 0 )
        {
          v217[0] = 0LL;
          v143 = Object;
          v144 = ObReferenceProcessHandleTable(Object);
          if ( v144 )
          {
            *(_QWORD *)&v217[0] = v213;
            *((_QWORD *)&v217[0] + 1) = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v144, PspHandleTableWalker, v217, 0LL);
            ObDereferenceProcessHandleTable(v143);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v143, 0x79517350u);
          if ( a5 )
            *a5 = 4 * HIDWORD(v217[0]);
          ExUnlockUserBuffer((struct _MDL *)P);
          return v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v142;
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
    case 60:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               Handle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v145 = v12;
      v146 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v145, a5);
      goto LABEL_529;
    case 61:
      v20 = ObReferenceObjectByHandleWithTag(
              Handle,
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
        if ( a5 )
          *a5 = 1;
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
    case 64:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               Handle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v12,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v146 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (ULONG_PTR)Object,
                             (volatile void *)v6,
                             (unsigned int)v5,
                             (__int64)a5);
LABEL_529:
      DeviceMapInformation = ProcessCommandLine;
      if ( v146 )
        goto LABEL_530;
      return DeviceMapInformation;
    case 65:
      v200 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v205 = *(struct _OBJECT_NAME_INFORMATION *)v6;
        v206 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v205.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v205.Name.MaximumLength + 1) >= 8u || v205.Name.Buffer )
          {
            v20 = -1073741811;
          }
          else
          {
            v20 = ObReferenceObjectByHandleWithTag(
                    Handle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v12,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v20 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v200, &v205.Name.Buffer, &v206, (_QWORD *)&v206 + 1);
              *(_DWORD *)(&v205.Name.MaximumLength + 1) ^= ((unsigned __int8)v200 ^ *((_BYTE *)&v205.Name.MaximumLength
                                                                                    + 2)) & 1;
              v205.Name.Buffer = (wchar_t *)((__int64)v205.Name.Buffer << 12);
              *(_QWORD *)&v206 = (_QWORD)v206 << 12;
              *((_QWORD *)&v206 + 1) <<= 12;
              *(struct _OBJECT_NAME_INFORMATION *)v6 = v205;
              *(_OWORD *)(v6 + 16) = v206;
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
    case 66:
    case 67:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
        return -1073741820;
      v20 = ObReferenceObjectByHandleWithTag(
              Handle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v12,
              0x79517350u,
              &Object,
              0LL);
      if ( v20 >= 0 )
      {
        LOBYTE(v9) = a2 == 67;
        v150 = 8 * KeQueryCpuSetsProcess((__int64)Object, v285, v149, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( a5 )
          *a5 = v150;
        if ( v150 < (unsigned int)v5 )
          LODWORD(v5) = v150;
        memmove((void *)v6, v285, (unsigned int)v5);
      }
      return v20;
    case 69:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        *((_QWORD *)&v217[2] + 1) = 0LL;
        v218 = 0LL;
        if ( *((_QWORD *)Object + 162) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, 28LL);
          *(_QWORD *)Tag = 0LL;
          ZwQueryInformationJobObject(0LL, 9LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v217[1] + 8) = v266;
          *(_QWORD *)&v217[1] = v267;
          v77 = v218;
          if ( (v272 & 0x200000) != 0 )
            v77 = v280;
          v218 = v77;
          v78 = *((_QWORD *)&v217[2] + 1);
          if ( (v272 & 0x200) != 0 )
            v78 = *((_QWORD *)&v278 + 1);
          *((_QWORD *)&v217[2] + 1) = v78;
          *(__m256i *)v6 = *(__m256i *)&v217[1];
          *(_QWORD *)(v6 + 32) = v218;
          if ( a5 )
            *a5 = 40;
        }
        else
        {
          LODWORD(v9) = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v9;
      }
      return result;
    case 70:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 71:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v138 = result;
      i = result;
      if ( result < 0 )
        return result;
      v95 = (struct _KPROCESS *)Object;
      v148 = ObReferenceProcessHandleTable(Object);
      if ( !v148 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v148) != 0;
      *(_DWORD *)v6 = v9;
LABEL_512:
      ObDereferenceProcessHandleTable(v95);
      ObfDereferenceObjectWithTag(v95, 0x79517350u);
      return v138;
    case 72:
      return PsIumGetOnDemandDebugChallenge(Handle, v6, (unsigned int)v5, a5);
    case 73:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v151 = PsGetCurrentProcess();
        Object = v151;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v12,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v151 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v151);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v153 = NoChildProcessRestrictedPolicy - 1;
      if ( !v153 )
        goto LABEL_581;
      v154 = v153 - 1;
      if ( v154 )
      {
        if ( v154 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_581:
        *(_BYTE *)v6 = 1;
      }
      if ( a5 )
        *a5 = 3;
      if ( Handle == (HANDLE)-1LL )
        return v9;
LABEL_585:
      ObfDereferenceObjectWithTag(v151, 0x79517350u);
      return 0;
    case 74:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 75:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 76:
      memset(v284, 0, sizeof(v284));
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      v75 = result;
      if ( result < 0 )
        return result;
      v76 = Object;
      PsQueryProcessEnergyValues(Object, v284);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v284, (unsigned int)v5);
      if ( a5 )
        *a5 = 432;
      goto LABEL_644;
    case 77:
      v264 = 0LL;
      v265 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v156 = ObReferenceObjectByHandleWithTag(
               Handle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v12,
               0x79517350u,
               &Object,
               0LL);
      if ( v156 >= 0 )
      {
        v157 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v158 = Object;
        v156 = v157(Object, &v264);
        if ( v156 >= 0 )
        {
          *(_QWORD *)v6 = v264;
          *(_DWORD *)(v6 + 8) = v265;
          if ( a5 )
            *a5 = 12;
          v156 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v158, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v156;
    case 79:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v159 = PsGetCurrentProcess();
        Object = v159;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v12,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v159 = Object;
      }
      *(_DWORD *)v6 = 0;
      v160 = v159[628];
      v161 = 0;
      if ( (v160 & 0x4000) != 0 )
      {
        v161 = 1;
        *(_DWORD *)v6 = 1;
        v160 = v159[628];
      }
      if ( (v160 & 0x8000) != 0 )
        *(_DWORD *)v6 = v161 | 2;
      *(_DWORD *)(v6 + 4) = v159[602];
      if ( a5 )
        *a5 = 8;
      if ( Handle != (HANDLE)-1LL )
        goto LABEL_624;
      return v9;
    case 81:
      if ( v12 )
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
        v146 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(
                                 (__int64)CurrentThread,
                                 (__int64)Object,
                                 v6);
        if ( DeviceMapInformation >= 0 && a5 )
        {
          *a5 = 48;
          ObfDereferenceObjectWithTag(v146, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_530:
          ObfDereferenceObjectWithTag(v146, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case 82:
      memset(v281, 0, sizeof(v281));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v162 = Object;
        PoQueryProcessEnergyTrackingState(Object, v281);
        v163 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v163 = v5;
        memmove((void *)v6, v281, v163);
        if ( a5 )
          *a5 = v163;
        i = 0;
        ObfDereferenceObjectWithTag(v162, 0x79517350u);
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v76 = Object;
      if ( *((_QWORD *)Object + 124) )
      {
        v75 = VslLiveDumpCaptureProcess(Object);
LABEL_644:
        ObfDereferenceObjectWithTag(v76, 0x79517350u);
        return v75;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, a5);
LABEL_150:
      v44 = ProcessTelemetryCoverage;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v44;
    case 87:
    case 96:
      if ( a2 == 87 && !(_DWORD)v5 || a2 == 96 && (unsigned int)v5 < 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
      if ( a2 == 96 )
        *(_DWORD *)v6 |= (v40[543] >> 17) & 0xC;
      goto LABEL_122;
    case 88:
      v242 = 0LL;
      v243 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v220 = 0LL;
      v166 = 0LL;
      v221 = 0LL;
      v201 = 0LL;
      v222 = 0LL;
      v224 = 0LL;
      v167 = CurrentThread;
      v151 = Object;
      PspLockProcessSecurityShared((__int64)Object, (__int64)CurrentThread);
      v168 = *((_QWORD *)v151 + 292) >> 61;
      if ( (unsigned __int64)(v168 - 3) <= 1
        && (v201 = (HANDLE)(*((_QWORD *)v151 + 292) & 0x1FFFFFFFFFFFFFFFLL),
            v222 = v201,
            v220 = *((_QWORD *)v151 + 291),
            v166 = v220 - *((_QWORD *)v151 + 288),
            v221 = v166,
            v168 == 3) )
      {
        v169 = 512;
      }
      else
      {
        v169 = v224;
      }
      LODWORD(v224) = v169 & 0xFFFFFE00 | *((_BYTE *)v151 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v151 + 2171) & 0x38 | (32 * (*((_DWORD *)v151 + 543) & 4))));
      PspUnlockProcessShared((__int64)v151, (__int64)v167);
      PsGetProcessDeepFreezeStats(v151, &v242);
      v219 = v242;
      v223 = v243;
      if ( !v166 )
        v221 = v242 - *((_QWORD *)v151 + 288);
      if ( !v201 )
        v222 = (HANDLE)(*((_QWORD *)&v242 + 1) - *((_QWORD *)v151 + 289) - v243);
      v170 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v170 = v5;
      memmove((void *)v6, &v219, v170);
      if ( a5 )
        *a5 = v170;
      i = 0;
      goto LABEL_585;
    case 89:
      v201 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v12 )
      {
        v164 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v164 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v164 = *(_QWORD *)v164;
      }
      v165 = PsGetCurrentProcess();
      if ( Handle != (HANDLE)-1LL || v165 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v165[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v12, &v201);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v201;
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
                 v12,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v40 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( a5 )
        *a5 = 8;
LABEL_122:
      ObfDereferenceObjectWithTag(v40, 0x79517350u);
      return ExecuteOptions;
    case 94:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
        _InterlockedOr(v176, 0);
        *(_QWORD *)v6 = PspReadProcessSecurityDomain((__int64)Object);
        if ( a5 )
          *a5 = 8;
        i = 0;
LABEL_624:
        ObfDereferenceObjectWithTag(v159, 0x79517350u);
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
          v171 = PsGetCurrentProcess();
          v172 = v171[1].AffinityPadding[4];
          if ( v172 )
          {
            v173 = 0LL;
            v174 = (__int64 *)v171[1].AffinityPadding[10];
            if ( v174 )
              v173 = *v174;
            if ( v173 )
            {
              if ( (*(_DWORD *)(v173 + 1140) & 1) != 0 )
                LODWORD(v202) = 1;
            }
            else
            {
              v175 = v202;
              if ( (*(_BYTE *)(v172 + 1984) & 1) != 0 )
                v175 = 1;
              LODWORD(v202) = v175;
            }
          }
          *(_QWORD *)v6 = v202;
          if ( a5 )
            *a5 = 8;
          return v9;
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
  switch ( v104 )
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
      goto LABEL_505;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v110 = Object;
      v111 = *((_DWORD *)Object + 628);
      if ( (v111 & 0x100) != 0 )
      {
        v112 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v111 & 0x800) == 0 )
          goto LABEL_399;
        v112 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v112;
LABEL_399:
      v113 = v110[628];
      if ( (v113 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v113 = v110[628];
      }
      if ( (v113 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_505;
    case 3:
      i = 0;
      v107 = ObReferenceProcessHandleTable(Object);
      if ( v107 )
      {
        ExQueryHandleExceptionsPermanency(v107, &v181, &v182);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v181 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v182 )
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
      v108 = *((_DWORD *)Object + 628);
      if ( (v108 & 0x1000) != 0 )
      {
        v109 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v108 & 0x2000) == 0 )
          goto LABEL_505;
        v109 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v109;
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
      v114 = Object;
      v115 = *((_DWORD *)Object + 628);
      if ( (v115 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v115 = v114[628];
      }
      if ( (v115 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v115 = v114[628];
      }
      if ( (v115 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_505;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v199);
      *(_DWORD *)(v6 + 4) = v199;
      goto LABEL_505;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v116 = *((_DWORD *)Object + 628);
      if ( (v116 & 0x10000) != 0 )
      {
        v117 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v116 & 0x20000) == 0 )
          goto LABEL_505;
        v117 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v117;
      goto LABEL_505;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v118 = Object;
      v119 = *((_DWORD *)Object + 628);
      if ( (v119 & 0x80000) != 0 )
      {
        v120 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v119 & 0x100000) == 0 )
          goto LABEL_426;
        v120 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v120;
LABEL_426:
      v121 = v118[628];
      if ( (v121 & 0x200000) != 0 )
      {
        v122 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v121 & 0x400000) == 0 )
          goto LABEL_431;
        v122 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v122;
LABEL_431:
      if ( (v118[628] & 0x40000) != 0 )
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
      v123 = Object;
      v124 = *((_DWORD *)Object + 629);
      if ( (v124 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v124 = v123[629];
      }
      if ( (v124 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v124 = v123[629];
      }
      if ( (v124 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v124 = v123[629];
      }
      if ( (v124 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v124 = v123[629];
      }
      if ( (v124 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v124 = v123[629];
      }
      if ( (v124 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v124 = v123[629];
      }
      if ( (v124 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v124 = v123[629];
      }
      if ( (v124 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v124 = v123[629];
      }
      if ( (v124 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v124 = v123[629];
      }
      if ( (v124 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v124 = v123[629];
      }
      if ( (v124 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v124 = v123[629];
      }
      if ( (v124 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_505;
    case 13:
      i = 0;
      v125 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v126 = v125 - 1;
      if ( !v126 )
        goto LABEL_465;
      v127 = v126 - 1;
      if ( v127 )
      {
        if ( v127 != 1 )
          goto LABEL_505;
        v128 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_465:
        v128 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v128;
      goto LABEL_505;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v132 = Object;
      v133 = *((_DWORD *)Object + 628);
      if ( (v133 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v133 = v132[628];
      }
      if ( v133 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v134 = Object;
      v135 = *((_DWORD *)Object + 629);
      if ( (v135 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v135 = v134[629];
      }
      if ( (v135 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_505;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v136 = Object;
      v137 = *((_DWORD *)Object + 629);
      if ( (v137 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v137 = v136[629];
      }
      if ( (v137 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v137 = v136[629];
      }
      if ( (v137 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v137 = v136[629];
      }
      if ( (v137 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v137 = v136[629];
      }
      if ( (v137 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v137 = v136[629];
      }
      if ( (v137 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v137 = v136[629];
      }
      if ( (v137 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v137 = v136[629];
      }
      if ( (v137 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v137 = v136[629];
      }
      if ( (v137 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v137 = v136[629];
      }
      if ( v137 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_505;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v130 = RedirectionTrustPolicy - 1;
      if ( v130 )
      {
        if ( v130 != 1 )
          goto LABEL_505;
        v131 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v131 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v131;
LABEL_505:
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_505;
  }
}
