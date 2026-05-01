/*
 * XREFs of ?GetCanViewHandleCloseRequest@ViewManagerBridge@@UEAA_NPEAUIUnknown@@@Z @ 0x1802BD4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ViewManagerBridge::GetCanViewHandleCloseRequest(ViewManagerBridge *this, struct IUnknown *a2)
{
  char v3; // di
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v8 = 0;
  if ( !*((_BYTE *)this + 145) )
  {
    v9 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v9);
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 576LL))(v9, &v8);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1DD,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    return v8;
  }
  return v3;
}
