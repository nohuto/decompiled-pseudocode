/*
 * XREFs of ?OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18011D458
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FF84 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x18011D6DC (-PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 */

void __fastcall ControllerNavigationManager::OnPointerCrossedOverrideBounds(
        ControllerNavigationManager *this,
        struct tagPOINT a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v5 = *((_QWORD *)this + 24);
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      201LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      a4);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)(v5 + 8) + 24LL))(v5 + 8, &v9);
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 32LL) + 16LL);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  InputETW::ControllerNavigationManager::PointerCrossedOverrideBounds(*(_DWORD *)(v7 + 32), v9);
}
