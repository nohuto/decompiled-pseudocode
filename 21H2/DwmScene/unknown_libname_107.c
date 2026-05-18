/*
 * XREFs of unknown_libname_107 @ 0x180033D3C
 * Callers:
 *     sub_1801268B6 @ 0x1801268B6 (sub_1801268B6.c)
 *     unknown_libname_71 @ 0x18012D020 (unknown_libname_71.c)
 *     ?dtor$1@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA_0 @ 0x18012F7D1 (-dtor$1@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexc_ea_18012F7D1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_107(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
