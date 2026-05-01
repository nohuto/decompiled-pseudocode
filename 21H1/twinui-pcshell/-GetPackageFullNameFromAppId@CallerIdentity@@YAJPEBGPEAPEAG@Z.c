/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800475C8
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180046B14 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1801F8A10 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x180282798 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x1803AB76C (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18044BA88 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180032B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x180047880 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

__int64 __fastcall CallerIdentity::GetPackageFullNameFromAppId(
        CallerIdentity *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  signed int v4; // ebx
  LONG PackagesByPackageFamily; // eax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  char *v8; // rax
  UINT32 count[2]; // [rsp+48h] [rbp-C0h] BYREF
  PWSTR packageFullNames; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR buffer[128]; // [rsp+E8h] [rbp-20h] BYREF

  count[1] = 128;
  *(_QWORD *)a2 = 0LL;
  packageFullNames = 0LL;
  count[0] = 1;
  v4 = ParseAppUserModelId((const unsigned __int16 *)this, packageFamilyName, (unsigned __int64)a3, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    PackagesByPackageFamily = FindPackagesByPackageFamily(
                                packageFamilyName,
                                0x10u,
                                count,
                                &packageFullNames,
                                &count[1],
                                buffer,
                                0LL);
    v4 = PackagesByPackageFamily;
    if ( PackagesByPackageFamily > 0 )
      v4 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( v4 >= 0 )
    {
      if ( count[0] != 1 )
        v4 = -2147221165;
      if ( v4 >= 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( buffer[v6] );
        v7 = v6 + 1;
        *(_QWORD *)a2 = 0LL;
        if ( v6 + 1 >= v6 && is_mul_ok(v7, 2uLL) )
        {
          v8 = (char *)CoTaskMemAlloc(2 * v7);
          *(_QWORD *)a2 = v8;
          if ( v8 )
          {
            v4 = 0;
            StringCchCopyNExW(v8, v6 + 1, buffer, v6);
          }
          else
          {
            return (unsigned int)-2147024882;
          }
        }
        else
        {
          return (unsigned int)-2147024362;
        }
      }
    }
  }
  return (unsigned int)v4;
}
