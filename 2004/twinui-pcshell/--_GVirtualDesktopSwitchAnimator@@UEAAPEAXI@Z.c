/*
 * XREFs of ??_GVirtualDesktopSwitchAnimator@@UEAAPEAXI@Z @ 0x180087160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDesktopSwitchAnimator *__fastcall VirtualDesktopSwitchAnimator::`scalar deleting destructor'(
        VirtualDesktopSwitchAnimator *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
