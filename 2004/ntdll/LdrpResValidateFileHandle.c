/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800E4BBC
 * Callers:
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x18009D030 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall LdrpResValidateFileHandle(char *a1)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _BYTE FileInformation[40]; // [rsp+40h] [rbp-38h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  else
    return NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
}
