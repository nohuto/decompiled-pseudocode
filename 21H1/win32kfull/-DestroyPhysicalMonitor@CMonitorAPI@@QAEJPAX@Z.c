/*
 * XREFs of ?DestroyPhysicalMonitor@CMonitorAPI@@QAEJPAX@Z @ 0x1CFC42
 * Callers:
 *     _DestroyPhysicalMonitor@4 @ 0x1D0005 (_DestroyPhysicalMonitor@4.c)
 *     _NtGdiDestroyPhysicalMonitor@4 @ 0x1D01CC (_NtGdiDestroyPhysicalMonitor@4.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@AAEJPAVCPhysicalMonitorHandle@@KPAVCMutex@2@@Z @ 0x1CFBF4 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@AAEJPAVCPhysicalM.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 */

int __thiscall CMonitorAPI::DestroyPhysicalMonitor(CMonitorAPI *this, void *a2)
{
  struct OPM::CMutex *v2; // edi
  int HandleObject; // esi
  _BYTE v5[4]; // [esp+Ch] [ebp-8h] BYREF
  void (__thiscall ***v6)(_DWORD, int); // [esp+10h] [ebp-4h] BYREF

  v2 = (struct OPM::CMutex *)P;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v5, (struct OPM::CMutex *)((char *)P + 20));
  v6 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(a2, &v6);
  if ( HandleObject >= 0 )
  {
    HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
                     (_DWORD *)v2 + 1,
                     v6,
                     (int)a2,
                     v2);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v5);
  return HandleObject;
}
