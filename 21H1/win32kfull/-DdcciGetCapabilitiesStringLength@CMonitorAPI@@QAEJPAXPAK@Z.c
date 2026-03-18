/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QAEJPAXPAK@Z @ 0x1CF66F
 * Callers:
 *     _NtGdiDDCCIGetCapabilitiesStringLength@8 @ 0x1D002E (_NtGdiDDCCIGetCapabilitiesStringLength@8.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QAEJPAK@Z @ 0x1CF6BD (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QAEJPAK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 */

int __thiscall CMonitorAPI::DdcciGetCapabilitiesStringLength(CMonitorAPI *this, void *a2, unsigned int *a3)
{
  int HandleObject; // esi
  _BYTE v5[4]; // [esp+4h] [ebp-8h] BYREF
  CPhysicalMonitorHandle *v6; // [esp+8h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v5, (struct OPM::CMutex *)P);
  v6 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(a2, &v6);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(v6, a3);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v5);
  return HandleObject;
}
