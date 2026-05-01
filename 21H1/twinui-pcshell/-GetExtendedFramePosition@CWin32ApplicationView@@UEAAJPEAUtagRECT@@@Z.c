/*
 * XREFs of ?GetExtendedFramePosition@CWin32ApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x1801700F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1801740E8 (-_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::GetExtendedFramePosition(CWin32ApplicationView *this, struct tagRECT *a2)
{
  HWND v4; // rax
  CApplicationViewBase *v5; // rcx
  unsigned int v6; // ebx
  int ExtendedFramePosition; // eax

  SetRectEmpty(a2);
  v4 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v6 = 0;
  if ( !v4 )
    return 1400LL;
  ExtendedFramePosition = CApplicationViewBase::_GetExtendedFramePosition(v5, v4, a2);
  if ( ExtendedFramePosition < 0 )
    return (unsigned int)ExtendedFramePosition;
  return v6;
}
