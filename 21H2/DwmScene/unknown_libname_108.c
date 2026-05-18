/*
 * XREFs of unknown_libname_108 @ 0x1800B8A28
 * Callers:
 *     unknown_libname_70 @ 0x18012D014 (unknown_libname_70.c)
 *     sub_18012F7B9 @ 0x18012F7B9 (sub_18012F7B9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
// Hidden C++ exception states: #wind=1
__int64 __fastcall unknown_libname_108(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
