/*
 * XREFs of NtQueryInformationProcess @ 0x1406212A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 *     PsIsProtectedProcess @ 0x140250290 (PsIsProtectedProcess.c)
 *     MmGetSessionId @ 0x140253550 (MmGetSessionId.c)
 *     KeEnterCriticalRegionThread @ 0x14025B380 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14025C750 (MmQueryWorkingSetInformation.c)
 *     KeQueryGroupMaskProcess @ 0x14025C828 (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x14025C840 (KeQueryAffinityProcess.c)
 *     KeQuerySystemTimePrecise @ 0x140278F00 (KeQuerySystemTimePrecise.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExUnlockUserBuffer @ 0x1402997FC (ExUnlockUserBuffer.c)
 *     ExReleaseExtensionTable @ 0x14029F2DC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14029F2F8 (ExGetExtensionTable.c)
 *     PsGetWin32KFilterSet @ 0x1402A6DF0 (PsGetWin32KFilterSet.c)
 *     PsQueryProcessCommandLine @ 0x1402BEE10 (PsQueryProcessCommandLine.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MmQueryCommitReleaseState @ 0x1402C3EC8 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x1402C9400 (PsGetProcessProtection.c)
 *     PsGetCurrentProcess @ 0x14033B600 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140381050 (ExQueryHandleExceptionsPermanency.c)
 *     PspUnlockProcessShared @ 0x140399740 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140399E50 (PspLockProcessSecurityShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403D0440 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1403FCD00 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x14051C654 (KeQueryCpuSetsProcess.c)
 *     PsGetProcessSecurityDomain @ 0x140581944 (PsGetProcessSecurityDomain.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PsQueryProcessEnergyValues @ 0x1405E92D0 (PsQueryProcessEnergyValues.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     PsReferenceProcessFilePointer @ 0x140604BE0 (PsReferenceProcessFilePointer.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611214 (EtwQueryProcessTelemetryInfo.c)
 *     PsQueryStatisticsProcess @ 0x140618CC0 (PsQueryStatisticsProcess.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     PspQueryQuotaLimits @ 0x14062027C (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x140620460 (IoQueryFileDosDeviceName.c)
 *     MmGetSectionInformation @ 0x140620F30 (MmGetSectionInformation.c)
 *     PsQueryRuntimeProcess @ 0x1406211D0 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1406250A0 (ObQueryDeviceMapInformation.c)
 *     ExLockUserBuffer @ 0x140683180 (ExLockUserBuffer.c)
 *     ExEnumHandleTable @ 0x140685A70 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x14069C640 (ObDereferenceProcessHandleTable.c)
 *     ExIsRestrictedCaller @ 0x1406A18B0 (ExIsRestrictedCaller.c)
 *     PsQueryProcessQuotaCounters @ 0x1406A6C64 (PsQueryProcessQuotaCounters.c)
 *     PsQueryFullProcessImageName @ 0x1406AA56C (PsQueryFullProcessImageName.c)
 *     KeGetExecuteOptions @ 0x1406AEB48 (KeGetExecuteOptions.c)
 *     ObGetProcessHandleCount @ 0x1406B471C (ObGetProcessHandleCount.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1406BF240 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406C2928 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsGetProcessDeepFreezeStats @ 0x1406CE8CC (PsGetProcessDeepFreezeStats.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x140781B70 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExSystemExceptionFilter @ 0x1407D4F10 (ExSystemExceptionFilter.c)
 *     DbgkOpenProcessDebugPort @ 0x1408843E8 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x14088F9A8 (VslGetSecurePebAddress.c)
 *     VslLiveDumpCaptureProcess @ 0x14088FD4C (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408F28E8 (PoQueryProcessEnergyTrackingState.c)
 *     PsGetKeepAliveCountProcess @ 0x140907884 (PsGetKeepAliveCountProcess.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1409078C0 (PsQueryTotalCycleTimeProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x1409080A8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140908250 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090CA18 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x140934D4C (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C654 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x14094C894 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x14094C8A4 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x14094CAA4 (ExReferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

int __fastcall NtQueryInformationProcess(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4, unsigned int *a5)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
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
  unsigned __int64 *v47; // rax
  int v48; // ebx
  unsigned __int64 v49; // r13
  int v50; // edi
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
  unsigned __int64 *v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rcx
  unsigned int v98; // eax
  _KPROCESS *v99; // rax
  struct _DMA_ADAPTER *v100; // r14
  unsigned __int64 v101; // rax
  int v102; // edi
  _DWORD *v103; // rcx
  int v104; // eax
  unsigned __int64 v105; // rax
  int v106; // ecx
  int v107; // eax
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
  unsigned __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  NTSTATUS v142; // ebx
  PVOID v143; // rbx
  unsigned __int64 v144; // rax
  char v145; // r9
  PVOID v146; // rbx
  int ProcessCommandLine; // eax
  char v148; // r9
  unsigned __int64 v149; // rax
  __int64 v150; // r8
  unsigned int v151; // ebx
  void *v152; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v154; // eax
  int v155; // eax
  unsigned __int64 ExtensionTable; // rdi
  NTSTATUS v157; // ebx
  __int64 (__fastcall *v158)(PVOID, __int64 *); // rax
  PVOID v159; // rdi
  _DWORD *v160; // rcx
  int v161; // edx
  int v162; // eax
  PVOID v163; // rdi
  unsigned int v164; // ebx
  __int64 v165; // rcx
  _KPROCESS *v166; // rcx
  __int64 v167; // r12
  struct _KTHREAD *v168; // rdi
  __int64 v169; // rcx
  int v170; // r8d
  unsigned int v171; // edi
  _KPROCESS *v172; // rax
  unsigned __int64 v173; // r8
  __int64 v174; // rcx
  __int64 *v175; // rdx
  int v176; // eax
  signed __int32 v177[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  int i; // [rsp+48h] [rbp-9A0h]
  _BYTE v181[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v182; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v183; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v185; // [rsp+58h] [rbp-990h]
  unsigned int v186; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v188; // [rsp+70h] [rbp-978h]
  int v189; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v190; // [rsp+78h] [rbp-970h]
  _DWORD *v191; // [rsp+80h] [rbp-968h]
  int v192; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handlea; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v196; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v197; // [rsp+B0h] [rbp-938h] BYREF
  int v198; // [rsp+B4h] [rbp-934h] BYREF
  int v199; // [rsp+B8h] [rbp-930h]
  int v200; // [rsp+BCh] [rbp-92Ch] BYREF
  int v201; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v202; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v203; // [rsp+D0h] [rbp-918h]
  unsigned __int64 v204; // [rsp+D8h] [rbp-910h]
  int v205[4]; // [rsp+E0h] [rbp-908h]
  struct _OBJECT_NAME_INFORMATION v206; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v207; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v208[4]; // [rsp+110h] [rbp-8D8h] BYREF
  unsigned __int64 v209; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v210; // [rsp+128h] [rbp-8C0h] BYREF
  __int64 v211; // [rsp+130h] [rbp-8B8h] BYREF
  __int64 v212; // [rsp+138h] [rbp-8B0h]
  PVOID v213; // [rsp+140h] [rbp-8A8h] BYREF
  __int64 v214; // [rsp+148h] [rbp-8A0h] BYREF
  _QWORD v215[2]; // [rsp+150h] [rbp-898h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+160h] [rbp-888h] BYREF
  PVOID v217; // [rsp+168h] [rbp-880h] BYREF
  _OWORD v218[3]; // [rsp+170h] [rbp-878h] BYREF
  __int64 v219; // [rsp+1A0h] [rbp-848h]
  __int128 v220; // [rsp+1A8h] [rbp-840h] BYREF
  __int64 v221; // [rsp+1B8h] [rbp-830h]
  __int64 v222; // [rsp+1C0h] [rbp-828h]
  HANDLE v223; // [rsp+1C8h] [rbp-820h]
  __int64 v224; // [rsp+1D0h] [rbp-818h]
  __int64 v225; // [rsp+1D8h] [rbp-810h]
  int v226; // [rsp+1E0h] [rbp-808h]
  int v227; // [rsp+1E4h] [rbp-804h]
  unsigned __int64 v228; // [rsp+1E8h] [rbp-800h]
  __int64 v229; // [rsp+1F0h] [rbp-7F8h]
  __int64 v230; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v231; // [rsp+200h] [rbp-7E8h]
  int v232; // [rsp+210h] [rbp-7D8h]
  unsigned __int128 v233; // [rsp+218h] [rbp-7D0h]
  unsigned __int128 v234; // [rsp+228h] [rbp-7C0h]
  unsigned __int128 v235; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v237; // [rsp+260h] [rbp-788h] BYREF
  __int128 v238; // [rsp+270h] [rbp-778h] BYREF
  __int128 v239; // [rsp+280h] [rbp-768h] BYREF
  __int128 v240; // [rsp+290h] [rbp-758h] BYREF
  __int128 v241; // [rsp+2A0h] [rbp-748h]
  __int128 v242; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v243; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v244; // [rsp+2D0h] [rbp-718h]
  _OWORD v245[2]; // [rsp+2E0h] [rbp-708h] BYREF
  __int128 v246; // [rsp+300h] [rbp-6E8h]
  __int128 v247; // [rsp+310h] [rbp-6D8h]
  __int128 v248; // [rsp+320h] [rbp-6C8h]
  __int128 v249; // [rsp+330h] [rbp-6B8h]
  __int64 v250; // [rsp+340h] [rbp-6A8h]
  unsigned __int64 v251; // [rsp+350h] [rbp-698h]
  __int128 v252; // [rsp+358h] [rbp-690h] BYREF
  unsigned __int64 v253; // [rsp+368h] [rbp-680h]
  void *v254; // [rsp+370h] [rbp-678h]
  __int128 v255; // [rsp+380h] [rbp-668h]
  __int128 v256; // [rsp+390h] [rbp-658h]
  __int128 v257; // [rsp+3A0h] [rbp-648h]
  __int128 v258; // [rsp+3B0h] [rbp-638h]
  __int128 v259; // [rsp+3C0h] [rbp-628h]
  __int128 v260; // [rsp+3D0h] [rbp-618h]
  __int128 v261; // [rsp+3E0h] [rbp-608h]
  __int128 v262; // [rsp+3F0h] [rbp-5F8h]
  __int128 v263; // [rsp+400h] [rbp-5E8h]
  __int128 v264; // [rsp+410h] [rbp-5D8h]
  __int64 v265; // [rsp+420h] [rbp-5C8h] BYREF
  int v266; // [rsp+428h] [rbp-5C0h]
  __int128 v267; // [rsp+430h] [rbp-5B8h]
  __int128 v268; // [rsp+440h] [rbp-5A8h]
  __int64 v269; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v271; // [rsp+488h] [rbp-560h] BYREF
  __int128 v272; // [rsp+4C0h] [rbp-528h]
  __int128 v273; // [rsp+4D0h] [rbp-518h]
  __int128 v274; // [rsp+4E0h] [rbp-508h]
  __int128 v275; // [rsp+4F0h] [rbp-4F8h]
  __int128 v276; // [rsp+500h] [rbp-4E8h]
  __int128 v277; // [rsp+510h] [rbp-4D8h]
  __int128 v278; // [rsp+520h] [rbp-4C8h]
  __int128 v279; // [rsp+530h] [rbp-4B8h]
  __int128 v280; // [rsp+540h] [rbp-4A8h]
  __int64 v281; // [rsp+550h] [rbp-498h]
  _OWORD v282[9]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v283[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v284[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _OWORD v285[27]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v286[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = a4;
  v6 = a3;
  v185 = Handle;
  v204 = a3;
  v228 = a3;
  v208[2] = a4;
  v191 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v186 = 0;
  Handlea = 0LL;
  v189 = 0;
  memset(v284, 0, 0xA8uLL);
  v196 = 0LL;
  GroupMaskProcess = 0;
  v208[0] = 0;
  v226 = 0;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v272 = 0LL;
  v273 = 0LL;
  v274 = 0LL;
  v275 = 0LL;
  v276 = 0LL;
  v277 = 0LL;
  v278 = 0LL;
  v279 = 0LL;
  v280 = 0LL;
  v281 = 0LL;
  memset(&v218[1], 0, 32);
  v219 = 0LL;
  v203 = 0LL;
  v252 = 0LL;
  v210 = 0LL;
  v267 = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v209 = 0LL;
  ObjectNameInformation = 0LL;
  v188 = 0;
  Object = 0LL;
  v215[0] = 0LL;
  v197 = 0;
  memset(v245, 0, sizeof(v245));
  v246 = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  v249 = 0LL;
  v250 = 0LL;
  Src = 0LL;
  v237 = 0LL;
  v238 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  v241 = 0LL;
  v242 = 0LL;
  v10 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v181[1] = v10;
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
      memset(v283, 0, 0xA8uLL);
      v181[0] = 0;
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
      v186 = v5;
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
          KeQueryAffinityProcess((__int64)v22, v283, &GroupMaskProcess, 0LL);
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
                P = (PVOID)*((_QWORD *)v283 + Group + 1);
            }
          }
        }
        if ( v21 )
          PsQueryProcessAttributes(v22, (__int64)v181, 0LL);
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
              *(_DWORD *)(v21 + 56) = v9 | 2;
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
          if ( v181[0] )
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
        goto LABEL_543;
      }
LABEL_559:
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
      PsQueryStatisticsProcess((__int64)Object, v245);
      v233 = __PAIR128__(v247, *((unsigned __int64 *)&v246 + 1));
      v234 = __PAIR128__(v248, *((unsigned __int64 *)&v247 + 1));
      v235 = __PAIR128__(v249, *((unsigned __int64 *)&v248 + 1));
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v233;
      *(_OWORD *)(v6 + 16) = v234;
      *(_OWORD *)(v6 + 32) = v235;
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
      LODWORD(v237) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v237 + 1, &v238, &v242, &v209, &v210, v208);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters(v32, 1LL, &v239, (char *)&v238 + 8);
      PsQueryProcessQuotaCounters(v33, 0LL, &v240, (char *)&v239 + 8);
      *((_QWORD *)&v240 + 1) = v32[201] << 12;
      *(_QWORD *)&v241 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v242 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v241 + 1) = *((_QWORD *)&v240 + 1);
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
      v35 = PsQueryRuntimeProcess((__int64)Object, &v197);
      v36 = (unsigned int)KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)v35;
      *(_QWORD *)(v6 + 24) = v36 * v197;
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
      HIBYTE(v188) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v188;
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
      v198 = 0;
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
      ProcessHandleCount = ObGetProcessHandleCount(Object, &v198);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = v198;
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
        || (KeQueryAffinityProcess((__int64)v34, v284, &GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ObfDereferenceObjectWithTag(v34, 0x79517350u);
        return -1073741811;
      }
      _BitScanForward((unsigned int *)&v85, GroupMaskProcess);
      v86 = *((_QWORD *)v284 + v85 + 1);
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
        v190 = *(_DWORD *)(v6 + 40);
        v45 = v190;
        if ( (v190 & 0xFFFFFFFE) != 0 )
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
      v47 = (unsigned __int64 *)*((_QWORD *)Object + 176);
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
        v6 = (unsigned __int64)&v252;
        v14 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v9 = v228 + 16;
      v186 = v14;
      DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v9, &v186);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *a5 = v186 + 16;
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
      if ( (unsigned int)ExIsRestrictedCaller(v10) )
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
        v52 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        v53 = v52;
        v209 = v52;
        if ( v52 )
        {
          v54 = ExReferenceHandleDebugInfo(v52);
          v55 = v54;
          v210 = v54;
          if ( v54 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v56 = (unsigned int)(*(_DWORD *)(v54 + 72) % *(_DWORD *)(v54 + 4));
            v199 = v56;
            while ( 1 )
            {
              v208[1] = v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v55 + 4) )
                break;
              v57 = (_OWORD *)(v55 + 160 * v56);
              v255 = v57[5];
              v256 = v57[6];
              v257 = v57[7];
              v258 = v57[8];
              v259 = v57[9];
              v260 = v57[10];
              v261 = v57[11];
              v262 = v57[12];
              v263 = v57[13];
              v264 = v57[14];
              v58 = v256;
              if ( *(_QWORD *)v6 == (_QWORD)v256 || !*(_QWORD *)v6 )
              {
                v59 = DWORD2(v256);
                if ( DWORD2(v256) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)P )
                  {
                    P = (PVOID)(unsigned int)((_DWORD)P - 1);
                    v227 = (int)P;
                    *(_QWORD *)v49 = v58;
                    *(_OWORD *)(v49 + 8) = v255;
                    *(_DWORD *)(v49 + 24) = v59;
                    *(_OWORD *)(v49 + 32) = v257;
                    *(_OWORD *)(v49 + 48) = v258;
                    *(_OWORD *)(v49 + 64) = v259;
                    *(_OWORD *)(v49 + 80) = v260;
                    *(_OWORD *)(v49 + 96) = v261;
                    *(_OWORD *)(v49 + 112) = v262;
                    *(_OWORD *)(v49 + 128) = v263;
                    *(_OWORD *)(v49 + 144) = v264;
                    v49 += 160LL;
                    v253 = v49;
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
              v199 = v56;
              LODWORD(v9) = v9 + 1;
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
      ExecuteOptions = KeGetExecuteOptions(CurrentProcess, &v189);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v189;
        if ( a5 )
          *a5 = 4;
      }
      return ExecuteOptions;
    case 36:
      v211 = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v63 = PsGetCurrentProcess();
        v191 = v63;
        Object = v63;
      }
      else
      {
        v217 = 0LL;
        result = ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsProcessType, v10, &v217, 0LL);
        v63 = v217;
        v191 = v217;
        Object = v217;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        v66 = v63[330];
        if ( v66 )
          break;
        KeQuerySystemTimePrecise(&v211, (__int64)v63, v64, v65);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v69 = ExGenRandom(1);
        v70 = __rdtsc();
        _InterlockedCompareExchange(
          v191 + 330,
          v70 ^ v69 ^ CurrentPrcb->MmPageFaultCount ^ v211 ^ HIDWORD(v211) ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v63 = Object;
        v191 = Object;
      }
      *(_DWORD *)v6 = v66;
      if ( a5 )
        *a5 = 4;
      if ( Handle != (HANDLE)-1LL )
        HalPutDmaAdapter((PADAPTER_OBJECT)v63);
      return v9;
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
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v215);
      *(_QWORD *)(v6 + 8) = v215[0];
      if ( a5 )
        *a5 = 16;
      goto LABEL_649;
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
      v196 = v17;
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
        DeviceMapInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (ULONG_PTR *)&v196);
        v17 = (struct _FILE_OBJECT *)v196;
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
            v9 = v6 + 16;
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
      v254 = *(void **)v6;
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
                         &v196,
                         0LL);
      v38 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(
                                   (struct _EX_RUNDOWN_REF *)Object,
                                   (ULONG_PTR *)&DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v79 = (struct _DMA_ADAPTER *)v196;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v80 = (_DMA_OPERATIONS *)*((_QWORD *)v196 + 5);
      v81 = DmaAdapter;
      DmaOperations = DmaAdapter[2].DmaOperations;
      v83 = 0;
      if ( v80 != DmaOperations )
        v83 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v196);
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
      v190 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v84 = (v190 >> 19) & 1 | 2;
      if ( (v190 & 0x40000) == 0 )
        v84 = (v190 >> 19) & 1;
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
      v190 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v190 & 0x200000) != 0;
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
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v87 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v87;
        v89 = v186;
        do
        {
          _BitScanForward(&v90, v87);
          v89 += 2;
          v186 = v89;
          if ( v89 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v90;
            v6 += 2LL;
            v251 = v6;
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
      memset(&v271, 0, sizeof(v271));
      v192 = 0;
      *(_OWORD *)v205 = 0LL;
      v230 = 0LL;
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
          KeStackAttachProcess(v93, &v271);
          v94 = (unsigned __int64 *)v93[1].AffinityPadding[10];
          if ( v94 )
            v9 = *v94;
          if ( v9 )
          {
            v229 = *(unsigned int *)(v9 + 16);
            v192 = *(_DWORD *)(v229 + 104);
            v95 = *(_QWORD *)(v229 + 112);
            v215[1] = v95;
            v205[0] = v95;
            *(_QWORD *)&v205[2] = HIDWORD(v95);
          }
          else
          {
            v212 = *(_QWORD *)(v93[1].AffinityPadding[4] + 32);
            v96 = v212 + 164;
            if ( (unsigned __int64)(v212 + 164) >= 0x7FFFFFFF0000LL )
              v96 = 0x7FFFFFFF0000LL;
            v192 = *(_DWORD *)v96;
            v231 = 0LL;
            v97 = v212 + 176;
            if ( (unsigned __int64)(v212 + 176) >= 0x7FFFFFFF0000LL )
              v97 = 0x7FFFFFFF0000LL;
            LODWORD(v231) = *(_DWORD *)v97;
            *((_QWORD *)&v231 + 1) = *(_QWORD *)(v97 + 8);
            *(_OWORD *)v205 = v231;
            LOWORD(v95) = v231;
          }
          DeviceMapInformation = i;
          KeUnstackDetachProcess(&v271);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v98 = (unsigned __int16)v95 + 6;
          if ( a5 )
            *a5 = v98;
          if ( (unsigned int)v5 >= v98 )
          {
            *(_DWORD *)v6 = v192;
            *(_WORD *)(v6 + 4) = v95;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v95 )
          {
            v99 = PsGetCurrentProcess();
            *(_QWORD *)Tag = (unsigned __int16)v95;
            v34 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MmCopyVirtualMemory(
                                     (ULONG_PTR)Object,
                                     *(char **)&v205[2],
                                     (ULONG_PTR)v99,
                                     (char *)(v6 + 6),
                                     *(size_t *)Tag,
                                     1,
                                     &v230);
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
      v213 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, v10, &v213, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v100 = (struct _DMA_ADAPTER *)v213;
        v101 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v213);
        if ( v101 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v101, v6, (unsigned int)v5, a5);
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
    case 52:
      v200 = 0;
      v182 = 0;
      v183 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v102 = *(_DWORD *)v6;
      v232 = *(_DWORD *)v6;
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
      v138 = result;
      i = result;
      if ( result < 0 )
        return result;
      v93 = (struct _KPROCESS *)Object;
      v139 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v139 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryHandleExceptions(v139) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_517;
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
      LOBYTE(v140) = 1;
      *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v140);
      *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(v141, 0LL);
      goto LABEL_122;
    case 58:
      v214 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 v6,
                 (unsigned int)v5,
                 (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10],
                 1LL,
                 &v214,
                 &P);
      if ( result >= 0 )
      {
        v142 = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v142 >= 0 )
        {
          v218[0] = 0LL;
          v143 = Object;
          v144 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v144 )
          {
            *(_QWORD *)&v218[0] = v214;
            *((_QWORD *)&v218[0] + 1) = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v144, PspHandleTableWalker, v218, 0LL);
            ObDereferenceProcessHandleTable(v143);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v143, 0x79517350u);
          if ( a5 )
            *a5 = 4 * HIDWORD(v218[0]);
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
      v145 = v10;
      v146 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v145, a5);
      goto LABEL_534;
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
LABEL_543:
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
      v148 = v10;
      v146 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((__int64)Object, (char *)v6, (unsigned int)v5, v148, a5);
LABEL_534:
      DeviceMapInformation = ProcessCommandLine;
      if ( v146 )
        goto LABEL_535;
      return DeviceMapInformation;
    case 65:
      v201 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v206 = *(struct _OBJECT_NAME_INFORMATION *)v6;
        v207 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v206.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v206.Name.MaximumLength + 1) >= 8u || v206.Name.Buffer )
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
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v201, &v206.Name.Buffer, &v207, (_QWORD *)&v207 + 1);
              *(_DWORD *)(&v206.Name.MaximumLength + 1) ^= ((unsigned __int8)v201 ^ *((_BYTE *)&v206.Name.MaximumLength
                                                                                    + 2)) & 1;
              v206.Name.Buffer = (wchar_t *)((__int64)v206.Name.Buffer << 12);
              *(_QWORD *)&v207 = (_QWORD)v207 << 12;
              *((_QWORD *)&v207 + 1) <<= 12;
              *(struct _OBJECT_NAME_INFORMATION *)v6 = v206;
              *(_OWORD *)(v6 + 16) = v207;
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
        v151 = 8 * KeQueryCpuSetsProcess((__int64)Object, v286, v150, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( a5 )
          *a5 = v151;
        if ( v151 < (unsigned int)v5 )
          LODWORD(v5) = v151;
        memmove((void *)v6, v286, (unsigned int)v5);
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
        *((_QWORD *)&v218[2] + 1) = 0LL;
        v219 = 0LL;
        if ( *((_QWORD *)Object + 162) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, 28LL);
          *(_QWORD *)Tag = 0LL;
          ZwQueryInformationJobObject(0LL, 9LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v218[1] + 8) = v267;
          *(_QWORD *)&v218[1] = v268;
          v75 = v219;
          if ( (v273 & 0x200000) != 0 )
            v75 = v281;
          v219 = v75;
          v76 = *((_QWORD *)&v218[2] + 1);
          if ( (v273 & 0x200) != 0 )
            v76 = *((_QWORD *)&v279 + 1);
          *((_QWORD *)&v218[2] + 1) = v76;
          *(__m256i *)v6 = *(__m256i *)&v218[1];
          *(_QWORD *)(v6 + 32) = v219;
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
      v138 = result;
      i = result;
      if ( result < 0 )
        return result;
      v93 = (struct _KPROCESS *)Object;
      v149 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v149 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v149) != 0;
      *(_DWORD *)v6 = v9;
LABEL_517:
      ObDereferenceProcessHandleTable(v93);
      ObfDereferenceObjectWithTag(v93, 0x79517350u);
      return v138;
    case 72:
      return PsIumGetOnDemandDebugChallenge(Handle, v6, (unsigned int)v5, a5);
    case 73:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v152 = PsGetCurrentProcess();
        Object = v152;
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
        v152 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v152);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v154 = NoChildProcessRestrictedPolicy - 1;
      if ( !v154 )
        goto LABEL_586;
      v155 = v154 - 1;
      if ( v155 )
      {
        if ( v155 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_586:
        *(_BYTE *)v6 = 1;
      }
      if ( a5 )
        *a5 = 3;
      if ( Handle == (HANDLE)-1LL )
        return v9;
LABEL_590:
      ObfDereferenceObjectWithTag(v152, 0x79517350u);
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
        LODWORD(v9) = qword_140C1E090;
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      goto LABEL_122;
    case 76:
      memset(v285, 0, sizeof(v285));
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
      PsQueryProcessEnergyValues(Object, v285);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v285, (unsigned int)v5);
      if ( a5 )
        *a5 = 432;
      goto LABEL_649;
    case 77:
      v265 = 0LL;
      v266 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v157 = ObReferenceObjectByHandleWithTag(
               Handle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v10,
               0x79517350u,
               &Object,
               0LL);
      if ( v157 >= 0 )
      {
        v158 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v159 = Object;
        v157 = v158(Object, &v265);
        if ( v157 >= 0 )
        {
          *(_QWORD *)v6 = v265;
          *(_DWORD *)(v6 + 8) = v266;
          if ( a5 )
            *a5 = 12;
          v157 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v159, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v157;
    case 79:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v160 = PsGetCurrentProcess();
        Object = v160;
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
        v160 = Object;
      }
      *(_DWORD *)v6 = 0;
      v161 = v160[628];
      v162 = 0;
      if ( (v161 & 0x4000) != 0 )
      {
        v162 = 1;
        *(_DWORD *)v6 = 1;
        v161 = v160[628];
      }
      if ( (v161 & 0x8000) != 0 )
        *(_DWORD *)v6 = v162 | 2;
      *(_DWORD *)(v6 + 4) = v160[602];
      if ( a5 )
        *a5 = 8;
      if ( Handle != (HANDLE)-1LL )
        goto LABEL_629;
      return v9;
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
LABEL_535:
          ObfDereferenceObjectWithTag(v146, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case 82:
      memset(v282, 0, sizeof(v282));
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
        v163 = Object;
        PoQueryProcessEnergyTrackingState(Object, v282);
        v164 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v164 = v5;
        memmove((void *)v6, v282, v164);
        if ( a5 )
          *a5 = v164;
        i = 0;
        ObfDereferenceObjectWithTag(v163, 0x79517350u);
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
LABEL_649:
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
      v243 = 0LL;
      v244 = 0LL;
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
      v221 = 0LL;
      v167 = 0LL;
      v222 = 0LL;
      v202 = 0LL;
      v223 = 0LL;
      v225 = 0LL;
      v168 = CurrentThread;
      v152 = Object;
      PspLockProcessSecurityShared((__int64)Object, (__int64)CurrentThread);
      v169 = *((_QWORD *)v152 + 292) >> 61;
      if ( (unsigned __int64)(v169 - 3) <= 1
        && (v202 = (HANDLE)(*((_QWORD *)v152 + 292) & 0x1FFFFFFFFFFFFFFFLL),
            v223 = v202,
            v221 = *((_QWORD *)v152 + 291),
            v167 = v221 - *((_QWORD *)v152 + 288),
            v222 = v167,
            v169 == 3) )
      {
        v170 = 512;
      }
      else
      {
        v170 = v225;
      }
      LODWORD(v225) = v170 & 0xFFFFFE00 | *((_BYTE *)v152 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v152 + 2171) & 0x38 | (32 * (*((_DWORD *)v152 + 543) & 4))));
      PspUnlockProcessShared((__int64)v152, (__int64)v168);
      PsGetProcessDeepFreezeStats(v152, &v243);
      v220 = v243;
      v224 = v244;
      if ( !v167 )
        v222 = v243 - *((_QWORD *)v152 + 288);
      if ( !v202 )
        v223 = (HANDLE)(*((_QWORD *)&v243 + 1) - *((_QWORD *)v152 + 289) - v244);
      v171 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v171 = v5;
      memmove((void *)v6, &v220, v171);
      if ( a5 )
        *a5 = v171;
      i = 0;
      goto LABEL_590;
    case 89:
      v202 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v10 )
      {
        v165 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v165 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v165 = *(_QWORD *)v165;
      }
      v166 = PsGetCurrentProcess();
      if ( Handle != (HANDLE)-1LL || v166 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v166[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v10, &v202);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v202;
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
        _InterlockedOr(v177, 0);
        *(_QWORD *)v6 = PsGetProcessSecurityDomain((__int64)Object);
        if ( a5 )
          *a5 = 8;
        i = 0;
LABEL_629:
        ObfDereferenceObjectWithTag(v160, 0x79517350u);
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
          v172 = PsGetCurrentProcess();
          v173 = v172[1].AffinityPadding[4];
          if ( v173 )
          {
            v174 = 0LL;
            v175 = (__int64 *)v172[1].AffinityPadding[10];
            if ( v175 )
              v174 = *v175;
            if ( v174 )
            {
              if ( (*(_DWORD *)(v174 + 1140) & 1) != 0 )
                LODWORD(v203) = 1;
            }
            else
            {
              v176 = v203;
              if ( (*(_BYTE *)(v173 + 1984) & 1) != 0 )
                v176 = 1;
              LODWORD(v203) = v176;
            }
          }
          *(_QWORD *)v6 = v203;
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
      goto LABEL_510;
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
          goto LABEL_404;
        v112 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v112;
LABEL_404:
      v113 = v110[628];
      if ( (v113 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v113 = v110[628];
      }
      if ( (v113 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_510;
    case 3:
      i = 0;
      v105 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v105 )
      {
        ExQueryHandleExceptionsPermanency(v105, &v182, &v183);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v182 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v183 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ObDereferenceProcessHandleTable(Object);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_510;
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
          goto LABEL_393;
        v107 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v107;
LABEL_393:
      v108 = *((_DWORD *)Object + 652);
      if ( (v108 & 2) != 0 )
      {
        v109 = *(_DWORD *)(v6 + 4) | 4;
      }
      else
      {
        if ( (v108 & 4) == 0 )
          goto LABEL_510;
        v109 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v109;
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
      goto LABEL_510;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v200);
      *(_DWORD *)(v6 + 4) = v200;
      goto LABEL_510;
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
          goto LABEL_510;
        v117 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v117;
      goto LABEL_510;
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
          goto LABEL_431;
        v120 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v120;
LABEL_431:
      v121 = v118[628];
      if ( (v121 & 0x200000) != 0 )
      {
        v122 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v121 & 0x400000) == 0 )
          goto LABEL_436;
        v122 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v122;
LABEL_436:
      if ( (v118[628] & 0x40000) != 0 )
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
      goto LABEL_510;
    case 13:
      i = 0;
      v125 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v126 = v125 - 1;
      if ( !v126 )
        goto LABEL_470;
      v127 = v126 - 1;
      if ( v127 )
      {
        if ( v127 != 1 )
          goto LABEL_510;
        v128 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_470:
        v128 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v128;
      goto LABEL_510;
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
      goto LABEL_510;
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
      goto LABEL_510;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v130 = RedirectionTrustPolicy - 1;
      if ( v130 )
      {
        if ( v130 != 1 )
          goto LABEL_510;
        v131 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v131 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v131;
LABEL_510:
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_510;
  }
}
