/*
 * XREFs of GetProcessIptTrace @ 0x180118064
 * Callers:
 *     PsspCaptureIptTrace @ 0x180114EF0 (PsspCaptureIptTrace.c)
 * Callees:
 *     RtlReleasePrivilege @ 0x180080B80 (RtlReleasePrivilege.c)
 *     NtDeviceIoControlFile @ 0x18009D190 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwCreateFile @ 0x18009DB50 (ZwCreateFile.c)
 *     AcquireDebugPrivilege @ 0x180118030 (AcquireDebugPrivilege.c)
 */

NTSTATUS __fastcall GetProcessIptTrace(__int64 a1, void *a2, ULONG a3)
{
  NTSTATUS result; // eax
  bool v7; // bl
  NTSTATUS v8; // edi
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-29h] BYREF
  _DWORD InputBuffer[4]; // [rsp+A8h] [rbp+7h] BYREF
  __int16 v12; // [rsp+B8h] [rbp+17h]
  __int64 v13; // [rsp+C0h] [rbp+1Fh]
  _IO_STATUS_BLOCK v14; // [rsp+D8h] [rbp+37h] BYREF
  HANDLE FileHandle; // [rsp+120h] [rbp+7Fh] BYREF

  if ( a3 < 8 )
    return -1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801666F0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x4Cu, 0LL, 0);
  if ( result >= 0 )
  {
    v7 = AcquireDebugPrivilege((PVOID *)&IoStatusBlock);
    InputBuffer[1] = 0;
    InputBuffer[0] = 1;
    InputBuffer[2] = 2;
    v12 = 1;
    v13 = a1;
    v8 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &v14, 0x220006u, InputBuffer, 0x30u, a2, a3);
    NtClose(FileHandle);
    if ( v7 )
      RtlReleasePrivilege(IoStatusBlock.Pointer);
    return v8;
  }
  return result;
}
