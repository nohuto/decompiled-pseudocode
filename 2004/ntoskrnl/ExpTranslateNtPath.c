/*
 * XREFs of ExpTranslateNtPath @ 0x14094F324
 * Callers:
 *     ExpConvertArcName @ 0x14094C00C (ExpConvertArcName.c)
 *     NtTranslateFilePath @ 0x140952380 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1403F36A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F3C20 (ZwOpenFile.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpCreateOutputARC @ 0x14094C414 (ExpCreateOutputARC.c)
 *     ExpCreateOutputEFI @ 0x14094C50C (ExpCreateOutputEFI.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094C7BC (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateSymbolicLink @ 0x14094F62C (ExpTranslateSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

int __fastcall ExpTranslateNtPath(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  int v5; // esi
  const WCHAR *v8; // rbx
  char v9; // di
  char v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // r14
  int result; // eax
  wchar_t *Buffer; // rbx
  int OutputARC; // esi
  NTSTATUS v17; // ebx
  ULONG OutputBufferLength; // esi
  _DWORD *i; // rax
  NTSTATUS v20; // r15d
  _DWORD *v21; // rbx
  __int64 *v22; // r8
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  __int64 OutputBuffer[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v29; // [rsp+190h] [rbp+90h] BYREF
  int v30; // [rsp+198h] [rbp+98h]

  v30 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  v24 = 0LL;
  IoStatusBlock = 0LL;
  memset(OutputBuffer, 0, 0x90uLL);
  v8 = (const WCHAR *)(a1 + 12);
  v29 = 0;
  v9 = 1;
  v10 = 1;
  RtlInitUnicodeString(&DestinationString, v8);
  v11 = (unsigned __int64)v8 + DestinationString.Length + 2;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v11 + 2 * v12) );
  v13 = (wchar_t *)(v11 & -(__int64)((_DWORD)v12 != 0));
  if ( v5 != 1 )
  {
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result < 0 )
      return result;
    v17 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
    if ( v17 < 0 )
      goto LABEL_22;
    if ( LODWORD(OutputBuffer[0]) )
    {
      if ( LODWORD(OutputBuffer[0]) != 1 )
      {
        v17 = -1073741804;
LABEL_22:
        ZwClose(FileHandle);
        return v17;
      }
    }
    else
    {
      OutputBufferLength = 2352;
      for ( i = ExAllocatePoolWithTag(NonPagedPoolNx, 0x930uLL, 0x72766E45u);
            ;
            i = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x72766E45u) )
      {
        v21 = i;
        if ( !i )
        {
          v17 = -1073741670;
          goto LABEL_22;
        }
        v20 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70050u, 0LL, 0, i, OutputBufferLength);
        if ( v20 >= 0 )
          break;
        ExFreePoolWithTag(v21, 0);
        if ( v20 != -1073741789 )
        {
          v17 = v20;
          goto LABEL_22;
        }
        OutputBufferLength *= 2;
      }
      v29 = v21[2];
      ExFreePoolWithTag(v21, 0);
      v5 = v30;
    }
    ZwClose(FileHandle);
    if ( LODWORD(OutputBuffer[0]) == 1 )
    {
      v22 = &OutputBuffer[6];
    }
    else
    {
      v22 = (__int64 *)&v29;
      v9 = 0;
    }
    if ( v5 == 4 )
      return ExpCreateOutputEFI(a3, a4, v22, (int *)&OutputBuffer[3], &OutputBuffer[1], &OutputBuffer[2], v13, v9);
    else
      return ExpCreateOutputSIGNATURE(
               (__int64)a3,
               a4,
               (GUID *)v22,
               (unsigned int *)&OutputBuffer[3],
               &OutputBuffer[1],
               &OutputBuffer[2],
               v13,
               v9);
  }
  result = ExpTranslateSymbolicLink(v8);
  if ( result >= 0 )
  {
    Buffer = (wchar_t *)*((_QWORD *)&v24 + 1);
  }
  else
  {
    if ( result != -1073741788 )
      return result;
    v10 = 0;
    Buffer = DestinationString.Buffer;
    LODWORD(v24) = *(_DWORD *)&DestinationString.Length;
    *((_QWORD *)&v24 + 1) = DestinationString.Buffer;
  }
  OutputARC = ExpCreateOutputARC(a3, a4, (__int64)&v24, v13);
  if ( v10 == 1 )
    ExFreePoolWithTag(Buffer, 0);
  return OutputARC;
}
