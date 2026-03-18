/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x1408CB44C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x14057F5F8 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
