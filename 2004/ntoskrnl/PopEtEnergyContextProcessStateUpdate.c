/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x140657D74
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140659C94 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x14065A1F0 (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopEtEnumEnergyTrackers @ 0x140657E24 (PopEtEnumEnergyTrackers.c)
 *     PsQueryProcessEnergyValues @ 0x1406878B0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PopEtEnergyContextProcessStateUpdate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-1E8h] BYREF
  int v6; // [rsp+24h] [rbp-1E4h]
  __int64 v7; // [rsp+28h] [rbp-1E0h]
  __int64 v8; // [rsp+30h] [rbp-1D8h]
  _BYTE *v9; // [rsp+38h] [rbp-1D0h]
  _BYTE v10[432]; // [rsp+40h] [rbp-1C8h] BYREF

  v1 = *(_QWORD *)(a1 + 2280);
  v6 = 0;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  ++*(_DWORD *)(v1 + 468);
  PsQueryProcessEnergyValues(a1, v10);
  v6 = 0;
  v8 = 0LL;
  v9 = v10;
  v5 = 3;
  v7 = a1;
  return PopEtEnumEnergyTrackers(v3, &v5);
}
