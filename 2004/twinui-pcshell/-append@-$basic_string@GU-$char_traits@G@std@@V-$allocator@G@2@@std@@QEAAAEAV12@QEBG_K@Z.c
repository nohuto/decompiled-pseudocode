/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1801DA874
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x18009B240 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800E17D8 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801D7AA0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x180254528 (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x1803567F8 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180459F2C (-PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_.c)
 * Callees:
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1801D6454 (--$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@-$basic_string@GU-$cha.c)
 */

void **__fastcall std::wstring::append(void **Src, const void *a2, unsigned __int64 a3)
{
  void *v4; // rcx
  bool v5; // cf
  __int64 v6; // rsi
  _QWORD *v7; // rdi

  v4 = Src[2];
  if ( a3 > (_BYTE *)Src[3] - (_BYTE *)v4 )
    return std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
             Src,
             a3,
             a3,
             a2,
             a3);
  v5 = (unsigned __int64)Src[3] < 8;
  v6 = (__int64)v4 + a3;
  Src[2] = (char *)v4 + a3;
  v7 = Src;
  if ( !v5 )
    v7 = *Src;
  memmove_0((char *)v7 + 2 * (_QWORD)v4, a2, 2 * a3);
  *((_WORD *)v7 + v6) = 0;
  return Src;
}
