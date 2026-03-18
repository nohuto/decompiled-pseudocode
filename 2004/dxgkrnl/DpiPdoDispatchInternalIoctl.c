/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C0164280
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011F120 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0121F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01645F8 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C016F248 (DpiPdoHandleOpmIoctls.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C016F31C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C016F3AC (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0171540 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01715C0 (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoSetDevicePower @ 0x1C0171F4C (DpiPdoSetDevicePower.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02D12EC (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v3; // rbx
  _QWORD *UserBuffer; // r14
  struct DXGMONITOR *VideoOutputTechnology; // rdi
  __int64 Length; // rcx
  bool v8; // zf
  struct _DEVICE_OBJECT *v9; // r8
  __int64 Options; // rdx
  __int64 LowPart; // r12
  unsigned int *p_NamedPipeType; // r15
  _QWORD *DeviceExtension; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _FAST_MUTEX *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  struct _ERESOURCE *v25; // rcx
  PIRP v26; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  void *v43; // [rsp+28h] [rbp-30h]
  struct DXGMONITOR *v44; // [rsp+40h] [rbp-18h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v45; // [rsp+A0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+50h]
  unsigned int v47; // [rsp+B0h] [rbp+58h]
  unsigned __int64 Information; // [rsp+B8h] [rbp+60h] BYREF

  Irp = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = *(_QWORD *)(a1 + 64);
  UserBuffer = a2->UserBuffer;
  LODWORD(VideoOutputTechnology) = -1073741637;
  Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = *(_DWORD *)(v3 + 496) == 1;
  v9 = *(struct _DEVICE_OBJECT **)(v3 + 32);
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  DeviceExtension = v9->DeviceExtension;
  v45 = CurrentStackLocation->Parameters.Read.Length;
  v47 = Options;
  if ( !v8 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(Length, Options);
    v31[3] = -1073741637LL;
    v31[4] = *(int *)(v3 + 496);
    v31[5] = LowPart;
LABEL_49:
    WdLogEvent5_WdError(v31);
    goto LABEL_27;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
        goto LABEL_32;
      case 0x232407:
        v45 = D3DKMDT_VOT_HD15;
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x28 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_27;
            *UserBuffer = DeviceExtension[487];
            UserBuffer[1] = DeviceExtension[334];
            *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v3 + 504);
            *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v3 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v3 + 936) + 66LL);
            *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(DeviceExtension[5] + 28LL) >= 0x7006u);
            VideoOutputTechnology = (struct DXGMONITOR *)(int)DmmGetVideoOutputTechnology(
                                                                (_QWORD *)DeviceExtension[487],
                                                                *(unsigned int *)(v3 + 504),
                                                                &v45,
                                                                0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              LODWORD(VideoOutputTechnology) = 0;
              *((_DWORD *)UserBuffer + 5) = v45;
              Information = 40LL;
              goto LABEL_27;
            }
            v32 = WdLogNewEntry5_WdError(v30, v29);
            *(_QWORD *)(v32 + 24) = VideoOutputTechnology;
            goto LABEL_48;
          }
          goto LABEL_58;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v3 + 484) )
              DpiCheckForOutstandingD3Requests(v3);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v3 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_27;
          }
          goto LABEL_58;
        }
        break;
      case 0x232437:
        goto LABEL_27;
      case 0x232443:
        if ( !DeviceExtension[375] )
          goto LABEL_27;
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_27;
              DxgkAcquireAdapterOpmI2CSync(DeviceExtension[487]);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(DeviceExtension[487], 1LL);
              VideoOutputTechnology = (struct DXGMONITOR *)((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DeviceExtension[375])(
                                                             *(_QWORD *)(v3 + 48),
                                                             *(unsigned int *)(v3 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(DeviceExtension[487]);
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(DeviceExtension[487]);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_27;
              goto LABEL_65;
            }
            break;
          }
          goto LABEL_58;
        }
        break;
      case 0x232447:
        if ( !DeviceExtension[376] )
          goto LABEL_27;
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_27;
              DxgkAcquireAdapterOpmI2CSync(DeviceExtension[487]);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(DeviceExtension[487], 1LL);
              v43 = UserBuffer;
              v33 = (unsigned int)v45;
              VideoOutputTechnology = (struct DXGMONITOR *)((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY, void *))DeviceExtension[376])(
                                                             *(_QWORD *)(v3 + 48),
                                                             *(unsigned int *)(v3 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             v45,
                                                             v43);
              DxgkReleaseAdapterDdiSync(DeviceExtension[487]);
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(DeviceExtension[487]);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = v33;
                goto LABEL_27;
              }
LABEL_65:
              v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
              *(_QWORD *)(v37 + 24) = VideoOutputTechnology;
              WdLogEvent5_WdWarning(v37);
              goto LABEL_27;
            }
            break;
          }
LABEL_58:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v32 = WdLogNewEntry5_WdError(Length, Options);
          *(_QWORD *)(v32 + 24) = -1073741789LL;
          goto LABEL_48;
        }
        break;
      case 0x232483:
      case 0x232487:
LABEL_32:
        v26 = Irp;
        LODWORD(VideoOutputTechnology) = DpiPdoHandleOpmIoctls(a1, Irp);
        Information = v26->IoStatus.Information;
        goto LABEL_28;
      default:
        goto LABEL_11;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v32 = WdLogNewEntry5_WdError(Length, Options);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
LABEL_48:
    v31 = (_QWORD *)v32;
    goto LABEL_49;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131
    || (_DWORD)LowPart == 2303135
    || (_DWORD)LowPart == 2303139 )
  {
    goto LABEL_32;
  }
  if ( (_DWORD)LowPart == 2303195 )
  {
    LODWORD(VideoOutputTechnology) = DpiBrightnessSetUncalibratedBrightness3Fallback(v9, *(_DWORD *)(v3 + 504));
    goto LABEL_27;
  }
LABEL_11:
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
  if ( (int)VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = (struct DXGMONITOR *)DeviceExtension[487];
    if ( !VideoOutputTechnology || (v17 = *(unsigned int *)(v3 + 504), (_DWORD)v17 == -1) )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
    }
    else
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(VideoOutputTechnology) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v19, v18);
        WdLogEvent5_WdAssertion(v38);
      }
      v20 = *((_QWORD *)VideoOutputTechnology + 337);
      if ( !v20 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v19, v18);
        WdLogEvent5_WdAssertion(v39);
        v20 = *((_QWORD *)VideoOutputTechnology + 337);
      }
      v21 = *(struct _FAST_MUTEX **)(v20 + 96);
      if ( !v21 )
      {
        v40 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v40 + 24) = VideoOutputTechnology;
        WdLogEvent5_WdError(v40);
        LODWORD(VideoOutputTechnology) = -1073741811;
        goto LABEL_41;
      }
      v44 = 0LL;
      LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(v21, (unsigned int)v17, 1, &v44);
      if ( (int)VideoOutputTechnology < 0 )
      {
        v41 = WdLogNewEntry5_WdDmmEvent(v23, v22);
        *(_QWORD *)(v41 + 24) = v17;
        *(_QWORD *)(v41 + 32) = v21;
        WdLogEvent5_WdDmmEvent(v41);
      }
      else
      {
        VideoOutputTechnology = v44;
        if ( !v44 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v23, v22);
          WdLogEvent5_WdAssertion(v42);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)VideoOutputTechnology + 296), 1u);
        v24 = DXGMONITOR::_DispatchInternalIOCtrl(
                VideoOutputTechnology,
                LowPart,
                v47,
                p_NamedPipeType,
                v45,
                UserBuffer,
                &Information);
        v25 = (struct _ERESOURCE *)((char *)VideoOutputTechnology + 296);
        LODWORD(VideoOutputTechnology) = v24;
        ExReleaseResourceLite(v25);
        KeLeaveCriticalRegion();
      }
    }
    if ( (_DWORD)VideoOutputTechnology == -1073741637 )
    {
      v28 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v28 + 24) = -1073741637LL;
LABEL_34:
      WdLogEvent5_WdWarning(v28);
LABEL_26:
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      goto LABEL_27;
    }
    if ( (int)VideoOutputTechnology >= 0
      || (_DWORD)VideoOutputTechnology == -2147483643
      || (_DWORD)VideoOutputTechnology == -1073741789 )
    {
      goto LABEL_26;
    }
LABEL_41:
    v28 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v28 + 24) = (int)VideoOutputTechnology;
    goto LABEL_34;
  }
LABEL_27:
  v26 = Irp;
LABEL_28:
  v26->IoStatus.Information = Information;
  v26->IoStatus.Status = (int)VideoOutputTechnology;
  IofCompleteRequest(v26, 1);
  return (unsigned int)VideoOutputTechnology;
}
