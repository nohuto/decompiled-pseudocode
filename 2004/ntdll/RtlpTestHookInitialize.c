/*
 * XREFs of RtlpTestHookInitialize @ 0x18007CB40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 */

__int64 RtlpTestHookInitialize()
{
  int v1; // r8d
  int v2; // ecx
  HANDLE Handle; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v4[8]; // [rsp+38h] [rbp-1h] BYREF
  int v5; // [rsp+40h] [rbp+7h] BYREF
  __int64 v6; // [rsp+48h] [rbp+Fh]
  void *v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  __int128 v9; // [rsp+60h] [rbp+27h]
  _BYTE v10[24]; // [rsp+70h] [rbp+37h] BYREF

  Handle = 0LL;
  v5 = 48;
  v6 = 0LL;
  v8 = 64;
  v7 = &unk_18011C7D0;
  memset(v10, 0, sizeof(v10));
  v9 = 0LL;
  if ( (int)NtOpenKey(&Handle, 9LL, &v5) >= 0 && (int)NtQueryValueKey(Handle, L" \"", 2LL, v10, 24, v4) >= 0 )
  {
    RtlpUserPolicies = *(_QWORD *)&v10[12];
    v1 = 1049601;
    if ( v10[12] > 0x14u || !_bittest(&v1, v10[12]) )
      LOBYTE(RtlpUserPolicies) = 0;
    if ( BYTE1(RtlpUserPolicies) > 0x14u || !_bittest(&v1, BYTE1(RtlpUserPolicies)) )
      BYTE1(RtlpUserPolicies) = 0;
    if ( BYTE2(RtlpUserPolicies) > 0x14u || (v2 = 1082401, !_bittest(&v2, BYTE2(RtlpUserPolicies))) )
      BYTE2(RtlpUserPolicies) = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return 0LL;
}
