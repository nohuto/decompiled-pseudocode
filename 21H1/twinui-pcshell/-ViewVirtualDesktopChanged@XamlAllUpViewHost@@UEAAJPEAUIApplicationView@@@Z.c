/*
 * XREFs of ?ViewVirtualDesktopChanged@XamlAllUpViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1802E71F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802CA9D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlAllUpViewHost::ViewVirtualDesktopChanged(XamlAllUpViewHost *this, struct IApplicationView *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const char *v5; // r9
  int v6; // r15d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, struct IApplicationView *, GUID *, __int64 (__fastcall ****)(_QWORD, __int64, __int64 *)); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64 *); // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 120) & -(__int64)(this != (XamlAllUpViewHost *)144));
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    if ( !*((_BYTE *)this + 556) )
    {
      v16 = 0LL;
      v7 = *((_QWORD *)this + 14);
      v8 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, GUID *, __int64 (__fastcall ****)(_QWORD, __int64, __int64 *)))(*(_QWORD *)v7 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      v9 = v8(v7, a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v16);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x194,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        if ( v6 >= 0 )
          LeaveCriticalSection(v4);
        return v10;
      }
      v12 = *((_QWORD *)this + 4);
      v13 = __abi_winrt_cast_to(
              0,
              v16,
              (__int64)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__);
      v17 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, v13);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    }
    if ( v6 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x199,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v5);
  }
  return result;
}
