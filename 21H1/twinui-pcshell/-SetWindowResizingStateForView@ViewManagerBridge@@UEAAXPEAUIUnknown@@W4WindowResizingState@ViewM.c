/*
 * XREFs of ?SetWindowResizingStateForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A0B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetWindowResizingStateForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  void (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 145) )
  {
    v9 = 0LL;
    v5 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v5(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v9);
    LOBYTE(v6) = a3 == 1;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 800LL))(v9, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x168,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
}
