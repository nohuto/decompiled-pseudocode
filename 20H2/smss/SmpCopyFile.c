/*
 * XREFs of SmpCopyFile @ 0x14001281C
 * Callers:
 *     SmpSavePageFile @ 0x140013724 (SmpSavePageFile.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140001014 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpQueryFileSize @ 0x140013088 (SmpQueryFileSize.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x14001381C (SmpSetDumpSecurityAndAttributes.c)
 */

__int64 __fastcall SmpCopyFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, union _LARGE_INTEGER a3)
{
  union _LARGE_INTEGER v3; // rdi
  ULONG v7; // r14d
  int v8; // r15d
  NTSTATUS v9; // ebx
  int v10; // eax
  HANDLE v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  union _LARGE_INTEGER v16; // rsi
  char v17[8]; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER FileInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v24; // [rsp+A0h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  char v26[32]; // [rsp+E0h] [rbp-20h] BYREF
  union _LARGE_INTEGER *p_FileInformation; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  union _LARGE_INTEGER *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]

  FileHandlea = 0LL;
  BaseAddress = 0LL;
  v3.QuadPart = 0LL;
  FileInformation.QuadPart = 0LL;
  v7 = 0x100000;
  RegionSize = 0x100000LL;
  v8 = 1;
  v9 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v9 >= 0 )
  {
    if ( a3.QuadPart )
    {
      v3 = a3;
    }
    else
    {
      v10 = SmpQueryFileSize(FileHandle, &FileInformation);
      v3 = FileInformation;
      v9 = v10;
      if ( v10 < 0 )
        goto LABEL_7;
    }
    if ( v3.QuadPart )
    {
      ObjectAttributes.ObjectName = a2;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      if ( v3.QuadPart % (unsigned __int64)(unsigned int)dword_140024308 )
        v8 = dword_140024308;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = NtCreateFile(&FileHandlea, 0xC0150000, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x68u, 0LL, 0);
      if ( v9 >= 0 )
      {
        v9 = SmpSetDumpSecurityAndAttributes(FileHandlea);
        if ( v9 >= 0 )
        {
          v16.QuadPart = 0LL;
          do
          {
            ByteOffset = v16;
            v9 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v7, &ByteOffset, 0LL);
            if ( v9 < 0 )
              break;
            if ( IoStatusBlock.Information != v7 )
            {
              if ( (unsigned __int64)v7 <= v3.QuadPart - v16.QuadPart
                || IoStatusBlock.Information != v3.QuadPart - v16.QuadPart )
              {
                goto LABEL_35;
              }
              v7 = -v8 & (v8 + v3.LowPart - v16.LowPart - 1);
            }
            v9 = NtWriteFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v7, &ByteOffset, 0LL);
            if ( v9 < 0 )
              break;
            if ( IoStatusBlock.Information != v7 )
            {
LABEL_35:
              v9 = -1073741823;
              break;
            }
            v16.QuadPart += v7;
          }
          while ( v16.QuadPart < (unsigned __int64)v3.QuadPart );
        }
      }
    }
    else
    {
      v9 = -1073741672;
    }
  }
LABEL_7:
  v11 = FileHandlea;
  if ( FileHandlea )
  {
    if ( v9 < 0 )
      goto LABEL_13;
    if ( v3.QuadPart && v8 != 1 )
    {
      FileInformation = v3;
      v12 = NtSetInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
      v11 = FileHandlea;
      v9 = v12;
    }
    if ( v9 < 0 )
    {
LABEL_13:
      v17[0] = 1;
      NtSetInformationFile(v11, &IoStatusBlock, v17, 1u, FileDispositionInformation);
      if ( (unsigned int)dword_140023018 > 5 && tlgKeywordOn() )
      {
        FileInformation.LowPart = v9;
        v28 = 4LL;
        p_FileInformation = &FileInformation;
        v24 = v3;
        v29 = &v24;
        v30 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer(4LL, byte_14001E719, v13, v14, 4, (__int64)v26);
      }
      v11 = FileHandlea;
    }
    NtClose(v11);
  }
  if ( BaseAddress )
  {
    RegionSize = 0LL;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v9;
}
