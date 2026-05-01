/*
 * XREFs of ??1ForegroundStaging@@QEAA@XZ @ 0x18035C6AC
 * Callers:
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18035C5C0 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1803667B4 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ForegroundStaging::~ForegroundStaging(ForegroundStaging *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
