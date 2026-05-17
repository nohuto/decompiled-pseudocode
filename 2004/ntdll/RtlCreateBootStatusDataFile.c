/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800EDB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtWriteFile @ 0x18009CF10 (NtWriteFile.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwCreateFile @ 0x18009D8B0 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EDE10 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPath @ 0x1800EDFE4 (RtlpGetBootStatusPath.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(PCWSTR SourceString)
{
  char v1; // di
  int File; // ebx
  PCWSTR SourceStringa; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  int v6; // [rsp+88h] [rbp+Fh]
  __int64 v7; // [rsp+90h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp+1Fh]
  int v9; // [rsp+A0h] [rbp+27h]
  __int128 v10; // [rsp+A8h] [rbp+2Fh]
  char v11; // [rsp+E0h] [rbp+67h] BYREF
  char v12; // [rsp+E8h] [rbp+6Fh]
  __int64 v13; // [rsp+F0h] [rbp+77h]
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh]

  Handle = 0LL;
  v1 = 0;
  SourceStringa = 0LL;
  v12 = 1;
  v11 = 0;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  else
  {
    RtlpGetBootStatusPath(&SourceStringa, &v11);
    RtlInitUnicodeString(&DestinationString, SourceStringa);
    v1 = v11;
  }
  v7 = 0LL;
  p_DestinationString = &DestinationString;
  v6 = 48;
  v9 = 64;
  v10 = 0LL;
  v13 = 67584LL;
  File = ZwCreateFile();
  if ( File >= 0 )
  {
    --v13;
    File = NtWriteFile();
    if ( File >= 0 )
      File = RtlRestoreBootStatusDefaults(Handle);
  }
  if ( Handle )
    NtClose(Handle);
  if ( v1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceStringa);
  return (unsigned int)File;
}
