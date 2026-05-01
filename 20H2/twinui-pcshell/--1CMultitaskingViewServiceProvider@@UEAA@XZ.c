/*
 * XREFs of ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18037D220
 * Callers:
 *     ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x18037D5F4 (--_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18013FF9C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1ForegroundStaging@@QEAA@XZ @ 0x18037D30C (--1ForegroundStaging@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(
        CMultitaskingViewServiceProvider *this)
{
  char *v2; // rcx

  ForegroundStaging::~ForegroundStaging((CMultitaskingViewServiceProvider *)((char *)this + 240));
  v2 = (char *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CMultitaskingViewServiceProvider *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
