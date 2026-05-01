/*
 * XREFs of ??_GPPIWin32VtcLayoutOperation@@UEAAPEAXI@Z @ 0x1800B94D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1803F0684 (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

PPIWin32VtcLayoutOperation *__fastcall PPIWin32VtcLayoutOperation::`scalar deleting destructor'(
        PPIWin32VtcLayoutOperation *this,
        char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((PPIWin32VtcLayoutOperation *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
