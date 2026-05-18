/*
 * XREFs of unknown_libname_106 @ 0x1800B3158
 * Callers:
 *     unknown_libname_68 @ 0x1801276FC (unknown_libname_68.c)
 *     sub_180129EA1 @ 0x180129EA1 (sub_180129EA1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
// Hidden C++ exception states: #wind=1
__int64 __fastcall unknown_libname_106(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
