/*
 * XREFs of ?RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z @ 0x14000B1D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000735C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@QEAAPEAUHotkeyRegistration@HotKeyClient@@QEAU23@AEBU23@@Z @ 0x14000A574 (--$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@-$vector@UHotkeyRegistration@HotKey.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@std@@UHotkeyRegistration@HotKeyClient@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@0@V10@V10@AEBUHotkeyRegistration@HotKeyClient@@@Z @ 0x14000A718 (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UHotkeyRegistration@HotKeyClient@@@s.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall HotKeyClient::RegisterHotKey(
        HotKeyClient *this,
        unsigned __int32 a2,
        unsigned int a3,
        __int32 a4,
        bool a5)
{
  __int64 v10; // r8
  const char *v11; // r9
  __m128i *v12; // rcx
  __int64 v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // [rsp+0h] [rbp-B8h] BYREF
  int v19; // [rsp+28h] [rbp-90h]
  __int64 v20[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v21; // [rsp+50h] [rbp-68h] BYREF
  __m128i v22; // [rsp+60h] [rbp-58h] BYREF
  __int32 v23; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( a4 == 231 )
    return 2147942487LL;
  v22.m128i_i32[0] = a2;
  v22.m128i_i32[1] = a3 & 0xF;
  v22.m128i_i32[2] = a3 & 0x7A00;
  v22.m128i_i32[3] = a4;
  LOBYTE(v23) = a5;
  std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HotKeyClient::HotkeyRegistration>>>,HotKeyClient::HotkeyRegistration>(
    v20,
    *((_QWORD *)this + 14),
    *((_QWORD *)this + 15),
    &v22);
  if ( v20[0] != v10 )
    return 1409LL;
  try
  {
    if ( *((_QWORD *)this + 16) == *((_QWORD *)this + 15) )
    {
      std::vector<HotKeyClient::HotkeyRegistration>::_Emplace_reallocate<HotKeyClient::HotkeyRegistration const &>(
        (__int64)this + 112,
        *((const void **)this + 15),
        (__int64)&v22);
    }
    else
    {
      v12 = (__m128i *)*((_QWORD *)this + 15);
      *v12 = v22;
      v12[1].m128i_i32[0] = v23;
      *((_QWORD *)this + 15) += 20LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(retaddr, &v18, v10, v11);
  }
  v13 = *((_QWORD *)this + 12);
  v20[0] = v13;
  if ( v13
    && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13),
        v21 = *(_OWORD *)((char *)this + 184),
        v14 = (__int64 *)*((_QWORD *)this + 12),
        v15 = *v14,
        LOBYTE(v19) = a5,
        v16 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD, __int32, int))(v15 + 40))(
                v14,
                &v21,
                a2,
                a3,
                a4,
                v19),
        v17 = v16,
        v16 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v16);
  }
  else
  {
    v17 = 0;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v20);
  return v17;
}
