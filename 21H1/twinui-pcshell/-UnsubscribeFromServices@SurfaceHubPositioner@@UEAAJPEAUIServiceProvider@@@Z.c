/*
 * XREFs of ?UnsubscribeFromServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803B7C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18011D420 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall SurfaceHubPositioner::UnsubscribeFromServices(
        SurfaceHubPositioner *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 152));
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 280));
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 408));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  return 0LL;
}
