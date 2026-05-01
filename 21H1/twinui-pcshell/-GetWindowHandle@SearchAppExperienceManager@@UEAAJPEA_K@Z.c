/*
 * XREFs of ?GetWindowHandle@SearchAppExperienceManager@@UEAAJPEA_K@Z @ 0x1800517E0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18005183C (-_GetViewWrapper@SearchAppExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::GetWindowHandle(SearchAppExperienceManager *this, unsigned __int64 *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  __int64 v4; // rbx
  ExperienceManagerUtils *v6; // [rsp+38h] [rbp+10h] BYREF

  SearchAppExperienceManager::_GetViewWrapper(this, &v6);
  v4 = 0LL;
  if ( v6 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(v6, v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  *a2 = v4;
  return v4 == 0 ? 0x8007139F : 0;
}
