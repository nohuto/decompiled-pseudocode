/*
 * XREFs of ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18003C720
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180030594 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180038340 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003A24C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

char __fastcall std::wstring::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<char>>>>(
        __int64 a1,
        char *a2,
        char *a3)
{
  _UNKNOWN **v3; // rax
  char *v5; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  v5 = a2;
  v7 = a3 - a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 <= v7 && *(_QWORD *)(a1 + 24) != v7 )
  {
    LOBYTE(v3) = std::wstring::_Grow((void **)a1, v7, 1);
    if ( (_BYTE)v3 )
    {
      if ( *(_QWORD *)(a1 + 24) < 8uLL )
        v3 = (_UNKNOWN **)a1;
      else
        v3 = *(_UNKNOWN ***)a1;
      *(_QWORD *)(a1 + 16) = v8;
      *((_WORD *)v3 + v8) = 0;
    }
  }
  while ( v5 != a3 )
  {
    try
    {
      LOBYTE(v3) = (unsigned __int8)std::wstring::append((void **)a1, 1uLL, *v5++);
    }
    catch ( ... )
    {
      std::wstring::_Tidy((void **)a1, 1, 0LL);
      throw;
    }
  }
  return (char)v3;
}
