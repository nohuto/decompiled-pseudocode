/*
 * XREFs of ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x180350230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnShutdownServices@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1800B3BF8 (-OnShutdownServices@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180365B8C (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShutdownServices(
        TouchKeyboardExperienceManager *this,
        struct IProfferService *a2)
{
  KeyboardHosting::TabTipAdapter *v3; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnShutdownServices();
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 80);
  if ( v3 )
  {
    KeyboardHosting::TabTipAdapter::UnInitialize(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 80);
  }
  return 0LL;
}
