/*
 * XREFs of sub_180021658 @ 0x180021658
 * Callers:
 *     unknown_libname_20 @ 0x1800469BA (unknown_libname_20.c)
 *     sub_1800469E2 @ 0x1800469E2 (sub_1800469E2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021658(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 8) + 16LL))(result + 8);
  }
  return result;
}
