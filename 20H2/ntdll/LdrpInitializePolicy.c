/*
 * XREFs of LdrpInitializePolicy @ 0x18007FB28
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x180069428 (AppModelPolicy_GetPolicy_Internal.c)
 *     LdrSetDefaultDllDirectories @ 0x18007FCE0 (LdrSetDefaultDllDirectories.c)
 */

__int64 LdrpInitializePolicy()
{
  __int64 result; // rax
  __int128 *v1; // rcx
  char v2; // dl
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v14[6]; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF
  int v17; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+30h] BYREF

  result = (__int64)NtCurrentPeb();
  v1 = (__int128 *)(*(_QWORD *)(result + 32) + 80LL);
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  v2 = *(_BYTE *)(result + 3);
  if ( (v2 & 0x10) != 0 && *(_WORD *)v1 )
  {
    v3 = *v1;
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v3;
    LdrpOriginalAppPackagesPath = v3;
    if ( (int)AppModelPolicy_GetPolicy_Internal((__int64)v1, 4, &v15, &v17, &v16) < 0 || v15 == 262145 )
      LdrSetDefaultDllDirectories(4096LL);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v4, 7, &v15, &v8, &v18) >= 0 && v15 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 19, &v15, &v10, &v9) >= 0 && v15 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v6, 32, &v15, &v12, &v11) >= 0 && v15 == 2097153 )
      LdrpPolicyBits |= 4u;
    result = (unsigned int)AppModelPolicy_GetPolicy_Internal(v7, 54, &v15, v14, &v13) | 0x10000000;
    if ( (int)result >= 0 && v15 == 3538945 )
      LdrpPolicyBits |= 0x100u;
  }
  else if ( (v2 & 2) != 0 )
  {
    *(_WORD *)v1 = 0;
  }
  else if ( *(_WORD *)v1 )
  {
    return LdrSetDllDirectory();
  }
  return result;
}
