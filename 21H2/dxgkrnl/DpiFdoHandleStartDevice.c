/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C01F6B40
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C0026000 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C01F68CC (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C01F6AC0 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v4; // r12
  __int64 v6; // rcx
  int v7; // eax
  int v8; // esi
  __int64 v9; // rdx
  int PnpRegistryValue; // eax
  int Status; // esi
  _DWORD *p_Length; // rcx
  int v13; // eax
  bool v14; // r15
  void *v15; // rdx
  void *v16; // rdx
  _DWORD *SecurityContext; // rdx
  struct _UNICODE_STRING *v19; // rax
  unsigned int v20; // r15d
  PVOID PoolWithTag; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _WORD *StartContext; // r14
  bool v25; // cf
  NTSTATUS v26; // eax
  int v27; // eax
  void *v28; // rcx
  PIRP v29; // rax
  PIRP v30; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-79h] BYREF
  struct _UNICODE_STRING *v32; // [rsp+48h] [rbp-71h] BYREF
  _DWORD *v33; // [rsp+50h] [rbp-69h]
  struct _UNICODE_STRING *FileName; // [rsp+58h] [rbp-61h]
  __int64 v35; // [rsp+60h] [rbp-59h] BYREF
  int v36; // [rsp+68h] [rbp-51h]
  const wchar_t *v37; // [rsp+70h] [rbp-49h]
  int *v38; // [rsp+78h] [rbp-41h]
  int v39; // [rsp+80h] [rbp-39h]
  int *v40; // [rsp+88h] [rbp-31h]
  int v41; // [rsp+90h] [rbp-29h]
  __int64 v42; // [rsp+98h] [rbp-21h]
  int v43; // [rsp+A0h] [rbp-19h]
  __int128 v44; // [rsp+A8h] [rbp-11h]
  __int128 v45; // [rsp+B8h] [rbp-1h]
  __int64 v46; // [rsp+C8h] [rbp+Fh]
  int v48; // [rsp+130h] [rbp+77h] BYREF
  void *ThreadHandle; // [rsp+138h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v33 = 0LL;
  FileName = 0LL;
  LODWORD(NumberOfBytes) = 0;
  LODWORD(ThreadHandle) = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &ThreadHandle);
  if ( v7 < 0 )
  {
    v8 = 1;
    v9 = v7;
  }
  else
  {
    v8 = (int)ThreadHandle;
    v9 = (unsigned int)ThreadHandle;
  }
  WdLogSingleEntry1(4LL, v9);
  v48 = 1;
  v35 = 0LL;
  v42 = 0LL;
  v37 = L"MultiMonSupport";
  v43 = 0;
  v38 = &v48;
  v40 = &v48;
  v36 = 288;
  v39 = 67108868;
  v41 = 4;
  v44 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v35, 0LL, 0LL);
  if ( !v48 )
    v8 = 0;
  if ( !v8
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1152)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    Status = -1071774664;
    WdLogSingleEntry1(3LL, *(_QWORD *)(DeviceExtension + 24));
    v14 = 0;
    goto LABEL_63;
  }
  *(_DWORD *)(DeviceExtension + 2688) = v8;
  if ( *(_BYTE *)(DeviceExtension + 1156) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    ThreadHandle = 0LL;
    v32 = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v33 = SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &ThreadHandle, 0);
      DpiFilterOutVgaResources(
        DeviceExtension,
        &CurrentStackLocation->Parameters.QueryDirectory.FileName->Length,
        &v32,
        1);
      if ( ThreadHandle )
      {
        v19 = v32;
        if ( v32 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)ThreadHandle;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v19;
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1152)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    LODWORD(ThreadHandle) = 0;
    PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&ThreadHandle, 4u, 2u);
    if ( PnpRegistryValue >= 0 )
    {
      if ( (_DWORD)ThreadHandle )
      {
        Status = -1073741823;
        v22 = -1073741823LL;
        v23 = 2LL;
        goto LABEL_46;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, PnpRegistryValue);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      *(unsigned int *)(DeviceExtension + 544),
      a2->IoStatus.Status,
      *(unsigned int *)(DeviceExtension + 1124),
      *(unsigned int *)(DeviceExtension + 1128),
      *(_QWORD *)(*(_QWORD *)(DeviceExtension + 40) + 152LL));
    if ( Status == -1073741810 )
    {
      v14 = *(_BYTE *)(*(_QWORD *)(DeviceExtension + 40) + 134LL)
         && RtlCompareMemory((const void *)(DeviceExtension + 544), &GUID_BUS_TYPE_USB, 0x10uLL) == 16;
      goto LABEL_63;
    }
    goto LABEL_59;
  }
  p_Length = &CurrentStackLocation->Parameters.QueryDirectory.FileName->Length;
  if ( p_Length )
  {
    DpiDetermineResourceListSize(p_Length, (int *)&NumberOfBytes);
    v20 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
    *(_QWORD *)(DeviceExtension + 1288) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v20);
      if ( v4 == 1 )
      {
        ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
        ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
        CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v33;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
      }
      goto LABEL_16;
    }
    v22 = -1073741801LL;
    Status = -1073741801;
    v23 = 6LL;
LABEL_46:
    WdLogSingleEntry1(v23, v22);
    v14 = 0;
    goto LABEL_63;
  }
LABEL_16:
  *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
  v13 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v13;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_20:
    if ( !(_BYTE)word_1C01304E0 )
      goto LABEL_21;
    goto LABEL_38;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2693) )
  {
    HIBYTE(word_1C01304E0) = 1;
    goto LABEL_20;
  }
  LOBYTE(word_1C01304E0) = 1;
LABEL_38:
  if ( HIBYTE(word_1C01304E0) )
    KeSetEvent(&stru_1C01304E8, 0, 0);
LABEL_21:
  if ( byte_1C01304E2 && !*(_BYTE *)(DeviceExtension + 1159) )
  {
    ThreadHandle = 0LL;
    StartContext = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
    if ( !StartContext )
    {
      Status = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
LABEL_59:
      v14 = 0;
      goto LABEL_63;
    }
    v25 = *(_BYTE *)(*(_QWORD *)(DeviceExtension + 168) + 108LL) != 0;
    StartContext[2] = 0;
    *((_DWORD *)StartContext + 131) = 0;
    *(_DWORD *)StartContext = v25 ? 2 : 0;
    v26 = PsCreateSystemThread(
            &ThreadHandle,
            0x1FFFFFu,
            0LL,
            0LL,
            0LL,
            (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
            StartContext);
    Status = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(2LL, v26);
      ExFreePoolWithTag(StartContext, 0x74727044u);
      goto LABEL_59;
    }
    ZwClose(ThreadHandle);
  }
  *(_DWORD *)(DeviceExtension + 284) = 1;
  *(_DWORD *)(DeviceExtension + 280) = 1;
  PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
  v14 = 0;
  if ( Status < 0 )
  {
LABEL_63:
    if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
    {
      v27 = *(_DWORD *)(DeviceExtension + 240);
      --*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 236) = v27;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension
                                                     + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7)
                                                     + 244);
    }
    v28 = *(void **)(DeviceExtension + 1288);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *(_QWORD *)(DeviceExtension + 1288) = 0LL;
    }
    if ( !v14 )
      DxgCreateLiveDumpWithWdLogs(403LL, 2050LL);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v15 = *(void **)(DeviceExtension + 5344);
    if ( v15 )
    {
      v29 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5256), v15);
      *(_QWORD *)(DeviceExtension + 5344) = 0LL;
      if ( v29 )
      {
        *(_BYTE *)(DeviceExtension + 5372) = 1;
        v29->IoStatus.Status = 0;
        v29->IoStatus.Information = 0LL;
        IofCompleteRequest(v29, 0);
        IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 152));
      }
    }
    v16 = *(void **)(DeviceExtension + 5376);
    if ( v16 )
    {
      v30 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5256), v16);
      *(_QWORD *)(DeviceExtension + 5376) = 0LL;
      if ( v30 )
      {
        *(_BYTE *)(DeviceExtension + 5404) = 1;
        v30->IoStatus.Status = 0;
        v30->IoStatus.Information = 0LL;
        IofCompleteRequest(v30, 0);
      }
    }
  }
LABEL_27:
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
