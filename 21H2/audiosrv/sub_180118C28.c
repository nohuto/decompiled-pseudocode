/*
 * XREFs of sub_180118C28 @ 0x180118C28
 * Callers:
 *     sub_180117D1D @ 0x180117D1D (sub_180117D1D.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_96 @ 0x180117FCA (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180117FCA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180118C28(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    v4 = 0LL;
    v1 = *a1;
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(v1 + 40) + 48LL))(
             *(_QWORD *)(v1 + 40),
             &unk_180172BB0,
             &v3);
  }
  return result;
}
