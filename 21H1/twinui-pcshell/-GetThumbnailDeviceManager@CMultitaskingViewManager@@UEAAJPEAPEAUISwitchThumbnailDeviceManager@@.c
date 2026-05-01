/*
 * XREFs of ?GetThumbnailDeviceManager@CMultitaskingViewManager@@UEAAJPEAPEAUISwitchThumbnailDeviceManager@@@Z @ 0x1803671D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::GetThumbnailDeviceManager(
        CMultitaskingViewManager *this,
        struct ISwitchThumbnailDeviceManager **a2)
{
  struct ISwitchThumbnailDeviceManager **v2; // rbx

  *a2 = 0LL;
  v2 = (struct ISwitchThumbnailDeviceManager **)((char *)this + 312);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 39);
  *a2 = *v2;
  return 0LL;
}
