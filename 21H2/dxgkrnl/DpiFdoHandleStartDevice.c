/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C017B870
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4B0 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C00216F4 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C00E28DC (DpiEnableD3Requests.c)
 *     DpiReadPnpRegistryValue @ 0x1C01842D4 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C019A46C (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C019A660 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0220DE0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v4; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 Status; // rsi
  PUNICODE_STRING v24; // rcx
  int v25; // eax
  bool v26; // zf
  void *v27; // rdx
  void *v28; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v31; // r9
  struct _UNICODE_STRING *v32; // rax
  unsigned int v33; // r15d
  PVOID PoolWithTag; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // eax
  void *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  _WORD *StartContext; // r14
  __int64 v46; // rax
  bool v47; // cf
  NTSTATUS v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  PIRP v52; // rax
  PIRP v53; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-79h] BYREF
  struct _UNICODE_STRING *v55; // [rsp+48h] [rbp-71h] BYREF
  ULONG_PTR v56; // [rsp+50h] [rbp-69h]
  struct _UNICODE_STRING *FileName; // [rsp+58h] [rbp-61h]
  __int64 v58; // [rsp+60h] [rbp-59h] BYREF
  int v59; // [rsp+68h] [rbp-51h]
  const wchar_t *v60; // [rsp+70h] [rbp-49h]
  int *v61; // [rsp+78h] [rbp-41h]
  int v62; // [rsp+80h] [rbp-39h]
  int *v63; // [rsp+88h] [rbp-31h]
  int v64; // [rsp+90h] [rbp-29h]
  __int64 v65; // [rsp+98h] [rbp-21h]
  int v66; // [rsp+A0h] [rbp-19h]
  __int128 v67; // [rsp+A8h] [rbp-11h]
  __int128 v68; // [rsp+B8h] [rbp-1h]
  __int64 v69; // [rsp+C8h] [rbp+Fh]
  char v71; // [rsp+128h] [rbp+6Fh]
  int v72; // [rsp+130h] [rbp+77h] BYREF
  void *ThreadHandle; // [rsp+138h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v71 = 0;
  v56 = 0LL;
  FileName = 0LL;
  LODWORD(NumberOfBytes) = 0;
  LODWORD(ThreadHandle) = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &ThreadHandle);
  v10 = v7;
  if ( v7 < 0 )
  {
    v12 = 1;
    v11 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
  }
  else
  {
    v11 = WdLogNewEntry5_WdEvent(v9, v8);
    v12 = (int)ThreadHandle;
    *(_QWORD *)(v11 + 24) = (unsigned int)ThreadHandle;
  }
  WdLogEvent5_WdEvent(v11);
  v72 = 1;
  v58 = 0LL;
  v59 = 288;
  v60 = L"MultiMonSupport";
  v62 = 67108868;
  v61 = &v72;
  v64 = 4;
  v63 = &v72;
  v65 = 0LL;
  v66 = 0;
  v67 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v58, 0LL, 0LL);
  if ( !v72 )
    v12 = 0;
  if ( !v12
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1152)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    LODWORD(Status) = -1071774664;
    v39 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v39 + 24) = *(_QWORD *)(DeviceExtension + 24);
    WdLogEvent5_WdWarning(v39);
    goto LABEL_48;
  }
  *(_DWORD *)(DeviceExtension + 2688) = v12;
  if ( *(_BYTE *)(DeviceExtension + 1155) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    ThreadHandle = 0LL;
    v55 = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v56 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &ThreadHandle, 0LL);
      LOBYTE(v31) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v55, v31);
      if ( ThreadHandle )
      {
        v32 = v55;
        if ( v55 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)ThreadHandle;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v32;
        }
      }
    }
    else
    {
      v42 = WdLogNewEntry5_WdError(v14, 0LL);
      *(_QWORD *)(v42 + 24) = 0LL;
      WdLogEvent5_WdError(v42);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1152)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    LODWORD(ThreadHandle) = 0;
    v16 = DpiReadPnpRegistryValue(a1, L"DisableNonPOSTDevice", &ThreadHandle, 4LL);
    v19 = v16;
    if ( v16 >= 0 )
    {
      if ( (_DWORD)ThreadHandle )
      {
        LODWORD(Status) = -1073741823;
        v43 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v43 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v43);
        goto LABEL_48;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdEvent(v20);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    v24 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
    if ( v24 )
    {
      DpiDetermineResourceListSize(v24, &NumberOfBytes);
      v33 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
      *(_QWORD *)(DeviceExtension + 1288) = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_64;
      memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v33);
      if ( v4 == 1 )
      {
        ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
        ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
        CurrentStackLocation->Parameters.WMI.ProviderId = v56;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
      }
    }
    *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
    v25 = *(_DWORD *)(DeviceExtension + 236);
    ++*(_DWORD *)(DeviceExtension + 276);
    v26 = *(_DWORD *)(DeviceExtension + 16) == 1953656900;
    *(_DWORD *)(DeviceExtension + 240) = v25;
    *(_DWORD *)(DeviceExtension + 236) = 1;
    if ( v26 && *(_DWORD *)(DeviceExtension + 20) == 2 )
    {
      if ( *(_BYTE *)(DeviceExtension + 2693) )
      {
        byte_1C00B2B58 = 1;
LABEL_40:
        if ( byte_1C00B2B59 )
          KeSetEvent(&stru_1C00B2B60, 0, 0);
LABEL_21:
        if ( byte_1C00B2B5A && !*(_BYTE *)(DeviceExtension + 1158) )
        {
          ThreadHandle = 0LL;
          StartContext = ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
          if ( !StartContext )
          {
LABEL_64:
            LODWORD(Status) = -1073741801;
            v46 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
            *(_QWORD *)(v46 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v46);
            goto LABEL_48;
          }
          v47 = *(_BYTE *)(*(_QWORD *)(DeviceExtension + 168) + 108LL) != 0;
          StartContext[2] = 0;
          *((_DWORD *)StartContext + 131) = 0;
          *(_DWORD *)StartContext = v47 ? 2 : 0;
          v48 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiFdoStartAdapterThread, StartContext);
          Status = v48;
          if ( v48 < 0 )
          {
            v51 = WdLogNewEntry5_WdError(v50, v49);
            *(_QWORD *)(v51 + 24) = Status;
            WdLogEvent5_WdError(v51);
            ExFreePoolWithTag(StartContext, 0x74727044u);
            goto LABEL_23;
          }
          ZwClose(ThreadHandle);
        }
        *(_DWORD *)(DeviceExtension + 284) = 1;
        *(_DWORD *)(DeviceExtension + 280) = 1;
        PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
        goto LABEL_23;
      }
      byte_1C00B2B59 = 1;
    }
    if ( !byte_1C00B2B58 )
      goto LABEL_21;
    goto LABEL_40;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
  v44[3] = *(unsigned int *)(DeviceExtension + 544);
  v44[4] = Status;
  v44[5] = *(unsigned int *)(DeviceExtension + 1124);
  v44[6] = *(unsigned int *)(DeviceExtension + 1128);
  v44[7] = *(_QWORD *)(*(_QWORD *)(DeviceExtension + 40) + 152LL);
  WdLogEvent5_WdError(v44);
  if ( (_DWORD)Status == -1073741810 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(DeviceExtension + 40) + 134LL)
      || RtlCompareMemory((const void *)(DeviceExtension + 544), &GUID_BUS_TYPE_USB, 0x10uLL) != 16 )
    {
      goto LABEL_48;
    }
    v71 = 1;
  }
LABEL_23:
  if ( (int)Status < 0 )
  {
LABEL_48:
    if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
    {
      v40 = *(_DWORD *)(DeviceExtension + 240);
      --*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 236) = v40;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension
                                                     + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7)
                                                     + 244);
    }
    v41 = *(void **)(DeviceExtension + 1288);
    if ( v41 )
    {
      ExFreePoolWithTag(v41, 0);
      *(_QWORD *)(DeviceExtension + 1288) = 0LL;
    }
    if ( !v71 )
      DxgCreateLiveDumpWithWdLogs(
        0x193u,
        0x802uLL,
        (int)Status,
        *(int *)(DeviceExtension + 236),
        *(int *)(DeviceExtension + 240),
        0);
    goto LABEL_28;
  }
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v27 = *(void **)(DeviceExtension + 5416);
    if ( v27 )
    {
      v52 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5328), v27);
      *(_QWORD *)(DeviceExtension + 5416) = 0LL;
      if ( v52 )
      {
        *(_BYTE *)(DeviceExtension + 5444) = 1;
        v52->IoStatus.Status = 0;
        v52->IoStatus.Information = 0LL;
        IofCompleteRequest(v52, 0);
        IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 152));
      }
    }
    v28 = *(void **)(DeviceExtension + 5448);
    if ( v28 )
    {
      v53 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5328), v28);
      *(_QWORD *)(DeviceExtension + 5448) = 0LL;
      if ( v53 )
      {
        *(_BYTE *)(DeviceExtension + 5476) = 1;
        v53->IoStatus.Status = 0;
        v53->IoStatus.Information = 0LL;
        IofCompleteRequest(v53, 0);
      }
    }
  }
LABEL_28:
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
