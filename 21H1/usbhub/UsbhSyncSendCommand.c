/*
 * XREFs of UsbhSyncSendCommand @ 0x1C000A740
 * Callers:
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C000BBF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhSshSuspendHub @ 0x1C000D970 (UsbhSshSuspendHub.c)
 *     UsbhSuspendPort @ 0x1C00138BC (UsbhSuspendPort.c)
 *     UsbhResumePort @ 0x1C001BFA0 (UsbhResumePort.c)
 *     UsbhHubAckPortChange @ 0x1C001C03C (UsbhHubAckPortChange.c)
 *     UsbhFlushPortChange @ 0x1C002AD90 (UsbhFlushPortChange.c)
 *     UsbhGetDescriptor @ 0x1C002B590 (UsbhGetDescriptor.c)
 *     UsbhGetPortStatus @ 0x1C002C774 (UsbhGetPortStatus.c)
 *     UsbhGetStatus @ 0x1C002C860 (UsbhGetStatus.c)
 *     UsbhIsHighSpeedCapable @ 0x1C002CF78 (UsbhIsHighSpeedCapable.c)
 *     UsbhSetHubRemoteWake @ 0x1C002D554 (UsbhSetHubRemoteWake.c)
 *     UsbhSetPortPower @ 0x1C002D7DC (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C002F0A8 (UsbhSetPortIndicator.c)
 *     UsbhClearTt @ 0x1C0036B2C (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C0037200 (UsbhDisablePort.c)
 *     UsbhHubAckHubChange @ 0x1C0038420 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x1C0038B7C (UsbhQueryHubState.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C00553C0 (UsbhPdoCheckBootDeviceReady.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_qDDDDDDDDD @ 0x1C002E714 (WPP_RECORDER_SF_qDDDDDDDDD.c)
 */

__int64 __fastcall UsbhSyncSendCommand(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, int a5, _DWORD *a6)
{
  _WORD *v6; // rsi
  __int64 v10; // r13
  PIRP v11; // rax
  IRP *v12; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int *PoolWithTag; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PIRP v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  NTSTATUS v26; // eax
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  int OutputBuffer; // [rsp+28h] [rbp-A9h]
  IRP *v35; // [rsp+88h] [rbp-49h]
  struct _IO_STATUS_BLOCK v36; // [rsp+90h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-31h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-21h] BYREF
  struct _KEVENT Object; // [rsp+C8h] [rbp-9h] BYREF
  unsigned int v40; // [rsp+128h] [rbp+57h] BYREF
  char *v41; // [rsp+130h] [rbp+5Fh]
  _WORD *v42; // [rsp+140h] [rbp+6Fh]

  v42 = a4;
  v41 = (char *)a2;
  v40 = 0;
  v6 = a4;
  memset(&Object, 0, sizeof(Object));
  v36 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          0x220013u,
          *(PDEVICE_OBJECT *)(v10 + 1208),
          0LL,
          0,
          0LL,
          0,
          1u,
          &Event,
          &IoStatusBlock);
  v12 = v11;
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v40;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v12);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v15 = v40;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      a5 = 1400074357;
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = a5;
      *(_QWORD *)(v17 + 24) = Status;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v15;
    }
  }
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    if ( a6 )
      *a6 = -1073713152;
    return (unsigned int)Status;
  }
  else
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x88uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *(_OWORD *)PoolWithTag = 0LL;
      *((_OWORD *)PoolWithTag + 1) = 0LL;
      *((_OWORD *)PoolWithTag + 2) = 0LL;
      *((_OWORD *)PoolWithTag + 3) = 0LL;
      *((_OWORD *)PoolWithTag + 4) = 0LL;
      *((_OWORD *)PoolWithTag + 5) = 0LL;
      *((_OWORD *)PoolWithTag + 6) = 0LL;
      *((_OWORD *)PoolWithTag + 7) = 0LL;
      *((_QWORD *)PoolWithTag + 16) = 0LL;
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        a5 = 811823987;
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = a5;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = PoolWithTag;
        *(_QWORD *)(v20 + 24) = 0LL;
      }
    }
    if ( PoolWithTag )
    {
      KeInitializeEvent(&Object, NotificationEvent, 0);
      v21 = IoBuildDeviceIoControlRequest(0x220003u, *(PDEVICE_OBJECT *)(v10 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &v36);
      v35 = v21;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v22 = *(_QWORD *)(a1 + 64);
        if ( v22 )
        {
          a5 = 828601203;
          v23 = *(_QWORD *)(v22 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
          *(_DWORD *)v23 = a5;
          *(_QWORD *)(v23 + 24) = &v36;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = v21;
        }
      }
      if ( v21 )
      {
        PoolWithTag[8] = 10;
        v24 = PoolWithTag[8];
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *PoolWithTag = 3276936;
        if ( *(char *)a2 < 0 )
          v24 = 11;
        PoolWithTag[8] = v24;
        v25 = (unsigned __int16)*v6;
        *((_QWORD *)PoolWithTag + 5) = a3;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        PoolWithTag[9] = v25;
        PoolWithTag[14] = 2000;
        *((_QWORD *)PoolWithTag + 16) = *(_QWORD *)a2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_qDDDDDDDDD(
            WPP_GLOBAL_Control->DeviceExtension,
            (unsigned __int8)v41[1],
            (unsigned __int8)*v41,
            (unsigned __int8)*(_WORD *)(a2 + 4),
            OutputBuffer,
            (char)v41,
            *v41,
            v41[1],
            *(_WORD *)(a2 + 2),
            HIBYTE(*(_WORD *)(a2 + 2)),
            *(_WORD *)(a2 + 2),
            *(_WORD *)(a2 + 4),
            HIBYTE(*(_WORD *)(a2 + 4)),
            *(_WORD *)(a2 + 4),
            *(_WORD *)(a2 + 6));
          v21 = v35;
          v6 = v42;
        }
        v21->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)PoolWithTag;
        v26 = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v21);
        v27 = v26;
        if ( v26 == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v27 = v36.Status;
        }
        else
        {
          v36.Status = v26;
        }
        v28 = PoolWithTag[1];
        if ( (UsbhLogMask & 8) != 0 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            a5 = 845378419;
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = a5;
            *(_QWORD *)(v30 + 16) = v27;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 24) = v28;
          }
        }
        if ( a6 )
          *a6 = PoolWithTag[1];
        *v6 = *((_WORD *)PoolWithTag + 18);
        ExFreePoolWithTag(PoolWithTag, 0);
        if ( (UsbhLogMask & 8) != 0 )
        {
          v31 = *(_QWORD *)(a1 + 64);
          if ( v31 )
          {
            a5 = 1046705011;
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = a5;
            *(_QWORD *)(v32 + 16) = v27;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 24) = 0LL;
          }
        }
        return (unsigned int)v27;
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return 3221225626LL;
      }
    }
    else
    {
      if ( a6 )
        *a6 = -1073737728;
      return 3221225626LL;
    }
  }
}
