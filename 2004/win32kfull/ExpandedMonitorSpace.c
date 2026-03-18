/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01E456C
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01E5C74 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E67B4 (VirtualizeMultiMonDigitizerSize.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C002360C (ExpandMonitorSpaceVertex.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1, __int64 a2)
{
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h]

  v3 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(a1, a2) + 96) + 40LL) + 66LL);
  DpiForSystem = GetDpiForSystem(v4);
  v7 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v3, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v3, *((__int64 *)&v7 + 1));
  a1[1] = result;
  return result;
}
