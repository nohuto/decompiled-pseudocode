/*
 * XREFs of ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x1800254EC
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180024330 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z @ 0x1800256BC (-HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z.c)
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x1800257B4 (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveForApp(
        const unsigned __int16 *a1,
        void *a2,
        const unsigned __int16 *a3,
        struct _HAM_APPLICATION_USAGE_INFO *a4)
{
  bool v5; // zf
  signed int v7; // ebx
  LSTATUS v8; // eax
  LSTATUS v9; // eax
  LSTATUS v10; // eax
  HKEY v12; // [rsp+50h] [rbp-20h] BYREF
  HKEY v13; // [rsp+58h] [rbp-18h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-10h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp+38h] BYREF

  v5 = *(_QWORD *)a4 == -1LL;
  hKey = 0LL;
  phkResult = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( v5 && *((_QWORD *)a4 + 1) == -1LL && *((_QWORD *)a4 + 2) == -1LL && *((_QWORD *)a4 + 3) == -1LL )
  {
    return 0;
  }
  else
  {
    v7 = HampSystemOpenAppRegistryKey(a1, a2, (unsigned int)a3, &hKey);
    if ( v7 >= 0 )
    {
      v8 = RegCreateKeyExW(hKey, L"HAM\\AUI", 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
      v7 = v8;
      if ( v8 > 0 )
        v7 = (unsigned __int16)v8 | 0xC0070000;
      if ( v7 >= 0 )
      {
        v9 = RegCreateKeyExW(phkResult, a3, 0, 0LL, 0, 4u, 0LL, &v13, 0LL);
        v7 = v9;
        if ( v9 > 0 )
          v7 = (unsigned __int16)v9 | 0xC0070000;
        if ( v7 >= 0 )
        {
          v10 = RegCreateKeyExW(v13, L"V1", 0, 0LL, 0, 4u, 0LL, &v12, 0LL);
          v7 = v10;
          if ( v10 > 0 )
            v7 = (unsigned __int16)v10 | 0xC0070000;
          if ( v7 >= 0 )
          {
            v7 = HampUsageInfoRegistryCommit(a4, v12);
            if ( v7 >= 0 )
              v7 = 0;
          }
        }
      }
    }
    if ( v12 )
      RegCloseKey(v12);
    if ( v13 )
      RegCloseKey(v13);
    if ( phkResult )
      RegCloseKey(phkResult);
    if ( hKey )
      RegCloseKey(hKey);
  }
  return (unsigned int)v7;
}
