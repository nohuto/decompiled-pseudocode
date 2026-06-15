/*
 * XREFs of sub_180009CF0 @ 0x180009CF0
 * Callers:
 *     sub_180008E98 @ 0x180008E98 (sub_180008E98.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 *     sub_18000ACE4 @ 0x18000ACE4 (sub_18000ACE4.c)
 *     sub_18000DC80 @ 0x18000DC80 (sub_18000DC80.c)
 *     sub_18000DF10 @ 0x18000DF10 (sub_18000DF10.c)
 *     sub_18000E248 @ 0x18000E248 (sub_18000E248.c)
 *     sub_18000E51C @ 0x18000E51C (sub_18000E51C.c)
 *     sub_18000E988 @ 0x18000E988 (sub_18000E988.c)
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180014CF0 @ 0x180014CF0 (sub_180014CF0.c)
 *     sub_1800188DC @ 0x1800188DC (sub_1800188DC.c)
 *     sub_180019300 @ 0x180019300 (sub_180019300.c)
 *     sub_1800195E0 @ 0x1800195E0 (sub_1800195E0.c)
 *     sub_180025490 @ 0x180025490 (sub_180025490.c)
 *     sub_18002E8D0 @ 0x18002E8D0 (sub_18002E8D0.c)
 *     sub_18002E9C0 @ 0x18002E9C0 (sub_18002E9C0.c)
 *     sub_18002EC60 @ 0x18002EC60 (sub_18002EC60.c)
 *     sub_18002EE0C @ 0x18002EE0C (sub_18002EE0C.c)
 *     sub_18002F5C8 @ 0x18002F5C8 (sub_18002F5C8.c)
 *     sub_18002F68C @ 0x18002F68C (sub_18002F68C.c)
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 *     unknown_libname_5 @ 0x18003B2CF (unknown_libname_5.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3 @ 0x18003B6FE (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3.c)
 *     sub_18003B710 @ 0x18003B710 (sub_18003B710.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA @ 0x18003BAFD (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB.c)
 *     sub_18003C959 @ 0x18003C959 (sub_18003C959.c)
 *     sub_18003CBAD @ 0x18003CBAD (sub_18003CBAD.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_180009CF0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  char *v3; // rcx
  unsigned __int64 v4; // rdx
  char *v5; // r8
  unsigned __int64 v6; // rdx
  char *v7; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
  {
    v3 = *(char **)a1;
    v4 = 2 * v1 + 2;
    if ( v4 >= 0x1000 )
    {
      v5 = (char *)*((_QWORD *)v3 - 1);
      v6 = v4 + 39;
      v7 = (char *)(v3 - v5);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        __debugbreak();
        JUMPOUT(0x180009D59LL);
      }
      v3 = v5;
    }
    sub_180039D98(v3);
  }
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
