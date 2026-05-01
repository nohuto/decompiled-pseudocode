/*
 * XREFs of ??1TabletModePositionerManager@@UEAA@XZ @ 0x1803D1484
 * Callers:
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1803D16C4 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18011BABC (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x18011BB30 (--1SmartCookie@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TabletModePositionerManager::~TabletModePositionerManager(TabletModePositionerManager *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi

  SmartCookie::~SmartCookie((TabletModePositionerManager *)((char *)this + 176));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 20);
  v2 = (void *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 17) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 16) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 17) );
      v2 = (void *)*((_QWORD *)this + 16);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((TabletModePositionerManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
