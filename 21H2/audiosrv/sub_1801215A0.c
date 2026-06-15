/*
 * XREFs of sub_1801215A0 @ 0x1801215A0
 * Callers:
 *     sub_18007C121 @ 0x18007C121 (sub_18007C121.c)
 *     unknown_libname_264 @ 0x18007C169 (unknown_libname_264.c)
 *     sub_18007C1C0 @ 0x18007C1C0 (sub_18007C1C0.c)
 *     sub_18007C1F2 @ 0x18007C1F2 (sub_18007C1F2.c)
 *     sub_18012655F @ 0x18012655F (sub_18012655F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801215A0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
