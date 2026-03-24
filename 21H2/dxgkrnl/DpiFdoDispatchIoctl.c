/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C02C8F20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0050FFC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0051124 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C0052A0C (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C022F898 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     DxgkDdiCreateVirtualGpu @ 0x1C0230EC0 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0230F34 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C02310E4 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0231368 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C023144C (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C02314BC (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C0231524 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C0231598 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0231A5C (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0231D94 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02CA180 (DpiFdoGetVirtualGpuType.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CCE50 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C02CD028 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C02CD2A0 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02CD430 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C02CD624 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C02CD710 (DpiSriovNotification.c)
 *     DpiIndirectDdiIoControl @ 0x1C02D5848 (DpiIndirectDdiIoControl.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG_PTR v3; // rsi
  PDEVICE_OBJECT *DeviceExtension; // rcx
  unsigned int LowPart; // eax
  __int64 v8; // rdx
  ULONG_PTR Length; // r13
  NTSTATUS v10; // ebx
  unsigned int Options; // r12d
  __int64 v12; // rax
  struct _IRP *MasterIrp; // rdi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // ebx
  CInterfaceCallContext *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r15
  unsigned int v28; // r13d
  ADAPTER_RENDER **v29; // rcx
  __int64 v30; // r9
  int GpuPartitionInfo; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  ULONG Flags; // eax
  __int64 v40; // rax
  int MitigatedRanges; // eax
  int v42; // eax
  _QWORD *v43; // rcx
  int MitigatedRangeCount; // eax
  int v45; // eax
  __int64 v46; // xmm1_8
  NTSTATUS v47; // eax
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  NTSTATUS VirtualizationFlags; // eax
  int v59; // eax
  __int64 v60; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  NTSTATUS v64; // edx
  int v65; // ebx
  CSHORT v66; // cx
  void *v67; // rax
  struct _LIST_ENTRY *v68; // rcx
  DRIVER_CANCEL *v69; // rax
  struct _LIST_ENTRY *v70; // rcx
  void *v71; // rax
  void *v72; // rcx
  struct _LIST_ENTRY *v73; // rax
  ULONG_PTR v74; // rcx
  unsigned int VirtualGpuType; // eax
  __int64 v76; // rbx
  unsigned int v77; // r12d
  unsigned __int8 v78; // zf
  __int64 v79; // r15
  ADAPTER_RENDER **v80; // rcx
  __int64 *v81; // rcx
  _QWORD *v82; // rcx
  __int64 v83; // rax
  unsigned int v84[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _IRP *v85; // [rsp+50h] [rbp-B0h]
  __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v87; // [rsp+60h] [rbp-A0h]
  _QWORD v88[5]; // [rsp+68h] [rbp-98h] BYREF
  int Type; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v90[41]; // [rsp+94h] [rbp-6Ch] BYREF
  _QWORD v91[306]; // [rsp+140h] [rbp+40h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v86 = 0LL;
  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  v87 = (__int64)DeviceExtension;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = 1LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = -1073741637;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( *((_BYTE *)DeviceExtension + 1158) && (!*((_BYTE *)DeviceExtension + 1159) || LowPart != 2345988) )
  {
    v12 = WdLogNewEntry5_WdError(DeviceExtension, 1LL);
    *(_QWORD *)(v12 + 24) = -1073741637LL;
LABEL_5:
    WdLogEvent5_WdError(v12);
LABEL_124:
    a2->IoStatus.Status = v10;
    a2->IoStatus.Information = v3;
    IofCompleteRequest(a2, 1);
    return v10;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( LowPart > 0x22644C )
  {
    v50 = LowPart - 2253908;
    if ( !v50 )
    {
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_43;
      if ( Options >= 0x78 && MasterIrp && (unsigned int)Length >= 0x88 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v84, a1, a2, 0);
        v10 = (int)v85;
        if ( (int)v85 >= 0 )
        {
          VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
          v76 = *(_QWORD *)&MasterIrp->Flags;
          v77 = VirtualGpuType;
          if ( v76 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
          {
            memset(v91, 0, sizeof(v91));
            v78 = LOBYTE(MasterIrp->UserBuffer) == 0;
            v79 = v87;
            LODWORD(v91[0]) = (unsigned __int16)MasterIrp->Type;
            v91[2] = MasterIrp->AssociatedIrp.MasterIrp;
            v80 = *(ADAPTER_RENDER ***)(v87 + 3896);
            v91[3] = MasterIrp->ThreadListEntry.Flink;
            v91[4] = MasterIrp->ThreadListEntry.Blink;
            v91[5] = MasterIrp->IoStatus.Pointer;
            v91[6] = MasterIrp->IoStatus.Information;
            v91[7] = *(_QWORD *)&MasterIrp->RequestorMode;
            v91[8] = MasterIrp->UserIosb;
            v91[9] = MasterIrp->UserEvent;
            v91[10] = MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine;
            v91[11] = MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
            v91[12] = MasterIrp->CancelRoutine;
            v91[1] = v76;
            LODWORD(v85) = DxgkDdiCreateVirtualGpu(v80, v77, v78, (int *)v91);
            v10 = (int)v85;
            if ( (int)v85 >= 0 )
            {
              memset(v90, 0, 0x64uLL);
              v81 = *(__int64 **)(v79 + 3896);
              Type = v91[0];
              LODWORD(v85) = DxgkDdiGetVirtualGpuInfo(
                               v81,
                               v77,
                               (unsigned int *)&Type,
                               (PMDL *)((char *)&MasterIrp->MdlAddress + 4),
                               &MasterIrp->Flags + 1);
              v10 = (int)v85;
              if ( (int)v85 < 0 )
              {
                v82 = *(_QWORD **)(v79 + 3896);
                LODWORD(v86) = v91[0];
                DxgkDdiDestroyVirtualGpu(v82, v77, (unsigned int *)&v86);
              }
              else
              {
                v3 = 136LL;
                LOWORD(MasterIrp->MdlAddress) = v91[0];
                MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v90[1];
                MasterIrp->IoStatus.Pointer = *(PVOID *)&v90[3];
                MasterIrp->IoStatus.Information = *(_QWORD *)&v90[5];
                *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v90[7];
                MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v90[9];
                MasterIrp->UserEvent = *(PKEVENT *)&v90[11];
                MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v90[13];
                MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v90[15];
                MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v90[17];
                MasterIrp->UserBuffer = *(PVOID *)&v90[19];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v90[21];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v90[23];
              }
            }
          }
          else
          {
            LODWORD(v86) = (unsigned __int16)MasterIrp->Type;
            v10 = DxgkDdiDestroyVirtualGpu(*(_QWORD **)(v87 + 3896), VirtualGpuType, (unsigned int *)&v86);
            LODWORD(v85) = v10;
          }
        }
        goto LABEL_22;
      }
      goto LABEL_122;
    }
    v51 = v50 - 4;
    if ( !v51 )
    {
      if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0x80 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v84, a1, a2, 1);
        v64 = (int)v85;
        if ( (int)v85 >= 0 )
        {
          v65 = DpiFdoGetVirtualGpuType(a2);
          memset(v90, 0, 0x64uLL);
          Type = (unsigned __int16)MasterIrp->Type;
          LODWORD(v85) = DxgkDdiGetVirtualGpuInfo(
                           *(__int64 **)(v87 + 3896),
                           v65,
                           (unsigned int *)&Type,
                           &MasterIrp->Size + 1,
                           (PMDL *)((char *)&MasterIrp->MdlAddress + 4));
          v64 = (int)v85;
          if ( (int)v85 >= 0 )
          {
            v3 = 128LL;
            v66 = Type;
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v90[9];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v90[11];
            MasterIrp->UserEvent = *(PKEVENT *)&v90[13];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v90[15];
            v67 = *(void **)&v90[17];
            MasterIrp->Type = v66;
            v68 = *(struct _LIST_ENTRY **)&v90[1];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v67;
            v69 = *(DRIVER_CANCEL **)&v90[19];
            MasterIrp->ThreadListEntry.Flink = v68;
            v70 = *(struct _LIST_ENTRY **)&v90[3];
            MasterIrp->CancelRoutine = v69;
            v71 = *(void **)&v90[21];
            MasterIrp->ThreadListEntry.Blink = v70;
            v72 = *(void **)&v90[5];
            MasterIrp->UserBuffer = v71;
            v73 = *(struct _LIST_ENTRY **)&v90[23];
            MasterIrp->IoStatus.Pointer = v72;
            v74 = *(_QWORD *)&v90[7];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = v73;
            MasterIrp->IoStatus.Information = v74;
          }
        }
        v10 = v64;
        goto LABEL_22;
      }
      goto LABEL_122;
    }
    v52 = v51 - 4;
    if ( !v52 )
      goto LABEL_89;
    v53 = v52 - 4;
    if ( !v53 )
    {
      if ( Options >= 8 && MasterIrp )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v84, a1, a2, 1);
        v10 = (int)v85;
        if ( (int)v85 >= 0 )
        {
          v59 = DpiFdoGetVirtualGpuType(a2);
          HIDWORD(v88[0]) = Options;
          v88[1] = (unsigned int)Length;
          v60 = *(_QWORD *)(v87 + 3896);
          v88[2] = MasterIrp;
          v88[3] = MasterIrp;
          VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(
                               *(_QWORD *)(v60 + 2704),
                               v59,
                               (struct _LUID *)MasterIrp);
          if ( VirtualGpuByLuid )
          {
            LODWORD(v88[0]) = *((_DWORD *)VirtualGpuByLuid + 6);
            LODWORD(v85) = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _QWORD *))(*(_QWORD *)VirtualGpuByLuid
                                                                                          + 40LL))(
                             VirtualGpuByLuid,
                             v88);
            v10 = (int)v85;
            if ( (int)v85 >= 0 )
              v3 = LODWORD(v88[1]);
          }
          else
          {
            v63 = WdLogNewEntry5_WdError(0LL, v62);
            *(_QWORD *)(v63 + 24) = 1549LL;
            WdLogEvent5_WdError(v63);
            v10 = -1073741811;
            LODWORD(v85) = -1073741811;
          }
        }
        goto LABEL_22;
      }
      goto LABEL_122;
    }
    v54 = v53 - 996;
    if ( !v54 )
    {
      if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
      {
        DpiFdoGetVirtualGpuType(a2);
        VirtualizationFlags = DpiGetVirtualizationFlags(a1, (__int64)MasterIrp, Length, (__int64)&v86);
        v3 = v86;
        v10 = VirtualizationFlags;
        goto LABEL_123;
      }
LABEL_43:
      v12 = WdLogNewEntry5_WdError(DeviceExtension, v8);
      v10 = -1073741790;
      *(_QWORD *)(v12 + 24) = -1073741790LL;
      goto LABEL_5;
    }
    v55 = v54 - 4;
    if ( v55 )
    {
      v56 = v55 - 20;
      if ( v56 )
      {
        if ( v56 != 91048 )
          goto LABEL_86;
        LODWORD(v86) = 0;
        v47 = DpiIndirectDdiIoControl(
                (_DWORD)DeviceExtension,
                Options,
                (_DWORD)MasterIrp,
                Length,
                (__int64)MasterIrp,
                (__int64)&v86);
      }
      else
      {
        v47 = DpiFlexIovMitigationUpdate(a1, a2, (__int64)MasterIrp, CurrentStackLocation->Parameters.Read.Length);
      }
    }
    else
    {
LABEL_89:
      v47 = DpiSetPartitionVmbus(a1, a2, a2->AssociatedIrp.MasterIrp, Options);
    }
LABEL_65:
    v10 = v47;
    goto LABEL_123;
  }
  if ( LowPart == 2253900 )
  {
    if ( a2->RequestorMode )
    {
      if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_43;
      v8 = 1LL;
    }
    if ( Options < 2 || !MasterIrp )
      goto LABEL_122;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v84, a1, a2, 1);
    MitigatedRangeCount = (int)v85;
    if ( (int)v85 >= 0 )
    {
      v49 = DpiFdoGetVirtualGpuType(a2);
      LODWORD(v86) = (unsigned __int16)MasterIrp->Type;
      MitigatedRangeCount = DxgkDdiSetGpuPartitionCount(*(ADAPTER_RENDER ***)(v87 + 3896), v49, (int *)&v86);
      LODWORD(v85) = MitigatedRangeCount;
    }
    goto LABEL_61;
  }
  v14 = LowPart - 2252868;
  if ( !v14 )
  {
    v47 = DpiSriovNotification(a1, a2);
    goto LABEL_65;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_43;
    v48 = DpiFdoGetVirtualGpuType(a2);
    v47 = DpiSriovEventComplete(a1, v48, MasterIrp, Options);
    goto LABEL_65;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    v47 = DpiSriovAttach(a1, a2);
    goto LABEL_65;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_43;
    DpiFdoGetVirtualGpuType(a2);
    v47 = DpiSriovDetach(a1);
    goto LABEL_65;
  }
  v18 = v17 - 8;
  if ( !v18 )
  {
    if ( a2->RequestorMode )
    {
      if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_43;
      v8 = 1LL;
    }
    if ( Options < 2 || !MasterIrp || (unsigned int)Length < 0x18 )
      goto LABEL_122;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v84, a1, a2, 1);
    MitigatedRangeCount = (int)v85;
    if ( (int)v85 >= 0 )
    {
      v45 = DpiFdoGetVirtualGpuType(a2);
      LODWORD(v88[0]) = (unsigned __int16)MasterIrp->Type;
      memset((char *)v88 + 4, 0, 24);
      MitigatedRangeCount = DxgkDdiQueryMitigatedRangeCount(*(_QWORD **)(v87 + 3896), v45, (unsigned int *)v88);
      LODWORD(v85) = MitigatedRangeCount;
      if ( MitigatedRangeCount >= 0 )
      {
        v3 = 24LL;
        v46 = *(_QWORD *)((char *)&v88[2] + 4);
        *(_OWORD *)&MasterIrp->Type = *(_OWORD *)((char *)v88 + 4);
        *(_QWORD *)&MasterIrp->Flags = v46;
      }
    }
LABEL_61:
    v10 = MitigatedRangeCount;
LABEL_22:
    v22 = (CInterfaceCallContext *)v84;
LABEL_23:
    CInterfaceCallContext::~CInterfaceCallContext(v22);
    goto LABEL_123;
  }
  v19 = v18 - 4;
  if ( !v19 )
  {
    if ( a2->RequestorMode )
    {
      if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_43;
      v8 = 1LL;
    }
    if ( Options >= 4 && MasterIrp && (unsigned int)Length >= 0x10 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v88, a1, a2, 1);
      MitigatedRanges = v88[2];
      if ( SLODWORD(v88[2]) >= 0 )
      {
        v42 = DpiFdoGetVirtualGpuType(a2);
        v84[0] = (unsigned __int16)MasterIrp->Type;
        v84[1] = LOBYTE(MasterIrp->Size);
        v84[2] = (unsigned int)Length >> 4;
        v43 = *(_QWORD **)(v87 + 3896);
        v84[3] = 0;
        v85 = MasterIrp;
        MitigatedRanges = DxgkDdiQueryMitigatedRanges(v43, v42, v84);
        LODWORD(v88[2]) = MitigatedRanges;
        if ( MitigatedRanges >= 0 )
          v3 = Length;
      }
      v10 = MitigatedRanges;
      v22 = (CInterfaceCallContext *)v88;
      goto LABEL_23;
    }
LABEL_122:
    v10 = -1073741789;
    v83 = WdLogNewEntry5_WdError(DeviceExtension, v8);
    *(_QWORD *)(v83 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v83);
    goto LABEL_123;
  }
  v20 = v19 - 1000;
  if ( v20 )
  {
    if ( v20 == 4 )
    {
      if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0xA8 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v84, a1, a2, 1);
        v10 = (int)v85;
        if ( (int)v85 >= 0 )
        {
          v21 = DpiFdoGetVirtualGpuType(a2);
          memset(v90, 0, sizeof(v90));
          Type = (unsigned __int16)MasterIrp->Type;
          LODWORD(v85) = DxgkDdiGetVirtualGpuProfile(*(ADAPTER_RENDER ***)(v87 + 3896), v21, &Type);
          v10 = (int)v85;
          if ( (int)v85 >= 0 )
          {
            v3 = 168LL;
            *(_DWORD *)&MasterIrp->Type = Type;
            *(_DWORD *)(&MasterIrp->Size + 1) = v90[0];
            MasterIrp->MdlAddress = *(PMDL *)&v90[1];
            *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)&v90[3];
            MasterIrp->AssociatedIrp.MasterIrp = *(struct _IRP **)&v90[5];
            MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v90[7];
            MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v90[9];
            MasterIrp->IoStatus.Pointer = *(PVOID *)&v90[11];
            MasterIrp->IoStatus.Information = *(_QWORD *)&v90[13];
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v90[15];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v90[17];
            MasterIrp->UserEvent = *(PKEVENT *)&v90[19];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v90[21];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v90[23];
            MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v90[25];
            MasterIrp->UserBuffer = *(PVOID *)&v90[27];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v90[29];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v90[31];
            MasterIrp->Tail.Overlay.DriverContext[2] = *(PVOID *)&v90[33];
            MasterIrp->Tail.Overlay.DriverContext[3] = *(PVOID *)&v90[35];
            MasterIrp->Tail.Overlay.Thread = *(PETHREAD *)&v90[37];
            MasterIrp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v90[39];
          }
        }
        goto LABEL_22;
      }
      goto LABEL_122;
    }
LABEL_86:
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    return IofCallDriver(DeviceExtension[20], a2);
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v84, a1, a2, 1);
  if ( (int)v85 >= 0 )
  {
    HIDWORD(v88[0]) = 0;
    v88[2] = 0LL;
    if ( !MasterIrp || (unsigned int)Length < 0x18 )
    {
      v40 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v40 + 24) = 2253892LL;
      WdLogEvent5_WdWarning(v40);
      v10 = -1073741789;
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v84);
      goto LABEL_124;
    }
    v26 = DpiFdoGetVirtualGpuType(a2);
    v27 = v87;
    v88[1] = &MasterIrp->Flags + 1;
    LODWORD(v86) = v26;
    v28 = (unsigned int)(Length - 20) >> 1;
    v29 = *(ADAPTER_RENDER ***)(v87 + 3896);
    LODWORD(v88[0]) = v28;
    GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v29, v26, (struct _DXGKARG_GETGPUPARTITIONINFO *)v88, v30);
    LODWORD(v85) = GpuPartitionInfo;
    v10 = GpuPartitionInfo;
    if ( GpuPartitionInfo < 0 )
    {
      if ( GpuPartitionInfo == -1073741789 )
      {
        if ( LODWORD(v88[0]) )
        {
          *(_DWORD *)&MasterIrp->Type = v88[0];
          WORD2(MasterIrp->MdlAddress) = v88[2];
          v10 = -2147483643;
          Flags = MasterIrp->Flags;
          LOBYTE(v3) = *(_BYTE *)(v27 + 1152) != 0;
          LODWORD(v85) = -2147483643;
          MasterIrp->Flags = Flags & 0xFFFFFFFE | v3;
          RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)(v27 + 2672));
          v3 = 24LL;
        }
        else
        {
          v38 = WdLogNewEntry5_WdWarning(v33, v32, v34);
          *(_QWORD *)(v38 + 24) = 2253892LL;
          WdLogEvent5_WdWarning(v38);
          v10 = -1073741811;
          LODWORD(v85) = -1073741811;
        }
      }
    }
    else
    {
      v35 = v88[0];
      if ( g_LimitNumberOfVfs && LODWORD(v88[0]) )
      {
        LODWORD(v88[0]) = 1;
        *(_WORD *)v88[1] = 1;
        v35 = v88[0];
        LOWORD(v88[2]) = 1;
      }
      if ( v35 > v28 || !v35 )
      {
        v37 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        *(_QWORD *)(v37 + 24) = 2253892LL;
        WdLogEvent5_WdWarning(v37);
        v10 = -1073741811;
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v84);
        goto LABEL_124;
      }
      v36 = v86;
      *(_DWORD *)&MasterIrp->Type = v35;
      WORD2(MasterIrp->MdlAddress) = v88[2];
      LOBYTE(v3) = *(_BYTE *)(v27 + 1152) != 0;
      MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
      DxgkDdiQueryPhysicalFunctionLuid(*(char **)(v27 + 3896), v36, (struct _LUID *)(&MasterIrp->Size + 1));
      v3 = (unsigned int)(2 * LODWORD(v88[0]) + 20);
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v84);
LABEL_123:
  if ( v10 != 259 )
    goto LABEL_124;
  return v10;
}
