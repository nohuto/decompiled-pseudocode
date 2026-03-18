/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1C0172B1C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012746C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C0172C30 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiQueryMiniportInterface @ 0x1C01759A8 (DpiQueryMiniportInterface.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x1C02133A8 (DxgkCheckGpuVirtualizationCaps.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C02C3C3C (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02C4000 (DpiFdoCleanupGpuVirtualization.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // eax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rcx
  int *v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  struct _DEVICE_OBJECT *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  NTSTATUS v34; // eax
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  int v38; // eax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING ReferenceString; // [rsp+50h] [rbp-19h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v48; // [rsp+60h] [rbp-9h] BYREF
  PVOID P; // [rsp+D0h] [rbp+67h] BYREF
  char Data; // [rsp+D8h] [rbp+6Fh] BYREF
  char v51; // [rsp+E0h] [rbp+77h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v4) = 0;
  LOBYTE(P) = 0;
  v6 = *(_DWORD **)(*(_QWORD *)(v3 + 3896) + 2576LL);
  if ( (*v6 & 0x100) != 0 )
  {
    v8 = 0;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(v3 + 5072) )
  {
    LODWORD(v4) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 128, 1);
    if ( (int)v4 < 0 )
      goto LABEL_4;
    if ( !*(_QWORD *)(v3 + 5144)
      || !*(_QWORD *)(v3 + 5168)
      || !*(_QWORD *)(v3 + 5120)
      || !*(_QWORD *)(v3 + 5128)
      || !*(_QWORD *)(v3 + 5136)
      || !*(_QWORD *)(v3 + 5152)
      || !*(_QWORD *)(v3 + 5160)
      || !*(_QWORD *)(v3 + 5176)
      || !*(_QWORD *)(v3 + 5184)
      || !*(_QWORD *)(v3 + 5192)
      || !*(_QWORD *)(v3 + 5200)
      || !*(_QWORD *)(v3 + 5112) )
    {
      goto LABEL_31;
    }
    v13 = *(_DWORD *)(v3 + 3912);
    *(_BYTE *)(v3 + 5072) = 1;
    if ( v13 >= 9728 || (unsigned int)(v13 - 8454) <= 0xF9 )
    {
      LODWORD(v4) = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( (int)v4 < 0 )
        goto LABEL_56;
      v15 = *(DXGADAPTER **)(v3 + 3896);
      v16 = (int *)(v3 + 5520);
      memset(&v48, 0, 24);
      v48.Type = DXGKQAITYPE_DEVICE_TYPE_CAPS|DXGKQAITYPE_QUERYSEGMENT;
      v48.pOutputData = (void *)(v3 + 5520);
      *(_OWORD *)&v48.OutputDataSize = 0LL;
      v48.OutputDataSize = 4;
      LODWORD(v4) = DXGADAPTER::DdiQueryAdapterInfo(v15, &v48, a3);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      if ( (int)v4 < 0 )
      {
LABEL_56:
        v21 = WdLogNewEntry5_WdWarning(v14, a2, a3);
        *(_QWORD *)(v21 + 24) = (int)v4;
        WdLogEvent5_WdWarning(v21);
        LODWORD(v4) = 0;
      }
      else
      {
        v17 = *v16;
        if ( (unsigned int)*v16 >= 4 )
        {
          LODWORD(v4) = -1073741811;
          v18 = WdLogNewEntry5_WdError(v14, a2);
          *(_QWORD *)(v18 + 24) = -1073741811LL;
LABEL_32:
          WdLogEvent5_WdError(v18);
          goto LABEL_33;
        }
        if ( (v17 & 1) != 0 )
        {
          v19 = *(struct _DEVICE_OBJECT **)(v3 + 152);
          Data = -1;
          IoSetDevicePropertyData(v19, &DEVPKEY_Gpup_Supports_Guest_Hibernation, 0, 0, 0x11u, 1u, &Data);
          v17 = *(_DWORD *)(v3 + 5520);
        }
        if ( (v17 & 2) != 0 )
        {
          v20 = *(struct _DEVICE_OBJECT **)(v3 + 152);
          v51 = -1;
          IoSetDevicePropertyData(v20, &DEVPKEY_Gpup_Supports_Hot_Driver_Update, 0, 0, 0x11u, 1u, &v51);
        }
      }
    }
  }
  if ( *(_BYTE *)(v3 + 4944) )
    goto LABEL_51;
  LODWORD(v4) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1);
  if ( (int)v4 >= 0 )
  {
    *(_BYTE *)(v3 + 4944) = 1;
    if ( !*(_QWORD *)(v3 + 4984)
      || !*(_QWORD *)(v3 + 4992)
      || !*(_QWORD *)(v3 + 5000)
      || !*(_QWORD *)(v3 + 5008)
      || !*(_QWORD *)(v3 + 5016)
      || !*(_QWORD *)(v3 + 5024)
      || !*(_QWORD *)(v3 + 5032)
      || !*(_QWORD *)(v3 + 5040)
      || !*(_QWORD *)(v3 + 5048)
      || !*(_QWORD *)(v3 + 5064)
      || !*(_QWORD *)(v3 + 5056) )
    {
      goto LABEL_31;
    }
LABEL_51:
    if ( !*(_BYTE *)(v3 + 5208) )
    {
      LODWORD(v4) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE, 48, 1);
      if ( (int)v4 < 0 )
      {
        LODWORD(v4) = 0;
      }
      else
      {
        *(_BYTE *)(v3 + 5208) = 1;
        if ( !*(_QWORD *)(v3 + 5248) || !*(_QWORD *)(v3 + 5256) )
          goto LABEL_31;
      }
    }
    if ( !*(_BYTE *)(v3 + 5264) )
    {
      LODWORD(v4) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_FLEXIOV_DEVICE_INTERFACE, 56, 1);
      if ( (int)v4 < 0 )
      {
        LODWORD(v4) = 0;
      }
      else
      {
        *(_BYTE *)(v3 + 5264) = 1;
        if ( !*(_QWORD *)(v3 + 5304) || !*(_QWORD *)(v3 + 5312) || !*(_QWORD *)(v3 + 5320) || *(_WORD *)(v3 + 5274) != 1 )
        {
LABEL_31:
          LODWORD(v4) = -1073741823;
          v18 = WdLogNewEntry5_WdError(v7, a2);
          *(_QWORD *)(v18 + 24) = -1073741823LL;
          goto LABEL_32;
        }
      }
    }
    if ( *(_BYTE *)(v3 + 5072) )
    {
      v8 = 1;
      *(_BYTE *)(v3 + 4944) = 1;
      *(_BYTE *)(v3 + 5264) = 1;
      goto LABEL_6;
    }
LABEL_5:
    v8 = (char)P;
LABEL_6:
    if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v3 + 3896), a2, a3, 1LL) )
    {
      *(_BYTE *)(v3 + 4944) = v11;
      *(_BYTE *)(v3 + 5264) = v11;
      if ( !*(_QWORD *)(v3 + 2784) )
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
        v23 = IoRegisterDeviceInterface(
                *(PDEVICE_OBJECT *)(v3 + 152),
                &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                &DestinationString,
                (PUNICODE_STRING)(v3 + 2776));
        v25 = v23;
        if ( v23 < 0 )
        {
          v22 = WdLogNewEntry5_WdError(v24, v9);
          *(_QWORD *)(v22 + 24) = v25;
          goto LABEL_108;
        }
      }
    }
    if ( v8 || *(_QWORD *)(v3 + 2784) )
    {
      P = 0LL;
      *(_QWORD *)(v3 + 120) = DpiFdoDispatchIoctl;
      *(_QWORD *)(v3 + 104) = &DpiFdoDispatchCreate;
      *(_BYTE *)(v3 + 57) = 1;
      *(_QWORD *)(v3 + 96) = &DpiFdoDispatchCleanupAndClose;
      *(_DWORD *)(v3 + 5712) = 0;
      v26 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
      v4 = v26;
      if ( v26 < 0 )
      {
LABEL_107:
        v22 = WdLogNewEntry5_WdError(v27, v9);
        *(_QWORD *)(v22 + 24) = v4;
        goto LABEL_108;
      }
      v28 = ObSetSecurityObjectByPointer(a1, 4LL, P);
      v4 = v28;
      if ( v28 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v31 + 24) = v4;
        WdLogEvent5_WdError(v31);
      }
      ExFreePoolWithTag(P, 0);
    }
    if ( (int)v4 < 0 )
    {
      LODWORD(v4) = 0;
      goto LABEL_11;
    }
    if ( !v8
      || (*(_QWORD *)(v3 + 2768)
       || (v32 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v3 + 152),
                   &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v3 + 2760)),
           v4 = v32,
           v32 >= 0))
      && (*(_QWORD *)(v3 + 2800)
       || (v33 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v3 + 152),
                   &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v3 + 2792)),
           v4 = v33,
           v33 >= 0)) )
    {
      if ( !(unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v3 + 3896), v9, v10, v11)
        || *(_QWORD *)(v3 + 2816)
        || (ReferenceString = 0LL,
            RtlInitUnicodeString(&ReferenceString, L"GPUPARAV"),
            v34 = IoRegisterDeviceInterface(
                    *(PDEVICE_OBJECT *)(v3 + 152),
                    &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                    &ReferenceString,
                    (PUNICODE_STRING)(v3 + 2808)),
            v4 = v34,
            v34 >= 0) )
      {
        if ( *(_QWORD *)(v3 + 2832)
          || (v35 = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(v3 + 152),
                      &GUID_MITIGABLE_DEVICE_INTERFACE,
                      0LL,
                      (PUNICODE_STRING)(v3 + 2824)),
              v4 = v35,
              v35 >= 0) )
        {
          if ( *(_QWORD *)(v3 + 2848)
            || (v36 = IoRegisterDeviceInterface(
                        *(PDEVICE_OBJECT *)(v3 + 152),
                        &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                        0LL,
                        (PUNICODE_STRING)(v3 + 2840)),
                v4 = v36,
                v36 >= 0) )
          {
            if ( *(_QWORD *)(v3 + 2864)
              || (v37 = IoRegisterDeviceInterface(
                          *(PDEVICE_OBJECT *)(v3 + 152),
                          &GUID_FLEXIBLE_IOV_INTERFACE,
                          0LL,
                          (PUNICODE_STRING)(v3 + 2856)),
                  v4 = v37,
                  v37 >= 0) )
            {
              LOBYTE(v9) = v8;
              v38 = DxgkCheckGpuVirtualizationCaps(*(_QWORD *)(v3 + 3896), v9, v3 + 5525);
              v4 = v38;
              if ( v38 >= 0 )
              {
                if ( !*(_BYTE *)(v3 + 5072)
                  || (v39 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2760), 1u), v4 = v39, v39 >= 0) )
                {
                  if ( !*(_QWORD *)(v3 + 2784)
                    || (v40 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2776), 1u), v4 = v40, v40 >= 0) )
                  {
                    if ( !*(_QWORD *)(v3 + 2800)
                      || (v41 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2792), 1u), v4 = v41, v41 >= 0) )
                    {
                      if ( !*(_QWORD *)(v3 + 2816)
                        || (v42 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2808), 1u), v4 = v42, v42 >= 0) )
                      {
                        if ( !*(_QWORD *)(v3 + 2832)
                          || (v43 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2824), 1u), v4 = v43, v43 >= 0) )
                        {
                          if ( !*(_QWORD *)(v3 + 2848)
                            || (v44 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2840), 1u), v4 = v44, v44 >= 0) )
                          {
                            if ( !*(_QWORD *)(v3 + 2864) )
                              goto LABEL_11;
                            v45 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2856), 1u);
                            v4 = v45;
                            if ( v45 >= 0 )
                              return (unsigned int)v4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_107;
  }
LABEL_4:
  if ( !*(_BYTE *)(v3 + 5072) )
    goto LABEL_5;
  v22 = WdLogNewEntry5_WdError(v7, a2);
  *(_QWORD *)(v22 + 24) = (int)v4;
LABEL_108:
  WdLogEvent5_WdError(v22);
LABEL_11:
  if ( (int)v4 < 0 )
LABEL_33:
    DpiFdoCleanupGpuVirtualization(v3);
  return (unsigned int)v4;
}
