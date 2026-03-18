/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1C00987D8
 * Callers:
 *     ACPIBuildFilter @ 0x1C0010844 (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 744) + 48LL) & 0x2000000) != 0;
}
