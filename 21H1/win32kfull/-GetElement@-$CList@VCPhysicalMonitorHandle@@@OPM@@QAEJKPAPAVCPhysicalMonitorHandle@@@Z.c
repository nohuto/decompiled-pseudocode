/*
 * XREFs of ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJKPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCA1
 * Callers:
 *     _MonitorAPIProcessTerminating@4 @ 0x9DC7E (_MonitorAPIProcessTerminating@4.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 * Callees:
 *     <none>
 */

int __thiscall OPM::CList<CPhysicalMonitorHandle>::GetElement(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  int v3; // ecx

  if ( a2 >= this[2] )
    return -1073741823;
  v3 = *(_DWORD *)(*this + 4 * a2);
  if ( !v3 )
    return -1073741823;
  *a3 = v3;
  return 0;
}
