/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1C01F7F8C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C01F8400 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C021957C (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C0388D24 (DpiFdoCleanupGpuVirtualization.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // rbx
  int MiniportInterface; // eax
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v13; // eax
  int v14; // eax
  int v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  _DWORD *v20; // rcx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  int v26; // eax
  __int64 v27; // r8
  DXGADAPTER *v28; // rcx
  int *v29; // r14
  int v30; // eax
  __int64 v31; // rdx
  struct _DEVICE_OBJECT *v32; // rcx
  struct _DEVICE_OBJECT *v33; // rcx
  __int64 v34; // rdx
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  __int64 v37; // rbx
  const wchar_t *v38; // r9
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v42; // [rsp+60h] [rbp-9h] BYREF
  PVOID P; // [rsp+D0h] [rbp+67h] BYREF
  char Data; // [rsp+D8h] [rbp+6Fh] BYREF
  char v45; // [rsp+E0h] [rbp+77h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  LOBYTE(P) = 0;
  LODWORD(v6) = 0;
  if ( (**(_DWORD **)(*(_QWORD *)(v3 + 3896) + 2696LL) & 0x100) != 0 )
  {
    v8 = 0;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v3 + 5000) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 128, 1);
    v4 = 0LL;
    LODWORD(v6) = MiniportInterface;
    if ( MiniportInterface < 0 )
      goto LABEL_4;
    if ( !*(_QWORD *)(v3 + 5072)
      || !*(_QWORD *)(v3 + 5096)
      || !*(_QWORD *)(v3 + 5048)
      || !*(_QWORD *)(v3 + 5056)
      || !*(_QWORD *)(v3 + 5064)
      || !*(_QWORD *)(v3 + 5080)
      || !*(_QWORD *)(v3 + 5088)
      || !*(_QWORD *)(v3 + 5104)
      || !*(_QWORD *)(v3 + 5112)
      || !*(_QWORD *)(v3 + 5120)
      || !*(_QWORD *)(v3 + 5128)
      || !*(_QWORD *)(v3 + 5040) )
    {
      goto LABEL_89;
    }
    v26 = *(_DWORD *)(v3 + 3912);
    *(_BYTE *)(v3 + 5000) = 1;
    if ( v26 >= 9728 || (unsigned int)(v26 - 8454) <= 0xF9 )
    {
      LODWORD(v6) = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( (int)v6 < 0 )
        goto LABEL_69;
      v28 = *(DXGADAPTER **)(v3 + 3896);
      v29 = (int *)(v3 + 5448);
      memset(&v42, 0, 24);
      v42.Type = DXGKQAITYPE_DEVICE_TYPE_CAPS|DXGKQAITYPE_QUERYSEGMENT;
      v42.pOutputData = (void *)(v3 + 5448);
      *(_OWORD *)&v42.OutputDataSize = 0LL;
      v42.OutputDataSize = 4;
      LODWORD(v6) = DXGADAPTER::DdiQueryAdapterInfo(v28, &v42, v27);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      v4 = 0LL;
      if ( (int)v6 < 0 )
      {
LABEL_69:
        WdLogSingleEntry1(3LL, (int)v6);
        v4 = 0LL;
        LODWORD(v6) = 0;
      }
      else
      {
        v30 = *v29;
        if ( (unsigned int)*v29 >= 4 )
        {
          LODWORD(v6) = -1073741811;
          v31 = -1073741811LL;
LABEL_90:
          WdLogSingleEntry1(2LL, v31);
          goto LABEL_12;
        }
        if ( (v30 & 1) != 0 )
        {
          v32 = *(struct _DEVICE_OBJECT **)(v3 + 152);
          Data = -1;
          IoSetDevicePropertyData(v32, &DEVPKEY_Gpup_Supports_Guest_Hibernation, 0, 0, 0x11u, 1u, &Data);
          v30 = *(_DWORD *)(v3 + 5448);
          v4 = 0LL;
        }
        if ( (v30 & 2) != 0 )
        {
          v33 = *(struct _DEVICE_OBJECT **)(v3 + 152);
          v45 = -1;
          IoSetDevicePropertyData(v33, &DEVPKEY_Gpup_Supports_Hot_Driver_Update, 0, 0, 0x11u, 1u, &v45);
          v4 = 0LL;
        }
      }
    }
  }
  if ( !*(_BYTE *)(v3 + 4872) )
  {
    LODWORD(v6) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1);
    if ( (int)v6 < 0 )
      goto LABEL_4;
    *(_BYTE *)(v3 + 4872) = 1;
    if ( !*(_QWORD *)(v3 + 4912)
      || !*(_QWORD *)(v3 + 4920)
      || !*(_QWORD *)(v3 + 4928)
      || !*(_QWORD *)(v3 + 4936)
      || !*(_QWORD *)(v3 + 4944)
      || !*(_QWORD *)(v3 + 4952)
      || !*(_QWORD *)(v3 + 4960)
      || !*(_QWORD *)(v3 + 4968)
      || !*(_QWORD *)(v3 + 4976)
      || !*(_QWORD *)(v3 + 4992)
      || !*(_QWORD *)(v3 + 4984) )
    {
LABEL_89:
      v31 = -1073741823LL;
      LODWORD(v6) = -1073741823;
      goto LABEL_90;
    }
  }
  if ( !*(_BYTE *)(v3 + 5136) )
  {
    LODWORD(v6) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE, 48, 1);
    if ( (int)v6 < 0 )
    {
      LODWORD(v6) = 0;
    }
    else
    {
      *(_BYTE *)(v3 + 5136) = 1;
      if ( !*(_QWORD *)(v3 + 5176) || !*(_QWORD *)(v3 + 5184) )
        goto LABEL_87;
    }
  }
  if ( *(_BYTE *)(v3 + 5192) )
  {
    if ( (int)v6 >= 0 )
      goto LABEL_5;
LABEL_4:
    if ( *(_BYTE *)(v3 + 5000) )
    {
      v34 = (int)v6;
      goto LABEL_88;
    }
    goto LABEL_5;
  }
  LODWORD(v6) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_FLEXIOV_DEVICE_INTERFACE, 56, 1);
  if ( (int)v6 < 0 )
  {
    LODWORD(v6) = 0;
  }
  else
  {
    *(_BYTE *)(v3 + 5192) = 1;
    if ( !*(_QWORD *)(v3 + 5232) || !*(_QWORD *)(v3 + 5240) || !*(_QWORD *)(v3 + 5248) || *(_WORD *)(v3 + 5202) != 1 )
    {
LABEL_87:
      v34 = -1073741823LL;
      LODWORD(v6) = -1073741823;
      goto LABEL_88;
    }
  }
LABEL_5:
  if ( *(_BYTE *)(v3 + 5000) )
  {
    v8 = 1;
    *(_BYTE *)(v3 + 4872) = 1;
    *(_BYTE *)(v3 + 5192) = 1;
  }
  else
  {
    v8 = (char)P;
  }
LABEL_7:
  if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v3 + 3896), v4, a3, 1LL) )
  {
    *(_BYTE *)(v3 + 4872) = v11;
    *(_BYTE *)(v3 + 5192) = v11;
    if ( !*(_QWORD *)(v3 + 2784) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
      v13 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
              &DestinationString,
              (PUNICODE_STRING)(v3 + 2776));
      if ( v13 < 0 )
      {
        v34 = v13;
LABEL_88:
        WdLogSingleEntry1(2LL, v34);
        goto LABEL_12;
      }
    }
  }
  if ( v8 || *(_QWORD *)(v3 + 2784) )
  {
    P = 0LL;
    *(_QWORD *)(v3 + 120) = DpiFdoDispatchIoctl;
    *(_QWORD *)(v3 + 104) = DpiFdoDispatchCreate;
    *(_BYTE *)(v3 + 57) = 1;
    *(_QWORD *)(v3 + 96) = DpiFdoDispatchCleanupAndClose;
    *(_DWORD *)(v3 + 5640) = 0;
    v14 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
    v6 = v14;
    if ( v14 < 0 )
      goto LABEL_46;
    v15 = ObSetSecurityObjectByPointer(a1, 4LL, P);
    LODWORD(v6) = v15;
    if ( v15 < 0 )
      WdLogSingleEntry1(2LL, v15);
    ExFreePoolWithTag(P, 0);
  }
  if ( (int)v6 < 0 )
  {
    LODWORD(v6) = 0;
    goto LABEL_12;
  }
  if ( v8 )
  {
    if ( !*(_QWORD *)(v3 + 2768) )
    {
      v35 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
              0LL,
              (PUNICODE_STRING)(v3 + 2760));
      v6 = v35;
      if ( v35 < 0 )
        goto LABEL_46;
    }
    if ( !*(_QWORD *)(v3 + 2800) )
    {
      v36 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
              0LL,
              (PUNICODE_STRING)(v3 + 2792));
      v6 = v36;
      if ( v36 < 0 )
        goto LABEL_46;
    }
  }
  if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v3 + 3896), v9, v10, v11) )
  {
    if ( !*(_QWORD *)(v3 + 2816) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
      v16 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
              &DestinationString,
              (PUNICODE_STRING)(v3 + 2808));
      v6 = v16;
      if ( v16 < 0 )
        goto LABEL_46;
    }
  }
  if ( !*(_QWORD *)(v3 + 2832) )
  {
    v17 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v3 + 152),
            &GUID_MITIGABLE_DEVICE_INTERFACE,
            0LL,
            (PUNICODE_STRING)(v3 + 2824));
    v6 = v17;
    if ( v17 < 0 )
      goto LABEL_46;
  }
  if ( !*(_QWORD *)(v3 + 2848) )
  {
    v18 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v3 + 152),
            &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
            0LL,
            (PUNICODE_STRING)(v3 + 2840));
    v6 = v18;
    if ( v18 < 0 )
      goto LABEL_46;
  }
  if ( !*(_QWORD *)(v3 + 2864) )
  {
    v19 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v3 + 152),
            &GUID_FLEXIBLE_IOV_INTERFACE,
            0LL,
            (PUNICODE_STRING)(v3 + 2856));
    v6 = v19;
    if ( v19 < 0 )
      goto LABEL_46;
  }
  v20 = *(_DWORD **)(v3 + 3896);
  *(_BYTE *)(v3 + 5453) = 0;
  if ( (v20[666] & 4) != 0 )
  {
    if ( (v20[539] & 0x400) != 0 || v8 )
    {
      if ( !v20[386] )
      {
        *(_BYTE *)(v3 + 5453) = 1;
        goto LABEL_33;
      }
      v37 = 1463LL;
      WdLogSingleEntry1(2LL, 1463LL);
      v38 = L"VirtualGpuOnly cap is set, but driver deperted display outputs";
    }
    else
    {
      v37 = 1458LL;
      WdLogSingleEntry1(2LL, 1458LL);
      v38 = L"VirtualGpuOnly cap is set, but driver does not support GPU-P or GPU-PARAV";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v38, v37, 0LL, 0LL, 0LL, 0LL);
    v6 = -1073741811LL;
LABEL_46:
    v34 = v6;
    goto LABEL_88;
  }
LABEL_33:
  if ( v8 && g_VirtualGpuOnly )
  {
    v20[666] |= 4u;
    *(_BYTE *)(v3 + 5453) = 1;
  }
  LODWORD(v6) = 0;
  if ( *(_BYTE *)(v3 + 5000) )
  {
    v39 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2760), 1u);
    v6 = v39;
    if ( v39 < 0 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v3 + 2784) )
  {
    v21 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2776), 1u);
    v6 = v21;
    if ( v21 < 0 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v3 + 2800) )
  {
    v40 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2792), 1u);
    v6 = v40;
    if ( v40 < 0 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v3 + 2816) )
  {
    v22 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2808), 1u);
    v6 = v22;
    if ( v22 < 0 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v3 + 2832) )
  {
    v23 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2824), 1u);
    v6 = v23;
    if ( v23 < 0 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v3 + 2848) )
  {
    v24 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2840), 1u);
    v6 = v24;
    if ( v24 < 0 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v3 + 2864) )
  {
    v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2856), 1u);
    v6 = v25;
    if ( v25 < 0 )
      goto LABEL_46;
  }
LABEL_12:
  DxgkLogInternalTriageEvent(
    *(_QWORD *)(v3 + 3896),
    131075,
    -1,
    (__int64)L"GPU virtualization initialization has completed with status %1",
    (int)v6,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( (int)v6 < 0 )
    DpiFdoCleanupGpuVirtualization(v3);
  return (unsigned int)v6;
}
