/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x1408C42BC
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x14057B588 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
