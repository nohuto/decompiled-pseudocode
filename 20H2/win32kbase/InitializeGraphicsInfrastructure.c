/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C00B9D78
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DlpLoadDxgkrnl @ 0x1C00B9F2C (DlpLoadDxgkrnl.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rbx
  IRP *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-39h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+88h] [rbp-19h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+1Fh]
  int v24; // [rsp+C8h] [rbp+27h]
  __int128 v25; // [rsp+D0h] [rbp+2Fh]
  __int128 v26; // [rsp+E0h] [rbp+3Fh]
  __int64 v27; // [rsp+F0h] [rbp+4Fh]
  int v28; // [rsp+108h] [rbp+67h] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v3 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
  {
    v15 = WdLogNewEntry5_WdError(0x80000000LL, v1, v2);
    *(_QWORD *)(v15 + 24) = v3;
    goto LABEL_14;
  }
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  qword_1C024A828 = 0x1C0000000uLL;
  gDxgkInterface.LowPart = 2884392;
  v4 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         gpDxgkDeviceObject,
         &gDxgkInterface,
         0x328u,
         &gDxgkInterface,
         0x328u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( v4 )
  {
    LODWORD(v3) = IofCallDriver(gpDxgkDeviceObject, v4);
    if ( (_DWORD)v3 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v3) = IoStatusBlock.Status;
    }
    if ( (int)v3 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v9, v8);
      if ( PsGetProcessWin32Process(CurrentProcess) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v19);
      }
      v28 = 0;
      QueryTable.QueryRoutine = 0LL;
      v23 = 0LL;
      v24 = 0;
      QueryTable.Name = L"DisableLddmSpriteTearDown";
      gdwDirectDrawContext = 4;
      QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
      QueryTable.DefaultLength = 4;
      QueryTable.DefaultData = &v28;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      v27 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
LABEL_9:
      if ( (int)v3 >= 0 )
        return (unsigned int)v3;
      goto LABEL_16;
    }
    v15 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v15 + 24) = (int)v3;
LABEL_14:
    WdLogEvent5_WdError(v15, v16);
    goto LABEL_9;
  }
  LODWORD(v3) = -1073741670;
  v17 = WdLogNewEntry5_WdError(v6, v5, v7);
  *(_QWORD *)(v17 + 24) = -1073741670LL;
  WdLogEvent5_WdError(v17, v18);
LABEL_16:
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return (unsigned int)v3;
}
