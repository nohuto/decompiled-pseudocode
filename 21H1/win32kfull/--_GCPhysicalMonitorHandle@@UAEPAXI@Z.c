/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UAEPAXI@Z @ 0x1CEEA4
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CPhysicalMonitorHandle@@UAEJXZ @ 0x1CFBAB (-Destroy@CPhysicalMonitorHandle@@UAEJXZ.c)
 */

_DWORD *__thiscall CPhysicalMonitorHandle::`scalar deleting destructor'(_DWORD *P, char a2)
{
  bool v3; // zf

  v3 = P[1] == 0;
  *P = &CPhysicalMonitorHandle::`vftable';
  if ( !v3 )
    CPhysicalMonitorHandle::Destroy((CPhysicalMonitorHandle *)P);
  OPM::CMutex::~CMutex((OPM::CMutex *)(P + 10));
  OPM::CMonitorPDO::~CMonitorPDO((OPM::CMonitorPDO *)P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0x63326947u);
  return P;
}
