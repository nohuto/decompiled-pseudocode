/*
 * XREFs of ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x1803C75B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
CLauncherAndDefaultSwitchTransitionTarget *__fastcall CLauncherAndDefaultSwitchTransitionTarget::`vector deleting destructor'(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        char a2)
{
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
