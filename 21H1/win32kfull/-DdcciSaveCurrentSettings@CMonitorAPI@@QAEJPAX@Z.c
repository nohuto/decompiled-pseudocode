/*
 * XREFs of ?DdcciSaveCurrentSettings@CMonitorAPI@@QAEJPAX@Z @ 0x1CF998
 * Callers:
 *     _NtGdiDDCCISaveCurrentSettings@4 @ 0x1D01AC (_NtGdiDDCCISaveCurrentSettings@4.c)
 * Callees:
 *     ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QAEJXZ @ 0x1CF9E3 (-DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QAEJXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 */

int __thiscall CMonitorAPI::DdcciSaveCurrentSettings(CMonitorAPI *this, void *a2)
{
  int HandleObject; // esi
  _BYTE v4[4]; // [esp+4h] [ebp-8h] BYREF
  CPhysicalMonitorHandle *v5; // [esp+8h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v4, (struct OPM::CMutex *)P);
  v5 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(a2, &v5);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSaveCurrentSettings(v5);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v4);
  return HandleObject;
}
