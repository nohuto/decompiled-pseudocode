/*
 * XREFs of ExpandedMonitorSpace @ 0x14FC21
 * Callers:
 *     _GetHimetricScaleForMonitor@12 @ 0x151143 (_GetHimetricScaleForMonitor@12.c)
 *     _VirtualizeMultiMonDigitizerSize@4 @ 0x151D24 (_VirtualizeMultiMonDigitizerSize@4.c)
 * Callees:
 *     _ExpandMonitorSpaceVertex@16 @ 0x15678 (_ExpandMonitorSpaceVertex@16.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

INT __thiscall ExpandedMonitorSpace(INT *this)
{
  unsigned __int16 DpiForSystem; // bx
  INT v2; // eax
  INT v3; // edx
  INT result; // eax
  INT v5; // edx
  INT v6; // [esp+14h] [ebp-14h]
  INT v7; // [esp+18h] [ebp-10h]
  unsigned __int16 v9; // [esp+20h] [ebp-8h]

  v9 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(GetDispInfo() + 52) + 20) + 54);
  DpiForSystem = GetDpiForSystem();
  v6 = *(_DWORD *)(*_gpDispInfo + 20);
  v7 = *(_DWORD *)(*_gpDispInfo + 24);
  v2 = ExpandMonitorSpaceVertex(DpiForSystem, v9, *(_DWORD *)(*_gpDispInfo + 12), *(_DWORD *)(*_gpDispInfo + 16));
  this[1] = v3;
  *this = v2;
  result = ExpandMonitorSpaceVertex(DpiForSystem, v9, v6, v7);
  this[2] = result;
  this[3] = v5;
  return result;
}
