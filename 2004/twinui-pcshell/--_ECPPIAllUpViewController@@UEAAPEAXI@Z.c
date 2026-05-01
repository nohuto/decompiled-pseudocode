/*
 * XREFs of ??_ECPPIAllUpViewController@@UEAAPEAXI@Z @ 0x18039E190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180396AF8 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CPPIAllUpViewController *__fastcall CPPIAllUpViewController::`vector deleting destructor'(
        CPPIAllUpViewController *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
