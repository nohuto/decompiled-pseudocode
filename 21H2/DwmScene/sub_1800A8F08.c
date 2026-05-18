/*
 * XREFs of sub_1800A8F08 @ 0x1800A8F08
 * Callers:
 *     sub_18012C93A @ 0x18012C93A (sub_18012C93A.c)
 *     unknown_libname_65 @ 0x18012CA2F (unknown_libname_65.c)
 *     sub_18012D3DB @ 0x18012D3DB (sub_18012D3DB.c)
 *     sub_18012D3E7 @ 0x18012D3E7 (sub_18012D3E7.c)
 *     sub_18012EB6F @ 0x18012EB6F (sub_18012EB6F.c)
 *     sub_18012EE87 @ 0x18012EE87 (sub_18012EE87.c)
 *     sub_18012EE93 @ 0x18012EE93 (sub_18012EE93.c)
 *     sub_18012EE9F @ 0x18012EE9F (sub_18012EE9F.c)
 *     sub_18012EEAB @ 0x18012EEAB (sub_18012EEAB.c)
 *     sub_18012EEB7 @ 0x18012EEB7 (sub_18012EEB7.c)
 *     sub_18012EF05 @ 0x18012EF05 (sub_18012EF05.c)
 *     sub_18012F04C @ 0x18012F04C (sub_18012F04C.c)
 *     sub_18012F789 @ 0x18012F789 (sub_18012F789.c)
 *     unknown_libname_153 @ 0x18012F795 (unknown_libname_153.c)
 *     sub_18012F7A1 @ 0x18012F7A1 (sub_18012F7A1.c)
 *     sub_1801300D2 @ 0x1801300D2 (sub_1801300D2.c)
 *     sub_1801300DE @ 0x1801300DE (sub_1801300DE.c)
 *     sub_1801300EA @ 0x1801300EA (sub_1801300EA.c)
 *     sub_1801300F6 @ 0x1801300F6 (sub_1801300F6.c)
 *     sub_180130102 @ 0x180130102 (sub_180130102.c)
 *     sub_18013010E @ 0x18013010E (sub_18013010E.c)
 *     sub_18013011A @ 0x18013011A (sub_18013011A.c)
 *     sub_180130126 @ 0x180130126 (sub_180130126.c)
 *     sub_180130132 @ 0x180130132 (sub_180130132.c)
 * Callees:
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 */

__int64 __fastcall sub_1800A8F08(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_1800A1F98(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
