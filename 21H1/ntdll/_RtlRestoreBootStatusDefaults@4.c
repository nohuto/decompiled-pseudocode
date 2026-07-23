/*
 * XREFs of _RtlRestoreBootStatusDefaults@4 @ 0x4B350BF0
 * Callers:
 *     _RtlCreateBootStatusDataFile@4 @ 0x4B350940 (_RtlCreateBootStatusDataFile@4.c)
 * Callees:
 *     _RtlGetNtProductType@4 @ 0x4B2B05F0 (_RtlGetNtProductType@4.c)
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpRecordBootStatusData@16 @ 0x4B350F8B (_RtlpRecordBootStatusData@16.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  char v1; // cl
  unsigned int v2; // eax
  size_t v4; // [esp-4h] [ebp-DCh]
  LARGE_INTEGER ByteOffset; // [esp+10h] [ebp-C8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+18h] [ebp-C0h] BYREF
  int Buffer; // [esp+20h] [ebp-B8h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [esp+24h] [ebp-B4h] BYREF
  __int16 v9; // [esp+29h] [ebp-AFh]
  char v10; // [esp+2Bh] [ebp-ADh]
  char v11; // [esp+51h] [ebp-87h]
  char v12; // [esp+52h] [ebp-86h]
  int v13; // [esp+C8h] [ebp-10h]

  LODWORD(v4) = 172;
  memset(&NtProductType, 0, v4);
  Buffer = 176;
  RtlGetNtProductType(&NtProductType);
  v9 = 286;
  v1 = 0;
  v11 = 1;
  v2 = 0;
  v10 = 0;
  v13 = 0;
  do
    v1 -= *((_BYTE *)&Buffer + v2++);
  while ( v2 < 0xB0 );
  v12 = v1;
  ByteOffset.QuadPart = 0LL;
  RtlpRecordBootStatusData(0, 176);
  return NtWriteFile(FileHandle, 0, 0, 0, &IoStatusBlock, &Buffer, 0xB0u, &ByteOffset, 0);
}
