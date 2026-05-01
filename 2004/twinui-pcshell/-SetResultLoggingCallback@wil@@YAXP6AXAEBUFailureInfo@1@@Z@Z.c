/*
 * XREFs of ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x18013B938
 * Callers:
 *     DllMain @ 0x180092348 (DllMain.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18013C72C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::SetResultLoggingCallback(wil *this, void (*a2)(const struct wil::FailureInfo *))
{
  const struct wil::FailureInfo *v2; // rdx
  _BYTE v3[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( wil::details::g_pfnLoggingCallback && this && (char *)wil::details::g_pfnLoggingCallback != (char *)this )
  {
    memset_0(v3, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v3, v2);
  }
  wil::details::g_pfnLoggingCallback = (void (*)(const struct wil::FailureInfo *))this;
}
