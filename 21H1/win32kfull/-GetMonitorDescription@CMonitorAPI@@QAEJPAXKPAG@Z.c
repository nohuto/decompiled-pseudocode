/*
 * XREFs of ?GetMonitorDescription@CMonitorAPI@@QAEJPAXKPAG@Z @ 0x1CFD18
 * Callers:
 *     _NtGdiGetPhysicalMonitorDescription@12 @ 0x1D01DC (_NtGdiGetPhysicalMonitorDescription@12.c)
 * Callees:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCC9 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAXPAPAVCPhysicalMo.c)
 *     ?GetMonitorDescription@CPhysicalMonitorHandle@@QAEJKPAG@Z @ 0x1CFDA9 (-GetMonitorDescription@CPhysicalMonitorHandle@@QAEJKPAG@Z.c)
 */

int __thiscall CMonitorAPI::GetMonitorDescription(
        CMonitorAPI *this,
        OPM::CMonitorPDO *a2,
        ULONG ResultLength,
        unsigned __int16 *a4)
{
  _DWORD *v4; // esi
  int HandleObject; // esi
  _BYTE v7[4]; // [esp+4h] [ebp-8h] BYREF
  CPhysicalMonitorHandle *v8; // [esp+8h] [ebp-4h] BYREF

  v4 = P;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v7, (struct OPM::CMutex *)P);
  v8 = 0;
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v4 + 1, a2, &v8);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::GetMonitorDescription(v8, ResultLength, a4);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v7);
  return HandleObject;
}
