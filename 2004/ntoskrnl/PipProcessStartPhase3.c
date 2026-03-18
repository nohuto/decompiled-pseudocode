/*
 * XREFs of PipProcessStartPhase3 @ 0x14072ACC0
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x14036BA30 (PnpSetDeviceInstanceStartedEvent.c)
 *     PpvUtilTestStartedPdoStack @ 0x14036BB18 (PpvUtilTestStartedPdoStack.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050AA28 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceRegProp @ 0x1407244E0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1407260F4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiProcessQueryDeviceState @ 0x14072A788 (PiProcessQueryDeviceState.c)
 *     PiCreateDriverSwDevices @ 0x14072ABFC (PiCreateDriverSwDevices.c)
 *     PnpSetPlugPlayEvent @ 0x14072B138 (PnpSetPlugPlayEvent.c)
 *     PiUpdateDevicePanel @ 0x14072B38C (PiUpdateDevicePanel.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14072C03C (PnpDeviceObjectToDeviceInstance.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14072C098 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14072C13C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PpDevCfgProcessDevice @ 0x140730134 (PpDevCfgProcessDevice.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1407435BC (PiDcUpdateDeviceContainerMembership.c)
 *     PnpQueryID @ 0x140750C90 (PnpQueryID.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407578BC (PnpCheckDeviceIdsChanged.c)
 *     PnpGenerateDeviceIdsHash @ 0x140758604 (PnpGenerateDeviceIdsHash.c)
 *     PiAuditDeviceStart @ 0x1408B2B54 (PiAuditDeviceStart.c)
 *     SeAuditingPlugAndPlayEvents @ 0x14091D524 (SeAuditingPlugAndPlayEvents.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  int DeviceState; // ebx
  __int64 v6; // r8
  __int64 v7; // r15
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
  if ( (byte_140C130BB & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      3,
      *(const wchar_t **)(a1 + 48));
  DeviceState = PiPnpRtlBeginOperation(&v32);
  if ( DeviceState >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
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
          PipSetDevNodeFlags(a1, 8);
        PnpQueryAndSaveDeviceNodeCapabilities(a1);
        DeviceState = PiProcessQueryDeviceState(v7);
        PiUpdateDevicePanel(a1, 0LL);
        PnpSetPlugPlayEvent(&GUID_DEVICE_ARRIVAL, *(_QWORD *)(a1 + 32));
        PnpSetDeviceInstanceStartedEvent(a1);
        if ( DeviceState >= 0 )
        {
          PpvUtilTestStartedPdoStack();
          PipSetDevNodeState(a1, 776);
          PnpStartedDeviceNodeDependencyCheck(a1);
          PiCreateDriverSwDevices(a1);
          if ( (unsigned __int8)SeAuditingPlugAndPlayEvents() )
            PiAuditDeviceStart(a1 + 40);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1LL, &P, &v29);
    PnpQueryID(a1, 2LL, &v30, &v28);
    v10 = v30;
    v11 = P;
    PnpGenerateDeviceIdsHash(P, v30, a1 + 684);
    if ( !v11 && !v10 )
    {
LABEL_39:
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        (__int64)Handle,
        0LL,
        (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4u,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      PiUpdateDevicePanel(a1, Handle);
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v22, *(_QWORD *)(a1 + 48), 1);
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
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v14,
                (__int64)Handle,
                11,
                (__int64)&v26,
                (__int64)&v24,
                (__int64)&v27,
                0) >= 0
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
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)Handle, 2u, 7u, (__int64)v18, v19, 0);
      ExFreePoolWithTag(v18, 0);
    }
    if ( v16 )
    {
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)Handle, 3u, 7u, (__int64)v16, v17, 0);
      ExFreePoolWithTag(v16, 0);
    }
    if ( v36 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        (__int64)Handle,
        0xBu,
        4u,
        (__int64)&v24,
        4u,
        0);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( v12 )
      PpDevCfgProcessDevice(a1, Handle, 0LL);
    goto LABEL_39;
  }
LABEL_12:
  v8 = v32;
  if ( v32 )
    PiPnpRtlEndOperation((PVOID **)v32);
  if ( (byte_140C130BB & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)v8,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v6,
      3,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)DeviceState;
}
