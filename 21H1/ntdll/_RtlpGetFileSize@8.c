/*
 * XREFs of _RtlpGetFileSize@8 @ 0x4B36330F
 * Callers:
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 * Callees:
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpGetFileSize(HANDLE FileHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+8h] [ebp-28h] BYREF
  _BYTE FileInformation[8]; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+18h] [ebp-18h]
  int v7; // [esp+1Ch] [ebp-14h]

  result = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = v6;
    a2[1] = v7;
    return 0;
  }
  return result;
}
