/*
 * XREFs of SmpSavePageFile @ 0x140013594
 * Callers:
 *     SmpCheckForCrashDump @ 0x140006F78 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFile @ 0x1400133C4 (SmpSaveOldPageFile.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14000BC80 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpCopyFile @ 0x14001268C (SmpCopyFile.c)
 *     SmpQuerySameVolume @ 0x140013114 (SmpQuerySameVolume.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x14001368C (SmpSetDumpSecurityAndAttributes.c)
 *     SmpSetEndOfFile @ 0x140013960 (SmpSetEndOfFile.c)
 */

NTSTATUS __fastcall SmpSavePageFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, union _LARGE_INTEGER a3, char a4)
{
  struct _UNICODE_STRING *v5; // rdi
  HANDLE v6; // rbx
  NTSTATUS result; // eax
  int Length; // esi
  const wchar_t *Buffer; // r8
  bool v10; // [rsp+30h] [rbp-248h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-240h] BYREF
  char FileInformation[8]; // [rsp+50h] [rbp-228h] BYREF
  __int64 v13; // [rsp+58h] [rbp-220h]
  int v14; // [rsp+60h] [rbp-218h]
  wchar_t pszDest[246]; // [rsp+64h] [rbp-214h] BYREF

  v5 = a2;
  v6 = FileHandle;
  if ( SmpForceCopyDumpFile )
    return SmpCopyFile(FileHandle, a2, a3);
  if ( !a3.QuadPart || (result = SmpSetEndOfFile(FileHandle), result >= 0) )
  {
    if ( (a4 & 1) == 0 )
    {
      result = SmpQuerySameVolume(v6, v5, &v10);
      if ( result < 0 )
        return result;
      if ( !v10 )
      {
        a3.QuadPart = 0LL;
        a2 = v5;
        FileHandle = v6;
        return SmpCopyFile(FileHandle, a2, a3);
      }
    }
    Length = v5->Length;
    Buffer = v5->Buffer;
    v13 = 0LL;
    v14 = Length;
    FileInformation[0] = 1;
    result = RtlStringCbCopyW(pszDest, 0x1ECuLL, Buffer);
    if ( result >= 0 )
    {
      result = NtSetInformationFile(v6, &IoStatusBlock, FileInformation, Length + 24, FileRenameInformation);
      if ( result >= 0 )
        return SmpSetDumpSecurityAndAttributes(v6);
    }
  }
  return result;
}
