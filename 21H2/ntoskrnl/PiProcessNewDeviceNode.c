/*
 * XREFs of PiProcessNewDeviceNode @ 0x140744650
 * Callers:
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036F394 (PpMarkDeviceStackExtensionFlag.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PnpIrpDeviceEnumerated @ 0x14037F3EC (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14050DAA0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14050DB04 (McTemplateK0pz_EtwWriteTransfer.c)
 *     PpvUtilFailDriver @ 0x140510320 (PpvUtilFailDriver.c)
 *     PnpFindAlternateStringData @ 0x14061065C (PnpFindAlternateStringData.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140735D1C (PiBuildDeviceNodeInstancePath.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     PpDevCfgProcessDevice @ 0x140739DE8 (PpDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073A478 (PpDevCfgProcessDeviceOperations.c)
 *     PnpSaveDeviceCapabilities @ 0x140744018 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1407441D0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140746C34 (PipClearDevNodeFlags.c)
 *     PnpQueryID @ 0x140747310 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x140747410 (PnpIrpQueryID.c)
 *     PiUpdateDevicePanel @ 0x140748454 (PiUpdateDevicePanel.c)
 *     PipClearDevNodeUserFlags @ 0x140749D74 (PipClearDevNodeUserFlags.c)
 *     PnpSetPlugPlayEvent @ 0x14074B1A8 (PnpSetPlugPlayEvent.c)
 *     PpIrpQueryCapabilities @ 0x14074B5C8 (PpIrpQueryCapabilities.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14074B654 (PnpNewDeviceNodeDependencyCheck.c)
 *     PpDeviceRegistration @ 0x14074BF20 (PpDeviceRegistration.c)
 *     PipSetDevNodeUserFlags @ 0x14074C4EC (PipSetDevNodeUserFlags.c)
 *     PiCreateDeviceInstanceKey @ 0x14074CCD4 (PiCreateDeviceInstanceKey.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14074EC20 (PnpClearDeviceTemporaryProperties.c)
 *     PiQueryAndAllocateBootResources @ 0x14075044C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750D54 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752D80 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140752DDC (PnpIsDeviceInstanceEnabled.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075912C (PiDcUpdateDeviceContainerMembership.c)
 *     KseAddHardwareId @ 0x14075F85C (KseAddHardwareId.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407640C0 (PiQueryRemovableDeviceOverride.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407657A0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x1407658E4 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 *     PnpCheckDeviceIdsChanged @ 0x14076A848 (PnpCheckDeviceIdsChanged.c)
 *     PnpQueryDeviceText @ 0x14076AD30 (PnpQueryDeviceText.c)
 *     PnpGenerateDeviceIdsHash @ 0x14076B594 (PnpGenerateDeviceIdsHash.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     PnpQueryBusInformation @ 0x14076CC44 (PnpQueryBusInformation.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14076DB14 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14076E6E8 (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x14076EC74 (PnpInitializeSessionId.c)
 *     PnpDisableDevice @ 0x1408A1EEC (PnpDisableDevice.c)
 *     PnpLogDuplicateDevice @ 0x1408A29A0 (PnpLogDuplicateDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1408A69C8 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1408AA9D8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x1408AB590 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x1408AC1AC (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1408B1C74 (PnpTraceDockDeviceEnumeration.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(__int64 MaxDataSize)
{
  __int64 v2; // rcx
  int v3; // r13d
  HANDLE v4; // r12
  struct _DEVICE_OBJECT *v5; // r15
  int v6; // eax
  wchar_t *v7; // rax
  int Capabilities; // ebx
  char v9; // r14
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  struct _DEVICE_OBJECT *v21; // rax
  ULONG_PTR v22; // rbx
  unsigned int v23; // esi
  struct _KTHREAD *v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // r14d
  int v29; // eax
  PVOID v30; // rsi
  WCHAR *v31; // rbx
  __int64 v32; // r8
  HANDLE v33; // rdx
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rax
  HANDLE v37; // rsi
  PVOID v38; // r12
  PVOID v39; // r13
  unsigned int v40; // r14d
  int v41; // eax
  char v42; // bl
  int v43; // eax
  unsigned int v44; // r14d
  __int64 v45; // rdx
  PVOID v46; // r14
  int AlternateStringData; // eax
  unsigned int v48; // ebx
  int DeviceLocationStrings; // eax
  int v50; // eax
  unsigned int v51; // ebx
  __int64 v52; // r8
  struct _KTHREAD *v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  PVOID v58; // rcx
  _QWORD *v60; // rcx
  PVOID v61; // rbx
  __int64 v62; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v64; // edx
  int FailedInstallProblemStatus; // r8d
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // esi
  bool v71; // zf
  int v72; // edx
  int v73; // r8d
  unsigned int v74; // eax
  int v75; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v79; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  _WORD *v81; // rax
  __int64 v82; // rcx
  _WORD *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  _WORD *v86; // rcx
  __int64 v87; // rcx
  unsigned __int16 *v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  _WORD *v92; // rcx
  __int64 v93; // rcx
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // edx
  char v98; // al
  unsigned int v99; // eax
  int v100; // ecx
  unsigned int v101; // eax
  int v102; // ecx
  int v103; // eax
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  bool v106; // [rsp+58h] [rbp-B0h]
  _BYTE v107[3]; // [rsp+59h] [rbp-AFh] BYREF
  unsigned int v108; // [rsp+5Ch] [rbp-ACh] BYREF
  int v109; // [rsp+60h] [rbp-A8h] BYREF
  int v110; // [rsp+64h] [rbp-A4h]
  __int64 v111; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  int v113; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v114; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v115; // [rsp+80h] [rbp-88h]
  int v116; // [rsp+84h] [rbp-84h] BYREF
  int v117; // [rsp+88h] [rbp-80h] BYREF
  int v118; // [rsp+8Ch] [rbp-7Ch]
  PCWSTR SourceString; // [rsp+90h] [rbp-78h] BYREF
  PVOID v120; // [rsp+98h] [rbp-70h] BYREF
  PVOID v121; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v122; // [rsp+A8h] [rbp-60h] BYREF
  int v123; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v124; // [rsp+B4h] [rbp-54h] BYREF
  PVOID v125; // [rsp+B8h] [rbp-50h] BYREF
  PVOID P; // [rsp+C0h] [rbp-48h] BYREF
  WCHAR *v127; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v128; // [rsp+D0h] [rbp-38h]
  int v129; // [rsp+D8h] [rbp-30h] BYREF
  int v130; // [rsp+DCh] [rbp-2Ch] BYREF
  __int64 v131; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v132; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t *Str; // [rsp+F0h] [rbp-18h] BYREF
  const WCHAR *v134; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v135; // [rsp+100h] [rbp-8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+0h] BYREF
  __int64 v137; // [rsp+118h] [rbp+10h] BYREF
  __int128 v138; // [rsp+120h] [rbp+18h] BYREF
  __int128 v139; // [rsp+130h] [rbp+28h]
  void (__fastcall *v140)(_QWORD, __int64 *); // [rsp+140h] [rbp+38h]
  _DWORD v141[16]; // [rsp+148h] [rbp+40h] BYREF
  GUID Guid; // [rsp+188h] [rbp+80h] BYREF

  SourceString = 0LL;
  memset(v141, 0, sizeof(v141));
  Guid = 0LL;
  v121 = 0LL;
  DestinationString = 0LL;
  v114 = 0;
  v125 = 0LL;
  v135 = 0LL;
  P = 0LL;
  v124 = 0;
  v120 = 0LL;
  v130 = 0;
  v132 = 0LL;
  v134 = 0LL;
  v113 = 0;
  v123 = 0;
  LOBYTE(v109) = 0;
  v127 = 0LL;
  if ( (byte_140C1327B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Start, 0LL, MaxDataSize);
  LOBYTE(v115) = 0;
  v106 = 0;
  v118 = 0;
  v3 = 0;
  v110 = 0;
  v4 = 0LL;
  v5 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v137 = MEMORY[0xFFFFF78000000014];
  v108 = 0;
  v116 = 0;
  v107[0] = 0;
  Handle = 0LL;
  v111 = 0LL;
  PiPnpRtlBeginOperation(&v135);
  PipClearDevNodeFlags(MaxDataSize, 0x2000000LL);
  Str = 0LL;
  v129 = 0;
  v128 = 0LL;
  v122 = 0LL;
  v6 = PnpQueryID(MaxDataSize, 0LL, &Str, &v129);
  if ( v6 < 0 )
  {
    v70 = v6;
    if ( v6 == -1073479624 )
      v70 = -1073741823;
    v110 = v70;
  }
  else
  {
    v128 = Str;
    v7 = wcschr(Str, 0x5Cu);
    *v7 = 0;
    v122 = v7 + 1;
  }
  Capabilities = PpIrpQueryCapabilities(v5, v141);
  PipClearDevNodeUserFlags(MaxDataSize, 2LL);
  v9 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v141[1] & 0x20000) != 0 )
      PipSetDevNodeUserFlags(MaxDataSize, 2LL);
    if ( (v141[1] & 0x40) != 0 )
      v9 = 1;
  }
  if ( (v141[1] & 0x20) != 0 )
  {
    if ( *(_DWORD *)(MaxDataSize + 568) == 4 )
      PpProfileCancelTransitioningDock(MaxDataSize);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(MaxDataSize + 568) = v10;
  v131 = -1LL;
  v140 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  if ( (int)PnpQueryInterface(v5, 0LL, &v138) >= 0 )
  {
    if ( v140 )
    {
      if ( WORD1(v138) == 1 )
      {
        v140(*((_QWORD *)&v138 + 1), &v131);
        if ( *((_QWORD *)&v139 + 1) )
          (*((void (__fastcall **)(_QWORD))&v139 + 1))(*((_QWORD *)&v138 + 1));
      }
    }
  }
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 0LL, v11, &v125);
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 1LL, v12, &v132);
  v13 = PnpQueryID(MaxDataSize, 3LL, &v120, &v130);
  GloballyUniqueId = v13;
  if ( v9 )
  {
    if ( v13 == -1073741637 )
    {
      PipSetDevNodeProblem(MaxDataSize, 9, -1073741637);
      PipSetDevNodeFlags(*(_QWORD *)(MaxDataSize + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(MaxDataSize + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 9 )
  {
    v60 = *(_QWORD **)(MaxDataSize + 16);
    if ( v60 != IopRootDeviceNode )
    {
      v15 = (WCHAR *)v120;
      goto LABEL_136;
    }
  }
  v15 = (WCHAR *)v120;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v71 = (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0;
      v110 = GloballyUniqueId;
      if ( v71 || *(_DWORD *)(MaxDataSize + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v72 = 3;
          v73 = -1073741670;
        }
        else
        {
          v73 = GloballyUniqueId;
          v72 = 19;
        }
        PipSetDevNodeProblem(MaxDataSize, v72, v73);
      }
    }
    v18 = PiBuildDeviceNodeInstancePath(MaxDataSize, (__int64)v128, (__int64)v122, (__int64)v15);
    if ( v18 >= 0 )
    {
      if ( (byte_140C1327B & 8) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v17, v16, v19, MaxDataSize, *(_QWORD *)(MaxDataSize + 48));
      v18 = PiCreateDeviceInstanceKey(MaxDataSize, &Handle, (char *)&v111 + 4);
      v20 = 0;
      if ( v18 < 0 )
      {
        PipSetDevNodeProblem(MaxDataSize, 19, v18);
        v3 = HIDWORD(v111);
        v4 = Handle;
      }
      else
      {
        v3 = HIDWORD(v111);
        v4 = Handle;
        if ( HIDWORD(v111) == 1 )
          v20 = 0x20000;
        LODWORD(v111) = v20;
      }
    }
    if ( v18 >= 0 )
      v18 = v110;
    v110 = v18;
    PpMarkDeviceStackExtensionFlag((__int64)v5, 16, 1);
    PipSetDevNodeState(MaxDataSize, 770);
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 )
    {
      v74 = *(_DWORD *)(MaxDataSize + 404);
      if ( v74 <= 0x13 )
      {
        v75 = 524808;
        if ( _bittest(&v75, v74) )
          break;
      }
    }
    if ( v3 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v4 = Handle;
      if ( Handle && v125 )
      {
        v68 = -1LL;
        do
          ++v68;
        while ( *((_WORD *)v125 + v68) );
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(MaxDataSize + 48),
          (__int64)Handle,
          1u,
          1u,
          (__int64)v125,
          2 * v68 + 2,
          v111);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v3 = HIDWORD(v111);
      goto LABEL_31;
    }
    v21 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(MaxDataSize + 40, 0x65706E50u);
    v22 = (ULONG_PTR)v21;
    if ( !v21 )
      goto LABEL_30;
    if ( v21 == v5 )
    {
      ObfDereferenceObjectWithTag(v21, 0x65706E50u);
LABEL_30:
      v18 = v110;
LABEL_31:
      if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 && *(_DWORD *)(MaxDataSize + 404) == 42 )
        PipClearDevNodeProblem(MaxDataSize);
      break;
    }
    if ( !v9 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock((ULONG)v5, (PVOID)v5->Size);
      DriverObject = v5->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
        p_DriverName = &v5->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
          IoAddTriageDumpDataBlock(
            (ULONG)v5->DriverObject->DriverName.Buffer,
            (PVOID)v5->DriverObject->DriverName.Length);
        }
      }
      DeviceNode = (char *)v5->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v79 = (unsigned __int16 *)(DeviceNode + 40);
        IoAddTriageDumpDataBlock((ULONG)DeviceNode, (PVOID)0x310);
        if ( *v79 )
        {
          IoAddTriageDumpDataBlock((ULONG)v79, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v79 + 1), (PVOID)*v79);
        }
        DeviceObjectExtension = v5->DeviceObjectExtension;
        v81 = DeviceObjectExtension->DeviceNode;
        if ( v81[28] )
        {
          IoAddTriageDumpDataBlock((_DWORD)v81 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)v5->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = v5->DeviceObjectExtension;
        }
        v82 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v82 )
        {
          v83 = (_WORD *)(v82 + 56);
          if ( *v83 )
          {
            IoAddTriageDumpDataBlock((ULONG)v83, (PVOID)2);
            v84 = *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v84 + 64), (PVOID)*(unsigned __int16 *)(v84 + 56));
          }
        }
      }
      IoAddTriageDumpDataBlock(v22, (PVOID)*(unsigned __int16 *)(v22 + 2));
      v85 = *(_QWORD *)(v22 + 8);
      if ( v85 )
      {
        IoAddTriageDumpDataBlock(v85, (PVOID)(unsigned int)*(__int16 *)(v85 + 2));
        v86 = (_WORD *)(*(_QWORD *)(v22 + 8) + 56LL);
        if ( *v86 )
        {
          IoAddTriageDumpDataBlock((ULONG)v86, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v22 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v22 + 8) + 56LL));
        }
      }
      v87 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
      if ( v87 )
      {
        v88 = (unsigned __int16 *)(v87 + 40);
        IoAddTriageDumpDataBlock(v87, (PVOID)0x310);
        if ( *v88 )
        {
          IoAddTriageDumpDataBlock((ULONG)v88, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v88 + 1), (PVOID)*v88);
        }
        v89 = *(_QWORD *)(v22 + 312);
        v90 = *(_QWORD *)(v89 + 40);
        if ( *(_WORD *)(v90 + 56) )
        {
          IoAddTriageDumpDataBlock(v90 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL));
          v89 = *(_QWORD *)(v22 + 312);
        }
        v91 = *(_QWORD *)(*(_QWORD *)(v89 + 40) + 16LL);
        if ( v91 )
        {
          v92 = (_WORD *)(v91 + 56);
          if ( *v92 )
          {
            IoAddTriageDumpDataBlock((ULONG)v92, (PVOID)2);
            v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v93 + 64), (PVOID)*(unsigned __int16 *)(v93 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v5, v22, 0LL);
    }
    ZwClose(v4);
    v141[1] &= ~0x40u;
    Handle = 0LL;
    v4 = 0LL;
    v9 = 0;
    PipSetDevNodeProblem(MaxDataSize, 42, 0);
    PnpLogDuplicateDevice((PCWSTR)v128, v15);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL) == *(_QWORD *)(MaxDataSize + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v22, 0x65706E50u);
    v60 = *(_QWORD **)(MaxDataSize + 16);
LABEL_136:
    GloballyUniqueId = PipMakeGloballyUniqueId(v60[4], v15, &v127);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v15 = v127;
    v120 = v127;
  }
  if ( v4 )
  {
    if ( v3 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(MaxDataSize + 48), v4);
    v23 = v111;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 40LL) + 2,
      v111);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v137,
      8,
      v111);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v111);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v111);
  }
  else
  {
    v23 = v111;
  }
  if ( (v141[1] & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || (v94 = *(_DWORD *)(MaxDataSize + 404), v94 != 1) && v94 != 14 )
      PnpDisableDevice(MaxDataSize, 29LL);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0
    || (v95 = *(_DWORD *)(MaxDataSize + 404), v110 = v18, v95 != 9) && (v110 = v18, v95 != 3) && (v110 = v18, v95 != 19) )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v4 = Handle;
    if ( Handle && v132 )
    {
      v67 = -1LL;
      do
        ++v67;
      while ( *((_WORD *)v132 + v67) );
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        (__int64)Handle,
        0xEu,
        1u,
        (__int64)v132,
        2 * v67 + 2,
        v23);
    }
    v3 = HIDWORD(v111);
    PnpSaveDeviceCapabilities(MaxDataSize, v141, HIDWORD(v111) == 1);
    if ( v131 != -1 )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v131,
        8,
        v23);
    v25 = *(_QWORD *)(MaxDataSize + 48);
    v113 = 4;
    v106 = v3 == 1;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v25,
                (__int64)v4,
                11,
                (__int64)&v123,
                (__int64)&v108,
                (__int64)&v113,
                0) >= 0
      && v123 == 4
      && v113 == 4 )
    {
      v26 = v108;
      if ( (v108 & 0x20) == 0 )
      {
        if ( (v108 & 0x40) == 0 )
        {
LABEL_47:
          v27 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(MaxDataSize + 32), MaxDataSize + 40);
          v28 = v18;
          if ( v27 < 0 )
            v28 = v27;
          v110 = v28;
          if ( PnpBootMode )
          {
            *(_DWORD *)(MaxDataSize + 704) |= 0x1000u;
            v118 = 2;
          }
          else
          {
            v29 = (unsigned __int8)v115;
            if ( (v108 & 0x40000) != 0 )
              v29 = 1;
            v115 = v29;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          goto LABEL_54;
        }
        v64 = 28;
LABEL_147:
        if ( (v141[1] & 0x100) != 0 )
        {
          v69 = *(_QWORD *)(MaxDataSize + 48);
          v108 = v26 | 0x400;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v69, (__int64)v4, 0xBu, 4u, (__int64)&v108, 4u, v23);
        }
        else
        {
          if ( v64 == 28 )
          {
            FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(MaxDataSize + 48), v4);
            v64 = 28;
          }
          else
          {
            FailedInstallProblemStatus = 0;
          }
          PipSetDevNodeProblem(MaxDataSize, v64, FailedInstallProblemStatus);
        }
        goto LABEL_47;
      }
      v64 = 18;
      if ( (v108 & 1) != 0 )
        goto LABEL_147;
    }
    else
    {
      v26 = 0;
      v108 = 0;
      v64 = 1;
    }
    v106 = 1;
    goto LABEL_147;
  }
LABEL_54:
  PnpQueryID(MaxDataSize, 1LL, &P, &v124);
  v30 = P;
  KseAddHardwareId((PCWSTR)P);
  PnpQueryID(MaxDataSize, 2LL, &v121, &v114);
  PnpGenerateDeviceIdsHash(v30, v121, MaxDataSize + 684);
  PnpIrpQueryID(*(_QWORD *)(MaxDataSize + 32), 5LL, &SourceString);
  v31 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v31, 0);
      v31 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(MaxDataSize, v30, v121, &v109) >= 0 )
  {
    LOBYTE(v32) = v109;
  }
  else
  {
    if ( (v141[1] & 0x20) != 0 || (v141[1] & 0x40000) != 0 || (v141[1] & 0x10) == 0 )
      LOBYTE(v32) = 0;
    else
      v32 = 1LL;
    if ( v31 )
      goto LABEL_67;
  }
  v33 = 0LL;
  if ( v3 != 1 )
    v33 = v4;
  if ( (int)PipGenerateContainerID(MaxDataSize, v33, v32, v31, &v134) >= 0 )
  {
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    v31 = (WCHAR *)v134;
    SourceString = v134;
  }
LABEL_67:
  if ( !v31
    || (RtlInitUnicodeString(&DestinationString, v31),
        RtlGUIDFromString(&DestinationString, (GUID *)(MaxDataSize + 664)) < 0) )
  {
    *(_OWORD *)(MaxDataSize + 664) = 0LL;
  }
  v34 = KeGetCurrentThread();
  --v34->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(MaxDataSize, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(MaxDataSize + 48), Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v37 = Handle;
  v38 = v121;
  v39 = P;
  if ( Handle )
  {
    v40 = v124;
    if ( v106 || HIDWORD(v111) == 1 )
    {
      v42 = v107[0];
    }
    else
    {
      LOBYTE(BugCheckParameter4) = 1;
      v41 = PnpCheckDeviceIdsChanged(MaxDataSize, Handle, P, v124, BugCheckParameter4, v107);
      v42 = v107[0];
      if ( v41 < 0 )
        v42 = 0;
      v107[0] = v42;
      if ( !v42 )
      {
        LOBYTE(BugCheckParameter4a) = 0;
        v43 = PnpCheckDeviceIdsChanged(MaxDataSize, v37, v38, v114, BugCheckParameter4a, v107);
        v42 = v107[0];
        if ( v43 < 0 )
          v42 = 0;
      }
    }
    if ( v39 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        (__int64)v37,
        2u,
        7u,
        (__int64)v39,
        v40,
        v111);
    v44 = v111;
    if ( v38 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        (__int64)v37,
        3u,
        7u,
        (__int64)v38,
        v114,
        v111);
    if ( v42 || (_BYTE)v115 )
    {
      if ( v106 )
      {
        v97 = v108;
        v98 = v116;
      }
      else
      {
        v96 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(MaxDataSize + 48), v37, &v116);
        v97 = v108;
        if ( v96 < 0 )
        {
          v98 = 0;
        }
        else
        {
          v98 = v116;
          v97 = v116 | v108;
          v108 |= v116;
        }
      }
      if ( (v98 & 0x20) != 0 || (v97 & 0x40000) != 0 )
      {
        v108 = v97 & 0xFFFBFFFF;
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(MaxDataSize + 48),
          (__int64)v37,
          0xBu,
          4u,
          (__int64)&v108,
          4u,
          v44);
        LOBYTE(v97) = v108;
      }
      if ( (v97 & 0x20) != 0 )
      {
        v106 = 1;
        PipSetDevNodeProblem(MaxDataSize, 18, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v46 = v125;
  if ( v37 )
  {
    v122 = 0LL;
    AlternateStringData = 0;
    v117 = 0;
    v48 = 0;
    if ( v125 )
    {
      v62 = -1LL;
      do
        ++v62;
      while ( *((_WORD *)v125 + v62) );
      v48 = 2 * v62 + 2;
      AlternateStringData = PnpFindAlternateStringData(v125, v48, &v122, &v117);
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v46,
      v48,
      v111);
    DeviceLocationStrings = PnpGetDeviceLocationStrings(MaxDataSize, &v122, &v117);
    v45 = 0LL;
    if ( DeviceLocationStrings >= 0 )
    {
      v61 = v122;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v122,
        2 * v117,
        v111);
      ExFreePoolWithTag(v61, 0);
    }
  }
  PnpQueryBusInformation(MaxDataSize, v45);
  v50 = PiDmaGuardProcessNewDeviceNode(MaxDataSize);
  v51 = v110;
  if ( v50 < 0 )
    v51 = v50;
  if ( (v141[1] & 0x4000) == 0
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 14) )
  {
    if ( v106 )
    {
      v66 = v118;
      if ( HIDWORD(v111) == 1 )
        v66 = v118 | 1;
      PpDevCfgProcessDevice(MaxDataSize, (__int64)v37, v66);
    }
    else if ( v37 )
    {
      PpDevCfgProcessDeviceOperations(MaxDataSize, v37);
    }
  }
  PiQueryResourceRequirements(MaxDataSize);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0
    || (v99 = *(_DWORD *)(MaxDataSize + 404), v99 > 0x1D)
    || (v100 = 541606408, !_bittest(&v100, v99)) )
  {
    PnpIsDeviceInstanceEnabled(v37, MaxDataSize + 40, 1LL);
  }
  if ( v37 )
  {
    LOBYTE(v52) = HIDWORD(v111) == 1;
    PnpInitializeSessionId(MaxDataSize, v37, v52);
  }
  PiQueryAndAllocateBootResources(MaxDataSize);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0
    || (v101 = *(_DWORD *)(MaxDataSize + 404), v101 > 0x13)
    || (v102 = 524808, !_bittest(&v102, v101)) )
  {
    v53 = KeGetCurrentThread();
    --v53->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(MaxDataSize, v141, HIDWORD(v111) == 1);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(MaxDataSize);
    LOBYTE(v54) = 1;
    v55 = PpDeviceRegistration(MaxDataSize + 40, v54, MaxDataSize + 56, 0LL);
    if ( v55 < 0 )
      PipSetDevNodeProblem(MaxDataSize, 19, v55);
    v37 = Handle;
    v39 = P;
    v46 = v125;
    v38 = v121;
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || (v103 = *(_DWORD *)(MaxDataSize + 404), v103 != 9) && v103 != 3 )
  {
    PnpIrpDeviceEnumerated((int)v5);
    if ( v37 )
      PiUpdateDevicePanel(MaxDataSize, v37);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v56, *(_QWORD *)(MaxDataSize + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v57, *(_QWORD *)(MaxDataSize + 48), 14LL);
    PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, v5);
    PnpNewDeviceNodeDependencyCheck(MaxDataSize);
  }
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v37 )
    ZwClose(v37);
  if ( v120 )
    ExFreePoolWithTag(v120, 0);
  if ( v132 )
    ExFreePoolWithTag(v132, 0);
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  if ( v128 )
    ExFreePoolWithTag(v128, 0);
  v58 = v135;
  if ( v135 )
    PiPnpRtlEndOperation((PVOID **)v135);
  if ( (byte_140C1327B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)v58,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Stop,
      0LL,
      MaxDataSize);
  if ( *(_DWORD *)(MaxDataSize + 568) )
    PnpTraceDockDeviceEnumeration(MaxDataSize, v51);
  return v51;
}
