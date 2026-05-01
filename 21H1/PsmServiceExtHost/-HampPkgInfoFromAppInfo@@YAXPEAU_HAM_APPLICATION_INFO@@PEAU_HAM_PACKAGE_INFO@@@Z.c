/*
 * XREFs of ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800267DC
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800263F4 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 * Callees:
 *     CempPackageFamilyNameFromPsmKey @ 0x18000FFB0 (CempPackageFamilyNameFromPsmKey.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x180026864 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

void __fastcall HampPkgInfoFromAppInfo(struct _HAM_APPLICATION_INFO *a1, struct _HAM_PACKAGE_INFO *a2)
{
  unsigned __int16 v4[72]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v4, 0, 0x82uLL);
  CempPackageFamilyNameFromPsmKey((__int64)a1, (__int64)v4);
  HampPkgInfoInitialize(v4, (char *)a1 + 464, *((_DWORD *)a1 + 133), a2);
}
