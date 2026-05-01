/*
 * XREFs of ?_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z @ 0x18039B078
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18039B570 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::_OnThumbnailSizeChanged(CMultitaskingViewFrame *this, void *a2)
{
  __int64 v3; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *((_QWORD *)this + 312);
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_a1b0cf80_ce10_4efd_8623_e2697c1b0f4b,
           &v7);
    if ( v5 >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 32LL))(v7, a2);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3CB,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v5);
  }
  (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 313) + 480LL))(*((_QWORD *)this + 313), a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
