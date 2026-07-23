/*
 * XREFs of IoReportDetectedDevice @ 0x1407AEB10
 * Callers:
 *     HalpDriverEntry @ 0x1407AE300 (HalpDriverEntry.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     PipIsDevNodeDNStarted @ 0x140253288 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x1402532B4 (PipAreDriversLoaded.c)
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PpDevNodeRemoveFromTree @ 0x14036DA64 (PpDevNodeRemoveFromTree.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x140370780 (PpDevNodeInsertIntoTree.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x14067B110 (RtlUpcaseUnicodeString.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140736550 (PnpCleanupDeviceRegistryValues.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     IopDoDeferredSetInterfaceState @ 0x14073DF70 (IopDoDeferredSetInterfaceState.c)
 *     _CmSetDeviceRegProp @ 0x1407441D0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1407472B4 (PnpDeviceObjectToDeviceInstance.c)
 *     PpDeviceRegistration @ 0x14074BF20 (PpDeviceRegistration.c)
 *     _CmCreateDevice @ 0x14074CD88 (_CmCreateDevice.c)
 *     PipAllocateDeviceNode @ 0x14074EAA0 (PipAllocateDeviceNode.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074F80C (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpDetermineResourceListSize @ 0x140750BDC (PnpDetermineResourceListSize.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752D80 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A5400 (PnpAllocateDeviceInstancePath.c)
 *     IopIsReportedAlready @ 0x1407AEFC8 (IopIsReportedAlready.c)
 *     PnpSetRegistryDword @ 0x1407AF21C (PnpSetRegistryDword.c)
 *     IopDuplicateDetection @ 0x1407AF274 (IopDuplicateDetection.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8FD8 (IopCreateRootEnumeratedDeviceObject.c)
 *     IoReportResourceUsageInternal @ 0x1408A0418 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x1408A1A70 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x1408A1AD8 (PnpSetRegistryResourceList.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B254C (IopCreateLegacyDeviceIds.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  char *DeviceNode; // rbx
  PDRIVER_EXTENSION DriverExtension; // r15
  UNICODE_STRING *p_ServiceKeyName; // r15
  PDEVICE_OBJECT v14; // rax
  NTSTATUS result; // eax
  const UNICODE_STRING *v16; // rdx
  int appended; // edi
  int v18; // eax
  int v19; // r13d
  struct _KTHREAD *CurrentThread; // rax
  char *v21; // rbx
  unsigned __int16 v22; // cx
  size_t v23; // r12
  wchar_t *v24; // rax
  signed __int64 v25; // rcx
  __int16 v26; // ax
  _QWORD *v27; // rax
  __int64 v28; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v29; // r15
  ULONG v30; // eax
  char v31; // r13
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  struct _DEVICE_OBJECT *v34; // r12
  __int64 v35; // rcx
  int v36; // eax
  PVOID v37; // rax
  int DeviceInstancePath; // eax
  int v39; // eax
  wchar_t *v40; // r13
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rdx
  PDRIVER_OBJECT v45; // rdi
  ULONG Flags; // eax
  bool v47; // zf
  UNICODE_STRING *v48; // rdx
  int LegacyDeviceIds; // eax
  int v50; // eax
  unsigned int v51; // eax
  int v52; // ecx
  SIZE_T v53; // rdi
  PVOID PoolWithTag; // rax
  void *v55; // rsi
  __int64 v56; // r8
  int v57; // edx
  __int64 v58; // rcx
  int dwFlags; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  __int64 v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+38h] [rbp-C8h]
  int v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+50h] [rbp-B0h]
  char v65; // [rsp+51h] [rbp-AFh] BYREF
  char v66; // [rsp+52h] [rbp-AEh] BYREF
  char v67[5]; // [rsp+53h] [rbp-ADh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v69; // [rsp+60h] [rbp-A0h] BYREF
  char *v70; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+80h] [rbp-80h] BYREF
  _DWORD cbMax[3]; // [rsp+84h] [rbp-7Ch] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v76; // [rsp+A0h] [rbp-60h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+A8h] [rbp-58h] BYREF
  size_t pcbLength; // [rsp+B0h] [rbp-50h] BYREF
  PDRIVER_OBJECT v79; // [rsp+B8h] [rbp-48h]
  PIO_RESOURCE_REQUIREMENTS_LIST v80; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v82; // [rsp+D0h] [rbp-30h] BYREF
  __int64 Length; // [rsp+E0h] [rbp-20h]
  wchar_t *j; // [rsp+E8h] [rbp-18h]
  PDEVICE_OBJECT *v85; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[200]; // [rsp+100h] [rbp+0h] BYREF

  v80 = ResourceRequirements;
  DeviceNode = 0LL;
  v85 = DeviceObject;
  DriverExtension = DriverObject->DriverExtension;
  v79 = DriverObject;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v14 = *DeviceObject;
  LODWORD(ppszDestEnd) = SlotNumber;
  v66 = 0;
  *(_QWORD *)&Destination.Length = 26214400LL;
  psz = 0LL;
  memset(cbMax, 0, sizeof(cbMax));
  pcbLength = 0LL;
  v72 = 0;
  v76 = 0LL;
  v65 = 0;
  v70 = 0LL;
  v69 = 0;
  Handle = 0LL;
  Destination.Buffer = pszDest;
  KeyHandle = 0LL;
  v64 = 0;
  P = 0LL;
  v82 = 0LL;
  if ( v14 )
  {
    DeviceNode = (char *)v14->DeviceObjectExtension->DeviceNode;
    v70 = DeviceNode;
    if ( !DeviceNode )
      return -1073741578;
    goto LABEL_7;
  }
  if ( (DriverObject->Flags & 4) != 0 )
  {
    Buffer = p_ServiceKeyName->Buffer;
    for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; i != Buffer; --i )
    {
      if ( *i == 92 )
      {
        *((_QWORD *)&v82 + 1) = i + 1;
        LOWORD(v82) = p_ServiceKeyName->Length
                    - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        WORD1(v82) = v82;
        goto LABEL_3;
      }
    }
    return -1073741585;
  }
  else
  {
LABEL_3:
    result = RtlAppendUnicodeToString(&Destination, L"ROOT\\");
    if ( result >= 0 )
    {
      v16 = (const UNICODE_STRING *)&v82;
      if ( (DriverObject->Flags & 4) == 0 )
        v16 = p_ServiceKeyName;
      result = RtlAppendUnicodeStringToString(&Destination, v16);
      if ( result >= 0 )
      {
LABEL_7:
        appended = PiPnpRtlBeginOperation(&P);
        if ( appended < 0 )
          goto LABEL_40;
        PpDevNodeLockTree(1);
        if ( DeviceNode || (DriverObject->Flags & 4) != 0 )
        {
          v19 = 0;
        }
        else
        {
          v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, (unsigned int)ppszDestEnd, &v70);
          v19 = 0;
          appended = v18;
          if ( v18 >= 0 )
            v69 = v70 != 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v21 = v70;
        if ( v70 )
        {
LABEL_25:
          if ( v69 )
          {
            if ( (unsigned int)PipAreDriversLoaded((__int64)v21)
              || (*((_DWORD *)v21 + 99) & 0x6000) != 0
              && ((v51 = *((_DWORD *)v21 + 101), v51 > 0x1C) || (v52 = 268697602, !_bittest(&v52, v51))) )
            {
              HalPutDmaAdapter(*((PADAPTER_OBJECT *)v21 + 4));
              appended = -1073741810;
              goto LABEL_71;
            }
            if ( !v28 )
              PipClearDevNodeProblem((__int64)v21);
          }
          if ( !Handle )
          {
            appended = PnpDeviceObjectToDeviceInstance(*((_QWORD *)v21 + 4), (__int64)&Handle, 983103);
            if ( appended < 0 )
            {
LABEL_71:
              if ( v65 )
              {
                if ( KeyHandle )
                  ZwDeleteKey(KeyHandle);
                if ( v76 )
                  ZwDeleteKey(v76);
                if ( Handle )
                  ZwDeleteKey(Handle);
                PnpCleanupDeviceRegistryValues((__int64)(v21 + 40));
                PpDevNodeRemoveFromTree(v21);
                IoDeleteDevice(*((PDEVICE_OBJECT *)v21 + 4));
                HalPutDmaAdapter(*((PADAPTER_OBJECT *)v21 + 4));
              }
              goto LABEL_40;
            }
          }
LABEL_31:
          v29 = v80;
          if ( !ResourceList && !v80
            || (v39 = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *((_QWORD *)v21 + 6),
                        20,
                        0,
                        983103,
                        1,
                        (__int64)&KeyHandle,
                        0LL),
                appended = v39,
                v39 >= 0)
            && (!ResourceList || (v39 = PnpSetRegistryResourceList(KeyHandle), appended = v39, v39 >= 0))
            && (!v29 || (v39 = PnpSetRegistryRequirementsList(KeyHandle), appended = v39, v39 >= 0)) )
          {
            if ( ResourceAssigned )
            {
              PipSetDevNodeFlags((__int64)v21, 256);
              PnpSetRegistryDword(Handle);
              v30 = PnpDetermineResourceListSize(ResourceList);
              IopWriteAllocatedResourcesToRegistry((__int64)v21, ResourceList, v30);
            }
            else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
            {
              v53 = (unsigned int)PnpDetermineResourceListSize(ResourceList);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v53, 0x47706E50u);
              v55 = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_70:
                appended = -1073741670;
                PipSetDevNodeProblem((__int64)v21, 3, -1073741670);
                goto LABEL_71;
              }
              memmove(PoolWithTag, ResourceList, v53);
              pszFormat = (NTSTRSAFE_PCWSTR)*((_QWORD *)v21 + 4);
              v56 = *((_QWORD *)pszFormat + 1);
              v67[0] = 0;
              appended = IoReportResourceUsageInternal(
                           0,
                           v57,
                           v56,
                           0,
                           dwFlags,
                           (__int64)pszFormat,
                           (__int64)v55,
                           v62,
                           v63,
                           (__int64)v67);
              ExFreePoolWithTag(v55, 0x47706E50u);
              if ( appended < 0 || v67[0] )
              {
                if ( !PipIsDevNodeDNStarted((__int64)v21) )
                  PipSetDevNodeProblem(v58, 12, appended);
                appended = -1073741800;
              }
            }
            else
            {
              PipSetDevNodeFlags((__int64)v21, 256);
            }
LABEL_35:
            v31 = v64;
LABEL_36:
            if ( appended >= 0 )
            {
              *((_DWORD *)v21 + 165) = *(_DWORD *)(*((_QWORD *)v21 + 2) + 660LL);
              IopDoDeferredSetInterfaceState((__int64)v21);
              PipSetDevNodeState((__int64)v21, 775);
              if ( v31 )
                PipSetDevNodeFlags((__int64)v21, 0x80000000);
              *v85 = (PDEVICE_OBJECT)*((_QWORD *)v21 + 4);
              goto LABEL_40;
            }
            goto LABEL_71;
          }
          goto LABEL_116;
        }
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended < 0 )
        {
LABEL_40:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          PpDevNodeUnlockTree(1);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          if ( v76 )
            ZwClose(v76);
          if ( Handle )
            ZwClose(Handle);
          if ( P )
            PiPnpRtlEndOperation((PVOID **)P);
          return appended;
        }
        Length = Destination.Length;
        v22 = Destination.Length;
        v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
        v24 = &pszDest[(unsigned __int64)Destination.Length >> 1];
        for ( j = v24; ; v24 = j )
        {
          Destination.Length = v22;
          LODWORD(v61) = v19;
          ppszDestEnd = v24;
          RtlStringCchPrintfExW(v24, v23, &ppszDestEnd, 0LL, 0, L"%04u", v61);
          v25 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - pszDest;
          if ( (_DWORD)v25 == -1 )
            v26 = 400 - Destination.Length;
          else
            v26 = 2 * v25;
          Destination.Length += v26;
          appended = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v65, 0);
          if ( appended < 0 )
            goto LABEL_71;
          if ( v65 )
            goto LABEL_23;
          v69 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  (_DWORD)Handle,
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v69) )
            break;
          ZwClose(Handle);
          v22 = Length;
          ++v19;
        }
        v27 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&Destination, 0x746C6644u);
        *(_QWORD *)&cbMax[1] = v27;
        if ( v27 )
        {
          v21 = *(char **)(v27[39] + 40LL);
        }
        else
        {
          appended = -1073741823;
          v21 = 0LL;
        }
        v70 = v21;
LABEL_23:
        if ( appended < 0 )
          goto LABEL_71;
        if ( v21 )
          goto LABEL_25;
        appended = IopCreateRootEnumeratedDeviceObject(&cbMax[1]);
        if ( appended < 0 )
          goto LABEL_71;
        v34 = *(struct _DEVICE_OBJECT **)&cbMax[1];
        v35 = *(_QWORD *)&cbMax[1];
        v31 = 1;
        v64 = 1;
        *(_DWORD *)(*(_QWORD *)&cbMax[1] + 48LL) |= 0x1000u;
        v36 = PipAllocateDeviceNode(v35, (void **)&v70);
        v21 = v70;
        if ( v36 == -1073740946 || !v70 )
        {
          IoDeleteDevice(v34);
          appended = -1073741670;
          goto LABEL_71;
        }
        if ( (v79->Flags & 4) == 0 )
        {
          v37 = ExAllocatePoolWithTag(PagedPool, p_ServiceKeyName->Length, 0x48706E50u);
          *((_QWORD *)v21 + 8) = v37;
          if ( !v37 )
            goto LABEL_70;
          *((_WORD *)v21 + 29) = p_ServiceKeyName->Length;
          DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 56), p_ServiceKeyName, 0);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_80;
        }
        DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v21, (unsigned int)Destination.Length + 2);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0
          || (DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0),
              appended = DeviceInstancePath,
              DeviceInstancePath < 0) )
        {
LABEL_80:
          PipSetDevNodeProblem((__int64)v21, 3, DeviceInstancePath);
          goto LABEL_36;
        }
        *(_WORD *)(*((_QWORD *)v21 + 6) + 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 20) >> 1)) = 0;
        v72 = 32;
        v39 = CmSetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                *((_QWORD *)v21 + 6),
                (__int64)Handle,
                0xBu,
                4u,
                (__int64)&v72,
                4u,
                0);
        appended = v39;
        if ( v39 >= 0 )
        {
          v66 = -1;
          v39 = PnpSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  17,
                  (__int64)&v66,
                  1u,
                  0);
          appended = v39;
          if ( v39 >= 0 )
          {
            v39 = PnpUnicodeStringToWstr((__int16 **)&psz, cbMax, &p_ServiceKeyName->Length);
            appended = v39;
            if ( v39 >= 0 )
            {
              v40 = (wchar_t *)psz;
              appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
              if ( appended < 0 )
              {
                PnpUnicodeStringToWstrFree(v40, (__int64)p_ServiceKeyName);
LABEL_88:
                v41 = appended;
                goto LABEL_89;
              }
              appended = CmSetDeviceRegProp(
                           *(__int64 *)&PiPnpRtlCtx,
                           *((_QWORD *)v21 + 6),
                           (__int64)Handle,
                           5u,
                           1u,
                           (__int64)v40,
                           (int)pcbLength + 2,
                           0);
              PnpUnicodeStringToWstrFree(v40, (__int64)p_ServiceKeyName);
              if ( appended < 0 )
                goto LABEL_88;
              v39 = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *((_QWORD *)v21 + 6),
                      19,
                      0,
                      983103,
                      1,
                      (__int64)&v76,
                      0LL);
              appended = v39;
              if ( v39 >= 0 )
              {
                v39 = PnpSetRegistryDword(v76);
                appended = v39;
                if ( v39 >= 0 )
                {
                  v45 = v79;
                  Flags = v79->Flags;
                  v47 = (Flags & 4) == 0;
                  if ( (Flags & 4) == 0 )
                  {
                    LOBYTE(v44) = 1;
                    PpDeviceRegistration((__int64)&Destination, v44, (__int64)(v21 + 56), 1);
                    v47 = (v45->Flags & 4) == 0;
                  }
                  v48 = (UNICODE_STRING *)&v82;
                  if ( v47 )
                    v48 = p_ServiceKeyName;
                  LegacyDeviceIds = IopCreateLegacyDeviceIds(v34, v48, ResourceList);
                  appended = LegacyDeviceIds;
                  v43 = (__int64)v21;
                  if ( LegacyDeviceIds < 0 )
                  {
                    v41 = LegacyDeviceIds;
                    v42 = 19;
                    goto LABEL_93;
                  }
                  PipSetDevNodeFlags((__int64)v21, 17);
                  *((_DWORD *)v21 + 165) = *((_DWORD *)IopRootDeviceNode + 165);
                  PipSetDevNodeState((__int64)v21, 770);
                  PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v21);
                  v50 = PnpMapDeviceObjectToDeviceInstance((__int64)v34, (__int64)(v21 + 40));
                  appended = v50;
                  if ( v50 < 0 )
                  {
                    v41 = v50;
                    v42 = 3;
LABEL_91:
                    v43 = (__int64)v21;
LABEL_93:
                    PipSetDevNodeProblem(v43, v42, v41);
                    goto LABEL_35;
                  }
                  ObfReferenceObject(v34);
                  goto LABEL_31;
                }
              }
            }
          }
        }
LABEL_116:
        v41 = v39;
LABEL_89:
        v42 = 19;
        goto LABEL_91;
      }
    }
  }
  return result;
}
