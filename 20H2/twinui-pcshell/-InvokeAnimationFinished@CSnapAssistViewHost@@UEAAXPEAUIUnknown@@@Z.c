/*
 * XREFs of ?InvokeAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z @ 0x18038E010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSnapAssistViewHost::InvokeAnimationFinished(CSnapAssistViewHost *this, struct IUnknown *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
}
