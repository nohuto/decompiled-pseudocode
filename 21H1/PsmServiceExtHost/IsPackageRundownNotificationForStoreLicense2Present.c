/*
 * XREFs of IsPackageRundownNotificationForStoreLicense2Present @ 0x180045BB4
 * Callers:
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035438 (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x180035684 (-HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_.c)
 *     ?HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035850 (-HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800371BC (-HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800458D0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPackageRundownNotificationForStoreLicense2Present()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C84 == 1 )
    return 1;
  if ( dword_1800B3C84 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"JL", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C84 = 2 - (v1 != 0);
  return result;
}
