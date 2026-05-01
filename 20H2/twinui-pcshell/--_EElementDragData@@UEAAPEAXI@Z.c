/*
 * XREFs of ??_EElementDragData@@UEAAPEAXI@Z @ 0x1803BD260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1803BCF14 (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 */

ElementDragData *__fastcall ElementDragData::`vector deleting destructor'(ElementDragData *this, char a2)
{
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((ElementDragData *)((char *)this + 184));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
