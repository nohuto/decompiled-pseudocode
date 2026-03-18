/*
 * XREFs of ?DdcciGetTimingReport@CMonitorAPI@@QAEJPAXPAU_MC_TIMING_REPORT@@@Z @ 0x1CF71B
 * Callers:
 *     _NtGdiDDCCIGetTimingReport@8 @ 0x1D0095 (_NtGdiDDCCIGetTimingReport@8.c)
 * Callees:
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QAEJPAU_MC_TIMING_REPORT@@@Z @ 0x1CF769 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QAEJPAU_MC_TIMING_REPORT@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 */

int __thiscall CMonitorAPI::DdcciGetTimingReport(CMonitorAPI *this, void *a2, struct _MC_TIMING_REPORT *a3)
{
  int HandleObject; // esi
  _BYTE v5[4]; // [esp+4h] [ebp-8h] BYREF
  CPhysicalMonitorHandle *v6; // [esp+8h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v5, (struct OPM::CMutex *)P);
  v6 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(a2, &v6);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetTimingReport(v6, a3);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v5);
  return HandleObject;
}
