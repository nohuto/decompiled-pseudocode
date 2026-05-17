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

int __stdcall RtlRestoreBootStatusDefaults(int a1)
{
  char v1; // cl
  unsigned int v2; // eax
  _DWORD v4[2]; // [esp+10h] [ebp-C8h] BYREF
  _BYTE v5[8]; // [esp+18h] [ebp-C0h] BYREF
  int v6; // [esp+20h] [ebp-B8h] BYREF
  _DWORD v7[44]; // [esp+24h] [ebp-B4h] BYREF

  memset(v7, 0, 0xACu);
  v6 = 176;
  RtlGetNtProductType(v7);
  *(_WORD *)((char *)&v7[1] + 1) = 286;
  v1 = 0;
  BYTE1(v7[11]) = 1;
  v2 = 0;
  HIBYTE(v7[1]) = 0;
  v7[41] = 0;
  do
    v1 -= *((_BYTE *)&v7[-1] + v2++);
  while ( v2 < 0xB0 );
  BYTE2(v7[11]) = v1;
  v4[0] = 0;
  v4[1] = 0;
  RtlpRecordBootStatusData(0, 176);
  return NtWriteFile(a1, 0, 0, 0, (int)v5, (int)&v6, 176, (int)v4, 0);
}
