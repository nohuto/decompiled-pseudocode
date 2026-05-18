/*
 * XREFs of sub_1800DBA24 @ 0x1800DBA24
 * Callers:
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     sub_1800CFE34 @ 0x1800CFE34 (sub_1800CFE34.c)
 *     sub_1800CFEF4 @ 0x1800CFEF4 (sub_1800CFEF4.c)
 *     sub_180102EB8 @ 0x180102EB8 (sub_180102EB8.c)
 *     sub_180103164 @ 0x180103164 (sub_180103164.c)
 *     sub_180103354 @ 0x180103354 (sub_180103354.c)
 *     sub_18010344C @ 0x18010344C (sub_18010344C.c)
 *     sub_180103630 @ 0x180103630 (sub_180103630.c)
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 *     sub_1801040E0 @ 0x1801040E0 (sub_1801040E0.c)
 *     sub_1801041B0 @ 0x1801041B0 (sub_1801041B0.c)
 *     unknown_libname_81 @ 0x18012A047 (unknown_libname_81.c)
 *     sub_18012A053 @ 0x18012A053 (sub_18012A053.c)
 *     sub_18012A066 @ 0x18012A066 (sub_18012A066.c)
 *     sub_18012A079 @ 0x18012A079 (sub_18012A079.c)
 *     sub_18012A08C @ 0x18012A08C (sub_18012A08C.c)
 *     sub_18012A0E1 @ 0x18012A0E1 (sub_18012A0E1.c)
 *     sub_18012A0F1 @ 0x18012A0F1 (sub_18012A0F1.c)
 *     sub_18012A12C @ 0x18012A12C (sub_18012A12C.c)
 *     sub_18012A13C @ 0x18012A13C (sub_18012A13C.c)
 *     ?dtor$2@?0??_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@AEAY0M@_W@Z@4HA_6 @ 0x18012A15B (-dtor$2@-0--_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@_ea_18012A15B.c)
 *     sub_18012A167 @ 0x18012A167 (sub_18012A167.c)
 *     sub_18012A173 @ 0x18012A173 (sub_18012A173.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_39 @ 0x18012A1A3 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012A1A3.c)
 *     unknown_libname_82 @ 0x18012A1AF (unknown_libname_82.c)
 *     sub_18012A1BB @ 0x18012A1BB (sub_18012A1BB.c)
 *     sub_18012A1C7 @ 0x18012A1C7 (sub_18012A1C7.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_7 @ 0x18012A1D3 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_18012A1D3.c)
 *     sub_18012A1DF @ 0x18012A1DF (sub_18012A1DF.c)
 * Callees:
 *     sub_1800DC0C0 @ 0x1800DC0C0 (sub_1800DC0C0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DBA24(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  result = sub_1800DC0C0();
  v3 = (volatile signed __int32 *)a1[21];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedDecrement(v3 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedDecrement(v3 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[19];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (volatile signed __int32 *)a1[3];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
