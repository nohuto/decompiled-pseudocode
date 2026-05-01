/*
 * XREFs of ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1801EE38C
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EDB40 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EDF18 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180097CD8 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1801EB5C8 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1801EE49C (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall RetailDemoExperienceManager::_SplitString(__int64 *a1, _QWORD *a2, __int16 a3)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int16 v13; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-50h]
  __int64 *v15; // [rsp+30h] [rbp-48h]
  _QWORD v16[4]; // [rsp+38h] [rbp-40h] BYREF

  v15 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v14 = 1;
  v5 = 0LL;
  v6 = a2[2];
  v13 = a3;
  do
  {
    v7 = a2;
    if ( a2[3] >= 8uLL )
      v7 = (_QWORD *)*a2;
    if ( v5 < v6 && (v8 = std::_WChar_traits<unsigned short>::find((char *)v7 + 2 * v5, v6 - v5, &v13)) != 0 )
      v10 = (v8 - v9) >> 1;
    else
      v10 = -1LL;
    v11 = std::wstring::substr(a2, (__int64)v16, v5, v10 - v5);
    std::vector<std::wstring>::emplace_back<std::wstring>(a1, v11);
    std::wstring::_Tidy_deallocate(v16);
    v5 = v10 + 1;
    v6 = a2[2];
  }
  while ( v10 < v6 );
  return a1;
}
