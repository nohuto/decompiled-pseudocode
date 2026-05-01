/*
 * XREFs of ??_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z @ 0x18038A198
 * Callers:
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x18038A420 (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 *     ?_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z @ 0x18038A590 (-_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 */

CWindowIconLoader::SendMessageCallbackInfo *__fastcall CWindowIconLoader::SendMessageCallbackInfo::`scalar deleting destructor'(
        CWindowIconLoader::SendMessageCallbackInfo *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  operator delete(this);
  return this;
}
