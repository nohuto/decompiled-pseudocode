/*
 * XREFs of ?DdcciSetVCPFeature@CMonitorAPI@@QAEJPAXKK@Z @ 0x1CFB02
 * Callers:
 *     _NtGdiDDCCISetVCPFeature@12 @ 0x1D01BC (_NtGdiDDCCISetVCPFeature@12.c)
 * Callees:
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QAEJKK@Z @ 0x1CFB53 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QAEJKK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 */

int __thiscall CMonitorAPI::DdcciSetVCPFeature(CMonitorAPI *this, void *a2, char a3, unsigned int a4)
{
  int HandleObject; // esi
  _BYTE v6[4]; // [esp+4h] [ebp-8h] BYREF
  CPhysicalMonitorHandle *v7; // [esp+8h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v6, (struct OPM::CMutex *)P);
  v7 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(a2, &v7);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSetVCPFeature(v7, a3, a4);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v6);
  return HandleObject;
}
