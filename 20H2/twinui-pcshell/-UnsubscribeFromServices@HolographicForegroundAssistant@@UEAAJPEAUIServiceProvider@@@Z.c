/*
 * XREFs of ?UnsubscribeFromServices@HolographicForegroundAssistant@@UEAAJPEAUIServiceProvider@@@Z @ 0x180247410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall HolographicForegroundAssistant::UnsubscribeFromServices(
        HolographicForegroundAssistant *this,
        struct IServiceProvider *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  return 0LL;
}
