/*
 * XREFs of StorPortExtendedFunction @ 0x1C000D810
 * Callers:
 *     <none>
 * Callees:
 *     StorpRequestTimer @ 0x1C0001960 (StorpRequestTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006D20 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterFindUnit @ 0x1C0006FB4 (RaidAdapterFindUnit.c)
 *     StorpAllocatePool @ 0x1C00121E8 (StorpAllocatePool.c)
 *     RaidGetD3ColdInterface @ 0x1C0017894 (RaidGetD3ColdInterface.c)
 *     RaidGetStartIoPerfParams @ 0x1C0018FC0 (RaidGetStartIoPerfParams.c)
 *     RaidNtStatusToStorStatus @ 0x1C00191FC (RaidNtStatusToStorStatus.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002C010 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C074 (RaidAdapterPoFxIdleComponent.c)
 *     RaidInitializeCryptoEngine @ 0x1C002FFC8 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOpts @ 0x1C0030120 (RaidInitializePerfOpts.c)
 *     RaidInitializeRpmb @ 0x1C00311B8 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031988 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0031E78 (WPP_SF_D.c)
 *     RaMiniportSaveFeatureList @ 0x1C0035B54 (RaMiniportSaveFeatureList.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0035C9C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C00366F8 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0036948 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C0036B08 (StorAcquireSpinLockEx.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0036BF8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C0036DEC (StorBuildScatterGatherListProxy.c)
 *     StorDelayExecution @ 0x1C0036E50 (StorDelayExecution.c)
 *     StorEtwMiniportEventProxy @ 0x1C0036FA0 (StorEtwMiniportEventProxy.c)
 *     StorEtwMiniportLogError @ 0x1C00370E0 (StorEtwMiniportLogError.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0038DB4 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0038E78 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorReset @ 0x1C0038F50 (StorReset.c)
 *     StorpAcquireMSISpinLock @ 0x1C00390E8 (StorpAcquireMSISpinLock.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003918C (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C0039468 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C00394E0 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C003960C (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C0039A38 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0039B74 (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C0039D74 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C0039DCC (StorpFlushDataBufferMdl.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C0039E34 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C0039EA8 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C0039F6C (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003A018 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003A27C (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C003A450 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C003A4E4 (StorpGetDataInSgList.c)
 *     StorpGetGroupAffinity @ 0x1C003A71C (StorpGetGroupAffinity.c)
 *     StorpGetMSIInfo @ 0x1C003A778 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003A860 (StorpGetOriginalMdl.c)
 *     StorpGetPfns @ 0x1C003A8E0 (StorpGetPfns.c)
 *     StorpGetRequestInfo @ 0x1C003A980 (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C003ABE4 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003AD60 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003AEEC (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C003B030 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C003B9B8 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003BAB8 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003BBF0 (StorpReleaseMSISpinLock.c)
 *     StorpSetUnitAttributes @ 0x1C003BC88 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003BD04 (StorpUnitInitializePoFxPower.c)
 *     RaidGetD3ColdCapability @ 0x1C003D928 (RaidGetD3ColdCapability.c)
 *     RaidRegisterPerfStates @ 0x1C003DFA8 (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0051BBC (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0054018 (StorpTelemetryMiniportEvent.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        unsigned int a1,
        __int64 a2,
        struct _LIST_ENTRY *a3,
        GUID *a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Timeout,
        PULONG a6,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // ebx
  __int64 v13; // rsi
  unsigned int v14; // r14d
  unsigned __int64 Mask; // r13
  PDEVICE_OBJECT v16; // rcx
  _LIST_ENTRY *v17; // rax
  unsigned __int64 v19; // rdx
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *Flink; // rcx
  __int64 v22; // rcx
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rcx
  unsigned int v25; // eax
  struct _GROUP_AFFINITY *v26; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v27; // r9
  _QWORD *v28; // rcx
  PDEVICE_OBJECT v29; // rcx
  __int64 v30; // rdx
  struct _PROCESSOR_NUMBER *v31; // rdi
  struct _PROCESSOR_NUMBER *v32; // rdi
  struct _PROCESSOR_NUMBER *v33; // rdi
  struct _GROUP_AFFINITY *v34; // rdi
  ULONG ProcessorIndexFromNumber; // eax
  struct _PROCESSOR_NUMBER LockArray_high; // eax
  struct _PROCESSOR_NUMBER *v37; // rdi
  NTSTATUS LogicalProcessorRelationship; // eax
  struct _GROUP_AFFINITY *v39; // rdi
  struct _GROUP_AFFINITY *v40; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v41; // rdi
  struct _GROUP_AFFINITY *v42; // rdi
  struct _PROCESSOR_NUMBER *v43; // rdx
  int v44; // eax
  LARGE_INTEGER *v45; // rdi
  union _LARGE_INTEGER *v46; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int v48; // r12d
  __int64 v49; // r9
  char v50; // al
  unsigned __int8 CurrentIrql; // si
  __int64 Unit; // rax
  __int64 v53; // rdi
  unsigned int v54; // edi
  __int64 v55; // r9
  __int64 v56; // rax
  unsigned int v57; // r14d
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v58; // r15
  __int64 v59; // r8
  __int64 v60; // rax
  _QWORD *v61; // rcx
  __int64 v62; // r9
  _QWORD *v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // r14d
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v66; // r15
  __int64 v67; // r8
  __int64 v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // r9
  _QWORD *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  struct _GROUP_AFFINITY *v74; // r14
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v75; // r12
  PULONG v76; // r13
  _QWORD *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rbx
  unsigned int v80; // eax
  _QWORD *v81; // rcx
  unsigned int v82; // eax
  __int64 v83; // r14
  __int64 v84; // rdi
  _QWORD *v85; // rcx
  int v86; // ecx
  int v87; // r8d
  unsigned int v88; // r14d
  PHYSICAL_ADDRESS v89; // r12
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 *v93; // rcx
  unsigned __int8 v94; // r9
  unsigned int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct _PROCESSOR_NUMBER *v98; // rdx
  struct _GROUP_AFFINITY *v99; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v100; // r15
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  struct _GROUP_AFFINITY *v105; // rdi
  struct _PROCESSOR_NUMBER *v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  struct _DEVICE_OBJECT *v109; // rcx
  __int64 v110; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v111; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v112; // rdi
  struct _GROUP_AFFINITY *v113; // rdi
  struct _GROUP_AFFINITY *v114; // r8
  _LIST_ENTRY *v115; // rdx
  unsigned int v116; // eax
  __int64 v117; // rcx
  unsigned int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rcx
  int v121; // edx
  __int64 v122; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v123; // rdi
  __int64 Timer; // rax
  _BYTE *QuadPart; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v126; // rdi
  char v127; // al
  _BYTE *v128; // rdi
  struct _GROUP_AFFINITY *v129; // rdi
  __int64 v130; // rcx
  int Group_low; // [rsp+50h] [rbp-19h]
  int v132; // [rsp+50h] [rbp-19h]
  int v133; // [rsp+50h] [rbp-19h]
  int v134; // [rsp+50h] [rbp-19h]
  int v135; // [rsp+50h] [rbp-19h]
  int v136; // [rsp+50h] [rbp-19h]
  int v137; // [rsp+50h] [rbp-19h]
  unsigned int v138; // [rsp+58h] [rbp-11h]
  PHYSICAL_ADDRESS v139; // [rsp+58h] [rbp-11h]
  PHYSICAL_ADDRESS v140; // [rsp+60h] [rbp-9h]
  __int128 v141; // [rsp+68h] [rbp-1h] BYREF
  struct _PROCESSOR_NUMBER *v143; // [rsp+E0h] [rbp+77h] BYREF
  struct _GROUP_AFFINITY *v144; // [rsp+E8h] [rbp+7Fh]

  v143 = (struct _PROCESSOR_NUMBER *)a3;
  v144 = (struct _GROUP_AFFINITY *)a4;
  v11 = 0;
  v13 = a2;
  v14 = -1056964606;
  Mask = 0LL;
  if ( a2 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids, a1);
      v13 = a2;
    }
    if ( a1 == 6 )
    {
LABEL_5:
      v14 = 0;
      if ( v144 )
      {
        if ( v143->Number == 40 )
          v17 = *(_LIST_ENTRY **)&v143[24].Group;
        else
          v17 = *(_LIST_ENTRY **)&v143[12].Group;
        v144->Mask = (unsigned __int64)v17[6].Blink;
        return v14;
      }
      v29 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        v30 = 43LL;
LABEL_407:
        WPP_SF_(v29->AttachedDevice, v30, &WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
      }
      return (unsigned int)-1056964602;
    }
    v19 = 0x1C0000000uLL;
    switch ( a1 )
    {
      case 0u:
        return (unsigned int)StorpAllocatePool(v16, (unsigned int)v143, (unsigned int)v144, Timeout);
      case 1u:
        v14 = 0;
        if ( !v143 )
        {
          v29 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v30 = 29LL;
            goto LABEL_407;
          }
          return (unsigned int)-1056964602;
        }
        if ( KeGetCurrentIrql() <= 2u )
        {
          ExFreePoolWithTag(v143, 0);
          return v14;
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
          return (unsigned int)-1056964600;
        }
        return (unsigned int)-1056964600;
      case 2u:
        return (unsigned int)StorpAllocateMdl(v16, v143, (unsigned int)v144, Timeout);
      case 3u:
        return (unsigned int)StorpFreeMdl(v16, v143);
      case 4u:
        return (unsigned int)StorpBuildMdlForNonPagedPool(v16, v143);
      case 5u:
        return (unsigned int)StorpGetSystemAddress(v16, v143, 0LL, v144);
      case 6u:
        goto LABEL_5;
      case 7u:
        return (unsigned int)StorpCompleteServiceIrp(v13, v143);
      case 8u:
        v14 = 0;
        v26 = v144;
        v27 = Timeout;
        if ( v13 )
        {
          if ( v143 )
          {
            if ( v144 )
            {
              if ( Timeout )
              {
                v28 = **(_QWORD ***)(v13 - 16);
                *(_QWORD *)&v143->Group = v28[1];
                v26->Mask = v28[4];
                *(_QWORD *)&v27->Relationship = v28[3];
                return v14;
              }
              v29 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                v30 = 48LL;
                goto LABEL_407;
              }
            }
            else
            {
              v29 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                v30 = 47LL;
                goto LABEL_407;
              }
            }
          }
          else
          {
            v29 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v30 = 46LL;
              goto LABEL_407;
            }
          }
        }
        else
        {
          v29 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v30 = 45LL;
            goto LABEL_407;
          }
        }
        return (unsigned int)-1056964602;
      case 9u:
        return (unsigned int)StorBuildScatterGatherListProxy(v13, &v143);
      case 0xAu:
        return (unsigned int)StorpPutScatterGatherList(v13, v143, (unsigned __int8)v144);
      case 0xBu:
        return (unsigned int)StorpAcquireMSISpinLock(v13, (unsigned int)v143, v144);
      case 0xCu:
        return (unsigned int)StorpReleaseMSISpinLock(v13, (unsigned int)v143, (unsigned int)v144);
      case 0xDu:
        return (unsigned int)StorpGetMSIInfo(v13, (unsigned int)v143, v144);
      case 0xEu:
        return (unsigned int)RaidInitializePerfOpts(v13, (unsigned __int8)v143, v144);
      case 0xFu:
        return (unsigned int)RaidGetStartIoPerfParams(v13, v143, v144);
      case 0x10u:
        return (unsigned int)StorpLogSystemEvent(v13, v143, v144);
      case 0x11u:
        v31 = v143;
        if ( v143 )
          KeGetCurrentProcessorNumberEx(v143);
        v14 = -1056964602;
        if ( v31 )
          return 0;
        return v14;
      case 0x12u:
        v32 = v143;
        if ( !v143 )
          return (unsigned int)-1056964602;
        v32->Group = KeQueryActiveGroupCount();
        return 0;
      case 0x13u:
        return (unsigned int)StorpGetGroupAffinity(v16, (unsigned __int16)v143, v144);
      case 0x14u:
        return (unsigned int)StorpGetActiveNodeCount(v16, v143);
      case 0x15u:
        if ( !v144 || (unsigned int)v143 > 0xFFFF )
          return (unsigned int)-1056964602;
        KeQueryNodeActiveAffinity((USHORT)v143, v144, 0LL);
        return 0;
      case 0x16u:
        v33 = v143;
        if ( !v143 )
          return (unsigned int)-1056964602;
        v14 = 0;
        *v33 = (struct _PROCESSOR_NUMBER)KeQueryHighestNodeNumber();
        return v14;
      case 0x17u:
        LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                         v143,
                                         (LOGICAL_PROCESSOR_RELATIONSHIP)v144,
                                         Timeout,
                                         a6);
        if ( LogicalProcessorRelationship == -1073741820 )
          return (unsigned int)-1056964604;
        if ( LogicalProcessorRelationship == -1073741811 )
          return (unsigned int)-1056964602;
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      case 0x18u:
        return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNode(
                               (_DWORD)a9,
                               (_DWORD)v143,
                               (_DWORD)v144,
                               (_DWORD)Timeout,
                               (__int64)a6,
                               LowAddress.LowPart,
                               HighAddress.LowPart,
                               (__int64)a9);
      case 0x19u:
        MmFreeContiguousMemorySpecifyCache(v143, (SIZE_T)v144, (MEMORY_CACHING_TYPE)Timeout);
        return 0;
      case 0x1Au:
        return (unsigned int)StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v143, v144);
      case 0x1Bu:
        return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                               v13,
                               v143,
                               (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                               Timeout,
                               (_DWORD)a6,
                               (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                               HighAddress.LowPart,
                               a9);
      case 0x1Cu:
        return (unsigned int)StorpGetRequestInfo(v16, v143, v144);
      case 0x1Du:
        return (unsigned int)StorpInitializeWorkItem(v13, v143);
      case 0x1Eu:
        return (unsigned int)StorpQueueWorkItem(v13, v143, v144, Timeout);
      case 0x1Fu:
        return (unsigned int)StorpFreeWorkItem(v13, v143);
      case 0x20u:
        return (unsigned int)StorpInitializeTimer(v13, v143);
      case 0x21u:
        return (unsigned int)StorpRequestTimer(
                               v13,
                               (__int64)v143,
                               (signed __int64)v144,
                               (__int64)Timeout,
                               (__int64)a6,
                               LowAddress.QuadPart);
      case 0x22u:
        return (unsigned int)StorpFreeTimer(v13, v143);
      case 0x23u:
        InitializeSListHead((PSLIST_HEADER)v143);
        return 0;
      case 0x24u:
        v39 = v144;
        v39->Mask = (unsigned __int64)ExpInterlockedFlushSList((PSLIST_HEADER)v143);
        return 0;
      case 0x25u:
        v40 = v144;
        v40->Mask = (unsigned __int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v143);
        return 0;
      case 0x26u:
        v41 = Timeout;
        *(_QWORD *)&v41->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v143, (PSLIST_ENTRY)v144);
        return 0;
      case 0x27u:
        v42 = v144;
        LOWORD(v42->Mask) = ExQueryDepthSList((PSLIST_HEADER)v143);
        return 0;
      case 0x28u:
        if ( !v143 || !v144 )
          return (unsigned int)-1056964602;
        if ( v143->Number == 40 )
        {
          Flink = *(_LIST_ENTRY **)&v143[20].Group;
        }
        else
        {
          v20 = *(_LIST_ENTRY **)&v143[12].Group;
          if ( !v20 || LODWORD(v20->Flink) != 523124044 )
            goto LABEL_120;
          Flink = v20[11].Flink;
        }
        if ( Flink )
        {
          if ( (int)IoGetActivityIdIrp(Flink, v144) >= 0 )
            return 0;
          return (unsigned int)-1056964607;
        }
LABEL_120:
        v14 = -1056964607;
        if ( EtwActivityIdControl(3u, (LPGUID)v144) >= 0 )
          return 0;
        return v14;
      case 0x29u:
        v43 = v143;
        v44 = *(_DWORD *)(**(_QWORD **)(v13 - 16) + 56LL);
        if ( v44 == -1 )
          return (unsigned int)-1056964599;
        if ( !v143 || v143->Group != 1 || *(_DWORD *)&v143[1] < 4u )
          return (unsigned int)-1056964602;
        *(_WORD *)&v143->Number = v44;
        v14 = 0;
        v43[2].Group = -1;
        v43[2].Number = -1;
        return v14;
      case 0x2Au:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetOriginalMdl(v16, v143, a3, v144);
      case 0x2Bu:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetSystemAddress(v16, v143, a3, v144);
      case 0x2Cu:
        return (unsigned int)StorpGetDataInSgList(v13, v143, v144);
      case 0x2Eu:
        return (unsigned int)StorpSetUnitAttributes(v13, v143, (unsigned int)v144);
      case 0x2Fu:
        v45 = (LARGE_INTEGER *)v144;
        v46 = (union _LARGE_INTEGER *)v143;
        if ( !v144 )
          return (unsigned int)-1056964602;
        if ( v143 )
          *(_QWORD *)&v143->Group = 1LL;
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(v46);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        *v45 = PerformanceCounter;
        return 0;
      case 0x30u:
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        if ( v143 )
          return (unsigned int)StorpUnitInitializePoFxPower(v13, v143, v144, Timeout);
        else
          return (unsigned int)StorpAdapterInitializePoFxPower(v13, v144, Timeout);
      case 0x31u:
        v48 = 0;
        v14 = 0;
        v49 = **(_QWORD **)(v13 - 16);
        v138 = (unsigned int)Timeout;
        if ( !v144 )
          goto LABEL_164;
        v50 = BYTE2(v144->Mask);
        if ( v50 == 40 )
          Mask = v144[6].Mask;
        else
          Mask = v144[3].Mask;
        if ( !Mask || *(_DWORD *)Mask != 523124044 )
          return (unsigned int)-1056964602;
        if ( v50 == 40 )
          v48 = *(_DWORD *)&v144[1].Group;
        else
          v48 = *(_DWORD *)&v144->Reserved[1];
LABEL_164:
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          return (unsigned int)-1056964600;
        if ( (_DWORD)a6 )
          return (unsigned int)-1056964602;
        if ( v143 )
        {
          if ( v143->Group != 1 )
            return (unsigned int)-1056964602;
          if ( *(_DWORD *)&v143[1] < 4u )
            return (unsigned int)-1056964602;
          Group_low = LOBYTE(v143[2].Group);
          *(_WORD *)((char *)&Group_low + 1) = HIBYTE(v143[2].Group);
          BYTE2(Group_low) = v143[2].Number;
          Unit = RaidAdapterFindUnit(v49, Group_low);
          v53 = Unit;
          if ( !Unit )
            return (unsigned int)-1056964602;
          if ( (v48 & 0x100800) == 0 )
            goto LABEL_175;
          if ( RaidUnitCheckAndAcquirePoFx(Unit) )
            goto LABEL_218;
          if ( *(_QWORD *)(*(_QWORD *)(v53 + 24) + 5088LL) )
          {
LABEL_175:
            if ( CurrentIrql == 2 || (*(_BYTE *)(v53 + 449) & 1) != 0 || *(char *)(v53 + 448) < 0 )
              v11 = 2;
            v14 = RaidUnitPoFxActivateComponentFromMiniport(v53, v138, v11);
            if ( Mask )
              *(_BYTE *)(Mask + 16) |= 0x80u;
          }
        }
        else
        {
          if ( !*(_QWORD *)(v49 + 5088) || (v48 & 0x100800) != 0 )
            return (unsigned int)-1056964601;
          v14 = -1056964596;
          if ( (unsigned __int8)RaidAdapterPoFxActivateComponent(v49, (unsigned int)Timeout) )
            v14 = 0;
          if ( Mask )
            *(_BYTE *)(Mask + 16) |= 0x80u;
        }
        return v14;
      case 0x32u:
        v14 = 0;
        v54 = (unsigned int)Timeout;
        v55 = **(_QWORD **)(v13 - 16);
        if ( !v144 )
          goto LABEL_192;
        if ( BYTE2(v144->Mask) == 40 )
          Mask = v144[6].Mask;
        else
          Mask = v144[3].Mask;
        if ( !Mask || *(_DWORD *)Mask != 523124044 )
          return (unsigned int)-1056964602;
        if ( *(char *)(Mask + 16) >= 0 )
          return v14;
LABEL_192:
        if ( KeGetCurrentIrql() > 2u && !Mask )
          return (unsigned int)-1056964600;
        if ( (_DWORD)a6 )
          return (unsigned int)-1056964602;
        if ( !v143 )
        {
          if ( !*(_QWORD *)(v55 + 5088) )
            return (unsigned int)-1056964601;
          if ( KeGetCurrentIrql() <= 2u )
          {
            v14 = -1056964596;
            if ( (unsigned __int8)RaidAdapterPoFxIdleComponent(**(_QWORD **)(v13 - 16), (unsigned int)Timeout, 0LL) )
              return 0;
          }
          else
          {
            *(_BYTE *)(Mask + 17) |= 1u;
            v14 = -1056964596;
            *(_DWORD *)(Mask + 748) = v54;
          }
          return v14;
        }
        if ( v143->Group == 1 && *(_DWORD *)&v143[1] >= 4u )
        {
          v132 = LOBYTE(v143[2].Group);
          *(_WORD *)((char *)&v132 + 1) = HIBYTE(v143[2].Group);
          BYTE2(v132) = v143[2].Number;
          v56 = RaidAdapterFindUnit(v55, v132);
          if ( v56 )
          {
            if ( KeGetCurrentIrql() <= 2u )
            {
              return (unsigned int)RaidUnitPoFxIdleComponentFromMiniport(v56, v54);
            }
            else
            {
              *(_BYTE *)(Mask + 17) |= 2u;
              v14 = -1056964596;
              *(_DWORD *)(Mask + 748) = v54;
            }
            return v14;
          }
        }
        return (unsigned int)-1056964602;
      case 0x33u:
        v57 = (unsigned int)v144;
        v58 = Timeout;
        v59 = **(_QWORD **)(v13 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v143 )
        {
          v63 = *(_QWORD **)(v59 + 5088);
          if ( !v63 )
            return (unsigned int)-1056964601;
          v64 = v63[1];
          if ( (unsigned int)((_DWORD)v144 + 1) >= *(_DWORD *)(v64 + 8)
            && (unsigned int)((_DWORD)v144 + 1) <= *(_DWORD *)(v64 + 8) )
          {
            PoFxSetComponentLatency(*v63, (unsigned int)v144, Timeout);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( v143->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v143[1] < 4u )
          return (unsigned int)-1056964602;
        v133 = LOBYTE(v143[2].Group);
        *(_WORD *)((char *)&v133 + 1) = HIBYTE(v143[2].Group);
        BYTE2(v133) = v143[2].Number;
        v60 = RaidAdapterFindUnit(v59, v133);
        v53 = v60;
        if ( !v60 )
          return (unsigned int)-1056964602;
        if ( !RaidUnitCheckAndAcquirePoFx(v60) )
          return (unsigned int)-1056964601;
        v61 = *(_QWORD **)(v53 + 1744);
        v62 = v61[1];
        if ( v57 + 1 >= *(_DWORD *)(v62 + 8) && v57 + 1 <= *(_DWORD *)(v62 + 8) )
        {
          PoFxSetComponentLatency(*v61, v57, v58);
          v14 = 0;
          goto LABEL_218;
        }
        goto LABEL_217;
      case 0x34u:
        v65 = (unsigned int)v144;
        v66 = Timeout;
        v67 = **(_QWORD **)(v13 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v143 )
        {
          v71 = *(_QWORD **)(v67 + 5088);
          if ( !v71 )
            return (unsigned int)-1056964601;
          v72 = v71[1];
          if ( (unsigned int)((_DWORD)v144 + 1) >= *(_DWORD *)(v72 + 8)
            && (unsigned int)((_DWORD)v144 + 1) <= *(_DWORD *)(v72 + 8) )
          {
            PoFxSetComponentResidency(*v71, (unsigned int)v144, Timeout);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( v143->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v143[1] < 4u )
          return (unsigned int)-1056964602;
        v134 = LOBYTE(v143[2].Group);
        *(_WORD *)((char *)&v134 + 1) = HIBYTE(v143[2].Group);
        BYTE2(v134) = v143[2].Number;
        v68 = RaidAdapterFindUnit(v67, v134);
        v53 = v68;
        if ( !v68 )
          return (unsigned int)-1056964602;
        if ( !RaidUnitCheckAndAcquirePoFx(v68) )
          return (unsigned int)-1056964601;
        v69 = *(_QWORD **)(v53 + 1744);
        v70 = v69[1];
        if ( v65 + 1 < *(_DWORD *)(v70 + 8) || v65 + 1 > *(_DWORD *)(v70 + 8) )
        {
LABEL_217:
          v14 = -1056964602;
        }
        else
        {
          PoFxSetComponentResidency(*v69, v65, v66);
          v14 = 0;
        }
LABEL_218:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v53 + 1736));
        return v14;
      case 0x35u:
        v73 = **(_QWORD **)(v13 - 16);
        v74 = v144;
        v75 = Timeout;
        v76 = a6;
        v77 = a9;
        v140 = LowAddress;
        v139 = HighAddress;
        if ( KeGetCurrentIrql() > 2u )
        {
          if ( a9 )
            *a9 = 0LL;
          return (unsigned int)-1056964600;
        }
        if ( !v143 )
        {
          v81 = *(_QWORD **)(v73 + 5088);
          if ( v81 )
          {
            v82 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    *v81,
                    v144,
                    Timeout,
                    a6,
                    (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                    (PHYSICAL_ADDRESS)HighAddress.QuadPart,
                    a9);
            return (unsigned int)RaidNtStatusToStorStatus(v82);
          }
          return (unsigned int)-1056964601;
        }
        if ( v143->Group == 1 && *(_DWORD *)&v143[1] >= 4u )
        {
          v135 = LOBYTE(v143[2].Group);
          *(_WORD *)((char *)&v135 + 1) = HIBYTE(v143[2].Group);
          BYTE2(v135) = v143[2].Number;
          v78 = RaidAdapterFindUnit(v73, v135);
          v79 = v78;
          if ( v78 )
          {
            if ( RaidUnitCheckAndAcquirePoFx(v78) )
            {
              v80 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                      **(_QWORD **)(v79 + 1744),
                      v74,
                      v75,
                      v76,
                      (PHYSICAL_ADDRESS)v140.QuadPart,
                      (PHYSICAL_ADDRESS)v139.QuadPart,
                      v77);
              v14 = RaidNtStatusToStorStatus(v80);
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v79 + 1736));
              return v14;
            }
            return (unsigned int)-1056964601;
          }
        }
        return (unsigned int)-1056964602;
      case 0x36u:
        return (unsigned int)StorpFlushDataBufferMdl(v16, v143);
      case 0x37u:
        v98 = v143;
        v99 = v144;
        v100 = Timeout;
        v101 = **(_QWORD **)(v13 - 16);
        if ( !Timeout )
          return (unsigned int)-1056964602;
        if ( !v101 )
          return (unsigned int)-1056964602;
        Timeout->Relationship = RelationProcessorCore;
        if ( v98 )
        {
          if ( v98->Group != 1 )
            return (unsigned int)-1056964602;
          if ( *(_DWORD *)&v98[1] < 4u )
            return (unsigned int)-1056964602;
          v136 = LOBYTE(v98[2].Group);
          *(_WORD *)((char *)&v136 + 1) = HIBYTE(v98[2].Group);
          BYTE2(v136) = v98[2].Number;
          if ( !RaidAdapterFindUnit(v101, v136) )
            return (unsigned int)-1056964602;
        }
        v102 = v99->Mask - 0x481F895FDCAF9C10LL;
        if ( v99->Mask == 0x481F895FDCAF9C10LL )
          v102 = *(_QWORD *)&v99->Group - 0x3356F5D2CED492A4LL;
        if ( v102 )
        {
          v103 = v99->Mask - 0x444B2B37D52CE820LL;
          if ( v99->Mask == 0x444B2B37D52CE820LL )
            v103 = *(_QWORD *)&v99->Group - 0x7BD091E5920033A6LL;
          if ( v103 )
          {
            v104 = v99->Mask - 0x48E8F89B2B9443ACLL;
            if ( v99->Mask == 0x48E8F89B2B9443ACLL )
              v104 = *(_QWORD *)&v99->Group - 0x5AFD6EC9B62C92B2LL;
            if ( !v104 )
            {
              v14 = 0;
              v100->Relationship = (unsigned __int8)ExIsSoftBoot();
            }
          }
          else
          {
            v100->Relationship = RelationNumaNode;
            return 0;
          }
        }
        else
        {
          v14 = 0;
          v100->Relationship = (unsigned __int8)g_InWinPE;
        }
        return v14;
      case 0x38u:
        v34 = v144;
        if ( !v143 || !v144 )
          return (unsigned int)-1056964602;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v143);
        LODWORD(v34->Mask) = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber == -1 )
          return (unsigned int)-1056964602;
        return v11;
      case 0x39u:
        v83 = (unsigned int)v144;
        if ( v143 )
          return 3238002694LL;
        v84 = **(_QWORD **)(v13 - 16);
        if ( !v84 )
          return (unsigned int)-1056964602;
        v85 = *(_QWORD **)(v84 + 5088);
        if ( !v85 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v84 + 108) & 0x40) != 0 )
          return (unsigned int)-1056964607;
        *(_DWORD *)(v84 + 5104) = (_DWORD)v144;
        PoFxSetDeviceIdleTimeout(*v85, 10000 * v83);
        if ( !StorEtwLoggingEnabled || (byte_1C0068841 & 1) == 0 )
          return 0;
        McTemplateK0pqqq_EtwWriteTransfer(
          v86,
          (unsigned int)&EventAdapterIdleTimeoutSet,
          v87,
          **(_QWORD **)(v84 + 5088),
          *(_DWORD *)(v84 + 56),
          v83,
          *(_DWORD *)(v84 + 5104));
        return 0;
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
        return v14;
      case 0x3Du:
        if ( !v143 )
          return (unsigned int)-1056964602;
        v14 = 0;
        LOBYTE(v143->Group) = g_OSisUpgrade;
        return v14;
      case 0x3Eu:
        LOBYTE(v19) = 1;
        return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, v19, &v143);
      case 0x3Fu:
        return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v143);
      case 0x40u:
        v110 = **(_QWORD **)(v13 - 16);
        if ( !v110 || (unsigned int)v143 >= 0x14 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v110 + 552) & 1) == 0 )
          return (unsigned int)-1056964607;
        *(_DWORD *)(v110 + 4420) = (_DWORD)v143;
        return 0;
      case 0x41u:
        v88 = (unsigned int)a6;
        v89 = LowAddress;
        if ( v143 )
          return 3238002694LL;
        v90 = **(_QWORD **)(v13 - 16);
        if ( !v90 )
          return 3238002694LL;
        v91 = *(_QWORD *)(v90 + 5088);
        if ( !v91 || *(_BYTE *)(v91 + 28) )
          return 3238002689LL;
        LogicalProcessorRelationship = RaidRegisterPerfStates(
                                         *(_QWORD *)(v90 + 8),
                                         (_DWORD)v144,
                                         (_DWORD)Timeout,
                                         (_DWORD)a6,
                                         LowAddress.QuadPart,
                                         *(_QWORD *)v91);
        if ( LogicalProcessorRelationship < 0 )
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
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
        return 0;
      case 0x42u:
        if ( v143 || (_DWORD)Timeout )
          return 3238002694LL;
        v92 = *(_QWORD *)(v13 - 16);
        if ( !*(_QWORD *)v92 )
          return v14;
        v93 = *(__int64 **)(*(_QWORD *)v92 + 5088LL);
        if ( !v93 )
          return v14;
        v94 = KeGetCurrentIrql();
        v141 = 0LL;
        v95 = *((unsigned __int8 *)v93 + 28);
        if ( !(_BYTE)v95 || (unsigned int)a6 >= v95 )
          return 3238002694LL;
        LODWORD(v141) = (_DWORD)a6;
        v96 = 2LL;
        DWORD2(v141) = LowAddress.LowPart;
        v97 = *v93;
        if ( v94 < 2u )
          v96 = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
          v97,
          v96,
          (unsigned int)v144,
          &v141,
          (PHYSICAL_ADDRESS)HighAddress.QuadPart);
        return 0;
      case 0x43u:
        if ( KeGetCurrentIrql() )
          return 3238002696LL;
        v105 = v144;
        v14 = -1056964602;
        v106 = v143;
        if ( !v144 )
          return v14;
        LOBYTE(v144->Mask) = 0;
        v107 = **(_QWORD **)(a2 - 16);
        if ( !v107 )
          return v14;
        if ( v106 )
        {
          if ( v106->Group != 1 )
            return v14;
          if ( *(_DWORD *)&v106[1] < 4u )
            return v14;
          LOWORD(v137) = v106[2].Group;
          HIWORD(v137) = v106[2].Number;
          v108 = RaidAdapterFindUnit(v107, v137);
          if ( !v108 )
            return v14;
          v109 = *(struct _DEVICE_OBJECT **)(v108 + 8);
        }
        else
        {
          v109 = *(struct _DEVICE_OBJECT **)(v107 + 8);
        }
        if ( v109 )
        {
          LogicalProcessorRelationship = RaidGetD3ColdInterface(v109);
          if ( LogicalProcessorRelationship < 0 )
          {
            return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
          }
          else
          {
            LOBYTE(v105->Mask) = RaidGetD3ColdCapability(0LL);
            return 0;
          }
        }
        return v14;
      case 0x44u:
        if ( v143 )
          return (unsigned int)-1056964601;
        return (unsigned int)RaidInitializeRpmb(v13, v144);
      case 0x45u:
        return (unsigned int)StorpAllocateHostMemoryBuffer(
                               v13,
                               (int)v143,
                               (int)v144,
                               (int)Timeout,
                               (int)a6,
                               LowAddress,
                               HighAddress,
                               (__int64)a9,
                               a10,
                               a11);
      case 0x46u:
        return (unsigned int)StorpFreeHostMemoryBuffer(v13);
      case 0x47u:
        v22 = **(_QWORD **)(v13 - 16);
        if ( !v22 )
          return (unsigned int)-1056964602;
        if ( !*(_BYTE *)(v22 + 508) )
          return (unsigned int)-1056964601;
        if ( !v143 || !v144 )
          return (unsigned int)-1056964602;
        if ( v143->Number == 40 )
        {
          v24 = *(_LIST_ENTRY **)&v143[20].Group;
        }
        else
        {
          v23 = *(_LIST_ENTRY **)&v143[12].Group;
          if ( !v23 || LODWORD(v23->Flink) != 523124044 )
            return (unsigned int)-1056964602;
          v24 = v23[11].Flink;
        }
        if ( !v24 )
          return (unsigned int)-1056964602;
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !(_DWORD)Timeout )
          return 0;
        v25 = IoPropagateIrpExtension(v24, v144);
        return (unsigned int)RaidNtStatusToStorStatus(v25);
      case 0x48u:
        v111 = Timeout;
        *(_QWORD *)&v111->Relationship = ExInterlockedInsertHeadList(
                                           (PLIST_ENTRY)v143,
                                           (PLIST_ENTRY)v144,
                                           (PKSPIN_LOCK)a6);
        return 0;
      case 0x49u:
        v112 = Timeout;
        *(_QWORD *)&v112->Relationship = ExInterlockedInsertTailList(
                                           (PLIST_ENTRY)v143,
                                           (PLIST_ENTRY)v144,
                                           (PKSPIN_LOCK)a6);
        return 0;
      case 0x4Au:
        v113 = v144;
        v113->Mask = (unsigned __int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)v143, (PKSPIN_LOCK)Timeout);
        return 0;
      case 0x4Bu:
        KeInitializeSpinLock((PKSPIN_LOCK)&v143->Group);
        return 0;
      case 0x4Cu:
        return (unsigned int)StorpGetPfns(
                               v13,
                               (_DWORD)v143,
                               (_DWORD)v144,
                               (_DWORD)Timeout,
                               (__int64)a6,
                               LowAddress.QuadPart);
      case 0x4Du:
        if ( !v143 || !**(_QWORD **)(v13 - 16) )
          return (unsigned int)-1056964602;
        return (unsigned int)RaidInitializeCryptoEngine();
      case 0x4Eu:
        v114 = v144;
        if ( !v143 || !v144 )
          return (unsigned int)-1056964602;
        if ( v143->Number == 40 )
          v115 = *(_LIST_ENTRY **)&v143[24].Group;
        else
          v115 = *(_LIST_ENTRY **)&v143[12].Group;
        v14 = 0;
        LODWORD(v144->Mask) = v115[49].Flink->Flink;
        HIDWORD(v114->Mask) = HIDWORD(v115[49].Flink->Flink);
        *(_DWORD *)&v114->Group = v115[49].Flink->Blink;
        v114[1].Mask = (unsigned __int64)v115[49].Flink[1].Flink;
        return v14;
      case 0x4Fu:
        if ( !v144 )
          return (unsigned int)-1056964602;
        v116 = v144[3].Mask;
        if ( v116 > 0x1000 )
          return (unsigned int)-1056964598;
        if ( v116 && !*(_QWORD *)&v144[3].Group || *(_QWORD *)&v144[3].Group && !v116 )
          return (unsigned int)-1056964602;
        v117 = **(_QWORD **)(v13 - 16);
        if ( !v117 )
          return 0;
        StorpTelemetryMiniportEvent(v117, v143, v144, 0LL);
        return 0;
      case 0x50u:
        v120 = **(_QWORD **)(v13 - 16);
        if ( !v120 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v120 + 104) & 0x10) == 0 )
          return (unsigned int)-1056964601;
        v14 = 0;
        *(_DWORD *)(v120 + 516) = (_DWORD)v143;
        return v14;
      case 0x51u:
        if ( !(_DWORD)v143 )
          return 0;
        StorDelayExecution((ULONG)v143);
        return 0;
      case 0x52u:
        return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNodeEx(
                               v13,
                               (_DWORD)v143,
                               (_DWORD)v144,
                               (_DWORD)Timeout,
                               (__int64)a6,
                               LowAddress.LowPart,
                               HighAddress.LowPart,
                               (__int64)a9,
                               a10);
      case 0x53u:
        return (unsigned int)StorpFreeContiguousMemorySpecifyCacheEx(v13, v143, v144, (unsigned int)Timeout, a6);
      case 0x54u:
        v121 = (int)v144;
        v122 = **(_QWORD **)(v13 - 16);
        if ( !v122 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v122 + 104) & 0x10) == 0 )
          return (unsigned int)-1056964601;
        v14 = 0;
        *(_DWORD *)(v122 + 516) = (_DWORD)v143;
        *(_DWORD *)(v122 + 520) = v121;
        return v14;
      case 0x55u:
      case 0x56u:
      case 0x57u:
        return (unsigned int)StorEtwMiniportEventProxy(v13, a1, &v143);
      case 0x58u:
        v14 = 0;
        v123 = Timeout;
        Timer = ExAllocateTimer(v143, v144, 4LL, a4);
        *(_QWORD *)&v123->Relationship = Timer;
        if ( Timer )
          return v14;
        return (unsigned int)-1056964607;
      case 0x59u:
        QuadPart = (_BYTE *)LowAddress.QuadPart;
        if ( !LowAddress.QuadPart )
          return (unsigned int)-1056964602;
        v14 = 0;
        *QuadPart = ExSetTimer(v143, v144, Timeout, a6);
        return v14;
      case 0x5Au:
        v126 = Timeout;
        if ( !Timeout )
          return (unsigned int)-1056964602;
        v14 = 0;
        v127 = ExCancelTimer(v143, v144);
        LOBYTE(v126->Relationship) = v127;
        if ( !v127 )
          return (unsigned int)-1056964607;
        return v14;
      case 0x5Bu:
        v128 = (_BYTE *)LowAddress.QuadPart;
        if ( !LowAddress.QuadPart )
          return (unsigned int)-1056964602;
        v14 = 0;
        *v128 = ExDeleteTimer(v143, (unsigned __int8)v144, (unsigned __int8)Timeout, a6);
        return v14;
      case 0x5Cu:
        v14 = -1056964602;
        if ( v143 )
        {
          LockArray_high = (struct _PROCESSOR_NUMBER)HIDWORD(KeGetPcr()[1].LockArray);
          *v143 = LockArray_high;
          if ( LockArray_high == -1 )
            return (unsigned int)-1056964602;
          return v11;
        }
        return v14;
      case 0x5Du:
        return StorAcquireSpinLockEx(v13, (unsigned int)v143, v144, Timeout);
      case 0x5Eu:
        v37 = v143;
        if ( !v143 )
          return (unsigned int)-1056964602;
        *v37 = (struct _PROCESSOR_NUMBER)KeQueryActiveProcessorCountEx(0xFFFFu);
        return 0;
      case 0x5Fu:
        v129 = v144;
        if ( !v143 || !v144 )
          return (unsigned int)-1056964602;
        v14 = 0;
        LOBYTE(v129->Mask) = KeRemoveQueueDpc((PRKDPC)v143);
        return v14;
      case 0x60u:
        if ( !v144 )
          return (unsigned int)-1056964602;
        v118 = v144[3].Mask;
        if ( v118 > 0x1000 )
          return (unsigned int)-1056964598;
        if ( v118 && !*(_QWORD *)&v144[3].Group || *(_QWORD *)&v144[3].Group && !v118 )
          return (unsigned int)-1056964602;
        v119 = **(_QWORD **)(v13 - 16);
        if ( v119 )
        {
          StorpTelemetryMiniportEvent(v119, v143, v144, (unsigned int)Timeout);
          return 0;
        }
        else
        {
          return 0;
        }
      case 0x61u:
        if ( (_DWORD)v143 || !v144 )
          return (unsigned int)-1056964602;
        v14 = 0;
        LOBYTE(v144->Mask) = StorageD3InModernStandbyEnabled;
        return v14;
      case 0x62u:
        if ( !Timeout || !LowAddress.QuadPart || !(_DWORD)a6 )
          return (unsigned int)-1056964602;
        return (unsigned int)StorEtwMiniportLogError(
                               v13,
                               (_DWORD)v143,
                               (_DWORD)v144,
                               (_DWORD)Timeout,
                               (_DWORD)a6,
                               LowAddress.QuadPart);
      case 0x63u:
        if ( !v143 )
          return (unsigned int)-1056964602;
        KeInitializeEvent((PRKEVENT)v143, (EVENT_TYPE)v144, (BOOLEAN)Timeout);
        return 0;
      case 0x64u:
        if ( !Timeout || *(_QWORD *)&Timeout->Relationship )
        {
          if ( KeGetCurrentIrql() > 1u )
            return 3238002696LL;
        }
        else if ( KeGetCurrentIrql() > 2u )
        {
          return 3238002696LL;
        }
        if ( v143 )
        {
          v14 = -1056964607;
          if ( KeWaitForSingleObject(v143, Executive, 0, (BOOLEAN)v144, (PLARGE_INTEGER)Timeout) >= 0 )
            return 0;
          return v14;
        }
        return (unsigned int)-1056964602;
      case 0x65u:
        if ( KeGetCurrentIrql() > 2u )
          return 3238002696LL;
        if ( !v143 )
          return (unsigned int)-1056964602;
        KeSetEvent((PRKEVENT)v143, 0, 0);
        return 0;
      case 0x66u:
        LogicalProcessorRelationship = StorReset(v13, (unsigned int)v143);
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      case 0x67u:
        if ( !v144 )
          return (unsigned int)-1056964602;
        if ( (_DWORD)v143 != 1 )
          return (unsigned int)-1056964602;
        v130 = **(_QWORD **)(v13 - 16);
        if ( !v130 )
          return (unsigned int)-1056964602;
        v14 = -1056964607;
        if ( (int)RaMiniportSaveFeatureList(v130 + 304) >= 0 )
          return 0;
        return v14;
      default:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids, a1);
        }
        return v14;
    }
  }
  return 3238002694LL;
}
