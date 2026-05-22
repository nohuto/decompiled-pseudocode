/*
 * XREFs of _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::catch$39 @ 0x180068DCB
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@0AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x180068B58 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_bool___std::allocator_std::function_void___cdecl_bool______::_Emplace_reallocate_std::function_void___cdecl_bool______::_1_::catch_39(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::function<void (bool)>>>(*(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 56), (const struct std::nothrow_t *)(*(_QWORD *)(a2 + 168) << 6));
  throw;
}
