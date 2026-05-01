/*
 * XREFs of ??1WindowArrangementView@@UEAA@XZ @ 0x1803EA500
 * Callers:
 *     ??_EWindowArrangementView@@UEAAPEAXI@Z @ 0x1803EA840 (--_EWindowArrangementView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x18011BB30 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x1803EA4D4 (--1TMAppArrange@TabletModeTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowArrangementView::~WindowArrangementView(WindowArrangementView *this)
{
  TabletModeTelemetry::TMAppArrange::~TMAppArrange((WindowArrangementView *)((char *)this + 328));
  SmartCookie::~SmartCookie((WindowArrangementView *)((char *)this + 160));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
