/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1C0098AE8
 * Callers:
 *     ACPIBuildFilter @ 0x1C0010AA4 (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 744) + 48LL) & 0x2000000) != 0;
}
