/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x1408C560C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x14057BBC8 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
