/*
 * XREFs of ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400083F4
 * Callers:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000849C (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x14000861C (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140009714 (-_Buy_nonzero@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@s.c)
 *     ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140009774 (-_Buy_nonzero@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@s.c)
 *     ??$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@QEAAPEAUHotkeyRegistration@HotKeyClient@@QEAU23@AEBU23@@Z @ 0x14000A574 (--$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@-$vector@UHotkeyRegistration@HotKey.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140003F88 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(size_t a1)
{
  _QWORD *result; // rax
  size_t v2; // rcx
  void *v3; // rax
  void *v4; // rcx

  result = (_QWORD *)a1;
  if ( a1 >= 0x1000 )
  {
    v2 = a1 + 39;
    if ( v2 <= (unsigned __int64)result )
      v2 = -1LL;
    v3 = operator new(v2);
    v4 = v3;
    if ( v3 )
    {
      result = (_QWORD *)(((unsigned __int64)v3 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(result - 1) = v4;
      return result;
    }
    result = (_QWORD *)_o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
  if ( result )
    return operator new(a1);
  return result;
}
