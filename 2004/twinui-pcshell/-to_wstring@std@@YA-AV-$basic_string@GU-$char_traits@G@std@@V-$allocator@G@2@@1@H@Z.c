/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18009E6C4
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x18009B240 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$?0PEAGX@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801F8330 (--$-0PEAGX@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$allocato.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1801F8518 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 */

__int64 __fastcall std::to_wstring(__int64 a1, int a2)
{
  _WORD *v3; // rax
  _BYTE v5[6]; // [rsp+52h] [rbp-16h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_WORD *)std::_UIntegral_to_buff<unsigned short,unsigned int>(v5);
  }
  else
  {
    v3 = (_WORD *)(std::_UIntegral_to_buff<unsigned short,unsigned int>(v5) - 2);
    *v3 = 45;
  }
  std::wstring::wstring(a1, v3, v5);
  return a1;
}
