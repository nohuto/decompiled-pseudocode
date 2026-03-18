/*
 * XREFs of NtQueryInformationProcess @ 0x14073DA00
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     PsGetWin32KFilterSet @ 0x140233410 (PsGetWin32KFilterSet.c)
 *     KeQueryAffinityProcess @ 0x1402395A0 (KeQueryAffinityProcess.c)
 *     PsQueryProcessCommandLine @ 0x140241D20 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x14024DC34 (MmQueryCommitReleaseState.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14025C4BC (ExQueryHandleExceptionsPermanency.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MmQueryWorkingSetInformation @ 0x1402D02F0 (MmQueryWorkingSetInformation.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x1402D7598 (KeQueryGroupMaskProcess.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403DF740 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     Feature_Servicing_FsctlProcessMitigation__private_IsEnabled @ 0x140417880 (Feature_Servicing_FsctlProcessMitigation__private_IsEnabled.c)
 *     ZwQueryInformationJobObject @ 0x14041E180 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140572490 (KeQueryCpuSetsProcess.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ObGetProcessHandleCount @ 0x14066C174 (ObGetProcessHandleCount.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     ObQueryDeviceMapInformation @ 0x14069C1E0 (ObQueryDeviceMapInformation.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     PspQueryQuotaLimits @ 0x1406B48F0 (PspQueryQuotaLimits.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406C32B0 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     PsQueryFullProcessImageName @ 0x1406C6384 (PsQueryFullProcessImageName.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1406C73D0 (PsQueryTotalCycleTimeProcess.c)
 *     KeGetExecuteOptions @ 0x1406CAB00 (KeGetExecuteOptions.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406DEAEC (PspGetRedirectionTrustPolicy.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1406E9920 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406E9BE0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsQueryRuntimeProcess @ 0x1406F2AA0 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessAttributes @ 0x14070BA00 (PsQueryProcessAttributes.c)
 *     IoQueryFileDosDeviceName @ 0x14070F660 (IoQueryFileDosDeviceName.c)
 *     PsGetProcessDeepFreezeStats @ 0x140711CD4 (PsGetProcessDeepFreezeStats.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PsQueryProcessEnergyValues @ 0x1407A8280 (PsQueryProcessEnergyValues.c)
 *     PsQueryStatisticsProcess @ 0x1407B81B0 (PsQueryStatisticsProcess.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     DbgkOpenProcessDebugPort @ 0x1409272A0 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x140932260 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x14099A188 (PoQueryProcessEnergyTrackingState.c)
 *     PspQueryPooledQuotaLimits @ 0x1409AE3D8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409AE584 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1409B314C (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1409E4F10 (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8D78 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8FB8 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1409F91B8 (ExReferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall NtQueryInformationProcess(
        ULONG_PTR BugCheckParameter1,
        int a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
  unsigned __int8 PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int result; // eax
  __int128 *v16; // rdx
  void *v17; // rax
  void *v18; // rsi
  int DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v20; // r12
  struct _FILE_OBJECT *v21; // rbx
  int v22; // r12d
  POBJECT_NAME_INFORMATION v23; // rbx
  unsigned int v24; // edi
  unsigned __int64 v25; // r13
  int v26; // r12d
  char *v27; // rdi
  unsigned __int16 UserAffinityPrimaryGroup; // dx
  __int64 v29; // rax
  int v30; // eax
  __int16 v31; // cx
  _DWORD *v32; // rcx
  int v33; // edx
  int v34; // ecx
  int v35; // ebx
  _DWORD *v36; // r9
  _QWORD *v37; // rbx
  struct _EX_RUNDOWN_REF *v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int ExecuteOptions; // ebx
  _DWORD *v42; // rcx
  HANDLE v43; // rdx
  int ProcessHandleCount; // edi
  int ProcessTelemetryCoverage; // eax
  int v46; // ebx
  int v47; // ebx
  int v48; // edi
  int SessionId; // ebx
  unsigned __int64 *v50; // rax
  int v51; // ebx
  unsigned __int64 v52; // r13
  int v53; // edi
  struct _EX_RUNDOWN_REF *v54; // r12
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rdx
  _OWORD *v60; // rax
  __int64 v61; // r9
  int v62; // eax
  PVOID v63; // r12
  void *Process; // r10
  void *v65; // r10
  _DWORD *p_LockNV; // rdx
  int v67; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v70; // ecx
  unsigned __int64 v71; // rax
  struct _EX_RUNDOWN_REF *v72; // r13
  void *Ptr; // r12
  int v74; // ebx
  PVOID v75; // rdi
  _DWORD *v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  ULONG_PTR v79; // rdi
  int ProcessHandleInformation; // edi
  PVOID v81; // rcx
  __int64 v82; // rsi
  PVOID v83; // rbx
  __int64 v84; // rdi
  int v85; // r12d
  int v86; // ecx
  __int64 v87; // rcx
  unsigned int GroupMaskProcess; // eax
  void *v89; // r8
  unsigned int v90; // ecx
  unsigned int v91; // edx
  unsigned int v92; // ebx
  __int64 v93; // rbx
  PVOID v94; // rbx
  _DWORD *v95; // r9
  __int64 v96; // rax
  __int64 *v97; // rcx
  void *v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rcx
  unsigned int v101; // eax
  __int64 v102; // rbx
  struct _EX_RUNDOWN_REF *v103; // r14
  unsigned __int64 v104; // rax
  int v105; // edi
  _DWORD *v106; // rcx
  int v107; // eax
  unsigned __int64 v108; // rax
  int v109; // ecx
  int v110; // eax
  int v111; // ecx
  int v112; // eax
  _DWORD *v113; // rcx
  int v114; // eax
  int v115; // eax
  int v116; // eax
  _DWORD *v117; // rcx
  int v118; // eax
  _DWORD *v119; // rcx
  int v120; // eax
  int v121; // ecx
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  _DWORD *v128; // rcx
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int RedirectionTrustPolicy; // eax
  int v135; // eax
  int v136; // eax
  _DWORD *v137; // rcx
  int v138; // eax
  _DWORD *v139; // rcx
  int v140; // eax
  _DWORD *v141; // rcx
  int v142; // eax
  int v143; // edi
  unsigned __int64 v144; // rax
  int v145; // ebx
  struct _EX_RUNDOWN_REF *v146; // rbx
  unsigned __int64 v147; // rax
  char v148; // r9
  PVOID v149; // rbx
  int ProcessCommandLine; // eax
  PVOID v151; // r8
  char v152; // r9
  unsigned __int64 v153; // rax
  __int64 v154; // r8
  unsigned int v155; // ebx
  _QWORD *p_Lock; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v158; // eax
  int v159; // eax
  size_t v160; // r8
  unsigned __int64 ExtensionTable; // rdi
  int v162; // ebx
  __int64 (__fastcall *v163)(PVOID, __int64 *); // rax
  PVOID v164; // rdi
  _DWORD *v165; // rcx
  int v166; // edx
  int v167; // eax
  __int64 v168; // rax
  int v169; // ebx
  _DWORD *v170; // r8
  PVOID *v171; // r10
  __int64 v172; // rbx
  _QWORD *v173; // rdi
  __int64 v174; // rdx
  int v175; // r8d
  _KPROCESS *v176; // rcx
  unsigned __int64 v177; // r8
  __int64 v178; // rax
  __int64 *v179; // rdx
  int v180; // eax
  signed __int32 v181[8]; // [rsp+0h] [rbp-9A8h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-988h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-980h]
  PVOID Object; // [rsp+40h] [rbp-968h] BYREF
  int i; // [rsp+48h] [rbp-960h]
  _BYTE v186[2]; // [rsp+4Ch] [rbp-95Ch] BYREF
  char v187; // [rsp+4Eh] [rbp-95Ah] BYREF
  char v188; // [rsp+4Fh] [rbp-959h] BYREF
  PVOID P; // [rsp+50h] [rbp-958h] BYREF
  unsigned __int16 v190; // [rsp+58h] [rbp-950h] BYREF
  ULONG_PTR v191; // [rsp+60h] [rbp-948h]
  unsigned int v192[7]; // [rsp+68h] [rbp-940h] BYREF
  unsigned int v193; // [rsp+84h] [rbp-924h] BYREF
  unsigned __int64 v194; // [rsp+88h] [rbp-920h] BYREF
  int v195; // [rsp+90h] [rbp-918h] BYREF
  __int16 v196; // [rsp+94h] [rbp-914h]
  PVOID v197; // [rsp+98h] [rbp-910h] BYREF
  unsigned int v198; // [rsp+A0h] [rbp-908h]
  _DWORD *v199; // [rsp+A8h] [rbp-900h]
  struct _OBJECT_NAME_INFORMATION v200; // [rsp+B0h] [rbp-8F8h] BYREF
  __int128 v201; // [rsp+C0h] [rbp-8E8h] BYREF
  int v202; // [rsp+D0h] [rbp-8D8h]
  struct _KTHREAD *v203; // [rsp+D8h] [rbp-8D0h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+E0h] [rbp-8C8h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-8C0h] BYREF
  unsigned int v206; // [rsp+F0h] [rbp-8B8h] BYREF
  int v207; // [rsp+F4h] [rbp-8B4h]
  int v208; // [rsp+F8h] [rbp-8B0h] BYREF
  __int64 v209; // [rsp+100h] [rbp-8A8h]
  HANDLE v210[3]; // [rsp+108h] [rbp-8A0h] BYREF
  struct _OBJECT_NAME_INFORMATION v211; // [rsp+120h] [rbp-888h] BYREF
  unsigned int v212; // [rsp+130h] [rbp-878h]
  int v213; // [rsp+138h] [rbp-870h]
  int v214; // [rsp+13Ch] [rbp-86Ch] BYREF
  int v215; // [rsp+140h] [rbp-868h]
  unsigned int v216; // [rsp+144h] [rbp-864h]
  __int64 v217; // [rsp+148h] [rbp-860h] BYREF
  unsigned __int64 v218; // [rsp+150h] [rbp-858h] BYREF
  PVOID v219; // [rsp+158h] [rbp-850h] BYREF
  _BYTE v220[40]; // [rsp+160h] [rbp-848h] BYREF
  __int64 v221; // [rsp+188h] [rbp-820h]
  __int128 v222; // [rsp+190h] [rbp-818h] BYREF
  __int64 v223; // [rsp+1A0h] [rbp-808h]
  __int64 v224; // [rsp+1A8h] [rbp-800h]
  __int64 v225; // [rsp+1B0h] [rbp-7F8h]
  __int64 v226; // [rsp+1B8h] [rbp-7F0h]
  __int64 v227; // [rsp+1C0h] [rbp-7E8h]
  int v228; // [rsp+1C8h] [rbp-7E0h]
  __int64 v229; // [rsp+1D0h] [rbp-7D8h] BYREF
  int v230; // [rsp+1D8h] [rbp-7D0h]
  unsigned __int128 v231; // [rsp+1E0h] [rbp-7C8h]
  unsigned __int128 v232; // [rsp+1F0h] [rbp-7B8h]
  unsigned __int128 v233; // [rsp+200h] [rbp-7A8h]
  _OWORD Src[3]; // [rsp+210h] [rbp-798h] BYREF
  __int128 v235; // [rsp+240h] [rbp-768h]
  __int128 v236; // [rsp+250h] [rbp-758h]
  __int128 v237; // [rsp+260h] [rbp-748h]
  __int128 v238; // [rsp+270h] [rbp-738h] BYREF
  __int128 v239; // [rsp+280h] [rbp-728h] BYREF
  __int128 v240; // [rsp+290h] [rbp-718h]
  _OWORD v241[2]; // [rsp+2A0h] [rbp-708h] BYREF
  __int128 v242; // [rsp+2C0h] [rbp-6E8h]
  __int128 v243; // [rsp+2D0h] [rbp-6D8h]
  __int128 v244; // [rsp+2E0h] [rbp-6C8h]
  __int128 v245; // [rsp+2F0h] [rbp-6B8h]
  __int64 v246; // [rsp+300h] [rbp-6A8h]
  unsigned __int64 v247; // [rsp+310h] [rbp-698h]
  ULONG_PTR v248; // [rsp+318h] [rbp-690h]
  __int128 v249; // [rsp+320h] [rbp-688h] BYREF
  unsigned __int64 v250; // [rsp+330h] [rbp-678h]
  __int64 v251; // [rsp+338h] [rbp-670h] BYREF
  int v252; // [rsp+340h] [rbp-668h]
  __int128 v253; // [rsp+348h] [rbp-660h]
  __int128 v254; // [rsp+358h] [rbp-650h]
  __int64 v255; // [rsp+368h] [rbp-640h]
  _OWORD v256[3]; // [rsp+370h] [rbp-638h] BYREF
  __int128 v257; // [rsp+3A0h] [rbp-608h] BYREF
  __int128 v258; // [rsp+3B0h] [rbp-5F8h]
  __int128 v259; // [rsp+3C0h] [rbp-5E8h]
  __int128 v260; // [rsp+3D0h] [rbp-5D8h]
  __int128 v261; // [rsp+3E0h] [rbp-5C8h]
  __int128 v262; // [rsp+3F0h] [rbp-5B8h]
  __int128 v263; // [rsp+400h] [rbp-5A8h]
  __int128 v264; // [rsp+410h] [rbp-598h]
  __int128 v265; // [rsp+420h] [rbp-588h]
  __int128 v266; // [rsp+430h] [rbp-578h]
  _OWORD v267[4]; // [rsp+440h] [rbp-568h] BYREF
  __int128 v268; // [rsp+480h] [rbp-528h]
  __int128 v269; // [rsp+490h] [rbp-518h]
  __int128 v270; // [rsp+4A0h] [rbp-508h]
  __int128 v271; // [rsp+4B0h] [rbp-4F8h]
  __int128 v272; // [rsp+4C0h] [rbp-4E8h]
  __int128 v273; // [rsp+4D0h] [rbp-4D8h]
  __int128 v274; // [rsp+4E0h] [rbp-4C8h]
  __int128 v275; // [rsp+4F0h] [rbp-4B8h]
  __int64 v276; // [rsp+500h] [rbp-4A8h]
  _OWORD v277[9]; // [rsp+510h] [rbp-498h] BYREF
  _QWORD v278[34]; // [rsp+5A0h] [rbp-408h] BYREF
  _BYTE v279[432]; // [rsp+6B0h] [rbp-2F8h] BYREF
  _QWORD v280[32]; // [rsp+860h] [rbp-148h] BYREF

  v5 = a4;
  v6 = (unsigned __int64)a3;
  v191 = BugCheckParameter1;
  v210[1] = a3;
  v212 = a4;
  v199 = a5;
  memset(v256, 0, sizeof(v256));
  v9 = 0LL;
  v192[0] = 0;
  Handle = 0LL;
  v195 = 0;
  memset(v278, 0, 0x108uLL);
  v197 = 0LL;
  v193 = 0;
  v214 = 0;
  v230 = 0;
  v231 = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v267[3] = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  v272 = 0LL;
  v273 = 0LL;
  v274 = 0LL;
  v275 = 0LL;
  v276 = 0LL;
  v221 = 0LL;
  v209 = 0LL;
  v249 = 0LL;
  v217 = 0LL;
  v253 = 0LL;
  v254 = 0LL;
  v255 = 0LL;
  v218 = 0LL;
  ObjectNameInformation = 0LL;
  v190 = 0;
  v196 = 0;
  Object = 0LL;
  memset(v220, 0, sizeof(v220));
  v206 = 0;
  memset(v241, 0, sizeof(v241));
  v242 = 0LL;
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  v246 = 0LL;
  memset(Src, 0, sizeof(Src));
  v235 = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v238 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v186[1] = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v203 = CurrentThread;
  if ( PreviousMode )
  {
    if ( a2 != 61 )
    {
      if ( a2 == 65 )
      {
        v12 = 7LL;
LABEL_14:
        if ( (_DWORD)v5 )
        {
          if ( (v12 & v6) != 0 )
            ExRaiseDatatypeMisalignment();
          v13 = 0x7FFFFFFF0000LL;
          if ( v6 + v5 > 0x7FFFFFFF0000LL || v6 + v5 < v6 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v13 = 0x7FFFFFFF0000LL;
        }
        if ( a5 )
        {
          v14 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
            v14 = (__int64)a5;
          *(_DWORD *)v14 = *(_DWORD *)v14;
          CurrentThread = v203;
        }
        goto LABEL_26;
      }
      if ( ((a2 - 70) & 0xFFFFFFFB) != 0 )
      {
        if ( a2 == 92 )
        {
          v12 = 7LL;
        }
        else if ( a2 == 94 )
        {
          v12 = 7LL;
        }
        else
        {
          v12 = 3LL;
          if ( a2 == 87 )
            v12 = 0LL;
        }
        goto LABEL_14;
      }
    }
    v12 = 0LL;
    goto LABEL_14;
  }
  v13 = 0x7FFFFFFF0000LL;
LABEL_26:
  switch ( a2 )
  {
    case 0:
      v186[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v25 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        v197 = (PVOID)64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
        v192[0] = 64;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v25 = 0LL;
        ObjectNameInformation = 0LL;
        v197 = (PVOID)48;
        v192[0] = 48;
      }
      v194 = v6;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v26 = result;
      i = result;
      if ( result < 0 )
        return result;
      v27 = (char *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 501);
      *(_QWORD *)(v6 + 8) = *((_QWORD *)v27 + 170);
      if ( (v27[992] & 1) != 0 )
        VslGetSecurePebAddress(v27);
      if ( v26 < 0 )
        goto LABEL_65;
      v194 = 0LL;
      v210[0] = v27 + 632;
      if ( (*((_DWORD *)v27 + 158) & 0x1000) != 0 && v27 != (char *)v203->Process )
        goto LABEL_74;
      LODWORD(v278[0]) = 2097153;
      memset((char *)v278 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)v27, (__int64)v278, &v193, 0LL, &v190);
      if ( v27 == (char *)v203->Process )
      {
        UserAffinityPrimaryGroup = v203->UserAffinityPrimaryGroup;
        v29 = v193;
        if ( !_bittest64(&v29, UserAffinityPrimaryGroup) )
          goto LABEL_74;
      }
      else
      {
        UserAffinityPrimaryGroup = v190;
      }
      if ( UserAffinityPrimaryGroup != 32 )
        v194 = v278[UserAffinityPrimaryGroup + 1];
LABEL_74:
      if ( v25 )
        PsQueryProcessAttributes((__int64)v27, (__int64)v186, 0LL);
      *(_QWORD *)(v6 + 16) = v194;
      *(_DWORD *)(v6 + 24) = v27[640];
      *(_QWORD *)(v6 + 32) = *((_QWORD *)v27 + 136);
      *(_QWORD *)(v6 + 40) = *((_QWORD *)v27 + 168);
      if ( v25 )
      {
        *(_DWORD *)(v25 + 56) = 0;
        if ( (v27[2170] & 7) != 0 )
        {
          *(_DWORD *)(v25 + 56) = 1;
          v30 = 3;
        }
        else
        {
          v30 = 2;
        }
        if ( *((_QWORD *)v27 + 176) )
        {
          v31 = *((_WORD *)v27 + 1206);
          if ( v31 == 332 || v31 == 452 )
            *(_DWORD *)(v25 + 56) = v30;
        }
        v32 = v27 + 1124;
        if ( (*((_DWORD *)v27 + 281) & 0x40000008) != 0 )
          *(_DWORD *)(v25 + 56) |= 4u;
        v27 = (char *)Object;
        v33 = *(_DWORD *)(v25 + 56) ^ ((unsigned __int8)*(_DWORD *)(v25 + 56) ^ (unsigned __int8)(*((_DWORD *)Object
                                                                                                  + 280) >> 4)) & 8;
        *(_DWORD *)(v25 + 56) = v33;
        if ( *((_DWORD *)v27 + 222) + ((*(_DWORD *)v210[0] >> 3) & 1) )
        {
          v33 |= 0x10u;
          *(_DWORD *)(v25 + 56) = v33;
        }
        v34 = v33 ^ ((unsigned __int8)v33 ^ (unsigned __int8)(*v32 >> 15)) & 0x20;
        *(_DWORD *)(v25 + 56) = v34;
        if ( v186[0] )
        {
          v34 |= 0x40u;
          *(_DWORD *)(v25 + 56) = v34;
        }
        if ( (v27[992] & 1) != 0 )
        {
          v34 |= 0x80u;
          *(_DWORD *)(v25 + 56) = v34;
        }
        if ( *((_QWORD *)v27 + 280) )
          *(_DWORD *)(v25 + 56) = v34 | 0x100;
        v26 = i;
      }
      if ( a5 )
        *a5 = (unsigned int)v197;
LABEL_65:
      ObfDereferenceObjectWithTag(v27, 0x79517350u);
      return v26;
    case 1:
      LOBYTE(HandleInformation) = PreviousMode;
      return PspQueryQuotaLimits(BugCheckParameter1, 0x7FFFFFFF0000LL, (void *)v6, v5, a5);
    case 2:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess(Object, v241);
        v231 = __PAIR128__(v243, *((unsigned __int64 *)&v242 + 1));
        v232 = __PAIR128__(v244, *((unsigned __int64 *)&v243 + 1));
        v233 = __PAIR128__(v245, *((unsigned __int64 *)&v244 + 1));
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v231;
        *(_OWORD *)(v6 + 16) = v232;
        *(_OWORD *)(v6 + 32) = v233;
        if ( a5 )
          *a5 = 48;
        return DeviceMapInformation;
      }
      return result;
    case 3:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        memset((char *)&Src[1] + 4, 0, 20);
        *(_QWORD *)&v238 = 0LL;
        Src[0] = *((_OWORD *)Object + 73);
        LODWORD(Src[1]) = *((_DWORD *)Object + 417);
        v37 = Object;
        KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v256, v36);
        i = MmQueryWorkingSetInformation((_QWORD *)&Src[1] + 1, &Src[2], &v238, &v218, &v217, &v214);
        KiUnstackDetachProcess((__int64)v256, 0LL);
        *(_QWORD *)&v235 = v37[143];
        *((_QWORD *)&Src[2] + 1) = *((_QWORD *)Object + 145);
        *(_QWORD *)&v236 = *((_QWORD *)Object + 142);
        *((_QWORD *)&v235 + 1) = *((_QWORD *)Object + 144);
        *((_QWORD *)&v236 + 1) = *((_QWORD *)Object + 201) << 12;
        *(_QWORD *)&v237 = *((_QWORD *)Object + 202) << 12;
        *((_QWORD *)&v238 + 1) = *((_QWORD *)Object + 293) << 12;
        *((_QWORD *)&v237 + 1) = *((_QWORD *)&v236 + 1);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = i;
        if ( i >= 0 )
        {
          memmove((void *)v6, Src, v5);
          if ( a5 )
            *a5 = v5;
          return 0;
        }
      }
      return result;
    case 4:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v38 = (struct _EX_RUNDOWN_REF *)Object;
        v39 = PsQueryRuntimeProcess((__int64)Object, &v206);
        v40 = (unsigned int)KeMaximumIncrement;
        *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)v39;
        *(_QWORD *)(v6 + 24) = v40 * v206;
        *(struct _EX_RUNDOWN_REF *)v6 = v38[141];
        *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v38[264];
        if ( a5 )
          *a5 = 32;
        goto LABEL_359;
      }
      return result;
    case 7:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 175) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Handle;
        if ( a5 )
          *a5 = 8;
        return 0;
      }
      return result;
    case 10:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1040,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_153;
      }
      return result;
    case 12:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v35 = *((_DWORD *)Object + 382);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v35;
        if ( a5 )
          *a5 = 4;
        return 0;
      }
      return result;
    case 14:
      return PspQueryPooledQuotaLimits(BugCheckParameter1, PreviousMode);
    case 15:
    case 42:
      return PspQueryWorkingSetWatch(BugCheckParameter1, (__int64)a5, PreviousMode);
    case 18:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        HIBYTE(v196) = *((_BYTE *)Object + 1463);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v196;
        if ( a5 )
          *a5 = 2;
        return 0;
      }
      return result;
    case 19:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               1024,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v46 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v46;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 20:
      LODWORD(P) = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = (_DWORD)P;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 21:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v38 = (struct _EX_RUNDOWN_REF *)Object;
      if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      LODWORD(v278[0]) = 2097153;
      memset((char *)v278 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)Object, (__int64)v278, &v193, 0LL, &v190);
      v87 = v278[v190 + 1];
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v190;
      *(_QWORD *)v6 = v87;
      if ( a5 )
        *a5 = v5;
      goto LABEL_359;
    case 22:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v47 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v47;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 23:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v198 = *(_DWORD *)(v6 + 40);
        v48 = v198;
        if ( (v198 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v48 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, v6, v48);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && a5 )
        *a5 = v5;
      return DeviceMapInformation;
    case 24:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
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
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v50 = (unsigned __int64 *)*((_QWORD *)Object + 176);
      if ( v50 )
        v9 = *v50;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v9;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 27:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v16 = &v249;
      if ( (unsigned int)v5 >= 0x10 )
        v16 = (__int128 *)v6;
      v17 = (void *)(v6 + 16);
      v18 = 0LL;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v18 = v17;
        LODWORD(v9) = v5 - 16;
      }
      v192[0] = v9;
      DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, v16, v18, v192);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v18 )
        DeviceMapInformation = -1073741820;
      if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *a5 = v192[0] + 16;
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
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v51 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v51;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 30:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, PreviousMode, &Handle);
      v43 = Handle;
      if ( DeviceMapInformation < 0 )
        v43 = 0LL;
      Handle = v43;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( a5 )
        *a5 = 8;
      return DeviceMapInformation;
    case 31:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( a5 )
        *a5 = 4;
      goto LABEL_154;
    case 32:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( ExIsRestrictedCaller(PreviousMode) )
        return -1073741790;
      v194 = (unsigned int)(v5 - 16) / 0xA0uLL;
      v52 = v6 + 16;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v53 = result;
      if ( result >= 0 )
      {
        v54 = (struct _EX_RUNDOWN_REF *)Object;
        v55 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        v56 = v55;
        v218 = v55;
        if ( v55 )
        {
          v57 = ExReferenceHandleDebugInfo(v55);
          v58 = v57;
          v217 = v57;
          if ( v57 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v59 = (unsigned int)(*(_DWORD *)(v57 + 72) % *(_DWORD *)(v57 + 4));
            v207 = v59;
            while ( 1 )
            {
              v213 = v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v58 + 4) )
                break;
              v60 = (_OWORD *)(v58 + 160 * v59);
              v257 = v60[5];
              v258 = v60[6];
              v259 = v60[7];
              v260 = v60[8];
              v261 = v60[9];
              v262 = v60[10];
              v263 = v60[11];
              v264 = v60[12];
              v265 = v60[13];
              v266 = v60[14];
              v61 = v258;
              if ( *(_QWORD *)v6 == (_QWORD)v258 || !*(_QWORD *)v6 )
              {
                v62 = DWORD2(v258);
                if ( DWORD2(v258) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)v194 )
                  {
                    v194 = (unsigned int)(v194 - 1);
                    v228 = v194;
                    *(_QWORD *)v52 = v61;
                    *(_OWORD *)(v52 + 8) = v257;
                    *(_DWORD *)(v52 + 24) = v62;
                    *(_OWORD *)(v52 + 32) = v259;
                    *(_OWORD *)(v52 + 48) = v260;
                    *(_OWORD *)(v52 + 64) = v261;
                    *(_OWORD *)(v52 + 80) = v262;
                    *(_OWORD *)(v52 + 96) = v263;
                    *(_OWORD *)(v52 + 112) = v264;
                    *(_OWORD *)(v52 + 128) = v265;
                    *(_OWORD *)(v52 + 144) = v266;
                    v52 += 160LL;
                    v247 = v52;
                  }
                  else
                  {
                    v53 = -1073741820;
                    i = -1073741820;
                  }
                }
              }
              if ( !(_DWORD)v59 )
                LODWORD(v59) = *(_DWORD *)(v58 + 4);
              v59 = (unsigned int)(v59 - 1);
              v207 = v59;
              LODWORD(v9) = v9 + 1;
            }
            if ( a5 )
              *a5 = v52 - v6;
            ExDereferenceHandleDebugInfo(v56, v58);
            v63 = Object;
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
            ObfDereferenceObjectWithTag(v63, 0x79517350u);
            return v53;
          }
          else
          {
            ExReleaseRundownProtection(v54 + 139);
            ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return -1073741811;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v54, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case 33:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) >> 27) & 7;
      if ( a5 )
        *a5 = 4;
      goto LABEL_154;
    case 34:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        Process = Object;
      }
      ExecuteOptions = KeGetExecuteOptions((__int64)Process, &v195);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v65, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v195;
        if ( a5 )
          *a5 = 4;
      }
      return ExecuteOptions;
    case 36:
      v194 = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        v199 = p_LockNV;
        Object = p_LockNV;
      }
      else
      {
        v219 = 0LL;
        result = ObReferenceObjectByHandle(
                   (HANDLE)BugCheckParameter1,
                   0x20u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   &v219,
                   0LL);
        p_LockNV = v219;
        v199 = v219;
        Object = v219;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        v67 = p_LockNV[330];
        if ( v67 )
          break;
        KeQuerySystemTimePrecise(&v194);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v70 = ExGenRandom(1);
        v71 = __rdtsc();
        _InterlockedCompareExchange(
          v199 + 330,
          v194 ^ v71 ^ v70 ^ CurrentPrcb->MmPageFaultCount ^ HIDWORD(v194) ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        p_LockNV = Object;
        v199 = Object;
      }
      *(_DWORD *)v6 = v67;
      if ( a5 )
        *a5 = 4;
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObject(p_LockNV);
      return v9;
    case 37:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v72 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == v203->Process )
      {
        Ptr = (void *)*((_QWORD *)Object + 163);
        if ( !Ptr )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
      {
        Ptr = v72[163].Ptr;
        if ( Ptr )
          ObfReferenceObject(v72[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection(v72 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Ptr = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v72, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation((__int64)Ptr, 1, v6);
        if ( (_DWORD)v9 )
          ObfDereferenceObject(Ptr);
        if ( DeviceMapInformation >= 0 && a5 )
          *a5 = 64;
      }
      return DeviceMapInformation;
    case 38:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v74 = result;
      if ( result < 0 )
        return result;
      v75 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess((__int64)Object, (__int64)v220);
      *(_QWORD *)(v6 + 8) = *(_QWORD *)v220;
      if ( a5 )
        *a5 = 16;
      goto LABEL_658;
    case 39:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 280) >> 12) & 7;
      if ( a5 )
        *a5 = 4;
      goto LABEL_154;
    case 43:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v20 = (struct _EX_RUNDOWN_REF *)Object;
      v21 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 180);
      v197 = v21;
      if ( v21 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        {
          ObfReferenceObject(v21);
          ExReleaseRundownProtection(v20 + 139);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&v197);
        v21 = (struct _FILE_OBJECT *)v197;
      }
      ObfDereferenceObjectWithTag(v20, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v22 = IoQueryFileDosDeviceName(v21, &ObjectNameInformation);
      ObfDereferenceObject(v21);
      if ( v22 >= 0 )
      {
        v23 = ObjectNameInformation;
        v24 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v24 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *(_WORD *)(v6 + 2) = v23->Name.MaximumLength;
          if ( v23->Name.MaximumLength )
          {
            v9 = v6 + 16;
            memmove((void *)(v6 + 16), v23->Name.Buffer, v23->Name.MaximumLength);
          }
          *(_QWORD *)(v6 + 8) = v9;
        }
        else
        {
          v22 = -1073741820;
          i = -1073741820;
        }
        if ( a5 )
          *a5 = v24;
        ExFreePoolWithTag(v23, 0);
      }
      return v22;
    case 44:
      P = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v79 = *(_QWORD *)v6;
      v248 = *(_QWORD *)v6;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                         v79,
                         1048608,
                         (__int64)IoFileObjectType,
                         PreviousMode,
                         0x79517350u,
                         &v197,
                         0LL,
                         0LL);
      v42 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_154;
      ProcessHandleInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v81 = v197;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_369;
      v82 = *((_QWORD *)v197 + 5);
      v83 = P;
      v84 = *((_QWORD *)P + 5);
      v85 = 0;
      if ( v82 != v84 )
        v85 = -1073741823;
      ObfDereferenceObject(v197);
      ObfDereferenceObject(v83);
      result = v85;
      if ( v82 == v84 && a5 )
        *a5 = 0;
      return result;
    case 45:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v198 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v86 = (v198 >> 19) & 1 | 2;
      if ( (v198 & 0x40000) == 0 )
        v86 = (v198 >> 19) & 1;
      *(_DWORD *)v6 = v86;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 46:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v198 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v198 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 47:
      if ( !a5 || (v5 & 1) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        v193 = GroupMaskProcess;
        v90 = v192[0];
        do
        {
          _BitScanForward(&v91, GroupMaskProcess);
          v90 += 2;
          v192[0] = v90;
          if ( v90 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v91;
            v6 += 2LL;
            v250 = v6;
          }
          _bittestandreset((signed __int32 *)&v193, v91);
          GroupMaskProcess = v193;
        }
        while ( v193 );
        *a5 = v90;
        v92 = (unsigned int)v5 < v90 ? 0xC0000023 : 0;
        i = v92;
        ObfDereferenceObjectWithTag(v89, 0x79517350u);
        return v92;
      }
      return result;
    case 49:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v93 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v93;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 50:
      memset(v267, 0, 48);
      v202 = 0;
      v200 = 0LL;
      v229 = 0LL;
      if ( PreviousMode != 1 )
        return -1073741823;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result >= 0 )
      {
        v94 = Object;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        {
          KiStackAttachProcess((_KPROCESS *)v94, 0LL, (__int64)v267, v95);
          v96 = 0LL;
          v97 = (__int64 *)*((_QWORD *)v94 + 176);
          if ( v97 )
            v96 = *v97;
          if ( v96 )
          {
            *(_QWORD *)&v211.Name.Length = *(unsigned int *)(v96 + 16);
            v202 = *(_DWORD *)(*(_QWORD *)&v211.Name.Length + 104LL);
            v98 = *(void **)(*(_QWORD *)&v211.Name.Length + 112LL);
            P = v98;
            *(_DWORD *)&v200.Name.Length = (_DWORD)v98;
            v200.Name.Buffer = (wchar_t *)HIDWORD(v98);
          }
          else
          {
            P = *(PVOID *)(*((_QWORD *)v94 + 170) + 32LL);
            v99 = (__int64)P + 164;
            if ( (unsigned __int64)P + 164 >= 0x7FFFFFFF0000LL )
              v99 = 0x7FFFFFFF0000LL;
            v202 = *(_DWORD *)v99;
            v211 = 0LL;
            v100 = (__int64)P + 176;
            if ( (unsigned __int64)P + 176 >= 0x7FFFFFFF0000LL )
              v100 = 0x7FFFFFFF0000LL;
            *(_DWORD *)&v211.Name.Length = *(_DWORD *)v100;
            v211.Name.Buffer = *(wchar_t **)(v100 + 8);
            v200 = v211;
            LOWORD(v98) = v211.Name.Length;
          }
          DeviceMapInformation = i;
          KiUnstackDetachProcess((__int64)v267, 0LL);
          if ( DeviceMapInformation < 0 )
            goto LABEL_357;
          v101 = (unsigned __int16)v98 + 6;
          if ( a5 )
            *a5 = v101;
          if ( (unsigned int)v5 >= v101 )
          {
            *(_DWORD *)v6 = v202;
            *(_WORD *)(v6 + 4) = (_WORD)v98;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v98 )
          {
            v38 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MiCopyVirtualMemory((ULONG_PTR)Object, v200.Name.Length, 1, (__int64)&v229, 0);
          }
          else
          {
LABEL_357:
            v38 = (struct _EX_RUNDOWN_REF *)Object;
          }
          ExReleaseRundownProtection(v38 + 139);
LABEL_359:
          ObfDereferenceObjectWithTag(v38, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_338:
          ObfDereferenceObjectWithTag(v94, 0x79517350u);
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
      P = 0LL;
      result = ObReferenceObjectByHandle(
                 (HANDLE)BugCheckParameter1,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 &P,
                 0LL);
      if ( result >= 0 )
      {
        v102 = (__int64)v203;
        --v203->KernelApcDisable;
        v103 = (struct _EX_RUNDOWN_REF *)P;
        v104 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)P);
        if ( v104 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v104, v6, (unsigned int)v5, a5);
          ExReleaseRundownProtection(v103 + 139);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KiLeaveCriticalRegionUnsafe(v102);
        v81 = v103;
LABEL_369:
        ObfDereferenceObject(v81);
        return ProcessHandleInformation;
      }
      return result;
    case 52:
      v208 = 0;
      v187 = 0;
      v188 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v105 = *(_DWORD *)v6;
      v215 = *(_DWORD *)v6;
      if ( BugCheckParameter1 == -1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v105 = v215;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case 54:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v143 = result;
      i = result;
      if ( result < 0 )
        return result;
      v94 = Object;
      v144 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v144 )
        goto LABEL_338;
      LOBYTE(v9) = (*(_BYTE *)(v144 + 44) & 2) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_526;
    case 55:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 619) & 0x7FFFFFFF;
      *(_DWORD *)(v6 + 4) = v42[627] & 0x7FFFFFFF;
      goto LABEL_154;
    case 58:
      *(_QWORD *)&v211.Name.Length = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v211, (struct _MDL **)&P);
      if ( result >= 0 )
      {
        v145 = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1088,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
        if ( v145 >= 0 )
        {
          v200 = 0LL;
          v146 = (struct _EX_RUNDOWN_REF *)Object;
          v147 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v147 )
          {
            *(_QWORD *)&v200.Name.Length = *(_QWORD *)&v211.Name.Length;
            v200.Name.Buffer = (wchar_t *)((unsigned int)v5 >> 2);
            ExEnumHandleTable(
              v147,
              (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))PspHandleTableWalker,
              (__int64)&v200,
              0LL);
            ExReleaseRundownProtection(v146 + 139);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v146, 0x79517350u);
          if ( a5 )
            *a5 = 4 * HIDWORD(v200.Name.Buffer);
          ExUnlockUserBuffer((struct _MDL *)P);
          return v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v145;
        }
      }
      return result;
    case 59:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 158) >> 5) & 1;
      goto LABEL_154;
    case 60:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v148 = PreviousMode;
      v149 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((struct _EX_RUNDOWN_REF *)Object, v6, v5, v148, a5);
      goto LABEL_543;
    case 61:
      v22 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              4096,
              (__int64)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL,
              0LL);
      if ( v22 < 0 )
        return v22;
      if ( (_DWORD)v5 )
      {
        v151 = Object;
        *(_BYTE *)v6 = *((_BYTE *)Object + 2170);
        if ( a5 )
          *a5 = 1;
        v22 = 0;
      }
      else
      {
        v22 = -1073741820;
        v151 = Object;
      }
      if ( !v151 )
        return v22;
      ObfDereferenceObjectWithTag(v151, 0x79517350u);
      return v22;
    case 64:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v152 = PreviousMode;
      v149 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((__int64)Object, (char *)v6, (unsigned int)v5, v152, a5);
LABEL_543:
      DeviceMapInformation = ProcessCommandLine;
      if ( v149 )
        goto LABEL_544;
      return DeviceMapInformation;
    case 65:
      LODWORD(P) = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v200 = *(struct _OBJECT_NAME_INFORMATION *)v6;
        v201 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v200.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v200.Name.MaximumLength + 1) >= 8u || v200.Name.Buffer )
          {
            v22 = -1073741811;
          }
          else
          {
            v22 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    4096,
                    (__int64)PsProcessType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v22 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &P, &v200.Name.Buffer, &v201, (_QWORD *)&v201 + 1);
              *(_DWORD *)(&v200.Name.MaximumLength + 1) ^= ((unsigned __int8)P ^ *((_BYTE *)&v200.Name.MaximumLength + 2)) & 1;
              v200.Name.Buffer = (wchar_t *)((__int64)v200.Name.Buffer << 12);
              *(_QWORD *)&v201 = (_QWORD)v201 << 12;
              *((_QWORD *)&v201 + 1) <<= 12;
              *(struct _OBJECT_NAME_INFORMATION *)v6 = v200;
              *(_OWORD *)(v6 + 16) = v201;
              v22 = 0;
            }
          }
        }
        else
        {
          v22 = -1073741735;
        }
      }
      else
      {
        v22 = -1073741820;
      }
      if ( !Object )
        return v22;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v22;
    case 66:
    case 67:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
        return -1073741820;
      v22 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              4096,
              (__int64)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL,
              0LL);
      i = v22;
      if ( v22 >= 0 )
      {
        LOBYTE(v9) = a2 == 67;
        v155 = 8 * KeQueryCpuSetsProcess((__int64)Object, v280, v154, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v216 = v155;
        if ( a5 )
          *a5 = v155;
        if ( v155 >= (unsigned int)v5 )
          v155 = v5;
        v216 = v155;
        memmove((void *)v6, v280, v155);
      }
      return v22;
    case 69:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)&v220[32] = 0LL;
      v221 = 0LL;
      if ( *((_QWORD *)Object + 162) )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v256, v76);
        ZwQueryInformationJobObject(0LL, 28LL);
        ObjectType = 0LL;
        ZwQueryInformationJobObject(0LL, 9LL);
        KiUnstackDetachProcess((__int64)v256, 0LL);
        *(_OWORD *)&v220[16] = v253;
        *(_QWORD *)&v220[8] = v254;
        v77 = v221;
        if ( (v268 & 0x200000) != 0 )
          v77 = v276;
        v221 = v77;
        v78 = *(_QWORD *)&v220[32];
        if ( (v268 & 0x200) != 0 )
          v78 = *((_QWORD *)&v274 + 1);
        *(_QWORD *)&v220[32] = v78;
        *(__m256i *)v6 = *(__m256i *)&v220[8];
        *(_QWORD *)(v6 + 32) = v221;
        if ( a5 )
          *a5 = 40;
      }
      else
      {
        LODWORD(v9) = -1073741394;
      }
      goto LABEL_289;
    case 70:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_BYTE *)v6 = *((int *)Object + 280) < 0;
      goto LABEL_154;
    case 71:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v143 = result;
      i = result;
      if ( result < 0 )
        return result;
      v94 = Object;
      v153 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v153 )
        goto LABEL_338;
      LOBYTE(v9) = (*(_BYTE *)(v153 + 44) & 0x10) != 0;
      *(_DWORD *)v6 = v9;
LABEL_526:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v94 + 139);
      ObfDereferenceObjectWithTag(v94, 0x79517350u);
      return v143;
    case 72:
      return PsIumGetOnDemandDebugChallenge(BugCheckParameter1, v6, (unsigned int)v5, a5);
    case 73:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = p_Lock;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        p_Lock = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy((__int64)p_Lock);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v158 = NoChildProcessRestrictedPolicy - 1;
      if ( !v158 )
        goto LABEL_595;
      v159 = v158 - 1;
      if ( v159 )
      {
        if ( v159 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_595:
        *(_BYTE *)v6 = 1;
      }
      if ( a5 )
        *a5 = 3;
      if ( BugCheckParameter1 == -1LL )
        return v9;
LABEL_599:
      ObfDereferenceObjectWithTag(p_Lock, 0x79517350u);
      return 0;
    case 74:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 543) & 0x200) != 0;
      goto LABEL_154;
    case 75:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      if ( *((_QWORD *)Object + 280) )
        LODWORD(v9) = qword_140C1BE50;
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      goto LABEL_154;
    case 76:
      memset(v279, 0, sizeof(v279));
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v74 = result;
      i = result;
      if ( result < 0 )
        return result;
      v75 = Object;
      PsQueryProcessEnergyValues(Object, v279);
      v160 = 432LL;
      if ( (unsigned int)v5 <= 0x1B0 )
        v160 = (unsigned int)v5;
      memmove((void *)v6, v279, v160);
      if ( a5 )
        *a5 = 432;
      goto LABEL_658;
    case 77:
      v251 = 0LL;
      v252 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v162 = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
      if ( v162 >= 0 )
      {
        v163 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v164 = Object;
        v162 = v163(Object, &v251);
        i = v162;
        if ( v162 >= 0 )
        {
          *(_QWORD *)v6 = v251;
          *(_DWORD *)(v6 + 8) = v252;
          if ( a5 )
            *a5 = 12;
          v162 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v164, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v162;
    case 79:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        v165 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = v165;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v165 = Object;
      }
      *(_DWORD *)v6 = 0;
      v166 = v165[628];
      v167 = 0;
      if ( (v166 & 0x4000) != 0 )
      {
        v167 = 1;
        *(_DWORD *)v6 = 1;
        v166 = v165[628];
      }
      if ( (v166 & 0x8000) != 0 )
        *(_DWORD *)v6 = v167 | 2;
      *(_DWORD *)(v6 + 4) = v165[602];
      if ( a5 )
        *a5 = 8;
      if ( BugCheckParameter1 == -1LL )
        return v9;
      ObfDereferenceObjectWithTag(v165, 0x79517350u);
      return 0;
    case 81:
      if ( PreviousMode )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 0,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v149 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel((__int64)v203, (__int64)Object, v6);
        if ( DeviceMapInformation >= 0 && a5 )
        {
          *a5 = 48;
          ObfDereferenceObjectWithTag(v149, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_544:
          ObfDereferenceObjectWithTag(v149, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case 82:
      memset(v277, 0, sizeof(v277));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      p_Lock = Object;
      PoQueryProcessEnergyTrackingState(Object, v277);
      if ( (unsigned int)v5 >= 0x90 )
        LODWORD(v5) = 144;
      memmove((void *)v6, v277, (unsigned int)v5);
      if ( a5 )
        *a5 = v5;
      i = 0;
      goto LABEL_599;
    case 84:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1048,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v75 = Object;
      v168 = *((_QWORD *)Object + 124);
      if ( v168 )
      {
        *(_QWORD *)&v257 = 0LL;
        v258 = 0LL;
        v259 = 0LL;
        v260 = 0LL;
        v261 = 0LL;
        v262 = 0LL;
        *(_QWORD *)&v263 = 0LL;
        *((_QWORD *)&v257 + 1) = v168;
        v74 = VslpEnterIumSecureMode(2u, 61, 0, (__int64)&v257);
LABEL_658:
        ObfDereferenceObjectWithTag(v75, 0x79517350u);
        return v74;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case 85:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, a5);
LABEL_153:
      ExecuteOptions = ProcessTelemetryCoverage;
      v42 = Object;
      goto LABEL_154;
    case 87:
    case 96:
      if ( a2 == 87 && !(_DWORD)v5 || a2 == 96 && (unsigned int)v5 < 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v169 = result;
      if ( result >= 0 )
      {
        v170 = Object;
        *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 280)) & 3;
        if ( a2 == 96 )
          *(_DWORD *)v6 |= (v170[543] & 0x180000 | ((v170[543] & 0x10000000 | (v170[543] >> 2) & 0x8000000u) >> 6)) >> 17;
        ObfDereferenceObjectWithTag(v170, 0x79517350u);
        return v169;
      }
      return result;
    case 88:
      v239 = 0LL;
      v240 = 0LL;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      v223 = 0LL;
      v224 = 0LL;
      v225 = 0LL;
      v227 = 0LL;
      v172 = (__int64)v203;
      --v203->KernelApcDisable;
      v173 = Object;
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
      v174 = v173[292] >> 61;
      if ( (unsigned __int64)(v174 - 3) <= 1
        && (v225 = v173[292] & 0x1FFFFFFFFFFFFFFFLL, v223 = v173[291], v224 = v223 - v173[288], v174 == 3) )
      {
        v175 = 512;
      }
      else
      {
        v175 = v227;
      }
      LODWORD(v227) = v175 & 0xFFFFFE00 | *((_BYTE *)v173 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v173 + 2171) & 0x38 | (32 * (*((_DWORD *)v173 + 543) & 4))));
      if ( _InterlockedCompareExchange64(v173 + 135, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v173 + 135);
      KeAbPostRelease((ULONG_PTR)(v173 + 135));
      KeLeaveCriticalRegionThread(v172);
      p_Lock = Object;
      PsGetProcessDeepFreezeStats((signed __int64 *)Object, &v239);
      v222 = v239;
      v226 = v240;
      if ( !v224 )
        v224 = v239 - p_Lock[288];
      if ( !v225 )
        v225 = *((_QWORD *)&v239 + 1) - p_Lock[289] - v240;
      if ( (unsigned int)v5 >= 0x38 )
        LODWORD(v5) = 56;
      memmove((void *)v6, &v222, (unsigned int)v5);
      if ( a5 )
        *a5 = v5;
      i = 0;
      goto LABEL_599;
    case 89:
      v210[0] = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( v6 < 0x7FFFFFFF0000LL )
          v13 = v6;
        *(_QWORD *)v13 = *(_QWORD *)v13;
      }
      v171 = (PVOID *)KeGetCurrentThread()->ApcState.Process;
      Object = v171;
      if ( BugCheckParameter1 != -1LL || v171 != (PVOID *)CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer(v171[163], 0, 0LL, 5u, MmSectionObjectType, PreviousMode, v210);
      i = result;
      if ( result >= 0 )
      {
        *(HANDLE *)v6 = v210[0];
        if ( a5 )
          *a5 = 8;
      }
      return result;
    case 92:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( a5 )
        *a5 = 8;
LABEL_154:
      ObfDereferenceObjectWithTag(v42, 0x79517350u);
      return ExecuteOptions;
    case 94:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
      {
        _InterlockedOr(v181, 0);
        *(_QWORD *)v6 = *((_QWORD *)Object + 316);
        if ( a5 )
          *a5 = 8;
        i = 0;
LABEL_289:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v9;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case 97:
      if ( (_DWORD)v5 == 8 )
      {
        if ( BugCheckParameter1 == -1LL )
        {
          v176 = KeGetCurrentThread()->ApcState.Process;
          Object = v176;
          i = 0;
          v177 = v176[1].Affinity.StaticBitmap[24];
          if ( v177 )
          {
            v178 = 0LL;
            v179 = (__int64 *)v176[1].Affinity.StaticBitmap[30];
            if ( v179 )
              v178 = *v179;
            if ( v178 )
            {
              if ( (*(_DWORD *)(v178 + 1140) & 1) != 0 )
                LODWORD(v209) = 1;
            }
            else
            {
              v180 = v209;
              if ( (*(_BYTE *)(v177 + 1984) & 1) != 0 )
                v180 = 1;
              LODWORD(v209) = v180;
            }
          }
          *(_QWORD *)v6 = v209;
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
      goto LABEL_519;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v113 = Object;
      v114 = *((_DWORD *)Object + 628);
      if ( (v114 & 0x100) != 0 )
      {
        v115 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v114 & 0x800) == 0 )
          goto LABEL_409;
        v115 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v115;
LABEL_409:
      v116 = v113[628];
      if ( (v116 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v116 = v113[628];
      }
      if ( (v116 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_519;
    case 3:
      i = 0;
      v108 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v108 )
      {
        ExQueryHandleExceptionsPermanency(v108, &v187, &v188);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v187 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v188 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_519;
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
          goto LABEL_397;
        v110 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v110;
LABEL_397:
      if ( !(unsigned int)Feature_Servicing_FsctlProcessMitigation__private_IsEnabled() )
        goto LABEL_519;
      v111 = *((_DWORD *)Object + 732);
      if ( (v111 & 2) != 0 )
      {
        v112 = *(_DWORD *)(v6 + 4) | 4;
      }
      else
      {
        if ( (v111 & 4) == 0 )
          goto LABEL_519;
        v112 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v112;
      goto LABEL_519;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_519;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v117 = Object;
      v118 = *((_DWORD *)Object + 628);
      if ( (v118 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v118 = v117[628];
      }
      if ( (v118 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v118 = v117[628];
      }
      if ( (v118 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      v119 = Object;
      v120 = *((_DWORD *)Object + 629);
      if ( (v120 & 0x2000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v120 = v119[629];
      }
      if ( (v120 & 0x4000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      goto LABEL_519;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy((__int64)Object, &v208);
      *(_DWORD *)(v6 + 4) = v208;
      goto LABEL_519;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v121 = *((_DWORD *)Object + 628);
      if ( (v121 & 0x10000) != 0 )
      {
        v122 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v121 & 0x20000) == 0 )
          goto LABEL_519;
        v122 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v122;
      goto LABEL_519;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v123 = Object;
      v124 = *((_DWORD *)Object + 628);
      if ( (v124 & 0x80000) != 0 )
      {
        v125 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v124 & 0x100000) == 0 )
          goto LABEL_440;
        v125 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v125;
LABEL_440:
      v126 = v123[628];
      if ( (v126 & 0x200000) != 0 )
      {
        v127 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v126 & 0x400000) == 0 )
          goto LABEL_445;
        v127 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v127;
LABEL_445:
      if ( (v123[628] & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_519;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_519;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v128 = Object;
      v129 = *((_DWORD *)Object + 629);
      if ( (v129 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v129 = v128[629];
      }
      if ( (v129 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v129 = v128[629];
      }
      if ( (v129 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v129 = v128[629];
      }
      if ( (v129 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v129 = v128[629];
      }
      if ( (v129 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v129 = v128[629];
      }
      if ( (v129 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v129 = v128[629];
      }
      if ( (v129 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v129 = v128[629];
      }
      if ( (v129 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v129 = v128[629];
      }
      if ( (v129 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v129 = v128[629];
      }
      if ( (v129 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v129 = v128[629];
      }
      if ( (v129 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v129 = v128[629];
      }
      if ( (v129 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_519;
    case 13:
      i = 0;
      v130 = PspGetNoChildProcessRestrictedPolicy((__int64)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v131 = v130 - 1;
      if ( !v131 )
        goto LABEL_479;
      v132 = v131 - 1;
      if ( v132 )
      {
        if ( v132 != 1 )
          goto LABEL_519;
        v133 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_479:
        v133 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v133;
      goto LABEL_519;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v137 = Object;
      v138 = *((_DWORD *)Object + 628);
      if ( (v138 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v138 = v137[628];
      }
      if ( v138 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v139 = Object;
      v140 = *((_DWORD *)Object + 629);
      if ( (v140 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v140 = v139[629];
      }
      if ( (v140 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_519;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v141 = Object;
      v142 = *((_DWORD *)Object + 629);
      if ( (v142 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v142 = v141[629];
      }
      if ( (v142 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v142 = v141[629];
      }
      if ( (v142 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v142 = v141[629];
      }
      if ( (v142 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v142 = v141[629];
      }
      if ( (v142 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v142 = v141[629];
      }
      if ( (v142 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v142 = v141[629];
      }
      if ( (v142 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v142 = v141[629];
      }
      if ( (v142 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v142 = v141[629];
      }
      if ( (v142 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v142 = v141[629];
      }
      if ( v142 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_519;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v135 = RedirectionTrustPolicy - 1;
      if ( v135 )
      {
        if ( v135 != 1 )
          goto LABEL_519;
        v136 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v136 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v136;
LABEL_519:
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_519;
  }
}
