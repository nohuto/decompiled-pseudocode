/*
 * XREFs of ?DdcciGetCapabilitiesString@CMonitorAPI@@QAEJPAXPADK@Z @ 0x1CF100
 * Callers:
 *     _NtGdiDDCCIGetCapabilitiesString@12 @ 0x1D000F (_NtGdiDDCCIGetCapabilitiesString@12.c)
 * Callees:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QAEJPADK@Z @ 0x1CF151 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QAEJPADK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 */

int __thiscall CMonitorAPI::DdcciGetCapabilitiesString(CMonitorAPI *this, void *a2, char *Address, unsigned int a4)
{
  int HandleObject; // esi
  _BYTE v6[4]; // [esp+4h] [ebp-8h] BYREF
  CPhysicalMonitorHandle *v7; // [esp+8h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v6, (struct OPM::CMutex *)P);
  v7 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(a2, &v7);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesString(v7, Address, a4);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v6);
  return HandleObject;
}
