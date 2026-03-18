/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x140616530
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspAddAccountingValues @ 0x140615D7C (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x140616850 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, _QWORD *a2)
{
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  memset(v5, 0, 0x68uLL);
  if ( (*(_DWORD *)(a1 + 1120) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v5);
    PspAddAccountingValues((_QWORD *)(*(_QWORD *)(a1 + 1296) + 1120LL), (char *)v5);
    if ( !a2[2] && *a2 && v5[1] > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}
