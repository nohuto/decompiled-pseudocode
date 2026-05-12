/*
 * XREFs of StorPortExtendedFunction @ 0x1C000DE00
 * Callers:
 *     <none>
 * Callees:
 *     StorpRequestTimer @ 0x1C0001960 (StorpRequestTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0007310 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     StorpAllocatePool @ 0x1C0014058 (StorpAllocatePool.c)
 *     RaidGetD3ColdInterface @ 0x1C0019704 (RaidGetD3ColdInterface.c)
 *     RaidGetStartIoPerfParams @ 0x1C001AE30 (RaidGetStartIoPerfParams.c)
 *     RaidNtStatusToStorStatus @ 0x1C001B06C (RaidNtStatusToStorStatus.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C001BF94 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002C5C4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C628 (RaidAdapterPoFxIdleComponent.c)
 *     RaidInitializeCryptoEngine @ 0x1C0030578 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOpts @ 0x1C00306D0 (RaidInitializePerfOpts.c)
 *     RaidInitializeRpmb @ 0x1C0031710 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031ED8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ @ 0x1C00323CC (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C00323F8 (WPP_SF_D.c)
 *     RaMiniportSaveFeatureList @ 0x1C00360D4 (RaMiniportSaveFeatureList.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003621C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C0036C78 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0036EC8 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C0037088 (StorAcquireSpinLockEx.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0037178 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C003736C (StorBuildScatterGatherListProxy.c)
 *     StorDelayExecution @ 0x1C00373D0 (StorDelayExecution.c)
 *     StorEtwMiniportEventProxy @ 0x1C0037520 (StorEtwMiniportEventProxy.c)
 *     StorEtwMiniportLogError @ 0x1C0037660 (StorEtwMiniportLogError.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0039334 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C00393F8 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorReset @ 0x1C00394D0 (StorReset.c)
 *     StorpAcquireMSISpinLock @ 0x1C0039668 (StorpAcquireMSISpinLock.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003970C (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C0039A2C (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C0039AA4 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C0039BD0 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C0039FFC (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003A138 (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C003A338 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C003A390 (StorpFlushDataBufferMdl.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C003A3F8 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C003A46C (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C003A530 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003A5DC (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003A84C (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C003AA20 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C003AAB4 (StorpGetDataInSgList.c)
 *     StorpGetGroupAffinity @ 0x1C003ACEC (StorpGetGroupAffinity.c)
 *     StorpGetMSIInfo @ 0x1C003AD48 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003AE30 (StorpGetOriginalMdl.c)
 *     StorpGetPfns @ 0x1C003AEB0 (StorpGetPfns.c)
 *     StorpGetRequestInfo @ 0x1C003AF50 (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C003B1B4 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003B330 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003B4BC (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C003B600 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C003BF88 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003C088 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003C1C0 (StorpReleaseMSISpinLock.c)
 *     StorpSetUnitAttributes @ 0x1C003C258 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003C2D4 (StorpUnitInitializePoFxPower.c)
 *     RaidGetD3ColdCapability @ 0x1C003DEF8 (RaidGetD3ColdCapability.c)
 *     RaidRegisterPerfStates @ 0x1C003E578 (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C00522CC (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0054728 (StorpTelemetryMiniportEvent.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        unsigned int a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        GUID *a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Timeout,
        PULONG a6,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // r14d
  __int64 v13; // r15
  unsigned int v14; // edi
  unsigned __int64 Mask; // rbx
  PDEVICE_OBJECT v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  PDEVICE_OBJECT v19; // rcx
  __int64 v20; // rdx
  struct _GROUP_AFFINITY *v21; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v22; // r9
  _QWORD *v23; // rcx
  KSPIN_LOCK *v24; // rbx
  unsigned int v25; // edi
  USHORT *v26; // rbx
  KSPIN_LOCK *v27; // rbx
  struct _GROUP_AFFINITY *v28; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  int LockArray_high; // eax
  ULONG *v31; // rbx
  NTSTATUS LogicalProcessorRelationship; // eax
  KSPIN_LOCK v33; // rcx
  KSPIN_LOCK v34; // rcx
  unsigned int v35; // edi
  unsigned int v36; // edi
  struct _GROUP_AFFINITY *v37; // rbx
  struct _GROUP_AFFINITY *v38; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v39; // rbx
  struct _GROUP_AFFINITY *v40; // rbx
  KSPIN_LOCK *v41; // rdx
  int v42; // eax
  LARGE_INTEGER *v43; // rbx
  union _LARGE_INTEGER *v44; // rcx
  int v45; // r12d
  unsigned int v46; // r13d
  __int64 v47; // r9
  char v48; // al
  unsigned __int8 CurrentIrql; // r15
  __int64 Unit; // rax
  __int64 v51; // rsi
  unsigned int v52; // r12d
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned int v55; // edi
  unsigned int v56; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v57; // rsi
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rbx
  _QWORD *v61; // rcx
  __int64 v62; // r9
  unsigned int v63; // edi
  _QWORD *v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v67; // rsi
  __int64 v68; // r8
  __int64 v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // r9
  _QWORD *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r8
  struct _GROUP_AFFINITY *v75; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v76; // r12
  PULONG v77; // r13
  _QWORD *v78; // rbx
  __int64 v79; // rax
  unsigned int v80; // eax
  _QWORD *v81; // rcx
  unsigned int v82; // eax
  char v83; // di
  _QWORD *v84; // rax
  __int64 v85; // rbx
  int v86; // ecx
  int v87; // r8d
  unsigned int v88; // edi
  PHYSICAL_ADDRESS v89; // r12
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 *v93; // rcx
  unsigned __int8 v94; // r9
  unsigned int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  KSPIN_LOCK *v98; // rdx
  struct _GROUP_AFFINITY *v99; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v100; // rsi
  __int64 v101; // rcx
  struct _GROUP_AFFINITY *v102; // rbx
  KSPIN_LOCK *v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  struct _DEVICE_OBJECT *v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  KSPIN_LOCK v109; // rcx
  KSPIN_LOCK v110; // rcx
  unsigned int v111; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v112; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v113; // rbx
  struct _GROUP_AFFINITY *v114; // rbx
  struct _GROUP_AFFINITY *v115; // r8
  KSPIN_LOCK v116; // rdx
  unsigned int v117; // eax
  __int64 v118; // rcx
  unsigned int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rcx
  int v122; // edx
  __int64 v123; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v124; // rbx
  __int64 Timer; // rax
  _BYTE *QuadPart; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v127; // rbx
  char v128; // al
  _BYTE *v129; // rbx
  struct _GROUP_AFFINITY *v130; // rbx
  bool v131; // cc
  unsigned int v132; // edi
  __int64 v133; // rcx
  unsigned int v134; // edi
  int v135; // [rsp+50h] [rbp-19h]
  int v136; // [rsp+50h] [rbp-19h]
  int v137; // [rsp+50h] [rbp-19h]
  int v138; // [rsp+50h] [rbp-19h]
  int v139; // [rsp+50h] [rbp-19h]
  int v140; // [rsp+50h] [rbp-19h]
  int v141; // [rsp+50h] [rbp-19h]
  PHYSICAL_ADDRESS v142; // [rsp+58h] [rbp-11h]
  __int128 v143; // [rsp+60h] [rbp-9h] BYREF
  KSPIN_LOCK *v145; // [rsp+E0h] [rbp+77h] BYREF
  struct _GROUP_AFFINITY *v146; // [rsp+E8h] [rbp+7Fh]

  v145 = a3;
  v146 = (struct _GROUP_AFFINITY *)a4;
  v11 = 0;
  v13 = a2;
  v14 = -1056964606;
  Mask = 0LL;
  if ( !a2 )
    return 3238002694LL;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids, a1);
    v13 = a2;
  }
  v17 = 0x1C0000000uLL;
  switch ( a1 )
  {
    case 0u:
      return StorpAllocatePool(v16, (unsigned int)v145, (unsigned int)v146, Timeout);
    case 1u:
      if ( !v145 )
      {
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v20 = 29LL;
          goto LABEL_13;
        }
        return 3238002694LL;
      }
      if ( KeGetCurrentIrql() <= 2u )
      {
        ExFreePoolWithTag(v145, 0);
        return 0LL;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          return 3238002696LL;
        }
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
        return 3238002696LL;
      }
    case 2u:
      return StorpAllocateMdl(v16, v145, (unsigned int)v146, Timeout);
    case 3u:
      return StorpFreeMdl(v16, v145);
    case 4u:
      return StorpBuildMdlForNonPagedPool(v16, v145);
    case 5u:
      return StorpGetSystemAddress(v16, v145, 0LL, v146);
    case 6u:
      if ( !v146 )
      {
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v20 = 43LL;
          goto LABEL_13;
        }
        return 3238002694LL;
      }
      if ( *((_BYTE *)v145 + 2) == 40 )
        v146->Mask = *(_QWORD *)(v145[12] + 104);
      else
        v146->Mask = *(_QWORD *)(v145[6] + 104);
      return 0LL;
    case 7u:
      return StorpCompleteServiceIrp(v13, v145);
    case 8u:
      v21 = v146;
      v22 = Timeout;
      if ( v13 )
      {
        if ( v145 )
        {
          if ( v146 )
          {
            if ( Timeout )
            {
              v23 = **(_QWORD ***)(v13 - 16);
              *v145 = v23[1];
              v21->Mask = v23[4];
              *(_QWORD *)&v22->Relationship = v23[3];
              return 0LL;
            }
            v19 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v20 = (unsigned int)((_DWORD)Timeout + 48);
              goto LABEL_13;
            }
          }
          else
          {
            v19 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v20 = (unsigned int)((_DWORD)v146 + 47);
              goto LABEL_13;
            }
          }
        }
        else
        {
          v19 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v20 = 46LL;
            goto LABEL_13;
          }
        }
      }
      else
      {
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v20 = 45LL;
LABEL_13:
          WPP_SF_(v19->AttachedDevice, v20, &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
          return 3238002694LL;
        }
      }
      return 3238002694LL;
    case 9u:
      return StorBuildScatterGatherListProxy(v13, &v145);
    case 0xAu:
      return StorpPutScatterGatherList(v13, v145, (unsigned __int8)v146);
    case 0xBu:
      return StorpAcquireMSISpinLock(v13, (unsigned int)v145, v146);
    case 0xCu:
      return StorpReleaseMSISpinLock(v13, (unsigned int)v145, (unsigned int)v146);
    case 0xDu:
      return StorpGetMSIInfo(v13, (unsigned int)v145, v146);
    case 0xEu:
      return RaidInitializePerfOpts(v13, (unsigned __int8)v145, v146);
    case 0xFu:
      return RaidGetStartIoPerfParams(v13, v145, v146);
    case 0x10u:
      return StorpLogSystemEvent(v13, v145, v146);
    case 0x11u:
      v24 = v145;
      if ( v145 )
        KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)v145);
      v25 = -1056964602;
      if ( v24 )
        return 0;
      return v25;
    case 0x12u:
      v26 = (USHORT *)v145;
      if ( !v145 )
        return 3238002694LL;
      *v26 = KeQueryActiveGroupCount();
      return 0LL;
    case 0x13u:
      return StorpGetGroupAffinity(v16, (unsigned __int16)v145, v146);
    case 0x14u:
      return StorpGetActiveNodeCount(v16, v145);
    case 0x15u:
      if ( !v146 || (unsigned int)v145 > 0xFFFF )
        return 3238002694LL;
      KeQueryNodeActiveAffinity((USHORT)v145, v146, 0LL);
      return 0LL;
    case 0x16u:
      v27 = v145;
      if ( !v145 )
        return 3238002694LL;
      *(_DWORD *)v27 = KeQueryHighestNodeNumber();
      return 0LL;
    case 0x17u:
      LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                       (PPROCESSOR_NUMBER)v145,
                                       (LOGICAL_PROCESSOR_RELATIONSHIP)v146,
                                       Timeout,
                                       a6);
      if ( LogicalProcessorRelationship == -1073741820 )
        return 3238002692LL;
      if ( LogicalProcessorRelationship == -1073741811 )
        return 3238002694LL;
      return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x18u:
      return StorpAllocateContiguousMemorySpecifyCacheNode(
               (_DWORD)a9,
               (_DWORD)v145,
               (_DWORD)v146,
               (_DWORD)Timeout,
               (__int64)a6,
               LowAddress.LowPart,
               HighAddress.LowPart,
               (__int64)a9);
    case 0x19u:
      MmFreeContiguousMemorySpecifyCache(v145, (SIZE_T)v146, (MEMORY_CACHING_TYPE)Timeout);
      return 0LL;
    case 0x1Au:
      return StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v145, v146);
    case 0x1Bu:
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
               v13,
               v145,
               (PHYSICAL_ADDRESS)LowAddress.QuadPart,
               Timeout,
               (_DWORD)a6,
               (PHYSICAL_ADDRESS)LowAddress.QuadPart,
               HighAddress.LowPart,
               a9);
    case 0x1Cu:
      return StorpGetRequestInfo(v16, v145, v146);
    case 0x1Du:
      return StorpInitializeWorkItem(v13, v145);
    case 0x1Eu:
      return StorpQueueWorkItem(v13, v145, v146, Timeout);
    case 0x1Fu:
      return StorpFreeWorkItem(v13, v145);
    case 0x20u:
      return StorpInitializeTimer(v13, v145);
    case 0x21u:
      return StorpRequestTimer(
               v13,
               (__int64)v145,
               (signed __int64)v146,
               (__int64)Timeout,
               (__int64)a6,
               LowAddress.QuadPart);
    case 0x22u:
      return StorpFreeTimer(v13, v145);
    case 0x23u:
      InitializeSListHead((PSLIST_HEADER)v145);
      return 0LL;
    case 0x24u:
      v37 = v146;
      v37->Mask = (unsigned __int64)ExpInterlockedFlushSList((PSLIST_HEADER)v145);
      return 0LL;
    case 0x25u:
      v38 = v146;
      v38->Mask = (unsigned __int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v145);
      return 0LL;
    case 0x26u:
      v39 = Timeout;
      *(_QWORD *)&v39->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v145, (PSLIST_ENTRY)v146);
      return 0LL;
    case 0x27u:
      v40 = v146;
      LOWORD(v40->Mask) = ExQueryDepthSList((PSLIST_HEADER)v145);
      return 0LL;
    case 0x28u:
      if ( !v145 || !v146 )
        return 3238002694LL;
      if ( *((_BYTE *)v145 + 2) == 40 )
      {
        v33 = v145[10];
      }
      else
      {
        v34 = v145[6];
        if ( !v34 || *(_DWORD *)v34 != 523124044 )
          goto LABEL_112;
        v33 = *(_QWORD *)(v34 + 176);
      }
      if ( v33 )
      {
        v35 = -1056964607;
        if ( (int)IoGetActivityIdIrp(v33, v146) >= 0 )
          return 0;
        return v35;
      }
LABEL_112:
      v36 = -1056964607;
      if ( EtwActivityIdControl(3u, (LPGUID)v146) >= 0 )
        return 0;
      return v36;
    case 0x29u:
      v41 = v145;
      v42 = *(_DWORD *)(**(_QWORD **)(v13 - 16) + 56LL);
      if ( v42 == -1 )
        return 3238002697LL;
      if ( !v145 || *(_WORD *)v145 != 1 || *((_DWORD *)v145 + 1) < 4u )
        return 3238002694LL;
      *((_WORD *)v145 + 1) = v42;
      result = 0LL;
      *((_WORD *)v41 + 4) = -1;
      *((_BYTE *)v41 + 10) = -1;
      return result;
    case 0x2Au:
      LOBYTE(a3) = 1;
      return StorpGetOriginalMdl(v16, v145, a3, v146);
    case 0x2Bu:
      LOBYTE(a3) = 1;
      return StorpGetSystemAddress(v16, v145, a3, v146);
    case 0x2Cu:
      return StorpGetDataInSgList(v13, v145, v146);
    case 0x2Eu:
      return StorpSetUnitAttributes(v13, v145, (unsigned int)v146);
    case 0x2Fu:
      v43 = (LARGE_INTEGER *)v146;
      v44 = (union _LARGE_INTEGER *)v145;
      if ( !v146 )
        return 3238002694LL;
      if ( v145 )
        *v145 = 1LL;
      if ( UseQPCTime )
        *v43 = KeQueryPerformanceCounter(v44);
      else
        v43->QuadPart = KeQueryUnbiasedInterruptTime();
      return 0LL;
    case 0x30u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      if ( v145 )
        return StorpUnitInitializePoFxPower(v13, v145, v146, Timeout);
      else
        return StorpAdapterInitializePoFxPower(v13, v146, Timeout);
    case 0x31u:
      v45 = 0;
      v14 = 0;
      v46 = (unsigned int)Timeout;
      v47 = **(_QWORD **)(v13 - 16);
      if ( !v146 )
        goto LABEL_157;
      v48 = BYTE2(v146->Mask);
      if ( v48 == 40 )
        Mask = v146[6].Mask;
      else
        Mask = v146[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return 3238002694LL;
      if ( v48 == 40 )
        v45 = *(_DWORD *)&v146[1].Group;
      else
        v45 = *(_DWORD *)&v146->Reserved[1];
LABEL_157:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
        return 3238002696LL;
      if ( (_DWORD)a6 )
        return 3238002694LL;
      if ( v145 )
      {
        if ( *(_WORD *)v145 != 1 )
          return 3238002694LL;
        if ( *((_DWORD *)v145 + 1) < 4u )
          return 3238002694LL;
        v135 = *((unsigned __int8 *)v145 + 8);
        *(_WORD *)((char *)&v135 + 1) = *(_WORD *)((char *)v145 + 9);
        Unit = RaidAdapterFindUnit(v47, v135);
        v51 = Unit;
        if ( !Unit )
          return 3238002694LL;
        if ( (v45 & 0x100800) == 0 )
          goto LABEL_411;
        if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          goto LABEL_239;
        if ( *(_QWORD *)(*(_QWORD *)(v51 + 24) + 5088LL) )
        {
LABEL_411:
          if ( CurrentIrql == 2 || (*(_BYTE *)(v51 + 449) & 1) != 0 || *(char *)(v51 + 448) < 0 )
            v11 = 2;
          result = RaidUnitPoFxActivateComponentFromMiniport(v51, v46, v11);
          v14 = result;
          if ( Mask )
          {
            *(_BYTE *)(Mask + 16) |= 0x80u;
            return result;
          }
        }
      }
      else
      {
        if ( !*(_QWORD *)(v47 + 5088) || (v45 & 0x100800) != 0 )
          return 3238002695LL;
        v14 = -1056964596;
        if ( (unsigned __int8)RaidAdapterPoFxActivateComponent(v47, (unsigned int)Timeout) )
          v14 = 0;
        if ( Mask )
        {
          *(_BYTE *)(Mask + 16) |= 0x80u;
          return v14;
        }
      }
      return v14;
    case 0x32u:
      v14 = 0;
      v52 = (unsigned int)Timeout;
      v53 = **(_QWORD **)(v13 - 16);
      if ( !v146 )
        goto LABEL_185;
      if ( BYTE2(v146->Mask) == 40 )
        Mask = v146[6].Mask;
      else
        Mask = v146[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return 3238002694LL;
      if ( *(char *)(Mask + 16) >= 0 )
        return v14;
LABEL_185:
      if ( KeGetCurrentIrql() > 2u && !Mask )
        return 3238002696LL;
      if ( (_DWORD)a6 )
        return 3238002694LL;
      if ( !v145 )
      {
        if ( !*(_QWORD *)(v53 + 5088) )
          return 3238002695LL;
        if ( KeGetCurrentIrql() <= 2u )
        {
          v55 = -1056964596;
          if ( (unsigned __int8)RaidAdapterPoFxIdleComponent(**(_QWORD **)(v13 - 16), (unsigned int)Timeout, 0LL) )
            return 0;
          return v55;
        }
        else
        {
          *(_BYTE *)(Mask + 17) |= 1u;
          result = 3238002700LL;
          *(_DWORD *)(Mask + 748) = v52;
        }
        return result;
      }
      if ( *(_WORD *)v145 == 1 && *((_DWORD *)v145 + 1) >= 4u )
      {
        v136 = *((unsigned __int8 *)v145 + 8);
        *(_WORD *)((char *)&v136 + 1) = *(_WORD *)((char *)v145 + 9);
        v54 = RaidAdapterFindUnit(v53, v136);
        if ( v54 )
        {
          if ( KeGetCurrentIrql() <= 2u )
            return RaidUnitPoFxIdleComponentFromMiniport(v54, v52);
          *(_BYTE *)(Mask + 17) |= 2u;
          result = 3238002700LL;
          *(_DWORD *)(Mask + 748) = v52;
          return result;
        }
      }
      return 3238002694LL;
    case 0x33u:
      v56 = (unsigned int)v146;
      v57 = Timeout;
      v58 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v145 )
      {
        v64 = *(_QWORD **)(v58 + 5088);
        if ( !v64 )
          return 3238002695LL;
        v65 = v64[1];
        if ( (unsigned int)((_DWORD)v146 + 1) >= *(_DWORD *)(v65 + 8)
          && (unsigned int)((_DWORD)v146 + 1) <= *(_DWORD *)(v65 + 8) )
        {
          PoFxSetComponentLatency(*v64, (unsigned int)v146, Timeout);
          return 0LL;
        }
        return 3238002694LL;
      }
      if ( *(_WORD *)v145 != 1 )
        return 3238002694LL;
      if ( *((_DWORD *)v145 + 1) < 4u )
        return 3238002694LL;
      v137 = *((unsigned __int8 *)v145 + 8);
      *(_WORD *)((char *)&v137 + 1) = *(_WORD *)((char *)v145 + 9);
      v59 = RaidAdapterFindUnit(v58, v137);
      v60 = v59;
      if ( !v59 )
        return 3238002694LL;
      if ( !RaidUnitCheckAndAcquirePoFx(v59) )
        return 3238002695LL;
      v61 = *(_QWORD **)(v60 + 1744);
      v62 = v61[1];
      if ( v56 + 1 >= *(_DWORD *)(v62 + 8) && v56 + 1 <= *(_DWORD *)(v62 + 8) )
      {
        PoFxSetComponentLatency(*v61, v56, v57);
        v63 = 0;
        goto LABEL_211;
      }
      goto LABEL_210;
    case 0x34u:
      v66 = (unsigned int)v146;
      v67 = Timeout;
      v68 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v145 )
      {
        v72 = *(_QWORD **)(v68 + 5088);
        if ( !v72 )
          return 3238002695LL;
        v73 = v72[1];
        if ( (unsigned int)((_DWORD)v146 + 1) >= *(_DWORD *)(v73 + 8)
          && (unsigned int)((_DWORD)v146 + 1) <= *(_DWORD *)(v73 + 8) )
        {
          PoFxSetComponentResidency(*v72, (unsigned int)v146, Timeout);
          return 0LL;
        }
        return 3238002694LL;
      }
      if ( *(_WORD *)v145 != 1 )
        return 3238002694LL;
      if ( *((_DWORD *)v145 + 1) < 4u )
        return 3238002694LL;
      v138 = *((unsigned __int8 *)v145 + 8);
      *(_WORD *)((char *)&v138 + 1) = *(_WORD *)((char *)v145 + 9);
      v69 = RaidAdapterFindUnit(v68, v138);
      v60 = v69;
      if ( !v69 )
        return 3238002694LL;
      if ( !RaidUnitCheckAndAcquirePoFx(v69) )
        return 3238002695LL;
      v70 = *(_QWORD **)(v60 + 1744);
      v71 = v70[1];
      if ( v66 + 1 < *(_DWORD *)(v71 + 8) || v66 + 1 > *(_DWORD *)(v71 + 8) )
      {
LABEL_210:
        v63 = -1056964602;
      }
      else
      {
        PoFxSetComponentResidency(*v70, v66, v67);
        v63 = 0;
      }
LABEL_211:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v60 + 1736));
      return v63;
    case 0x35u:
      v74 = **(_QWORD **)(v13 - 16);
      v75 = v146;
      v76 = Timeout;
      v77 = a6;
      v78 = a9;
      v142 = LowAddress;
      *(PHYSICAL_ADDRESS *)&v143 = HighAddress;
      if ( KeGetCurrentIrql() <= 2u )
      {
        if ( v145 )
        {
          if ( *(_WORD *)v145 != 1 )
            return 3238002694LL;
          if ( *((_DWORD *)v145 + 1) < 4u )
            return 3238002694LL;
          v139 = *((unsigned __int8 *)v145 + 8);
          *(_WORD *)((char *)&v139 + 1) = *(_WORD *)((char *)v145 + 9);
          v79 = RaidAdapterFindUnit(v74, v139);
          v51 = v79;
          if ( !v79 )
            return 3238002694LL;
          if ( RaidUnitCheckAndAcquirePoFx(v79) )
          {
            v80 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v51 + 1744),
                    v75,
                    v76,
                    v77,
                    (PHYSICAL_ADDRESS)v142.QuadPart,
                    v143,
                    v78);
            v14 = RaidNtStatusToStorStatus(v80);
LABEL_239:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v51 + 1736));
            return v14;
          }
        }
        else
        {
          v81 = *(_QWORD **)(v74 + 5088);
          if ( v81 )
          {
            v82 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    *v81,
                    v146,
                    Timeout,
                    a6,
                    (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                    (PHYSICAL_ADDRESS)HighAddress.QuadPart,
                    a9);
            return RaidNtStatusToStorStatus(v82);
          }
        }
        return 3238002695LL;
      }
      if ( a9 )
        *a9 = 0LL;
      return 3238002696LL;
    case 0x36u:
      return StorpFlushDataBufferMdl(v16, v145);
    case 0x37u:
      v98 = v145;
      v99 = v146;
      v100 = Timeout;
      v101 = **(_QWORD **)(v13 - 16);
      if ( !Timeout )
        return 3238002694LL;
      if ( !v101 )
        return 3238002694LL;
      Timeout->Relationship = RelationProcessorCore;
      if ( v98 )
      {
        if ( *(_WORD *)v98 != 1 )
          return 3238002694LL;
        if ( *((_DWORD *)v98 + 1) < 4u )
          return 3238002694LL;
        v140 = *((unsigned __int8 *)v98 + 8);
        *(_WORD *)((char *)&v140 + 1) = *(_WORD *)((char *)v98 + 9);
        if ( !RaidAdapterFindUnit(v101, v140) )
          return 3238002694LL;
      }
      if ( v99->Mask == 0x481F895FDCAF9C10LL && *(_QWORD *)&v99->Group == 0x3356F5D2CED492A4LL )
      {
        v100->Relationship = (unsigned __int8)g_InWinPE;
        return 0LL;
      }
      if ( v99->Mask == 0x444B2B37D52CE820LL && *(_QWORD *)&v99->Group == 0x7BD091E5920033A6LL )
      {
        v100->Relationship = RelationNumaNode;
        return 0LL;
      }
      if ( v99->Mask != 0x48E8F89B2B9443ACLL || *(_QWORD *)&v99->Group != 0x5AFD6EC9B62C92B2LL )
        return v14;
      v100->Relationship = (unsigned __int8)ExIsSoftBoot();
      return 0LL;
    case 0x38u:
      v28 = v146;
      if ( !v145 || !v146 )
        return 3238002694LL;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v145);
      LODWORD(v28->Mask) = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber == -1 )
        return (unsigned int)-1056964602;
      return v11;
    case 0x39u:
      v83 = (char)v146;
      if ( v145 )
        return 3238002694LL;
      v84 = *(_QWORD **)(v13 - 16);
      v85 = *v84;
      if ( !*v84 || !*(_QWORD *)(v85 + 5088) )
        return 3238002694LL;
      if ( (*(_BYTE *)(v85 + 108) & 0x40) != 0 )
        return 3238002689LL;
      RaidAdapterPoFxSetDeviceIdleTimeout(*v84, (unsigned int)v146, a3, 0LL);
      if ( !StorEtwLoggingEnabled || (byte_1C0068841 & 1) == 0 )
        return 0LL;
      McTemplateK0pqqq_EtwWriteTransfer(
        v86,
        (unsigned int)&EventAdapterIdleTimeoutSet,
        v87,
        **(_QWORD **)(v85 + 5088),
        *(_DWORD *)(v85 + 56),
        v83,
        *(_DWORD *)(v85 + 5104));
      return 0LL;
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
      return v14;
    case 0x3Du:
      if ( !v145 )
        return 3238002694LL;
      *(_BYTE *)v145 = g_OSisUpgrade;
      return 0LL;
    case 0x3Eu:
      LOBYTE(v17) = 1;
      return StorAdapterDeviceRegistryKeyProxy(v13, v17, &v145);
    case 0x3Fu:
      return StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v145);
    case 0x40u:
      v107 = **(_QWORD **)(v13 - 16);
      if ( !v107 || (unsigned int)v145 >= 0x14 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v107 + 552) & 1) == 0 )
        return 3238002689LL;
      *(_DWORD *)(v107 + 4420) = (_DWORD)v145;
      return 0LL;
    case 0x41u:
      v88 = (unsigned int)a6;
      v89 = LowAddress;
      if ( v145 )
        return 3238002694LL;
      v90 = **(_QWORD **)(v13 - 16);
      if ( !v90 )
        return 3238002694LL;
      v91 = *(_QWORD *)(v90 + 5088);
      if ( !v91 || *(_BYTE *)(v91 + 28) )
        return 3238002689LL;
      LogicalProcessorRelationship = RaidRegisterPerfStates(
                                       *(_QWORD *)(v90 + 8),
                                       (_DWORD)v146,
                                       (_DWORD)Timeout,
                                       (_DWORD)a6,
                                       LowAddress.QuadPart,
                                       *(_QWORD *)v91);
      if ( LogicalProcessorRelationship < 0 )
        return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterCacheOperationalPowerRange)(
                              *(_QWORD *)(v90 + 5088),
                              v88,
                              (PHYSICAL_ADDRESS)v89.QuadPart) )
      {
        *(_QWORD *)(*(_QWORD *)(v90 + 5088) + 48LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v90 + 5088) + 56LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v90 + 5088) + 64LL) = -1LL;
      }
      *(_BYTE *)(*(_QWORD *)(v90 + 5088) + 28LL) = v88;
      ((void (__fastcall *)(_QWORD, _QWORD))StorpLogRegisterAdapterPerfStates)(v90, (PHYSICAL_ADDRESS)v89.QuadPart);
      return 0LL;
    case 0x42u:
      if ( v145 || (_DWORD)Timeout )
        return 3238002694LL;
      v92 = *(_QWORD *)(v13 - 16);
      if ( !*(_QWORD *)v92 )
        return v14;
      v93 = *(__int64 **)(*(_QWORD *)v92 + 5088LL);
      if ( !v93 )
        return v14;
      v94 = KeGetCurrentIrql();
      v143 = 0LL;
      v95 = *((unsigned __int8 *)v93 + 28);
      if ( !(_BYTE)v95 || (unsigned int)a6 >= v95 )
        return 3238002694LL;
      LODWORD(v143) = (_DWORD)a6;
      v96 = 2LL;
      DWORD2(v143) = LowAddress.LowPart;
      v97 = *v93;
      if ( v94 < 2u )
        v96 = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
        v97,
        v96,
        (unsigned int)v146,
        &v143,
        (PHYSICAL_ADDRESS)HighAddress.QuadPart);
      return 0LL;
    case 0x43u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      v102 = v146;
      v14 = -1056964602;
      v103 = v145;
      if ( !v146 )
        return v14;
      LOBYTE(v146->Mask) = 0;
      v104 = **(_QWORD **)(a2 - 16);
      if ( !v104 )
        return v14;
      if ( v103 )
      {
        if ( *(_WORD *)v103 != 1 )
          return v14;
        if ( *((_DWORD *)v103 + 1) < 4u )
          return v14;
        v141 = *((unsigned __int8 *)v103 + 8);
        *(_WORD *)((char *)&v141 + 1) = *(_WORD *)((char *)v103 + 9);
        v105 = RaidAdapterFindUnit(v104, v141);
        if ( !v105 )
          return v14;
        v106 = *(struct _DEVICE_OBJECT **)(v105 + 8);
      }
      else
      {
        v106 = *(struct _DEVICE_OBJECT **)(v104 + 8);
      }
      if ( !v106 )
        return v14;
      LogicalProcessorRelationship = RaidGetD3ColdInterface(v106);
      if ( LogicalProcessorRelationship < 0 )
        return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      LOBYTE(v102->Mask) = RaidGetD3ColdCapability(0LL);
      return 0LL;
    case 0x44u:
      if ( v145 )
        return 3238002695LL;
      return RaidInitializeRpmb(v13, v146);
    case 0x45u:
      return StorpAllocateHostMemoryBuffer(
               v13,
               (int)v145,
               (int)v146,
               (int)Timeout,
               (int)a6,
               LowAddress,
               HighAddress,
               (__int64)a9,
               a10,
               a11);
    case 0x46u:
      return StorpFreeHostMemoryBuffer(v13);
    case 0x47u:
      v108 = **(_QWORD **)(v13 - 16);
      if ( !v108 )
        return 3238002694LL;
      if ( !*(_BYTE *)(v108 + 508) )
        return 3238002695LL;
      if ( !v145 || !v146 )
        return 3238002694LL;
      if ( *((_BYTE *)v145 + 2) == 40 )
      {
        v109 = v145[10];
      }
      else
      {
        v110 = v145[6];
        if ( !v110 || *(_DWORD *)v110 != 523124044 )
          return 3238002694LL;
        v109 = *(_QWORD *)(v110 + 176);
      }
      if ( !v109 )
        return 3238002694LL;
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !(_DWORD)Timeout )
        return 0LL;
      v111 = IoPropagateIrpExtension();
      return RaidNtStatusToStorStatus(v111);
    case 0x48u:
      v112 = Timeout;
      *(_QWORD *)&v112->Relationship = ExInterlockedInsertHeadList(
                                         (PLIST_ENTRY)v145,
                                         (PLIST_ENTRY)v146,
                                         (PKSPIN_LOCK)a6);
      return 0LL;
    case 0x49u:
      v113 = Timeout;
      *(_QWORD *)&v113->Relationship = ExInterlockedInsertTailList(
                                         (PLIST_ENTRY)v145,
                                         (PLIST_ENTRY)v146,
                                         (PKSPIN_LOCK)a6);
      return 0LL;
    case 0x4Au:
      v114 = v146;
      v114->Mask = (unsigned __int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)v145, (PKSPIN_LOCK)Timeout);
      return 0LL;
    case 0x4Bu:
      KeInitializeSpinLock(v145);
      return 0LL;
    case 0x4Cu:
      return StorpGetPfns(v13, (_DWORD)v145, (_DWORD)v146, (_DWORD)Timeout, (__int64)a6, LowAddress.QuadPart);
    case 0x4Du:
      if ( !v145 || !**(_QWORD **)(v13 - 16) )
        return 3238002694LL;
      return RaidInitializeCryptoEngine();
    case 0x4Eu:
      v115 = v146;
      if ( !v145 || !v146 )
        return 3238002694LL;
      if ( *((_BYTE *)v145 + 2) == 40 )
        v116 = v145[12];
      else
        v116 = v145[6];
      LODWORD(v146->Mask) = **(_DWORD **)(v116 + 784);
      HIDWORD(v115->Mask) = *(_DWORD *)(*(_QWORD *)(v116 + 784) + 4LL);
      *(_DWORD *)&v115->Group = *(_DWORD *)(*(_QWORD *)(v116 + 784) + 8LL);
      result = 0LL;
      v115[1].Mask = *(_QWORD *)(*(_QWORD *)(v116 + 784) + 16LL);
      return result;
    case 0x4Fu:
      if ( !v146 )
        return 3238002694LL;
      v117 = v146[3].Mask;
      if ( v117 > 0x1000 )
        return 3238002698LL;
      if ( v117 && !*(_QWORD *)&v146[3].Group || *(_QWORD *)&v146[3].Group && !v117 )
        return 3238002694LL;
      v118 = **(_QWORD **)(v13 - 16);
      if ( !v118 )
        return 0LL;
      StorpTelemetryMiniportEvent(v118, v145, v146, 0LL);
      return 0LL;
    case 0x50u:
      v121 = **(_QWORD **)(v13 - 16);
      if ( !v121 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v121 + 104) & 0x10) == 0 )
        return 3238002695LL;
      *(_DWORD *)(v121 + 516) = (_DWORD)v145;
      return 0LL;
    case 0x51u:
      if ( !(_DWORD)v145 )
        return 0LL;
      StorDelayExecution((ULONG)v145);
      return 0LL;
    case 0x52u:
      return StorpAllocateContiguousMemorySpecifyCacheNodeEx(
               v13,
               (_DWORD)v145,
               (_DWORD)v146,
               (_DWORD)Timeout,
               (__int64)a6,
               LowAddress.LowPart,
               HighAddress.LowPart,
               (__int64)a9,
               a10);
    case 0x53u:
      return StorpFreeContiguousMemorySpecifyCacheEx(v13, v145, v146, (unsigned int)Timeout, a6);
    case 0x54u:
      v122 = (int)v146;
      v123 = **(_QWORD **)(v13 - 16);
      if ( !v123 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v123 + 104) & 0x10) == 0 )
        return 3238002695LL;
      *(_DWORD *)(v123 + 516) = (_DWORD)v145;
      result = 0LL;
      *(_DWORD *)(v123 + 520) = v122;
      return result;
    case 0x55u:
    case 0x56u:
    case 0x57u:
      return StorEtwMiniportEventProxy(v13, a1, &v145);
    case 0x58u:
      v14 = 0;
      v124 = Timeout;
      Timer = ExAllocateTimer(v145, v146, 4LL, a4);
      *(_QWORD *)&v124->Relationship = Timer;
      if ( !Timer )
        return 3238002689LL;
      return v14;
    case 0x59u:
      QuadPart = (_BYTE *)LowAddress.QuadPart;
      if ( !LowAddress.QuadPart )
        return 3238002694LL;
      *QuadPart = ExSetTimer(v145, v146, Timeout, a6);
      return 0LL;
    case 0x5Au:
      v127 = Timeout;
      if ( !Timeout )
        return 3238002694LL;
      v14 = 0;
      v128 = ExCancelTimer(v145, v146);
      LOBYTE(v127->Relationship) = v128;
      if ( v128 )
        return v14;
      return 3238002689LL;
    case 0x5Bu:
      v129 = (_BYTE *)LowAddress.QuadPart;
      if ( !LowAddress.QuadPart )
        return 3238002694LL;
      *v129 = ExDeleteTimer(v145, (unsigned __int8)v146, (unsigned __int8)Timeout, a6);
      return 0LL;
    case 0x5Cu:
      v14 = -1056964602;
      if ( !v145 )
        return v14;
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      *(_DWORD *)v145 = LockArray_high;
      if ( LockArray_high == -1 )
        return (unsigned int)-1056964602;
      return v11;
    case 0x5Du:
      return StorAcquireSpinLockEx(v13, (unsigned int)v145, v146, Timeout);
    case 0x5Eu:
      v31 = (ULONG *)v145;
      if ( !v145 )
        return 3238002694LL;
      *v31 = KeQueryActiveProcessorCountEx(0xFFFFu);
      return 0LL;
    case 0x5Fu:
      v130 = v146;
      if ( !v145 || !v146 )
        return 3238002694LL;
      LOBYTE(v130->Mask) = KeRemoveQueueDpc((PRKDPC)v145);
      return 0LL;
    case 0x60u:
      if ( !v146 )
        return 3238002694LL;
      v119 = v146[3].Mask;
      if ( v119 > 0x1000 )
        return 3238002698LL;
      if ( v119 && !*(_QWORD *)&v146[3].Group || *(_QWORD *)&v146[3].Group && !v119 )
        return 3238002694LL;
      v120 = **(_QWORD **)(v13 - 16);
      if ( !v120 )
        return 0LL;
      StorpTelemetryMiniportEvent(v120, v145, v146, (unsigned int)Timeout);
      return 0LL;
    case 0x61u:
      if ( (_DWORD)v145 || !v146 )
        return 3238002694LL;
      LOBYTE(v146->Mask) = StorageD3InModernStandbyEnabled;
      return 0LL;
    case 0x62u:
      if ( !Timeout || !LowAddress.QuadPart || !(_DWORD)a6 )
        return 3238002694LL;
      return StorEtwMiniportLogError(v13, (_DWORD)v145, (_DWORD)v146, (_DWORD)Timeout, (_DWORD)a6, LowAddress.QuadPart);
    case 0x63u:
      if ( !v145 )
        return 3238002694LL;
      KeInitializeEvent((PRKEVENT)v145, (EVENT_TYPE)v146, (BOOLEAN)Timeout);
      return 0LL;
    case 0x64u:
      if ( !Timeout || *(_QWORD *)&Timeout->Relationship )
        v131 = KeGetCurrentIrql() <= 1u;
      else
        v131 = KeGetCurrentIrql() <= 2u;
      if ( !v131 )
        return 3238002696LL;
      if ( !v145 )
        return 3238002694LL;
      v132 = -1056964607;
      if ( KeWaitForSingleObject(v145, Executive, 0, (BOOLEAN)v146, (PLARGE_INTEGER)Timeout) >= 0 )
        return 0;
      return v132;
    case 0x65u:
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v145 )
        return 3238002694LL;
      KeSetEvent((PRKEVENT)v145, 0, 0);
      return 0LL;
    case 0x66u:
      LogicalProcessorRelationship = StorReset(v13, (unsigned int)v145);
      return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x67u:
      if ( !v146 )
        return 3238002694LL;
      if ( (_DWORD)v145 != 1 )
        return 3238002694LL;
      v133 = **(_QWORD **)(v13 - 16);
      if ( !v133 )
        return 3238002694LL;
      v134 = -1056964607;
      if ( (int)RaMiniportSaveFeatureList(v133 + 304) >= 0 )
        return 0;
      return v134;
    default:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids, a1);
      }
      return v14;
  }
}
