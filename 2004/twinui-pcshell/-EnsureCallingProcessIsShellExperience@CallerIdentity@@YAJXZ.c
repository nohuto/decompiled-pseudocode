/*
 * XREFs of ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x18046AC2C
 * Callers:
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x18021AF60 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x18021B370 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x18021BB30 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x18021BBB0 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x18021BD00 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x180224890 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18046A664 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x18046ACA8 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18046BB44 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::EnsureCallingProcessIsShellExperience(CallerIdentity *this, __int64 a2, bool *a3)
{
  unsigned __int16 **v4; // rdx
  const unsigned __int16 *v5; // rdx
  signed int CallingProcessAppId; // ebx
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CallerIdentity::CheckCallerCapability(this, (const unsigned __int16 *)&pv, a3) >= 0 && (_BYTE)pv )
    return 0LL;
  pv = 0LL;
  CoTaskMemFree(0LL);
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((unsigned int **)&pv, v4);
  if ( CallingProcessAppId >= 0 )
    CallingProcessAppId = !CallerIdentity::IsShellExperienceAppId((LPCWCH)pv, v5) ? 0x80070005 : 0;
  CoTaskMemFree(pv);
  return (unsigned int)CallingProcessAppId;
}
