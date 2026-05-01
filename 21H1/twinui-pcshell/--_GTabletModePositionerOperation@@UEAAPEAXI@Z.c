/*
 * XREFs of ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x1803E5180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1803CFF64 (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
TabletModePositionerOperation *__fastcall TabletModePositionerOperation::`scalar deleting destructor'(
        TabletModePositionerOperation *this,
        char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((TabletModePositionerOperation *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
