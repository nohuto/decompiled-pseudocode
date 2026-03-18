/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C01E4480
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01E47F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01ED968 (DpiPdoHandleOpmIoctls.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01EDA3C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01EDAF4 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoSetDevicePower @ 0x1C01EFE0C (DpiPdoSetDevicePower.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C03902F4 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi
  __int64 VideoOutputTechnology; // rbx
  _QWORD *UserBuffer; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY Length; // ecx
  unsigned int Options; // edx
  __int64 LowPart; // rbp
  unsigned int *p_NamedPipeType; // r15
  __int64 v13; // rax
  _QWORD *DeviceExtension; // r13
  DXGADAPTER *v15; // rbx
  int v16; // eax
  __int64 v17; // rdi
  MONITOR_MGR *v18; // rdi
  __int64 v19; // r13
  unsigned __int64 Information; // rdi
  __int64 v21; // rdx
  int v23; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // [rsp+28h] [rbp-70h]
  struct DXGMONITOR *v28; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29[10]; // [rsp+48h] [rbp-50h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v33; // [rsp+B8h] [rbp+20h]

  v33 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(VideoOutputTechnology) = -1073741637;
  UserBuffer = a2->UserBuffer;
  v29[0] = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v13 = *(int *)(v4 + 496);
  DeviceExtension = v8->DeviceExtension;
  v30 = Length;
  v32 = Options;
  if ( (_DWORD)v13 != 1 )
  {
    WdLogSingleEntry3(2LL, -1073741637LL, v13, LowPart);
    goto LABEL_46;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
        goto LABEL_31;
      case 0x232407:
        v30 = D3DKMDT_VOT_HD15;
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x28 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_46;
            *UserBuffer = DeviceExtension[487];
            UserBuffer[1] = DeviceExtension[334];
            *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v4 + 504);
            *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v4 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v4 + 936) + 66LL);
            *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(DeviceExtension[5] + 28LL) >= 0x7006u);
            VideoOutputTechnology = (int)DmmGetVideoOutputTechnology(
                                           (_QWORD *)DeviceExtension[487],
                                           *(_DWORD *)(v4 + 504),
                                           &v30,
                                           0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              Information = 40LL;
              *((_DWORD *)UserBuffer + 5) = v30;
              LODWORD(VideoOutputTechnology) = 0;
              goto LABEL_27;
            }
            v25 = VideoOutputTechnology;
            goto LABEL_57;
          }
          goto LABEL_60;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v4 + 484) )
              DpiCheckForOutstandingD3Requests(v4);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v4 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_46;
          }
          goto LABEL_60;
        }
        break;
      case 0x232437:
LABEL_46:
        Information = v33;
        goto LABEL_27;
      case 0x232443:
        if ( !DeviceExtension[375] )
          goto LABEL_46;
        if ( p_NamedPipeType )
        {
          if ( Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_46;
              DxgkAcquireAdapterOpmI2CSync(DeviceExtension[487]);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(DeviceExtension[487], 1LL);
              VideoOutputTechnology = ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DeviceExtension[375])(
                                        *(_QWORD *)(v4 + 48),
                                        *(unsigned int *)(v4 + 504),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(DeviceExtension[487]);
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(DeviceExtension[487]);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_46;
LABEL_58:
              v25 = VideoOutputTechnology;
              v26 = 3LL;
              goto LABEL_59;
            }
            break;
          }
          goto LABEL_60;
        }
        break;
      case 0x232447:
        if ( !DeviceExtension[376] )
          goto LABEL_46;
        if ( p_NamedPipeType )
        {
          if ( Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_46;
              DxgkAcquireAdapterOpmI2CSync(DeviceExtension[487]);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(DeviceExtension[487], 1LL);
              v27 = UserBuffer;
              v24 = v30;
              VideoOutputTechnology = ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY, void *))DeviceExtension[376])(
                                        *(_QWORD *)(v4 + 48),
                                        *(unsigned int *)(v4 + 504),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        v30,
                                        v27);
              DxgkReleaseAdapterDdiSync(DeviceExtension[487]);
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(DeviceExtension[487]);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = (unsigned int)v24;
                goto LABEL_27;
              }
              goto LABEL_58;
            }
            break;
          }
LABEL_60:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v25 = -1073741789LL;
          goto LABEL_57;
        }
        break;
      case 0x232483:
      case 0x232487:
LABEL_31:
        v23 = DpiPdoHandleOpmIoctls(a1, a2);
        Information = a2->IoStatus.Information;
        LODWORD(VideoOutputTechnology) = v23;
        goto LABEL_27;
      default:
        goto LABEL_11;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v25 = -1073741811LL;
LABEL_57:
    v26 = 2LL;
LABEL_59:
    WdLogSingleEntry1(v26, v25);
    goto LABEL_46;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131
    || (_DWORD)LowPart == 2303135
    || (_DWORD)LowPart == 2303139 )
  {
    goto LABEL_31;
  }
  if ( (_DWORD)LowPart == 2303195 )
  {
    LODWORD(VideoOutputTechnology) = DpiBrightnessSetUncalibratedBrightness3Fallback(v8, *(_DWORD *)(v4 + 504));
    goto LABEL_46;
  }
LABEL_11:
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
  if ( (int)VideoOutputTechnology < 0 )
    goto LABEL_46;
  v15 = (DXGADAPTER *)DeviceExtension[487];
  v16 = *(_DWORD *)(v4 + 504);
  LODWORD(v31) = v16;
  if ( !v15 || v16 == -1 )
    goto LABEL_78;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v15) )
    WdLogSingleEntry0(1LL);
  v17 = *((_QWORD *)v15 + 349);
  if ( !v17 )
  {
    WdLogSingleEntry0(1LL);
    v17 = *((_QWORD *)v15 + 349);
  }
  v18 = *(MONITOR_MGR **)(v17 + 112);
  if ( !v18 )
  {
    WdLogSingleEntry1(2LL, v15);
LABEL_78:
    Information = v33;
    LODWORD(VideoOutputTechnology) = -1073741811;
    goto LABEL_32;
  }
  v19 = (unsigned int)v31;
  v28 = 0LL;
  LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(v18, v31, 1, &v28);
  if ( (int)VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry2(7LL, v19, v18);
    Information = v33;
  }
  else
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v31, (__int64)v28, 1);
    LODWORD(VideoOutputTechnology) = DXGMONITOR::_DispatchInternalIOCtrl(
                                       v28,
                                       LowPart,
                                       v32,
                                       p_NamedPipeType,
                                       v30,
                                       UserBuffer,
                                       v29);
    if ( v31 )
    {
      ExReleaseResourceLite((PERESOURCE)(v31 + 24));
      KeLeaveCriticalRegion();
    }
    Information = v29[0];
  }
  v21 = -1073741637LL;
  if ( (_DWORD)VideoOutputTechnology == -1073741637 )
    goto LABEL_33;
  if ( (int)VideoOutputTechnology >= 0
    || (_DWORD)VideoOutputTechnology == -2147483643
    || (_DWORD)VideoOutputTechnology == -1073741789 )
  {
    goto LABEL_26;
  }
LABEL_32:
  v21 = (int)VideoOutputTechnology;
LABEL_33:
  WdLogSingleEntry1(3LL, v21);
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_27:
  a2->IoStatus.Status = VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}
