/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x14096DD9C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405E00E4 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
