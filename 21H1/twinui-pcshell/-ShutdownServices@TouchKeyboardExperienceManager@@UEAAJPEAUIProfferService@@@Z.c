/*
 * XREFs of ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x18032F220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180344DAC (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShutdownServices(
        TouchKeyboardExperienceManager *this,
        struct IProfferService *a2)
{
  __int64 *v2; // rbx
  KeyboardHosting::TabTipAdapter *v3; // rcx

  v2 = (__int64 *)((char *)this + 640);
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 80);
  if ( v3 )
  {
    KeyboardHosting::TabTipAdapter::UnInitialize(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  }
  return 0LL;
}
