/*
 * XREFs of SmpSetTargetAttributes @ 0x140014F28
 * Callers:
 *     SmpDeleteFile @ 0x1400141F8 (SmpDeleteFile.c)
 *     SmpForceDeleteTargetFile @ 0x1400143D4 (SmpForceDeleteTargetFile.c)
 *     SmpTryOverwriteReadonlyFile @ 0x14001519C (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpSetTargetAttributes(void *a1, unsigned int a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _OWORD FileInformation[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  v5 = a2;
  memset(FileInformation, 0, sizeof(FileInformation));
  result = NtSetInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( result >= 0 )
    return 0;
  return result;
}
