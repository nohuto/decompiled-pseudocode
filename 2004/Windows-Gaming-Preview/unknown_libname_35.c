/*
 * XREFs of unknown_libname_35 @ 0x18000F450
 * Callers:
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     sub_18004686A @ 0x18004686A (sub_18004686A.c)
 *     sub_1800468D6 @ 0x1800468D6 (sub_1800468D6.c)
 *     sub_180046B6E @ 0x180046B6E (sub_180046B6E.c)
 *     sub_180046C37 @ 0x180046C37 (sub_180046C37.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_6 @ 0x180046CEF (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180046CEF.c)
 *     unknown_libname_29 @ 0x180046E39 (unknown_libname_29.c)
 *     sub_180046E4B @ 0x180046E4B (sub_180046E4B.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_35(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
