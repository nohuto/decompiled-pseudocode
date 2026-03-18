/*
 * XREFs of PipProcessStartPhase3 @ 0x14076BE08
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PpvUtilTestStartedPdoStack @ 0x1402DDEA0 (PpvUtilTestStartedPdoStack.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x1402DE254 (PnpSetDeviceInstanceStartedEvent.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405643B8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     PnpQueryID @ 0x14074C8DC (PnpQueryID.c)
 *     PiCreateDriverSwDevices @ 0x14076ABAC (PiCreateDriverSwDevices.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14076AC70 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpSetPlugPlayEvent @ 0x14076C288 (PnpSetPlugPlayEvent.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14076C4E0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpCheckDeviceIdsChanged @ 0x14076C544 (PnpCheckDeviceIdsChanged.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14076C764 (PiDcUpdateDeviceContainerMembership.c)
 *     PiUpdateDevicePanel @ 0x14076E168 (PiUpdateDevicePanel.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14076E894 (PnpDeviceObjectToDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     _CmSetDeviceRegProp @ 0x14076FE20 (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     PnpGenerateDeviceIdsHash @ 0x14078D510 (PnpGenerateDeviceIdsHash.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     PiAuditDeviceStart @ 0x14095BD0C (PiAuditDeviceStart.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  int DeviceState; // ebx
  __int64 v6; // r8
  _QWORD *v7; // r15
  PVOID v8; // rcx
  PVOID v10; // rsi
  PVOID v11; // rbx
  char v12; // r14
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  PVOID v16; // rbx
  unsigned int v17; // r13d
  PVOID v18; // rsi
  unsigned int v19; // r12d
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-59h]
  int v24; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+60h] [rbp-19h] BYREF
  int v27; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v28; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID v30; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+78h] [rbp-1h] BYREF
  PVOID v32; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v35; // [rsp+F0h] [rbp+77h] BYREF
  char v36; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  Handle = 0LL;
  v32 = 0LL;
  if ( (byte_140C0DD4B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      3,
      *(const wchar_t **)(a1 + 48));
  DeviceState = PiPnpRtlBeginOperation(&v32);
  if ( DeviceState >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) != 0
      || (v30 = 0LL,
          v28 = 0,
          P = 0LL,
          v29 = 0,
          DestinationString = 0LL,
          (int)PnpDeviceObjectToDeviceInstance(v7, &Handle, 131097LL) < 0) )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      {
        DeviceState = -1073741823;
      }
      else
      {
        if ( v3 )
          PipSetDevNodeFlags(a1, 8LL);
        PnpQueryAndSaveDeviceNodeCapabilities(a1);
        DeviceState = PiProcessQueryDeviceState(v7);
        PiUpdateDevicePanel(a1, 0LL);
        PnpSetPlugPlayEvent(&GUID_DEVICE_ARRIVAL, *(_QWORD *)(a1 + 32));
        PnpSetDeviceInstanceStartedEvent(a1);
        if ( DeviceState >= 0 )
        {
          PpvUtilTestStartedPdoStack();
          PipSetDevNodeState(a1, 778);
          PnpStartedDeviceNodeDependencyCheck(a1);
          PiCreateDriverSwDevices(a1);
          if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
            PiAuditDeviceStart(a1 + 40);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1, &P, &v29);
    PnpQueryID(a1, 2, &v30, &v28);
    v10 = v30;
    v11 = P;
    PnpGenerateDeviceIdsHash(P, v30, a1 + 684);
    if ( !v11 && !v10 )
    {
LABEL_38:
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      PiUpdateDevicePanel(a1, Handle);
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v22, *(_QWORD *)(a1 + 48), 1LL);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
      v3 = a2;
      goto LABEL_5;
    }
    v24 = 0;
    v12 = 0;
    v26 = 0;
    v13 = KeGetCurrentThread();
    v35 = 0;
    v36 = 0;
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v14 = *(_QWORD *)(a1 + 48);
    v27 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v14, (_DWORD)Handle, 11, (__int64)&v26, (__int64)&v24, (__int64)&v27, 0) >= 0
      && v26 == 4
      && v27 == 4 )
    {
      v15 = v24;
      if ( (v24 & 0x20) == 0 || (v24 & 1) != 0 )
        goto LABEL_23;
    }
    else
    {
      v15 = 0;
      v24 = 0;
    }
    v12 = 1;
LABEL_23:
    v16 = v30;
    v17 = v28;
    v18 = P;
    v19 = v29;
    if ( (v15 & 0x400) == 0 )
    {
      v20 = 0;
      if ( !P || (LOBYTE(v23) = 1, v20 = PnpCheckDeviceIdsChanged(a1, Handle, P, v29, v23, &v35), v15 = v24, !v35) )
      {
        if ( v16 )
        {
          LOBYTE(v23) = 0;
          v20 = PnpCheckDeviceIdsChanged(a1, Handle, v16, v17, v23, &v35);
          v15 = v24;
        }
      }
      if ( v20 >= 0 && v35 )
      {
        v36 = 1;
        v24 = v15 | 0x400;
        v12 = 1;
      }
    }
    if ( v18 )
    {
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 2, 7, (__int64)v18, v19, 0);
      ExFreePoolWithTag(v18, 0);
    }
    if ( v16 )
    {
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v16, v17, 0);
      ExFreePoolWithTag(v16, 0);
    }
    if ( v36 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v24, 4, 0);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( v12 && PiDevCfgMode )
      PiDevCfgProcessDevice(a1, (__int64)Handle, 0);
    goto LABEL_38;
  }
LABEL_12:
  v8 = v32;
  if ( v32 )
    PiPnpRtlEndOperation(v32);
  if ( (byte_140C0DD4B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)v8,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v6,
      3,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)DeviceState;
}
