/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x1405D6B94
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1405D6C08 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140996A20 (PopDripsWatchdogUpdateMetrics.c)
 *     PopPdcIdleResiliencyCallback @ 0x1409971BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PpmParkSnapNodeIdleTime @ 0x1405DD4C0 (PpmParkSnapNodeIdleTime.c)
 */

__int64 __fastcall PopAccumulateNonActivatedCpuTime(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 Prcb; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  Prcb = KeGetPrcb(0);
  result = PpmParkSnapNodeIdleTime(Prcb, &v10, &v9);
  v8 = v10;
  if ( !a1 )
  {
    result = v10 - *a2 - v9;
    *a3 += result;
  }
  *a2 = v8 - v9;
  return result;
}
