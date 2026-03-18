/*
 * XREFs of ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@std@@UHotkeyRegistration@HotKeyClient@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHotkeyRegistration@HotKeyClient@@@std@@@std@@@0@V10@V10@AEBUHotkeyRegistration@HotKeyClient@@@Z @ 0x14000A718
 * Callers:
 *     ?RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z @ 0x14000B1D0 (-RegisterHotKey@HotKeyClient@@UEAAJIII_N@Z.c)
 *     ?UnregisterHotKey@HotKeyClient@@UEAAJII@Z @ 0x14000BC90 (-UnregisterHotKey@HotKeyClient@@UEAAJII@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HotKeyClient::HotkeyRegistration>>>,HotKeyClient::HotkeyRegistration>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4)
{
  unsigned __int64 v4; // r9
  __m128i v6; // [rsp+0h] [rbp-28h]

  if ( a2 != a3 )
  {
    v6 = *a4;
    v4 = HIDWORD(_mm_srli_si128(*a4, 8).m128i_u64[0]);
    do
    {
      if ( *(_DWORD *)(a2 + 12) == (_DWORD)v4 && *(_DWORD *)(a2 + 4) == v6.m128i_i32[1] )
        break;
      a2 += 20LL;
    }
    while ( a2 != a3 );
  }
  *a1 = a2;
  return a1;
}
