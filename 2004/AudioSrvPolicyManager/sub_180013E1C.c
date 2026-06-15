/*
 * XREFs of sub_180013E1C @ 0x180013E1C
 * Callers:
 *     sub_18003BA01 @ 0x18003BA01 (sub_18003BA01.c)
 *     sub_18003BD4D @ 0x18003BD4D (sub_18003BD4D.c)
 *     sub_18003BD66 @ 0x18003BD66 (sub_18003BD66.c)
 *     unknown_libname_7 @ 0x18003BED0 (unknown_libname_7.c)
 *     sub_18003BEE2 @ 0x18003BEE2 (sub_18003BEE2.c)
 *     sub_18003C374 @ 0x18003C374 (sub_18003C374.c)
 *     sub_18003C8B9 @ 0x18003C8B9 (sub_18003C8B9.c)
 *     unknown_libname_22 @ 0x18003C8CB (unknown_libname_22.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013E1C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
