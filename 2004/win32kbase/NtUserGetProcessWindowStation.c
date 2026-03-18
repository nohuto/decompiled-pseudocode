/*
 * XREFs of NtUserGetProcessWindowStation @ 0x1C003F510
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C003F538 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 */

__int64 NtUserGetProcessWindowStation()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  ApiSetEditionGetProcessWindowStationEntryPoint(&v1);
  return v1;
}
