/*
 * XREFs of SmpProcessFileRenames @ 0x140009348
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x1400092F0 (SmpDeallocSavedRegistryEntry.c)
 *     SmpEventWrite @ 0x140009F80 (SmpEventWrite.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     RtlStringCbPrintfExW @ 0x140013BD0 (RtlStringCbPrintfExW.c)
 *     SmpClearTemporaryFiles @ 0x140013EE0 (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140014460 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x140014564 (SmpForceDeleteTargetFile.c)
 *     SmpGetTime @ 0x1400146C4 (SmpGetTime.c)
 *     SmpLogPFROError @ 0x140014950 (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x140014B90 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140014C9C (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x1400150F8 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x1400152FC (SmpTryOverwriteReadonlyFile.c)
 */

__int64 __fastcall SmpProcessFileRenames(int a1)
{
  char v1; // r13
  PVOID *v2; // rax
  int v3; // edi
  struct _UNICODE_STRING *v4; // rsi
  NTSTATUS v6; // eax
  unsigned __int8 v7; // cl
  struct _UNICODE_STRING *v8; // r15
  PWSTR Buffer; // rax
  int v10; // ebx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  struct _UNICODE_STRING **v14; // rax
  struct _UNICODE_STRING *v15; // rdx
  unsigned __int8 OldValue[4]; // [rsp+78h] [rbp-90h] BYREF
  int v17; // [rsp+7Ch] [rbp-8Ch]
  int ValueData; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+A0h] [rbp-68h] BYREF
  int v22; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-58h]
  struct _UNICODE_STRING *v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[256]; // [rsp+F8h] [rbp-10h] BYREF

  LODWORD(pcbRemaining) = a1;
  v1 = 0;
  OldValue[0] = 1;
  if ( SmpAllowProtectedRenames )
  {
    v6 = RtlAdjustPrivilege(0x12u, 1u, 0, OldValue);
    v7 = OldValue[0];
    if ( v6 < 0 )
      v7 = 1;
    OldValue[0] = v7;
  }
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v2 = (PVOID *)SmpFileRenameList;
  v3 = 0;
  v4 = (struct _UNICODE_STRING *)SmpFileRenameList;
  v17 = 0;
  ValueData = 0;
  while ( v2 != &SmpFileRenameList )
  {
    Handle = 0LL;
    v8 = v4;
    SmpEventWriteString2(&SmpFileRenameList, &v4[1], &v4[2]);
    if ( v4[2].Length )
      goto LABEL_22;
    Buffer = v4[1].Buffer;
    if ( *Buffer == 64 )
    {
      v4[1].Buffer = Buffer + 1;
      v4[1].Length -= 2;
    }
    if ( v4[2].Length )
    {
LABEL_22:
      v23 = 0LL;
      v22 = 48;
      v25 = 64;
      v24 = v4 + 1;
      v26 = 0LL;
      v10 = SmpOpenTargetFile(&Handle, 1114112LL, &v22);
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, v4[2].Buffer);
        if ( *DestinationString.Buffer == 33 || *DestinationString.Buffer == 64 )
        {
          v11 = 1;
          ++DestinationString.Buffer;
          DestinationString.Length -= 2;
          DestinationString.MaximumLength -= 2;
        }
        else
        {
          v11 = 0;
        }
        v12 = SmpRenameTargetFile(&DestinationString, Handle, v11);
        v10 = v12;
        if ( v12 < 0 )
        {
          if ( v11 )
          {
            if ( v12 == -1073741790 )
            {
              v10 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle);
              if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741638 )
              {
                v10 = SmpShuffleMove(&DestinationString, Handle);
                v13 = ValueData;
                if ( v10 >= 0 )
                  v13 = 1;
                ValueData = v13;
              }
            }
          }
        }
        v3 = v17;
      }
    }
    else
    {
      v10 = SmpForceDeleteTargetFile(&v4[1]);
    }
    if ( Handle )
      NtClose(Handle);
    if ( v10 < 0 )
      v1 |= SmpLogPFROError(&v4[1], &v4[2], (unsigned int)v10);
    else
      v17 = ++v3;
    v14 = *(struct _UNICODE_STRING ***)&v4->Length;
    v4 = (struct _UNICODE_STRING *)v14;
    if ( v14[1] != v8 || (v15 = (struct _UNICODE_STRING *)v8->Buffer, *(struct _UNICODE_STRING **)&v15->Length != v8) )
      __fastfail(3u);
    *(_QWORD *)&v15->Length = v14;
    v14[1] = v15;
    SmpDeallocSavedRegistryEntry(v8);
    v2 = (PVOID *)SmpFileRenameList;
  }
  if ( !OldValue[0] )
    RtlAdjustPrivilege(0x12u, 0, 0, OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( (_DWORD)pcbRemaining )
  {
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( ValueData )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &ValueData, 4u);
  if ( SmpLogFileHandle )
  {
    if ( v1 )
    {
      SmpGetTime(&TimeFields);
      if ( RtlStringCbPrintfExW(
             pszDest,
             0x200uLL,
             0LL,
             &pcbRemaining,
             0,
             L"%d/%d/%d %d:%d:%d - %d Successful PFRO operations\r\n\r\n",
             TimeFields.Month,
             TimeFields.Day,
             TimeFields.Year,
             TimeFields.Hour,
             TimeFields.Minute,
             TimeFields.Second,
             v3) >= 0 )
        NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, pszDest, 512 - pcbRemaining, 0LL, 0LL);
    }
    NtClose(SmpLogFileHandle);
    SmpLogFileHandle = 0LL;
  }
  return SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
