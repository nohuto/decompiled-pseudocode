/*
 * XREFs of ??_GVirtualDesktopDataSourceComponent@@UEAAPEAXI@Z @ 0x180372C04
 * Callers:
 *     ??_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z @ 0x1800FC370 (--_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801400DC (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180140118 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

VirtualDesktopDataSourceComponent *__fastcall VirtualDesktopDataSourceComponent::`scalar deleting destructor'(
        VirtualDesktopDataSourceComponent *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  CImmersiveShellComponent::~CImmersiveShellComponent((VirtualDesktopDataSourceComponent *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
