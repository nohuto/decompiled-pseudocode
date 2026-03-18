/*
 * XREFs of ?DdcciGetVCPFeature@CMonitorAPI@@QAEJPAXKPAW4_MC_VCP_CODE_TYPE@@PAK2@Z @ 0x1CF813
 * Callers:
 *     _NtGdiDDCCIGetVCPFeature@20 @ 0x1D010C (_NtGdiDDCCIGetVCPFeature@20.c)
 * Callees:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QAEJKPAW4_MC_VCP_CODE_TYPE@@PAK1@Z @ 0x1CF86A (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QAEJKPAW4_MC_VCP_CODE_TYPE@@PAK1@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 */

int __thiscall CMonitorAPI::DdcciGetVCPFeature(
        CMonitorAPI *this,
        void *a2,
        unsigned int a3,
        enum _MC_VCP_CODE_TYPE *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  int HandleObject; // esi
  _BYTE v8[4]; // [esp+4h] [ebp-8h] BYREF
  CPhysicalMonitorHandle *v9; // [esp+8h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v8, (struct OPM::CMutex *)P);
  v9 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(a2, &v9);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetVCPFeature(v9, a3, a4, a5, a6);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v8);
  return HandleObject;
}
