/*
 * XREFs of ??0?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180197808
 * Callers:
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180196734 (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?_Init@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@2@@Z @ 0x1801983A8 (-_Init@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocato.c)
 */

__int64 __fastcall std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(
        __int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi

  *(_QWORD *)a1 = &std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::`vftable';
  *(_QWORD *)(a1 + 24) = std::locale::_Init(1);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 15LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 7LL;
  *(_WORD *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 106) = 0;
  v2 = operator new(0x40uLL);
  v3 = v2;
  if ( v2 )
  {
    std::codecvt<unsigned short,char,_Mbstatet>::codecvt<unsigned short,char,_Mbstatet>(v2, 0LL);
    *v3 = &std::codecvt_utf8_utf16<unsigned short,1114111,0>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::_Init(
    a1,
    v3);
  return a1;
}
