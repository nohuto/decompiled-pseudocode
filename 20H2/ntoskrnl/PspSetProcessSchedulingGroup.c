/*
 * XREFs of PspSetProcessSchedulingGroup @ 0x1406DD668
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x14062E694 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x1406DD5E0 (PspSetCpuRateControlJobPostCallback.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x1402EB00C (KeSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 1124) & 8;
  if ( !v4 || !a2 )
    KeSetProcessSchedulingGroup(a1, a2);
  result = *(_DWORD *)(a1 + 1124) & 8;
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return KeSetProcessSchedulingGroup(a1, 0LL);
  }
  return result;
}
