/*
 * XREFs of ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180037D94
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180026158 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800BE3CC (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001AF4C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD46C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHierarchyWithWindowManager::StartWindowWatcher(ViewHierarchyWithWindowManager *this)
{
  _QWORD *v2; // rax
  int v3; // eax
  _QWORD *v4; // rax
  int v5; // eax
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp+10h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp+18h] BYREF

  v2 = operator new(0x18uLL);
  v2[1] = this;
  *((_DWORD *)v2 + 4) = 1;
  *v2 = &off_1801AB490;
  v11 = v2;
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, v2, &v10);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  *((_QWORD *)this + 2) = v10;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v11);
  v4 = operator new(0x18uLL);
  v4[1] = this;
  *((_DWORD *)v4 + 4) = 1;
  *v4 = &off_1801AB470;
  v11 = v4;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)this + 96LL))(*(_QWORD *)this, v4, &v10);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *((_QWORD *)this + 3) = v10;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v11);
  v6 = operator new(0x18uLL);
  v6[1] = this;
  *((_DWORD *)v6 + 4) = 1;
  *v6 = &off_1801AB450;
  v11 = v6;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, v6, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *((_QWORD *)this + 4) = v10;
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v11);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  return 0LL;
}
