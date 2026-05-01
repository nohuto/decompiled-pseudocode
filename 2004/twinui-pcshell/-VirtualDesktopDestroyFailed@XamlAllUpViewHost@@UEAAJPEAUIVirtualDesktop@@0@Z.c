/*
 * XREFs of ?VirtualDesktopDestroyFailed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180309060
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::VirtualDesktopDestroyFailed(
        XamlAllUpViewHost *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // esi
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 120) & -(__int64)(this != (XamlAllUpViewHost *)144));
  try
  {
    v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    *((_BYTE *)this + 556) = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 72LL))(
           *((_QWORD *)this + 4),
           **((_QWORD **)this + 4));
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    if ( v5 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AC,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v7);
  }
  return result;
}
