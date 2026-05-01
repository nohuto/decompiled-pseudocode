/*
 * XREFs of ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x18016685C
 * Callers:
 *     _lambda_db6d4cb92203a874116970825d9bc39e_::operator() @ 0x18016576C (_lambda_db6d4cb92203a874116970825d9bc39e_--operator().c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x180165220 (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1801652E4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 */

void __fastcall CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
        CFrameApplicationPresentation::PresentedWindow *this,
        struct CFrameApplicationPresentation *a2,
        struct ITaskWindow *a3,
        unsigned __int64 a4)
{
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7,
    a2);
  if ( *((_OWORD *)this + 1) != __PAIR128__(a4, (unsigned __int64)a3) )
    *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a3);
  *((_QWORD *)this + 3) = a4;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7);
}
