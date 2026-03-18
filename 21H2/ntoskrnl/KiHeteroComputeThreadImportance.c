/*
 * XREFs of KiHeteroComputeThreadImportance @ 0x140573FB4
 * Callers:
 *     KiEvaluatePreemptionSwapTarget @ 0x140573B50 (KiEvaluatePreemptionSwapTarget.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x140574018 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140574294 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall KiHeteroComputeThreadImportance(int a1, char a2)
{
  char v2; // r8
  unsigned __int16 v4; // [rsp+0h] [rbp-28h]
  int v5; // [rsp+4h] [rbp-24h]
  __int16 v6; // [rsp+8h] [rbp-20h]

  v2 = 0;
  v5 = 16909060;
  v6 = 5;
  if ( (KiHeteroSchedulerOptions & 9) == 9 )
    v2 = a2;
  LOBYTE(v4) = v2;
  HIBYTE(v4) = *((_BYTE *)&v5 + a1);
  return v4;
}
