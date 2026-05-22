/*
 * XREFs of _std::vector_std::function_void___cdecl(DeviceInfo__)____std::allocator_std::function_void___cdecl(DeviceInfo__)______::_Emplace_reallocate_std::function_void___cdecl(DeviceInfo__)____const_&__::_1_::catch$61 @ 0x180051468
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_DeviceInfo_______std::allocator_std::function_void___cdecl_DeviceInfo_________::_Emplace_reallocate_std::function_void___cdecl_DeviceInfo_______const____::_1_::catch_61(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 80)));
  throw;
}
