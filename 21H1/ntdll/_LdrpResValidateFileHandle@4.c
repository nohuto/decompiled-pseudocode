/*
 * XREFs of _LdrpResValidateFileHandle@4 @ 0x4B343B84
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall LdrpResValidateFileHandle(HANDLE FileHandle)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+0h] [ebp-34h] BYREF
  _BYTE FileInformation[40]; // [esp+8h] [ebp-2Ch] BYREF

  if ( !FileHandle || FileHandle == (HANDLE)-1 )
    return -1073741816;
  else
    return ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
}
