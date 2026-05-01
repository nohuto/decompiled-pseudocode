/*
 * XREFs of ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1801652E4
 * Callers:
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x18016685C (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, &v2);
  if ( v2 != *((_QWORD *)this + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 624LL) + 520LL))(*(_QWORD *)(*(_QWORD *)this + 624LL));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
}
