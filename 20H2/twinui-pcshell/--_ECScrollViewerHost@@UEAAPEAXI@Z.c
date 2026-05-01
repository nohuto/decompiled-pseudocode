/*
 * XREFs of ??_ECScrollViewerHost@@UEAAPEAXI@Z @ 0x1803A8780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x180395110 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CScrollViewerHost *__fastcall CScrollViewerHost::`vector deleting destructor'(CScrollViewerHost *this, char a2)
{
  __int64 *v4; // rcx

  v4 = (__int64 *)((char *)this + 472);
  if ( *v4 )
    *(_QWORD *)(*v4 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
  *((_DWORD *)this + 55) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
