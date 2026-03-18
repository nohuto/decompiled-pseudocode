/*
 * XREFs of ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1C03027D4
 * Callers:
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0302ED8 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?DxgkpCopyAttributes@@YAJPEAX0@Z @ 0x1C030269C (-DxgkpCopyAttributes@@YAJPEAX0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C0302D10 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 */

__int64 __fastcall DxgkpCopyFile(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // r9
  __int64 v5; // rdi
  void *v6; // rsi
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  struct _UNICODE_STRING v13; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES v15; // [rsp+C0h] [rbp+7h] BYREF
  void *FileHandle; // [rsp+130h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  v13 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v13, a2);
  FileHandle = (void *)-1LL;
  Handle = (HANDLE)-1LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)&v15.Length = 48LL;
  *(_QWORD *)&v15.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15.RootDirectory = 0LL;
  v15.ObjectName = &v13;
  *(_OWORD *)&v15.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v3 = ZwCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x4010u, 0LL, 0);
  LODWORD(v5) = v3;
  if ( v3 >= 0 )
  {
    v6 = (void *)operator new[](0x10000uLL, 0x4B677844u, 258LL, v4);
    if ( v6 )
    {
      v7 = ZwCreateFile(&Handle, 0x1F019Fu, &v15, &IoStatusBlock, 0LL, 0x80u, 7u, 5u, 0x4010u, 0LL, 0);
      v5 = v7;
      if ( v7 >= 0 )
      {
        LODWORD(v5) = DxgkpCopyAttributes(FileHandle, Handle);
        if ( (int)v5 >= 0 )
        {
          while ( 1 )
          {
            v9 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v6, 0x10000u, 0LL, 0LL);
            LODWORD(v5) = v9;
            if ( v9 < 0 )
              break;
            v8 = ZwWriteFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v6, IoStatusBlock.Information, 0LL, 0LL);
            v5 = v8;
            if ( v8 < 0 )
            {
              WdLogSingleEntry2(2LL, v8, 546LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed ZwWriteFile in DxgkpCopyFile: 0x%I64x",
                v5,
                546LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_17;
            }
          }
          if ( v9 == -1073741807 )
          {
            LODWORD(v5) = 0;
          }
          else
          {
            WdLogSingleEntry2(2LL, v9, 526LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ZwReadFile in DxgkpCopyFile: 0x%I64x",
              (int)v5,
              526LL,
              0LL,
              0LL,
              0LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v7, 492LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed ZwCreateFile for dest in DxgkpCopyFile: 0x%I64x",
          v5,
          492LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 473LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed allocate memory for CopyBuffer",
        473LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v5) = -1073741801;
    }
LABEL_17:
    if ( Handle != (HANDLE)-1LL )
    {
      ZwClose(Handle);
      if ( (int)v5 < 0 )
        DxgkpDeleteFile(a2);
    }
    operator delete[](v6);
    if ( FileHandle != (void *)-1LL )
      ZwClose(FileHandle);
  }
  else
  {
    if ( v3 == -1073741772 )
      LODWORD(v5) = 0;
    WdLogSingleEntry2(2LL, (int)v5, 465LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed ZwCreateFile for source in DxgkpCopyFile: 0x%I64x",
      (int)v5,
      465LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
