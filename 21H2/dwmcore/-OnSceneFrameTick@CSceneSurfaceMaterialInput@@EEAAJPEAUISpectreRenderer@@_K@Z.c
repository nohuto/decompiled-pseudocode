/*
 * XREFs of ?OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801EC0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::OnSceneFrameTick(
        CSceneSurfaceMaterialInput *this,
        struct ISpectreRenderer *a2)
{
  _QWORD *v2; // rsi
  __int64 (__fastcall *v5)(struct ISpectreRenderer *, _QWORD *); // rbx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    v5 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD *))(*(_QWORD *)a2 + 80LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
    v6 = v5(a2, v2);
    if ( v6 < 0 )
    {
      v7 = 208LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           *((unsigned int *)this + 10),
           *((unsigned int *)this + 11),
           *((unsigned int *)this + 12));
    if ( v6 < 0 )
    {
      v7 = 213LL;
      goto LABEL_4;
    }
    (*(void (__fastcall **)(char *, _QWORD, char *))(*((_QWORD *)this - 7) + 72LL))(
      (char *)this - 56,
      0LL,
      (char *)this - 56);
  }
  return 0LL;
}
