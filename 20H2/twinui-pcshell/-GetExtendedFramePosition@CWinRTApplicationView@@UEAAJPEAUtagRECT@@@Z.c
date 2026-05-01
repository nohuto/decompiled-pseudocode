/*
 * XREFs of ?GetExtendedFramePosition@CWinRTApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x180195C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180197C08 (-_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetExtendedFramePosition(CWinRTApplicationView *this, struct tagRECT *a2)
{
  __int64 v4; // rbx
  int ExtendedFramePosition; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  CApplicationViewBase *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  HWND v12; // [rsp+50h] [rbp+18h] BYREF

  SetRectEmpty(a2);
  v11 = 0LL;
  v4 = *((_QWORD *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  ExtendedFramePosition = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
                            v4,
                            5LL,
                            &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                            &v11);
  v6 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
  {
    v7 = 262LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ExtendedFramePosition);
    goto LABEL_8;
  }
  ExtendedFramePosition = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 32LL))(v11, &v12);
  v6 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
  {
    v7 = 265LL;
    goto LABEL_7;
  }
  ExtendedFramePosition = CApplicationViewBase::_GetExtendedFramePosition(v8, v12, a2);
  v6 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
  {
    v7 = 267LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v6;
}
