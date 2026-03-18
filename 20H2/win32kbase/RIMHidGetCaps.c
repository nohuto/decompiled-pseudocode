/*
 * XREFs of RIMHidGetCaps @ 0x1C006ECC8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // r9
  IRP *v16; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v18; // rbx
  ULONG_PTR v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  NTSTATUS Status; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 (__fastcall *v25)(__int64, __int64); // rax
  NTSTATUS v26; // eax
  GUID *v28; // rax
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
      v28 = (GUID *)Win32AllocPoolNonPaged(16LL, 0x70707352u);
      *(_QWORD *)(a1 + 416) = v28;
      if ( !v28 )
        goto LABEL_18;
      *v28 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v16 = v11;
    if ( v11 )
    {
      v11->RequestorMode = 0;
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      v11->IoStatus.Status = -1073741637;
      v18 = CurrentStackLocation - 1;
      if ( !v18 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
      v18->MinorFunction = 8;
      v19 = *(_QWORD *)(a1 + 416);
      v18->Parameters.CreatePipe.Parameters = 0LL;
      v18->Parameters.WMI.ProviderId = v19;
      v18->Parameters.Create.Options = 65576;
      v18->Parameters.Read.ByteOffset.QuadPart = v10;
      Status = IofCallDriver(a2, v16);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_q(
            (_DWORD)gRimLog,
            v20,
            1,
            37,
            (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
            (char)a2);
        }
      }
      else
      {
        v25 = *(__int64 (__fastcall **)(__int64, __int64))(v10 + 32);
        if ( v25 )
        {
          v26 = v25(a3, a4);
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23, v24);
          v26 = (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 32))(a3, a4);
        }
        Status = v26;
      }
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 36, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
LABEL_18:
    Status = -1073741670;
LABEL_12:
    Win32FreePool(v10);
    return (unsigned int)Status;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 35, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  return 3221225626LL;
}
