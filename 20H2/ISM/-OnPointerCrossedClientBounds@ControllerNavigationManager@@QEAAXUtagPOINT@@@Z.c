/*
 * XREFs of ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18011CE2C
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FA34 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x18011D0F0 (-PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 */

void __fastcall ControllerNavigationManager::OnPointerCrossedClientBounds(
        ControllerNavigationManager *this,
        struct tagPOINT a2)
{
  __int64 v3; // rdx
  unsigned __int64 i; // r8
  __int64 v5; // rax
  const char *v6; // r9
  __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 *j; // rax
  __int64 *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v5 = *((unsigned __int8 *)this + i + 224);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = (const char *)*((_QWORD *)this + 19);
  v7 = v3 & *((_QWORD *)this + 22);
  v8 = (__int64 *)*((_QWORD *)this + 17);
  v9 = 2 * v7;
  for ( j = *(__int64 **)&v6[8 * v9]; ; j = (__int64 *)*j )
  {
    v11 = *(__int64 **)&v6[8 * v9] == v8 ? (__int64 *)*((_QWORD *)this + 17) : **(__int64 ***)&v6[8 * v9 + 8];
    if ( j == v11 )
      break;
    if ( *((_DWORD *)j + 4) == *((_DWORD *)this + 56) )
      goto LABEL_11;
  }
  j = (__int64 *)*((_QWORD *)this + 17);
LABEL_11:
  if ( j == v8 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      187LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v6);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)(j[3] + 8) + 24LL))(j[3] + 8, &v13);
  InputETW::ControllerNavigationManager::PointerCrossedClientBounds(*((_DWORD *)this + 56), v13);
}
