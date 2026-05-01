/*
 * XREFs of ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1802ACDE4
 * Callers:
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1802A4B70 (-OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802ABA7C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1802AD424 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewEventDispatcher::_OverrideNavigationLevelForView(RTL_SRWLOCK *a1, void (***a2)(void), int a3)
{
  void (*v6)(void); // rbx
  unsigned __int8 (__fastcall *v7)(__int64, __int64); // rax
  int MatchingViewEventRegistration; // eax
  __int64 v9; // rcx
  __int64 result; // rax
  const char *v11; // r9
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  try
  {
    v6();
    v7 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 880LL);
    if ( a3 == 2 )
    {
      if ( v7(v16, 1LL) )
      {
        v13 = &v16;
        v14 = 1;
        v17 = 0LL;
        AcquireSRWLockShared(a1 + 35);
        *(_QWORD *)v12 = a1 + 35;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)a1, v16, &v17);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1840LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        if ( a1 != (RTL_SRWLOCK *)-280LL )
          ReleaseSRWLockShared(a1 + 35);
        v9 = *(_QWORD *)(v17 + 32);
        *(_QWORD *)v12 = v9;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        ViewEventDispatcher::_RaiseViewEvent(a1, a2, 7LL, v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 880LL))(v16, 2LL);
      }
    }
    else
    {
      v7(v16, 0LL);
    }
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x73E,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
             v11);
  }
  return result;
}
