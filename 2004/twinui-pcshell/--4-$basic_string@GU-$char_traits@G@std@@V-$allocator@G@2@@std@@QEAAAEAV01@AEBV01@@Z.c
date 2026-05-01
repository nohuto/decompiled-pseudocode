/*
 * XREFs of ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18021F444
 * Callers:
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800E15A8 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800E17D8 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

char *__fastcall std::wstring::operator=(char *a1, char *a2)
{
  unsigned __int64 v3; // r8

  if ( a1 != a2 )
  {
    v3 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(char **)a2;
    std::wstring::assign(a1, a2, v3);
  }
  return a1;
}
