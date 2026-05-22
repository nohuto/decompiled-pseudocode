/*
 * XREFs of ?ProcessAccessibilityTimerMessage@Win32kInterop@@AEAAXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z @ 0x1800B0B44
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800B3030 (std--_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESS_ea_1800B3030.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessAccessibilityTimerMessage(
        Win32kInterop *this,
        const struct _MIT_ACCESSIBILITY_TIMER *a2)
{
  __int64 v2; // r15
  int v4; // ebx
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 (*)(), _QWORD, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned __int16)(*(_WORD *)a2 - 1);
  v4 = *((_DWORD *)a2 + 1) & 2;
  v6 = (__int64 *)((char *)this + 8 * v2 + 344);
  if ( *v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v6 + 96LL))(*v6);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v6);
  }
  if ( !v4 )
  {
    v7 = *((_QWORD *)this + 42);
    v8 = *(__int64 (__fastcall **)(__int64, __int64 (*)(), _QWORD, __int64 *))(*(_QWORD *)v7 + 136LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v6);
    v9 = v8(v7, lambda_dc6b4baf3ce8e698d0113e7b0a7480ab_::_lambda_invoker_cdecl_, *(int *)a2, v6);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        639LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = 10000 * *((_DWORD *)a2 + 2);
    if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = 10000 * *((_DWORD *)a2 + 2);
      v10 = 0LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + v2 + 43) + 80LL))(
      *((_QWORD *)this + v2 + 43),
      v10,
      v11);
  }
}
