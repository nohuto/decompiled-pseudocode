/*
 * XREFs of ??_EDesktopOperation@@UEAAPEAXI@Z @ 0x1803D0030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1803CFF64 (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

DesktopOperation *__fastcall DesktopOperation::`vector deleting destructor'(DesktopOperation *this, char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((DesktopOperation *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
