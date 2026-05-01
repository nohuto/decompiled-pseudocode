/*
 * XREFs of ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800635A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180063610 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CApplicationManager::GetAllApplicationsByHostId(
        CApplicationManager *this,
        unsigned __int64 a2,
        struct IObjectArray **a3)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = CApplicationManager::GetAllApplicationsByHostIDSafe(
                    (CApplicationManager *)((char *)this + 80),
                    a2,
                    a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
