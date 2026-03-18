/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x14078AAD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1406DB8B0 (ExQueryWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407200D8 (PopSetPowerSettingValueAcDc.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]

  v6 = 20;
  v9 = 0;
  v8 = 0LL;
  v2 = ExQueryWnfStateData(a1, &v7, &v8, &v6);
  if ( v2 >= 0 && v6 == 20 )
  {
    PopAcquirePolicyLock(v1);
    PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 0x14u, &v8);
    PopReleasePolicyLock(v4, v3);
  }
  return (unsigned int)v2;
}
