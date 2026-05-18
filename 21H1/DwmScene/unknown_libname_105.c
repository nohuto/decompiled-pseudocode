/*
 * XREFs of unknown_libname_105 @ 0x18002E46C
 * Callers:
 *     sub_180120F9E @ 0x180120F9E (sub_180120F9E.c)
 *     unknown_libname_69 @ 0x180127708 (unknown_libname_69.c)
 *     ?dtor$1@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA_0 @ 0x180129EB9 (-dtor$1@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexc_ea_180129EB9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_105(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
