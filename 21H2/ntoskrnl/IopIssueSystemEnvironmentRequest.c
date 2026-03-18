/*
 * XREFs of IopIssueSystemEnvironmentRequest @ 0x14093F428
 * Callers:
 *     IopIssueTrEERequest @ 0x14055C25C (IopIssueTrEERequest.c)
 *     IopEnumerateEnvironmentVariablesSysEnv @ 0x14093EBE0 (IopEnumerateEnvironmentVariablesSysEnv.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x14093F0F0 (IopGetEnvironmentVariableSysEnv.c)
 *     IopQueryEnvironmentVariableInfoSysEnv @ 0x14093F700 (IopQueryEnvironmentVariableInfoSysEnv.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x14093F8D0 (IopSetEnvironmentVariableSysEnv.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1402AA8A0 (KeExpandKernelStackAndCalloutEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140342880 (IoBuildDeviceIoControlRequest.c)
 */

__int64 __fastcall IopIssueSystemEnvironmentRequest(
        ULONG IoControlCode,
        BOOLEAN a2,
        struct _FILE_OBJECT *a3,
        struct _DEVICE_OBJECT *a4,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID Context,
        ULONG OutputBufferLength,
        _DWORD *a9)
{
  PIRP v13; // rax
  NTSTATUS v15; // eax
  unsigned int Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  _QWORD Parameter[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  struct _KEVENT Event; // [rsp+80h] [rbp+17h] BYREF

  v19 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          a4,
          InputBuffer,
          InputBufferLength,
          Context,
          OutputBufferLength,
          a2,
          &Event,
          &IoStatusBlock);
  if ( !v13 )
    return 3221225626LL;
  if ( a3 )
    v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
  Parameter[1] = v13;
  Parameter[0] = a4;
  v15 = KeExpandKernelStackAndCalloutEx(
          (PEXPAND_STACK_CALLOUT)IopIssueSystemEnvironmentCallout,
          Parameter,
          0x11800uLL,
          1u,
          0LL);
  Status = v15;
  if ( v15 < 0 )
  {
    if ( v15 == -1073741789 )
    {
      Status = -1073741801;
      if ( a9 )
        *a9 = 0;
    }
  }
  else
  {
    Status = v19;
    if ( (_DWORD)v19 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( a9 )
      *a9 = IoStatusBlock.Information;
  }
  return Status;
}
