/*
 * XREFs of ??$?0PEAGX@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801F8330
 * Callers:
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18009E6C4 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x1803567F8 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  if ( a2 != a3 )
    std::wstring::assign((char *)a1, a2, (a3 - a2) >> 1);
  return a1;
}
