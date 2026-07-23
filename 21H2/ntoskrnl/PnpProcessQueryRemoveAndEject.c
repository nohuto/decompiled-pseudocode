/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x140736AD4
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x14074B2E0 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x14089BAAC (PnpShutdownDevices.c)
 * Callees:
 *     PipAreDriversLoaded @ 0x1402532B4 (PipAreDriversLoaded.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     PnpIsChainDereferenced @ 0x14036DCE0 (PnpIsChainDereferenced.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     IoGetLegacyVetoList @ 0x14066EDF0 (IoGetLegacyVetoList.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140731884 (PiProcessQueryRemoveNoFdo.c)
 *     PnpRestartDeviceNode @ 0x1407319F8 (PnpRestartDeviceNode.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1407326AC (PiProcessQueryAndCancelRemoval.c)
 *     PiRestartRemovalRelations @ 0x14073374C (PiRestartRemovalRelations.c)
 *     PnpTrackQueryRemoveDevices @ 0x140734690 (PnpTrackQueryRemoveDevices.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140735F90 (PiEventRemovalPostSurpriseRemove.c)
 *     IopRemoveDeviceRelationsFromList @ 0x14073601C (IopRemoveDeviceRelationsFromList.c)
 *     PiCheckRemovalPreconditions @ 0x140736A68 (PiCheckRemovalPreconditions.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140736FA0 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140737130 (PnpNotifyUserModeDeviceRemoval.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1407372AC (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpBuildRemovalRelationList @ 0x140737330 (PnpBuildRemovalRelationList.c)
 *     PnpResizeTargetDeviceBlock @ 0x140737BBC (PnpResizeTargetDeviceBlock.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737E18 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x140737FA4 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140738100 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x14073824C (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1407383C0 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140738520 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1407386B0 (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x140739510 (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x1407395C0 (PiEventAllocateVetoBuffer.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x14073968C (PiEventAreDeviceRelationsExcluded.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PiDetermineDeleteType @ 0x14074CF9C (PiDetermineDeleteType.c)
 *     PnpProcessCompletedEject @ 0x1408A2610 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408AB4D8 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408AB508 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408AB78C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1408AB89C (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1408ABE70 (PnpFinalizeVetoedRemove.c)
 *     IopEjectDevice @ 0x1408B2B20 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x1408B2D78 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x1408B8FA0 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessCanceledRemoveForReset @ 0x1408B9038 (PiProcessCanceledRemoveForReset.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E104C (PoGetLightestSystemStateForEject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r12
  unsigned int *v3; // r15
  struct _DEVICE_OBJECT *v4; // r14
  unsigned int v5; // edi
  __int64 DeviceNode; // r13
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 VetoBuffer; // rax
  PVOID v12; // r14
  int v13; // eax
  int v14; // r8d
  int v15; // ecx
  __int64 v16; // rcx
  PVOID v17; // rbx
  GUID *v18; // r8
  int v19; // ebx
  __int64 v20; // r8
  int v21; // r9d
  unsigned int *v22; // r8
  PDEVICE_OBJECT v24; // rbx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  char v30; // al
  unsigned int *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rbx
  _QWORD *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 PendingEjectRelations; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rbx
  int LightestSystemStateForEject; // eax
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  PVOID v52; // [rsp+48h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp-29h] BYREF
  PVOID v54; // [rsp+58h] [rbp-21h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-19h]
  __int64 v56; // [rsp+68h] [rbp-11h] BYREF
  __int64 v57; // [rsp+70h] [rbp-9h] BYREF
  PVOID v58; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  char v61; // [rsp+E0h] [rbp+67h]
  char v62; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v63; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v64; // [rsp+F8h] [rbp+7Fh] BYREF
  int v65; // [rsp+FCh] [rbp+83h]

  v1 = *a1;
  SourceString = 0LL;
  v2 = 0LL;
  v56 = 0LL;
  v3 = 0LL;
  v4 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v52 = 0LL;
  v5 = 7;
  v64 = 0;
  v62 = 0;
  v57 = 0LL;
  v54 = 0LL;
  LOBYTE(v63) = 0;
  P = 0LL;
  v58 = 0LL;
  DeviceObject = v4;
  DestinationString = 0LL;
  if ( v4 )
    DeviceNode = (__int64)v4->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
  {
    v10 = -1073741738;
    goto LABEL_53;
  }
  v7 = PiDetermineDeleteType(v1);
  v5 = v7;
  if ( v7 != 4 )
  {
    LOBYTE(v9) = 1;
    PnpRecordBlackboxPnpEventInformation(v1, v7, 0LL, v9);
  }
  v10 = PiCheckRemovalPreconditions(v5, v1, v8);
  if ( v10 < 0 )
    goto LABEL_53;
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(DeviceNode + 396) & 0x80000) != 0 )
    {
LABEL_52:
      v10 = 0;
LABEL_53:
      PpDevNodeUnlockTree(1);
      goto LABEL_54;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 568) - 3) <= 1 )
    {
      v30 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(DeviceNode + 560) & 0x10) == 0 )
      {
        v10 = -2147483608;
        v28 = DeviceNode + 40;
        v29 = 8LL;
        goto LABEL_134;
      }
      v30 = 1;
    }
    v10 = 0;
    if ( !v30 )
      goto LABEL_53;
  }
  if ( !v5 && !(unsigned int)PipAreDriversLoaded(DeviceNode) )
  {
    v10 = PiProcessQueryRemoveNoFdo(v1);
    goto LABEL_53;
  }
  VetoBuffer = PiEventAllocateVetoBuffer(v5);
  v3 = (unsigned int *)VetoBuffer;
  if ( !VetoBuffer )
    goto LABEL_78;
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v54) < 0 )
  {
LABEL_79:
    v32 = *v3;
    v31 = v3 + 2;
    goto LABEL_80;
  }
  v12 = v54;
  v10 = PiEventBuildPdoList((_DWORD)v54, v5, v1, (unsigned int)&v64, (__int64)&v52, (__int64)&v62, (__int64)&v63);
  if ( v10 < 0 )
    goto LABEL_132;
  v13 = PnpResizeTargetDeviceBlock(a1, v5);
  v1 = *a1;
  v10 = v13;
  if ( v13 < 0 )
    goto LABEL_132;
  LOBYTE(v14) = PiEventAreDeviceRelationsExcluded(v5);
  v10 = PnpCompileDeviceInstancePaths(v15, (_DWORD)v12, v14, 0, (__int64)&P);
  if ( v5 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v16, v12, &v58);
  if ( v10 < 0 )
  {
LABEL_132:
    IopFreeRelationList(v12);
    if ( v10 == -2147483608 )
      goto LABEL_53;
    v28 = 0LL;
    v29 = 0LL;
LABEL_134:
    PnpFinalizeVetoedRemove(v1, v29, v28);
    goto LABEL_53;
  }
  if ( !v62 )
    goto LABEL_17;
  LOBYTE(v16) = v63;
  PpProfileBeginHardwareProfileTransition(v16);
  v34 = (int)(v64 - 1);
  if ( (int)(v64 - 1) >= 0 )
  {
    v35 = v52;
    do
    {
      v36 = v35[v34];
      if ( v36 )
        v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
      else
        v37 = 0LL;
      if ( *(_DWORD *)(v37 + 568) == 1 )
        PpProfileIncludeInHardwareProfileTransition(v37, 3LL);
      --v34;
    }
    while ( v34 >= 0 );
    v12 = v54;
  }
  if ( v5 == 4 )
  {
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v3) >= 0 && *v3 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(v12);
      v39 = *(_DWORD **)(v1 + 48);
      if ( v39 )
        *v39 = *v3;
      if ( *(_QWORD *)(v1 + 56) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
      SourceString = 0LL;
      goto LABEL_84;
    }
    LOBYTE(v38) = v63;
    if ( (int)PpProfileQueryHardwareProfileChange(v38, 0LL, v3, v3 + 2) < 0 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(v12);
      goto LABEL_79;
    }
  }
  else
  {
LABEL_17:
    if ( (v5 & 0xFFFFFFFB) != 0 )
    {
      if ( ((v5 - 3) & 0xFFFFFFFD) == 0 )
        PnpDeleteLockedDeviceNodes((_DWORD)DeviceObject, (_DWORD)v12, 3, 0, 0, 0, 0LL, 0LL);
      goto LABEL_20;
    }
  }
  PnpTrackQueryRemoveDevices((int)v12, 1);
  v10 = PiProcessQueryAndCancelRemoval(v5, v1, (int)v12, v64, (__int64)v52, v3, (const void **)&P);
  if ( v10 < 0 )
  {
    if ( v62 )
      PpProfileCancelHardwareProfileTransition();
    if ( *(_DWORD *)(v1 + 16) == 54 )
      v10 = PiProcessCanceledRemoveForReset(v5, v1, v12, v3);
    PnpTrackQueryRemoveDevices((int)v12, 0);
    IopFreeRelationList(v12);
    goto LABEL_53;
  }
LABEL_20:
  if ( v5 == 3 )
  {
    v17 = v58;
    if ( v58 )
    {
      PnpNotifyUserModeDeviceRemoval(v1, v58, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
      ExFreePoolWithTag(v17, 0x4B706E50u);
    }
    v18 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v18 = &GUID_DEVICE_REMOVE_PENDING;
  }
  PnpNotifyUserModeDeviceRemoval(v1, P, v18, 0LL, 0LL, 0LL);
  v19 = v64;
  PiSendTargetDeviceRemoveCompleteNotification(v5, v52, v64);
  if ( ((v5 - 2) & 0xFFFFFFFC) != 0
    || v5 == 4
    || (LOBYTE(v20) = 1,
        PnpInvalidateRelationsInList(v12, v5, v20, 0LL),
        IopRemoveDeviceRelationsFromList((unsigned int **)v12),
        v5 != 3) )
  {
    if ( v5 != 5 )
    {
      v24 = DeviceObject;
      if ( *(_DWORD *)(DeviceNode + 568) )
      {
        IopQueryDockRemovalInterface(DeviceObject, &v56);
        v2 = v56;
        if ( v56 )
          (*(void (__fastcall **)(_QWORD, __int64))(v56 + 32))(*(_QWORD *)(v56 + 8), 3LL);
      }
      if ( v5 )
      {
        if ( v5 != 4 )
        {
          LOBYTE(v21) = 0;
LABEL_45:
          PnpDeleteLockedDeviceNodes(
            (_DWORD)v24,
            (_DWORD)v12,
            2,
            v21,
            *(_DWORD *)(v1 + 16),
            *(_DWORD *)(v1 + 20),
            0LL,
            0LL);
          v25 = *(_DWORD *)(DeviceNode + 560) >> 3;
          LOBYTE(v25) = (*(_DWORD *)(DeviceNode + 560) & 8) != 0;
          v26 = HIWORD(*(_DWORD *)(DeviceNode + 560)) & 1;
          LODWORD(v63) = v25;
          v61 = v26;
          if ( v5 != 4 )
          {
            PiRestartRemovalRelations(v1, (int)v12, (__int64)v24);
            PnpUnlinkDeviceRemovalRelations(v27, v12);
            if ( v5 )
            {
LABEL_47:
              IopFreeRelationList(v12);
              if ( v5 == 2 )
                PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
              if ( !v5
                && (*(_DWORD *)(v1 + 144) & 2) == 0
                && (*(_DWORD *)(DeviceNode + 396) & 0x2000) != 0
                && *(_DWORD *)(DeviceNode + 404) == 18 )
              {
                PipClearDevNodeProblem(DeviceNode);
                PnpRestartDeviceNode(DeviceNode);
                PnpRequestDeviceAction(*(PVOID *)(DeviceNode + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
              }
              if ( v2 )
              {
                (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
                (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
              }
              goto LABEL_52;
            }
LABEL_64:
            PnpTrackQueryRemoveDevices((int)v12, 0);
            goto LABEL_47;
          }
          if ( !(_BYTE)v25 && !v26 )
          {
            PnpUnlinkDeviceRemovalRelations(v25, v12);
            goto LABEL_64;
          }
          v65 = 0;
          v64 = 1;
          while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v12, (unsigned int)&v64, (unsigned int)&v57, 0, 0LL) )
          {
            if ( v57 )
              v40 = *(_QWORD *)(*(_QWORD *)(v57 + 312) + 40LL);
            else
              v40 = 0LL;
            if ( v40 )
            {
              PipSetDevNodeFlags(v40, 0x80000LL);
              v41 = *(_QWORD *)(v40 + 696);
              v56 = v41;
              if ( v41 )
              {
                IopFreeRelationList(*(PVOID *)(v41 + 64));
                *(_QWORD *)(v56 + 64) = 0LL;
                *(_QWORD *)(v40 + 696) = 0LL;
              }
            }
          }
          PnpUnlinkDeviceRemovalRelations(v42, v12);
          LOBYTE(v43) = v62;
          PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, v12, v43, v2);
          v49 = (_QWORD *)PendingEjectRelations;
          if ( PendingEjectRelations )
          {
            LOBYTE(v47) = v61;
            LOBYTE(v45) = v63;
            LOBYTE(v46) = v62;
            *(_QWORD *)(DeviceNode + 696) = PendingEjectRelations;
            LightestSystemStateForEject = PoGetLightestSystemStateForEject(v46, v45, v47, PendingEjectRelations + 92);
            if ( LightestSystemStateForEject >= 0 )
            {
              PpDevNodeUnlockTree(1);
              IopEjectDevice(DeviceObject);
              v10 = 259;
LABEL_54:
              if ( v10 == -1073741738 )
                goto LABEL_32;
              goto LABEL_28;
            }
            v33 = 0LL;
            if ( LightestSystemStateForEject == -1073741090 )
              v33 = 9LL;
            PnpFinalizeVetoedRemove(v1, v33, 0LL);
            v49[6] = 0LL;
            *((_BYTE *)v49 + 89) = 0;
            v49[1] = v49;
            *v49 = v49;
            PnpProcessCompletedEject(v49);
            goto LABEL_84;
          }
          if ( v2 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
            (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
          }
          if ( v62 )
            PpProfileCancelHardwareProfileTransition();
          LOBYTE(v48) = 1;
          PnpInvalidateRelationsInList(v12, 4LL, 0LL, v48);
          PnpTrackQueryRemoveDevices((int)v12, 0);
          IopFreeRelationList(v12);
LABEL_78:
          v31 = 0LL;
          v32 = 0LL;
LABEL_80:
          PnpFinalizeVetoedRemove(v1, v32, v31);
LABEL_84:
          v10 = -2147483608;
          goto LABEL_53;
        }
      }
      else
      {
        PipSetDevNodeFlags(DeviceNode, 0x2000000LL);
      }
      LOBYTE(v21) = 1;
      goto LABEL_45;
    }
  }
  PiEventRemovalPostSurpriseRemove(v1, v5, &v54);
  PpDevNodeUnlockTree(1);
  PnpIsChainDereferenced(v52, v19, 0, 1u, 0LL);
  v10 = 0;
LABEL_28:
  if ( v5 != 4 )
  {
    if ( v3 )
      v22 = v3;
    else
      v22 = 0LL;
    PnpRecordBlackboxPnpEventInformation(v1, v5, v22, 0LL);
  }
LABEL_32:
  if ( v3 && !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(*((PVOID *)v3 + 2), 0x4D706E50u);
    *((_QWORD *)v3 + 2) = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  return (unsigned int)v10;
}
