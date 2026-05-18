/*
 * XREFs of sub_1800E12F4 @ 0x1800E12F4
 * Callers:
 *     sub_1800D5594 @ 0x1800D5594 (sub_1800D5594.c)
 *     sub_1800D5704 @ 0x1800D5704 (sub_1800D5704.c)
 *     sub_1800D57C4 @ 0x1800D57C4 (sub_1800D57C4.c)
 *     sub_180108788 @ 0x180108788 (sub_180108788.c)
 *     sub_180108A34 @ 0x180108A34 (sub_180108A34.c)
 *     sub_180108C24 @ 0x180108C24 (sub_180108C24.c)
 *     sub_180108D1C @ 0x180108D1C (sub_180108D1C.c)
 *     sub_180108F00 @ 0x180108F00 (sub_180108F00.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 *     sub_1801099B0 @ 0x1801099B0 (sub_1801099B0.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 *     unknown_libname_83 @ 0x18012F95F (unknown_libname_83.c)
 *     sub_18012F96B @ 0x18012F96B (sub_18012F96B.c)
 *     sub_18012F97E @ 0x18012F97E (sub_18012F97E.c)
 *     sub_18012F991 @ 0x18012F991 (sub_18012F991.c)
 *     sub_18012F9A4 @ 0x18012F9A4 (sub_18012F9A4.c)
 *     sub_18012F9F9 @ 0x18012F9F9 (sub_18012F9F9.c)
 *     sub_18012FA09 @ 0x18012FA09 (sub_18012FA09.c)
 *     sub_18012FA44 @ 0x18012FA44 (sub_18012FA44.c)
 *     sub_18012FA54 @ 0x18012FA54 (sub_18012FA54.c)
 *     ?dtor$2@?0??_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@AEAY0M@_W@Z@4HA_6 @ 0x18012FA73 (-dtor$2@-0--_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@_ea_18012FA73.c)
 *     sub_18012FA7F @ 0x18012FA7F (sub_18012FA7F.c)
 *     sub_18012FA8B @ 0x18012FA8B (sub_18012FA8B.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_40 @ 0x18012FABB (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012FABB.c)
 *     unknown_libname_84 @ 0x18012FAC7 (unknown_libname_84.c)
 *     sub_18012FAD3 @ 0x18012FAD3 (sub_18012FAD3.c)
 *     sub_18012FADF @ 0x18012FADF (sub_18012FADF.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_7 @ 0x18012FAEB (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_18012FAEB.c)
 *     sub_18012FAF7 @ 0x18012FAF7 (sub_18012FAF7.c)
 * Callees:
 *     sub_1800E1990 @ 0x1800E1990 (sub_1800E1990.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E12F4(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  result = sub_1800E1990();
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
