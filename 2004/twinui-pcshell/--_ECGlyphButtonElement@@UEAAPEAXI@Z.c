/*
 * XREFs of ??_ECGlyphButtonElement@@UEAAPEAXI@Z @ 0x1803B2DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1803959D0 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CGlyphButtonElement *__fastcall CGlyphButtonElement::`vector deleting destructor'(CGlyphButtonElement *this, char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
