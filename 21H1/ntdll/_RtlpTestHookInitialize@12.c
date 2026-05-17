/*
 * XREFs of _RtlpTestHookInitialize@12 @ 0x4B2B1220
 * Callers:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlpTestHookInitialize(int a1, int a2, int a3)
{
  _BYTE v4[4]; // [esp+8h] [ebp-44h] BYREF
  _DWORD v5[6]; // [esp+Ch] [ebp-40h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-28h] BYREF
  _DWORD v7[7]; // [esp+28h] [ebp-24h] BYREF

  v5[0] = 24;
  v5[3] = 64;
  memset(v7, 0, 0x18u);
  v5[2] = &dword_4B281078;
  Handle = 0;
  v5[1] = 0;
  v5[4] = 0;
  v5[5] = 0;
  if ( (int)ZwOpenKey(&Handle, 9, v5) >= 0 && (int)ZwQueryValueKey(Handle, &dword_4B281070, 2, v7, 24, v4) >= 0 )
  {
    RtlpUserPolicies = v7[3];
    dword_4B3A697C = v7[4];
    if ( LOBYTE(v7[3]) && LOBYTE(v7[3]) != 10 )
      LOBYTE(RtlpUserPolicies) = LOBYTE(v7[3]) != 20 ? 0 : RtlpUserPolicies;
    if ( BYTE1(RtlpUserPolicies) && BYTE1(RtlpUserPolicies) != 10 )
      BYTE1(RtlpUserPolicies) &= (BYTE1(RtlpUserPolicies) != 20) - 1;
    if ( BYTE2(RtlpUserPolicies)
      && BYTE2(RtlpUserPolicies) != 20
      && BYTE2(RtlpUserPolicies) != 15
      && BYTE2(RtlpUserPolicies) != 10 )
    {
      BYTE2(RtlpUserPolicies) &= (BYTE2(RtlpUserPolicies) != 5) - 1;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return 0;
}
