/*
 * XREFs of ??1?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18019B6F8
 * Callers:
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18019A574 (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 *     ??_E?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x18019B7D0 (--_E-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180091A94 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800CC9BC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(
        _QWORD *a1)
{
  *a1 = &std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::`vftable';
  std::wstring::_Tidy_deallocate(a1 + 8);
  std::string::_Tidy_deallocate((__int64)(a1 + 4));
  std::locale::~locale((std::locale *)(a1 + 2));
}
