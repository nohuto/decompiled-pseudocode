/*
 * XREFs of ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x180213118
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z @ 0x1800F3A30 (--_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801400DC (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180140118 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
RemoteLauncherForegroundHandler *__fastcall RemoteLauncherForegroundHandler::`vector deleting destructor'(
        RemoteLauncherForegroundHandler *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  CImmersiveShellComponent::~CImmersiveShellComponent((RemoteLauncherForegroundHandler *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
