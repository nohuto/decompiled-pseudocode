/*
 * XREFs of FsRtlCheckLockForReadAccess @ 0x140363E80
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFastCheckLockForRead @ 0x140363D70 (FsRtlFastCheckLockForRead.c)
 *     IoGetRequestorProcess @ 0x140363F10 (IoGetRequestorProcess.c)
 */

BOOLEAN __stdcall FsRtlCheckLockForReadAccess(PFILE_LOCK FileLock, PIRP Irp)
{
  _QWORD *LockInformation; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  LARGE_INTEGER v5; // rax
  ULONG Options; // edi
  struct _FILE_OBJECT *FileObject; // rbx
  PEPROCESS ProcessId; // rax
  LARGE_INTEGER Length; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER StartingByte; // [rsp+50h] [rbp+18h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5.QuadPart = CurrentStackLocation->Parameters.Read.Length;
  StartingByte = CurrentStackLocation->Parameters.Read.ByteOffset;
  Length = v5;
  if ( StartingByte.QuadPart + v5.QuadPart <= *LockInformation )
    return 1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  FileObject = CurrentStackLocation->FileObject;
  ProcessId = IoGetRequestorProcess(Irp);
  return FsRtlFastCheckLockForRead(FileLock, &StartingByte, &Length, Options, FileObject, ProcessId);
}
