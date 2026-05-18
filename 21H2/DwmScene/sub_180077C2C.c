/*
 * XREFs of sub_180077C2C @ 0x180077C2C
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 *     sub_18007C500 @ 0x18007C500 (sub_18007C500.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007D258 @ 0x18007D258 (sub_18007D258.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007DFAC @ 0x18007DFAC (sub_18007DFAC.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800C3030 @ 0x1800C3030 (sub_1800C3030.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 *     ?dtor$1@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z@4HA_0 @ 0x18012B152 (-dtor$1@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012B152.c)
 *     sub_18012B236 @ 0x18012B236 (sub_18012B236.c)
 *     sub_18012B25A @ 0x18012B25A (sub_18012B25A.c)
 *     sub_18012B27E @ 0x18012B27E (sub_18012B27E.c)
 *     unknown_libname_52 @ 0x18012B2AE (unknown_libname_52.c)
 *     sub_18012B2F6 @ 0x18012B2F6 (sub_18012B2F6.c)
 *     sub_18012B33E @ 0x18012B33E (sub_18012B33E.c)
 *     sub_18012B36E @ 0x18012B36E (sub_18012B36E.c)
 *     sub_18012B39E @ 0x18012B39E (sub_18012B39E.c)
 *     unknown_libname_136 @ 0x18012B4F4 (unknown_libname_136.c)
 *     sub_18012B5C0 @ 0x18012B5C0 (sub_18012B5C0.c)
 *     sub_18012B5FC @ 0x18012B5FC (sub_18012B5FC.c)
 *     sub_18012B638 @ 0x18012B638 (sub_18012B638.c)
 *     sub_18012B668 @ 0x18012B668 (sub_18012B668.c)
 *     sub_18012B680 @ 0x18012B680 (sub_18012B680.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_1 @ 0x18012B6A4 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_18012B6A4.c)
 *     sub_18012CDB5 @ 0x18012CDB5 (sub_18012CDB5.c)
 *     unknown_libname_142 @ 0x18012CDFD (unknown_libname_142.c)
 *     sub_18012CE39 @ 0x18012CE39 (sub_18012CE39.c)
 *     sub_18012D51C @ 0x18012D51C (sub_18012D51C.c)
 *     sub_18012FBCF @ 0x18012FBCF (sub_18012FBCF.c)
 * Callees:
 *     sub_1800E9920 @ 0x1800E9920 (sub_1800E9920.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180077C2C(__int64 *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v4 = *a1;
        v5 = (volatile signed __int32 *)a1[1];
        if ( *a1 )
          sub_1800E9920(v4, a1[2]);
        if ( v5 )
        {
          if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
            if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
          }
        }
        break;
      }
    }
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
