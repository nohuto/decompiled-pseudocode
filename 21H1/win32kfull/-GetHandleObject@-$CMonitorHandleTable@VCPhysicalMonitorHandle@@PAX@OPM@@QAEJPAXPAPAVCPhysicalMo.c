/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QAEJPAXPADK@Z @ 0x1CF100 (-DdcciGetCapabilitiesString@CMonitorAPI@@QAEJPAXPADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QAEJPAXPAK@Z @ 0x1CF66F (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QAEJPAXPAK@Z.c)
 *     ?DdcciGetTimingReport@CMonitorAPI@@QAEJPAXPAU_MC_TIMING_REPORT@@@Z @ 0x1CF71B (-DdcciGetTimingReport@CMonitorAPI@@QAEJPAXPAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QAEJPAXKPAW4_MC_VCP_CODE_TYPE@@PAK2@Z @ 0x1CF813 (-DdcciGetVCPFeature@CMonitorAPI@@QAEJPAXKPAW4_MC_VCP_CODE_TYPE@@PAK2@Z.c)
 *     ?DdcciSaveCurrentSettings@CMonitorAPI@@QAEJPAX@Z @ 0x1CF998 (-DdcciSaveCurrentSettings@CMonitorAPI@@QAEJPAX@Z.c)
 *     ?DdcciSetVCPFeature@CMonitorAPI@@QAEJPAXKK@Z @ 0x1CFB02 (-DdcciSetVCPFeature@CMonitorAPI@@QAEJPAXKK@Z.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QAEJPAX@Z @ 0x1CFC42 (-DestroyPhysicalMonitor@CMonitorAPI@@QAEJPAX@Z.c)
 *     ?GetMonitorDescription@CMonitorAPI@@QAEJPAXKPAG@Z @ 0x1CFD18 (-GetMonitorDescription@CMonitorAPI@@QAEJPAXKPAG@Z.c)
 * Callees:
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJKPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCA1 (-GetElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJKPAPAVCPhysicalMonitorHandle@@@Z.c)
 */

int __thiscall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(
        _DWORD *this,
        OPM::CMonitorPDO *a2,
        OPM::CMonitorPDO **a3)
{
  unsigned int v4; // ecx
  OPM::CMonitorPDO *v6; // edi

  v4 = (unsigned int)a2;
  if ( OPM::INVALID_MONITOR_HANDLE == a2 )
    return this[3];
  a2 = 0;
  if ( OPM::CList<CPhysicalMonitorHandle>::GetElement(this, v4, &a2) < 0 )
    return this[3];
  v6 = a2;
  if ( !OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(a2) )
    return this[3];
  *a3 = v6;
  return 0;
}
