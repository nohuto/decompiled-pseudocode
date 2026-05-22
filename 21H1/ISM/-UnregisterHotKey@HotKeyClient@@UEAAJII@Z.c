/*
 * XREFs of ?UnregisterHotKey@HotKeyClient@@UEAAJII@Z @ 0x180148CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@std@@UHotkeyRegistration@HotKeyClient@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@0@V10@V10@AEBUHotkeyRegistration@HotKeyClient@@@Z @ 0x18014811C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UHotkeyRegistration@HotKeyClient@@@s.c)
 */

__int64 __fastcall HotKeyClient::UnregisterHotKey(HotKeyClient *this, unsigned int a2, unsigned __int32 a3)
{
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  _BYTE *v9; // r8
  void *v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __m128i v16; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *v19; // [rsp+60h] [rbp+10h] BYREF

  v16.m128i_i32[0] = 0;
  v16.m128i_i32[3] = a3;
  v17 = 0;
  v16.m128i_i32[1] = a2 & 0xF;
  v5 = *((_QWORD *)this + 15);
  v6 = a2 & 0x7A00;
  v7 = *((_QWORD *)this + 14);
  v16.m128i_i32[2] = v6;
  std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HotKeyClient::HotkeyRegistration>>>,HotKeyClient::HotkeyRegistration>(
    &v19,
    v7,
    v5,
    &v16);
  if ( v19 == v9 )
    return 1419LL;
  memmove_0(v19, (char *)v19 + 20, v9 - ((_BYTE *)v19 + 20));
  *((_QWORD *)this + 15) -= 20LL;
  v10 = (void *)*((_QWORD *)this + 12);
  v19 = v10;
  if ( v10
    && ((*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10),
        v11 = (__int64 *)*((_QWORD *)this + 12),
        v12 = *v11,
        v16 = *(__m128i *)((char *)this + 184),
        v13 = (*(__int64 (__fastcall **)(__int64 *, __m128i *, _QWORD, _QWORD))(v12 + 48))(v11, &v16, a2, a3),
        v14 = v13,
        v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v13);
  }
  else
  {
    v14 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
  return v14;
}
