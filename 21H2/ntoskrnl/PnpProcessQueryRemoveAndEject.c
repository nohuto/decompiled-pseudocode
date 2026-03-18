/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x1407655BC
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x14076C3C0 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x1409404FC (PnpShutdownDevices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     PipAreDriversLoaded @ 0x1402DEADC (PipAreDriversLoaded.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PnpIsChainDereferenced @ 0x1403A55B8 (PnpIsChainDereferenced.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1406602DC (PiProcessQueryRemoveNoFdo.c)
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PiRestartRemovalRelations @ 0x1406EAC14 (PiRestartRemovalRelations.c)
 *     IoGetLegacyVetoList @ 0x140762AEC (IoGetLegacyVetoList.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x1407654EC (PiEventAreDeviceRelationsExcluded.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x14076550C (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PiCheckRemovalPreconditions @ 0x14076556C (PiCheckRemovalPreconditions.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140765A28 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiDetermineDeleteType @ 0x140765BA8 (PiDetermineDeleteType.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140765C60 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpResizeTargetDeviceBlock @ 0x140766100 (PnpResizeTargetDeviceBlock.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x1407663DC (PiEventBuildPdoList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14076651C (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140766640 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1407667B0 (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x140767600 (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x1407676B0 (PiEventAllocateVetoBuffer.c)
 *     PnpBuildRemovalRelationList @ 0x140767F88 (PnpBuildRemovalRelationList.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140810C28 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140810F90 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PiLogSurpriseRemoveEvent @ 0x140811518 (PiLogSurpriseRemoveEvent.c)
 *     IopRemoveDeviceRelationsFromList @ 0x140811574 (IopRemoveDeviceRelationsFromList.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x140945A9C (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14094FB70 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14094FBA0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14094FE24 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14094FF34 (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x140950530 (PnpFinalizeVetoedRemove.c)
 *     PnpTrackQueryRemoveDevices @ 0x140950DA4 (PnpTrackQueryRemoveDevices.c)
 *     IopEjectDevice @ 0x1409585A4 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x1409587F0 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x14095E428 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14095E4BC (PiProcessQueryAndCancelRemoval.c)
 *     PoGetLightestSystemStateForEject @ 0x14098943C (PoGetLightestSystemStateForEject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  PVOID *v3; // r12
  struct _DEVICE_OBJECT *v4; // r14
  unsigned int v5; // esi
  __int64 DeviceNode; // r15
  unsigned int v7; // eax
  __int64 v8; // r9
  int v9; // ebx
  __int64 VetoBuffer; // rax
  PVOID v11; // r14
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // r8
  int v20; // r9d
  PDEVICE_OBJECT v21; // rbx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  char v28; // al
  unsigned int *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rbx
  _QWORD *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  _DWORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 PendingEjectRelations; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rbx
  int LightestSystemStateForEject; // eax
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  PVOID v51; // [rsp+48h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp-29h] BYREF
  PVOID v53; // [rsp+58h] [rbp-21h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-19h]
  __int64 v55; // [rsp+68h] [rbp-11h] BYREF
  __int64 v56; // [rsp+70h] [rbp-9h] BYREF
  PVOID v57; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  char v60; // [rsp+E0h] [rbp+67h]
  char v61; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG_PTR v62; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v63; // [rsp+F8h] [rbp+7Fh] BYREF
  int v64; // [rsp+FCh] [rbp+83h]

  v1 = *a1;
  SourceString = 0LL;
  v2 = 0LL;
  v55 = 0LL;
  v3 = 0LL;
  v4 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v51 = 0LL;
  v5 = 7;
  v63 = 0;
  v61 = 0;
  v56 = 0LL;
  v53 = 0LL;
  LOBYTE(v62) = 0;
  P = 0LL;
  v57 = 0LL;
  DeviceObject = v4;
  DestinationString = 0LL;
  if ( v4 )
    DeviceNode = (__int64)v4->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  PpDevNodeLockTree(1LL);
  if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 789) <= 1 )
  {
    v9 = -1073741738;
    goto LABEL_42;
  }
  v7 = PiDetermineDeleteType(v1);
  v5 = v7;
  if ( v7 != 4 )
  {
    LOBYTE(v8) = 1;
    PnpRecordBlackboxPnpEventInformation(v1, v7, 0LL, v8);
  }
  v9 = PiCheckRemovalPreconditions(v5, v1);
  if ( v9 < 0 )
  {
LABEL_42:
    PpDevNodeUnlockTree(1LL);
    if ( v9 == -1073741738 )
      goto LABEL_56;
    goto LABEL_43;
  }
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(DeviceNode + 396) & 0x80000) != 0 )
    {
LABEL_41:
      v9 = 0;
      goto LABEL_42;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 568) - 3) <= 1 )
    {
      v28 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(DeviceNode + 560) & 0x10) == 0 )
      {
        v9 = -2147483608;
        v26 = DeviceNode + 40;
        v27 = 8LL;
        goto LABEL_63;
      }
      v28 = 1;
    }
    v9 = 0;
    if ( !v28 )
      goto LABEL_42;
  }
  if ( !v5 && !(unsigned int)PipAreDriversLoaded(DeviceNode) )
  {
    v9 = PiProcessQueryRemoveNoFdo(v1);
    goto LABEL_42;
  }
  VetoBuffer = PiEventAllocateVetoBuffer(v5);
  v3 = (PVOID *)VetoBuffer;
  if ( !VetoBuffer )
    goto LABEL_69;
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v53) < 0 )
    goto LABEL_71;
  v11 = v53;
  v9 = PiEventBuildPdoList((_DWORD)v53, v5, v1, (unsigned int)&v63, (__int64)&v51, (__int64)&v61, (__int64)&v62);
  if ( v9 < 0 )
    goto LABEL_128;
  v12 = PnpResizeTargetDeviceBlock(a1, v5);
  v1 = *a1;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_128;
  LOBYTE(v13) = PiEventAreDeviceRelationsExcluded(v5);
  v9 = PnpCompileDeviceInstancePaths(v14, v11, v13, &P);
  if ( v5 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v16, v11, &v57);
  if ( v9 < 0 )
  {
LABEL_128:
    IopFreeRelationList(v11);
    if ( v9 == -2147483608 )
      goto LABEL_42;
    v26 = 0LL;
    v27 = 0LL;
LABEL_63:
    PnpFinalizeVetoedRemove(v1, v27, v26);
    goto LABEL_42;
  }
  if ( v61 )
  {
    LOBYTE(v16) = v62;
    PpProfileBeginHardwareProfileTransition(v16);
    v32 = (int)(v63 - 1);
    if ( (int)(v63 - 1) >= 0 )
    {
      v33 = v51;
      do
      {
        v34 = v33[v32];
        if ( v34 )
          v35 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
        else
          v35 = 0LL;
        if ( *(_DWORD *)(v35 + 568) == 1 )
          PpProfileIncludeInHardwareProfileTransition(v35, 3LL);
        --v32;
      }
      while ( v32 >= 0 );
      v11 = v53;
    }
    if ( v5 == 4 )
    {
      if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v3) >= 0 && *(_DWORD *)v3 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v11);
        v37 = *(_DWORD **)(v1 + 48);
        if ( v37 )
          *v37 = *(_DWORD *)v3;
        if ( *(_QWORD *)(v1 + 56) )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
        }
        ExFreePoolWithTag((PVOID)SourceString, 0);
        SourceString = 0LL;
        goto LABEL_76;
      }
      LOBYTE(v36) = v62;
      if ( (int)PpProfileQueryHardwareProfileChange(v36, 0LL, v3, v3 + 1) >= 0 )
      {
LABEL_95:
        LOBYTE(v15) = 1;
        PnpTrackQueryRemoveDevices(v11, v15);
        v9 = PiProcessQueryAndCancelRemoval(v5, v1, (_DWORD)v11, v63, (__int64)v51, (__int64)v3, (__int64)&P);
        if ( v9 < 0 )
        {
          if ( v61 )
            PpProfileCancelHardwareProfileTransition();
          PnpTrackQueryRemoveDevices(v11, 0LL);
          IopFreeRelationList(v11);
          goto LABEL_42;
        }
        goto LABEL_20;
      }
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(v11);
LABEL_71:
      v30 = *(unsigned int *)v3;
      v29 = (unsigned int *)(v3 + 1);
      goto LABEL_72;
    }
  }
  if ( (v5 & 0xFFFFFFFB) == 0 )
    goto LABEL_95;
  if ( ((v5 - 3) & 0xFFFFFFFD) != 0 )
  {
LABEL_24:
    PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_DEVICE_REMOVE_PENDING, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  PiLogSurpriseRemoveEvent(v1, v5, v11);
  PnpDeleteLockedDeviceNodes((int)DeviceObject, (int)v11, 3, 0, 0, 0, 0LL, 0LL);
LABEL_20:
  if ( v5 != 3 )
    goto LABEL_24;
  v17 = v57;
  if ( v57 )
  {
    PnpNotifyUserModeDeviceRemoval(v1, v57, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
    ExFreePoolWithTag(v17, 0x4B706E50u);
  }
  PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
LABEL_25:
  v18 = v51;
  PiSendTargetDeviceRemoveCompleteNotification((_QWORD **)v51, v63);
  if ( (*(_DWORD *)(DeviceNode + 704) & 0x8000) != 0 && (*(_DWORD *)(DeviceNode + 396) & 0x10) != 0 )
    PnpFinalizeDeviceRemovalForReset(DeviceNode, v11);
  if ( ((v5 - 2) & 0xFFFFFFFC) == 0 && v5 != 4 )
  {
    LOBYTE(v19) = 1;
    PnpInvalidateRelationsInList(v11, v5, v19, 0LL);
    IopRemoveDeviceRelationsFromList(v11);
    if ( ((v5 - 3) & 0xFFFFFFFD) == 0 )
    {
      PiEventRemovalPostSurpriseRemove(v1, v5, &v53);
      PpDevNodeUnlockTree(1LL);
      PnpIsChainDereferenced(v18, v63, 0, 1u, 0LL);
      v9 = 0;
LABEL_43:
      if ( v5 != 4 )
      {
        if ( !v3 )
        {
          PnpRecordBlackboxPnpEventInformation(v1, v5, 0LL, 0LL);
          goto LABEL_48;
        }
        PnpRecordBlackboxPnpEventInformation(v1, v5, v3, 0LL);
        goto LABEL_46;
      }
LABEL_56:
      if ( !v3 )
        goto LABEL_48;
      goto LABEL_46;
    }
  }
  v21 = DeviceObject;
  if ( *(_DWORD *)(DeviceNode + 568) )
  {
    IopQueryDockRemovalInterface(DeviceObject, &v55);
    v2 = v55;
    if ( v55 )
      (*(void (__fastcall **)(_QWORD, __int64))(v55 + 32))(*(_QWORD *)(v55 + 8), 3LL);
  }
  if ( v5 )
  {
    if ( v5 != 4 )
    {
      LOBYTE(v20) = 0;
      goto LABEL_34;
    }
  }
  else
  {
    PipSetDevNodeFlags(DeviceNode, 0x2000000LL);
  }
  LOBYTE(v20) = 1;
LABEL_34:
  PnpDeleteLockedDeviceNodes((int)v21, (int)v11, 2, v20, *(_DWORD *)(v1 + 16), *(_DWORD *)(v1 + 20), 0LL, 0LL);
  v22 = *(_DWORD *)(DeviceNode + 560) >> 3;
  LOBYTE(v22) = (*(_DWORD *)(DeviceNode + 560) & 8) != 0;
  v23 = HIWORD(*(_DWORD *)(DeviceNode + 560)) & 1;
  LODWORD(v62) = v22;
  v60 = v23;
  if ( v5 != 4 )
  {
    PiRestartRemovalRelations(v1, (int)v11, (__int64)v21);
    PnpUnlinkDeviceRemovalRelations(v24, v11);
    if ( !v5 )
      PnpTrackQueryRemoveDevices(v11, 0LL);
    IopFreeRelationList(v11);
    if ( v5 == 2 )
    {
      PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
    }
    else if ( !v5
           && (*(_DWORD *)(v1 + 144) & 2) == 0
           && (*(_DWORD *)(DeviceNode + 396) & 0x2000) != 0
           && *(_DWORD *)(DeviceNode + 404) == 18 )
    {
      PipClearDevNodeProblem(DeviceNode);
      PnpRestartDeviceNode(DeviceNode);
      PnpRequestDeviceAction(*(PVOID *)(DeviceNode + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_39;
  }
  if ( !(_BYTE)v22 && !v23 )
  {
    PnpUnlinkDeviceRemovalRelations(v22, v11);
    PnpTrackQueryRemoveDevices(v11, 0LL);
    IopFreeRelationList(v11);
LABEL_39:
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
      (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
    }
    goto LABEL_41;
  }
  v64 = 0;
  v63 = 1;
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v11, (unsigned int)&v63, (unsigned int)&v56, 0, 0LL) )
  {
    if ( v56 )
    {
      v38 = *(_QWORD *)(v56 + 312);
      v39 = *(_QWORD *)(v38 + 40);
      if ( v39 )
      {
        PipSetDevNodeFlags(*(_QWORD *)(v38 + 40), 0x80000LL);
        v40 = *(_QWORD *)(v39 + 696);
        v55 = v40;
        if ( v40 )
        {
          IopFreeRelationList(*(PVOID *)(v40 + 64));
          *(_QWORD *)(v55 + 64) = 0LL;
          *(_QWORD *)(v39 + 696) = 0LL;
        }
      }
    }
  }
  PnpUnlinkDeviceRemovalRelations(v41, v11);
  LOBYTE(v42) = v61;
  PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, v11, v42, v2);
  v48 = (_QWORD *)PendingEjectRelations;
  if ( !PendingEjectRelations )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
      (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
    }
    if ( v61 )
      PpProfileCancelHardwareProfileTransition();
    LOBYTE(v47) = 1;
    PnpInvalidateRelationsInList(v11, 4LL, 0LL, v47);
    PnpTrackQueryRemoveDevices(v11, 0LL);
    IopFreeRelationList(v11);
LABEL_69:
    v29 = 0LL;
    v30 = 0LL;
LABEL_72:
    PnpFinalizeVetoedRemove(v1, v30, v29);
LABEL_76:
    v9 = -2147483608;
    goto LABEL_42;
  }
  LOBYTE(v46) = v60;
  LOBYTE(v44) = v62;
  LOBYTE(v45) = v61;
  *(_QWORD *)(DeviceNode + 696) = PendingEjectRelations;
  LightestSystemStateForEject = PoGetLightestSystemStateForEject(v45, v44, v46, PendingEjectRelations + 92);
  if ( LightestSystemStateForEject < 0 )
  {
    v31 = 0LL;
    if ( LightestSystemStateForEject == -1073741090 )
      v31 = 9LL;
    PnpFinalizeVetoedRemove(v1, v31, 0LL);
    v48[6] = 0LL;
    *((_BYTE *)v48 + 89) = 0;
    v48[1] = v48;
    *v48 = v48;
    PnpProcessCompletedEject(v48);
    goto LABEL_76;
  }
  PpDevNodeUnlockTree(1LL);
  IopEjectDevice(DeviceObject);
  v9 = 259;
LABEL_46:
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(v3[2], 0x4D706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
LABEL_48:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  return (unsigned int)v9;
}
