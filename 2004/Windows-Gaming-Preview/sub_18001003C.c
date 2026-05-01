/*
 * XREFs of sub_18001003C @ 0x18001003C
 * Callers:
 *     sub_18000F894 @ 0x18000F894 (sub_18000F894.c)
 *     sub_1800158A4 @ 0x1800158A4 (sub_1800158A4.c)
 *     sub_18002005C @ 0x18002005C (sub_18002005C.c)
 *     sub_1800268A0 @ 0x1800268A0 (sub_1800268A0.c)
 *     sub_180026970 @ 0x180026970 (sub_180026970.c)
 *     sub_180026A70 @ 0x180026A70 (sub_180026A70.c)
 *     sub_180026B40 @ 0x180026B40 (sub_180026B40.c)
 *     sub_180026C10 @ 0x180026C10 (sub_180026C10.c)
 *     sub_180026CF0 @ 0x180026CF0 (sub_180026CF0.c)
 *     sub_180026DC0 @ 0x180026DC0 (sub_180026DC0.c)
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 *     sub_180026F60 @ 0x180026F60 (sub_180026F60.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_180027130 @ 0x180027130 (sub_180027130.c)
 *     sub_180027200 @ 0x180027200 (sub_180027200.c)
 *     sub_1800272E0 @ 0x1800272E0 (sub_1800272E0.c)
 *     sub_180034F94 @ 0x180034F94 (sub_180034F94.c)
 *     sub_18003E47C @ 0x18003E47C (sub_18003E47C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18001003C(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
