/*
 * XREFs of ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x1802C2390
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetImportanceVectorForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        unsigned int a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v6; // rax
  const wchar_t *v7; // r8
  int v8; // edx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v13 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v13);
    v6 = *v13;
    v7 = L"ResourceImportanceVector";
    v11 = L"ResourceImportanceVector";
    v8 = 0;
    do
    {
      ++v7;
      ++v8;
    }
    while ( *v7 );
    v10 = v8 | 0x80000000;
    v9 = (*(__int64 (__fastcall **)(__int64 *, int *, _QWORD))(v6 + 720))(v13, &v10, a3);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
}
