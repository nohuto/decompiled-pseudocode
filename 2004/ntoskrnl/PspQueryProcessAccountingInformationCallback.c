/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x140698EB0
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140296BC0 (PoEnergyEstimationEnabled.c)
 *     PsAddProcessEnergyValues @ 0x1402D2530 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1406878B0 (PsQueryProcessEnergyValues.c)
 *     PspAddAccountingValues @ 0x14069B5D0 (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x14069B8D0 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _OWORD v6[27]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (*(_DWORD *)(a1 + 1120) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, a2);
    PspAddAccountingValues(a2 + 104, a2);
    *(_DWORD *)(a2 + 248) += *(_DWORD *)(a1 + 1668);
    v4 = *(_QWORD **)(a1 + 2232);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 208) += *v4;
      *(_QWORD *)(a2 + 216) += v4[1];
      *(_QWORD *)(a2 + 224) += v4[2];
      *(_QWORD *)(a2 + 232) += v4[3];
      *(_QWORD *)(a2 + 240) += v4[4];
    }
    if ( PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues((_QWORD *)a1, v6);
      PsAddProcessEnergyValues(a2 + 256, (__int64)v6);
    }
  }
  return 0LL;
}
