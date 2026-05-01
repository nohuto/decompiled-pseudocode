/*
 * XREFs of ??_GCAltTabViewController@@UEAAPEAXI@Z @ 0x1803962E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180396238 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CAltTabViewController *__fastcall CAltTabViewController::`scalar deleting destructor'(
        CAltTabViewController *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
