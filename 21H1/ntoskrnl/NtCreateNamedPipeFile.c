/*
 * XREFs of NtCreateNamedPipeFile @ 0x1406DB5A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IoCreateFile @ 0x14066CF40 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateNamedPipeFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG NamedPipeType,
        ULONG ReadMode,
        ULONG CompletionMode,
        ULONG MaximumInstances,
        ULONG InboundQuota,
        ULONG OutboundQuota,
        PLARGE_INTEGER DefaultTimeout)
{
  _DWORD InternalParameters[6]; // [rsp+70h] [rbp-38h] BYREF
  LONGLONG QuadPart; // [rsp+88h] [rbp-20h]
  char v17; // [rsp+90h] [rbp-18h]
  int v18; // [rsp+91h] [rbp-17h]
  __int16 v19; // [rsp+95h] [rbp-13h]
  char v20; // [rsp+97h] [rbp-11h]

  QuadPart = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( DefaultTimeout )
  {
    v17 = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)DefaultTimeout & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = DefaultTimeout->QuadPart;
    }
    else
    {
      QuadPart = DefaultTimeout->QuadPart;
    }
  }
  else
  {
    v17 = 0;
  }
  InternalParameters[0] = NamedPipeType;
  InternalParameters[1] = ReadMode;
  InternalParameters[2] = CompletionMode;
  InternalParameters[3] = MaximumInstances;
  InternalParameters[4] = InboundQuota;
  InternalParameters[5] = OutboundQuota;
  return IoCreateFile(
           FileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           0LL,
           0,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           0LL,
           0,
           CreateFileTypeNamedPipe,
           InternalParameters,
           0);
}
