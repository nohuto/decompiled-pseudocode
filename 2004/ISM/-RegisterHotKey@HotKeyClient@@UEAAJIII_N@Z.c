/*
 * XREFs of ?RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z @ 0x1801483C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@QEAAPEAUHotkeyRegistration@HotKeyClient@@QEAU23@AEBU23@@Z @ 0x180147AC0 (--$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@-$vector@UHotkeyRegistration@HotKey.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@std@@UHotkeyRegistration@HotKeyClient@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@0@V10@V10@AEBUHotkeyRegistration@HotKeyClient@@@Z @ 0x180147C5C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UHotkeyRegistration@HotKeyClient@@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotKeyClient::RegisterHotKey(
        HotKeyClient *this,
        unsigned __int32 a2,
        unsigned int a3,
        __int32 a4,
        bool a5)
{
  __int64 v10; // r10
  const char *v11; // r9
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v16; // [rsp+50h] [rbp-68h] BYREF
  int v17; // [rsp+60h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( a4 == 231 )
    return 2147942487LL;
  v16.m128i_i32[0] = a2;
  v16.m128i_i32[1] = a3 & 0xF;
  v16.m128i_i32[2] = a3 & 0x7A00;
  v16.m128i_i32[3] = a4;
  LOBYTE(v17) = a5;
  std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HotKeyClient::HotkeyRegistration>>>,HotKeyClient::HotkeyRegistration>(
    v15,
    *((_QWORD *)this + 14),
    *((_QWORD *)this + 15),
    &v16);
  if ( v15[0] != v10 )
    return 1409LL;
  if ( *((_QWORD *)this + 16) == v10 )
  {
    try
    {
      std::vector<HotKeyClient::HotkeyRegistration>::_Emplace_reallocate<HotKeyClient::HotkeyRegistration const &>(
        (const void **)this + 14,
        (_BYTE *)v10,
        (__int64)&v16);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x75,
                             (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
                             v11);
    }
  }
  else
  {
    *(__m128i *)v10 = v16;
    *(_DWORD *)(v10 + 16) = v17;
    *((_QWORD *)this + 15) += 20LL;
  }
  v12 = *((_QWORD *)this + 12);
  v15[0] = v12;
  if ( v12
    && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12),
        v16 = *(__m128i *)((char *)this + 184),
        v13 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD, __int32, bool))(**((_QWORD **)this + 12)
                                                                                          + 40LL))(
                *((_QWORD *)this + 12),
                &v16,
                a2,
                a3,
                a4,
                a5),
        v14 = v13,
        v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v13);
  }
  else
  {
    v14 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v15);
  return v14;
}
