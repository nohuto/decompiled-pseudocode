/*
 * XREFs of ??_EDragInputHandler@@EEAAPEAXI@Z @ 0x1803B7280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 */

DragInputHandler *__fastcall DragInputHandler::`vector deleting destructor'(DragInputHandler *this, char a2)
{
  *(_QWORD *)this = &DragInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputSource>'};
  *((_QWORD *)this + 2) = &DragInputHandler::`vftable'{for `CWRLImpWndProc<DragInputHandler>'};
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
