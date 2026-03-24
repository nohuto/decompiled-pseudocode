/*
 * XREFs of KiGetCpuSetData @ 0x1402D3DB4
 * Callers:
 *     KeQueryCpuSetInformation @ 0x1407C7088 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
