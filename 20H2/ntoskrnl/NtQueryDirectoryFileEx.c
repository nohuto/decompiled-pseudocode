/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1405F9FB0
 * Callers:
 *     NtQueryDirectoryFile @ 0x1406C5E40 (NtQueryDirectoryFile.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x1405FA070 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax
  SIZE_T v11; // [rsp+38h] [rbp-49h]
  __int64 v12; // [rsp+40h] [rbp-41h]
  char v13; // [rsp+58h] [rbp-29h]
  char v14; // [rsp+88h] [rbp+7h] BYREF
  char v15; // [rsp+89h] [rbp+8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+Fh] BYREF
  PIRP Irp; // [rsp+98h] [rbp+17h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+1Fh] BYREF

  DeviceObject = 0LL;
  Irp = 0LL;
  v16 = 0LL;
  LODWORD(v12) = FileInformationClass;
  LODWORD(v11) = Length;
  v14 = 0;
  v15 = 0;
  result = BuildQueryDirectoryIrp(
             (int)FileHandle,
             (int)Event,
             (int)ApcRoutine,
             (int)ApcContext,
             (__int64)IoStatusBlock,
             FileInformation,
             v11,
             v12,
             QueryFlags,
             (__int64)FileName,
             v13,
             (__int64)&v14,
             (__int64)&DeviceObject,
             (__int64)&Irp,
             (__int64)&v16,
             (PIRP)&v15);
  if ( !result )
    return IopSynchronousServiceTail(DeviceObject, Irp, v15, v14, 2);
  return result;
}
