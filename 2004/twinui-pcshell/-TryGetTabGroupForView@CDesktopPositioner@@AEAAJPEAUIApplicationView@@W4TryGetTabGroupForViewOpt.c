/*
 * XREFs of ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803EEA24
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800484D0 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1803ECBB0 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 * Callees:
 *     IsPeoplePane @ 0x180048760 (IsPeoplePane.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::TryGetTabGroupForView(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = a5;
  *(_OWORD *)a5 = 0LL;
  v10 = *(_QWORD *)(a1 + 312);
  if ( v10 )
  {
    a5 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v10 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
    v12 = v11(v10, a2, &GUID_f264283f_b510_4555_80ed_4c7216018854, &a5);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 2839LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
      return v13;
    }
    if ( a5 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a5 + 48LL))(a5, v9);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 2843LL;
        goto LABEL_11;
      }
    }
    else if ( a3 == 1 && !IsPeoplePane(a2) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 312) + 80LL))(
              *(_QWORD *)(a1 + 312),
              a2,
              a4,
              v9);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 2847LL;
        goto LABEL_11;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
  }
  return 0LL;
}
