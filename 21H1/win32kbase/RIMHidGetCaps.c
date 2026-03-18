/*
 * XREFs of RIMHidGetCaps @ 0x1C00A2DB4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  __int64 v10; // rsi
  PIRP v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  IRP *v15; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v17; // rbx
  ULONG_PTR v18; // rax
  __int64 v19; // rcx
  NTSTATUS Status; // ebx
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  NTSTATUS v22; // eax
  GUID *v24; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  IoStatusBlock = 0LL;
  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 0x70707352u);
  v10 = (__int64)v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 416) )
    {
      v24 = (GUID *)Win32AllocPoolNonPaged(16LL, 0x70707352u);
      *(_QWORD *)(a1 + 416) = v24;
      if ( !v24 )
        goto LABEL_18;
      *v24 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v15 = v11;
    if ( v11 )
    {
      v11->RequestorMode = 0;
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      v11->IoStatus.Status = -1073741637;
      v17 = CurrentStackLocation - 1;
      if ( !v17 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v17->MinorFunction = 8;
      v18 = *(_QWORD *)(a1 + 416);
      v17->Parameters.CreatePipe.Parameters = 0LL;
      v17->Parameters.WMI.ProviderId = v18;
      v17->Parameters.Create.Options = 65576;
      v17->Parameters.Read.ByteOffset.QuadPart = v10;
      Status = IofCallDriver(a2, v15);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 3;
          WPP_RECORDER_SF_q(
            (_DWORD)gRimLog,
            v12,
            1,
            37,
            (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
            (char)a2);
        }
      }
      else
      {
        v21 = *(__int64 (__fastcall **)(__int64, __int64))(v10 + 32);
        if ( v21 )
        {
          v22 = v21(a3, a4);
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
          v22 = (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 32))(a3, a4);
        }
        Status = v22;
      }
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 36, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
    }
LABEL_18:
    Status = -1073741670;
LABEL_12:
    Win32FreePool(v10, v12, v14);
    return (unsigned int)Status;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 35, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
  }
  return 3221225626LL;
}
