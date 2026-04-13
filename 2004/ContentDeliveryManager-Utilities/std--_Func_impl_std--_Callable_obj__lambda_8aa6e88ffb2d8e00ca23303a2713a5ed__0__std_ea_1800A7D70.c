/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800A7D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A69FC (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800A7FF0 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_8aa6e88ffb2d8e00ca23303a2713a5ed__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        _QWORD **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall **v4)(_QWORD, GUID *, _QWORD *); // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  __int64 v10; // rbx
  const wchar_t *StringRawBuffer; // rax
  unsigned __int64 v12; // rax
  HSTRING string; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-58h] BYREF
  void *v16[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v15[1] = -2LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a2;
  v4 = (__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))**a2;
  v15[0] = 0LL;
  v5 = (*v4)(v3, &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a, v15);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0xBF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x1800A7EDELL);
  }
  string = 0LL;
  v7 = v15[0];
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15[0] + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = v8(v7, &string);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(a1 + 8);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v12 = CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
          (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v16,
          StringRawBuffer);
  std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back((unsigned __int64 *)(v10 + 64), v12);
  if ( v17 >= 8 )
    operator delete(v16[0]);
  v17 = 7LL;
  v16[2] = 0LL;
  LOWORD(v16[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  return 1;
}
