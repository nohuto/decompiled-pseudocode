/*
 * XREFs of ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x1801F9D18
 * Callers:
 *     ??_GStartExperienceWallpaperBackground@@UEAAPEAXI@Z @ 0x1801D3260 (--_GStartExperienceWallpaperBackground@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801FA0C4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-DwmUnregisterThumbnail@@YAJ0.c)
 */

void __fastcall StartExperienceWallpaperBackground::~StartExperienceWallpaperBackground(
        StartExperienceWallpaperBackground *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &StartExperienceWallpaperBackground::`vftable';
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
    (char *)this + 48,
    0LL);
  if ( *((_BYTE *)this + 16) )
    UpdateWallpaperTransition(13LL);
  v2 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    DwmUnregisterThumbnail(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
